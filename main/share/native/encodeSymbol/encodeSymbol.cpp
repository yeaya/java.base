#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <windows.h>
#include <dbghelp.h>
#include <vector>
#include <string>
#include <errno.h>
#include "zlib.h"

#define DATA_INDEX_RESOUCE 7902
#define DATA_BEGIN_RESOUCE 7903
#define MAX_BLOCK_SIZE (32 * 1024)
#define MAX_LINE_SIZE 2048

using namespace std;

bool demangle(const char* symbol, char* buf, int buflen) {
	return UnDecorateSymbolName(symbol, buf, buflen, UNDNAME_COMPLETE) > 0;
}

void updateMethodName(char* buf, int bufLen) {
	const char* p = strstr(buf, " __cdecl ");
	if (p != nullptr) {
		p += 9;
		while (*p != '\0') {
			*buf = *p;
			p++;
			buf++;
		}
		*buf = '\0';
	}
}

int readLine(FILE* f, char* line, int lineBufLen) {
	char c;
	int offset = 0;
	int ret = 0;
	int readed = 0;
	for (; offset < lineBufLen - 1; offset++) {
		ret = (int)fread(&c, 1, 1, f);
		if (ret <= 0) {
			break;
		}
		readed++;
		if (c == '\n') {
			break;
		}
		if (c == '\r') {
			break;
		}
		line[offset] = c;
	}

	line[offset] = '\0';
	if (readed > 0) {
		return offset + 1;
	}
	return ret;
}

bool saveIndex(HANDLE handle_, vector<int32_t>& indexes) {
	if (!UpdateResourceA(handle_, RT_RCDATA, MAKEINTRESOURCE(DATA_INDEX_RESOUCE), 0, (LPVOID)indexes.data(), (DWORD)(indexes.size() * sizeof(int32_t)))) {
		int errnum = GetLastError();
		fprintf(stderr, "UpdateResourceA error: %d\n", errnum);
		return false;
	}
	return true;
}

void save(HANDLE handle_, int index, char* block, size_t blockSize) {
	size_t dataSize = blockSize + 100;
	char* data = (char*)malloc(dataSize);
	if (data == nullptr) {
		int errnum = GetLastError();
		fprintf(stderr, "malloc error: %d\n", errnum);
		exit(1);
	}
	char* dest = data + 4;
	Bytef* source = (Bytef*)block;
	uLong sourceLen = (uLong)blockSize;
	uLongf destLen = (uLongf)dataSize - 4;
	int ret = ::compress2((Bytef*)dest, &destLen, source, sourceLen, 5);
	if (ret == Z_OK) {
		(*(int32_t*)data) = sourceLen;
		if (!UpdateResourceA(handle_, RT_RCDATA, MAKEINTRESOURCE(DATA_BEGIN_RESOUCE + index), 0, (LPVOID)data, destLen + 4)) {
			int errnum = GetLastError();
			fprintf(stderr, "UpdateResourceA error: %d\n", errnum);
			exit(1);
		}
	} else {
		fprintf(stderr, "compress2 error\n");
		exit(1);
	}
	free(data);
}

int main(int argc, char** argv) {
	if (argc == 1) {
		printf("ex: encodesymbol a.exe\n");
		return 0;
	}
	const char* file = argv[1];
	//printf("%s\n", file);

	string unwindFile = file;
	unwindFile += ".unwind";
	string cmd = "dumpbin /unwindinfo ";
	cmd += file;
	cmd += " > ";
	cmd += file;
	cmd += ".unwind";
	int ret = system(cmd.c_str());
	if (ret != 0) {
		return 1;
	}

	FILE* in = fopen(unwindFile.c_str(), "rb");
	fseek(in, 0, SEEK_SET);
	if (in == nullptr) {
		fprintf(stderr, "can not open %s\n", unwindFile.c_str());
		return 1;
	}

	bool deleteOld = false;
	HANDLE handle = BeginUpdateResourceA(file, deleteOld);
	if (handle == nullptr) {
		int errnum = GetLastError();
		fprintf(stderr, "BeginUpdateResourceA error: %d\n", errnum);
		return 1;
	}

	char line[MAX_LINE_SIZE];
	vector<int32_t> indexes;
	char* block = (char*)malloc(MAX_BLOCK_SIZE);
	if (block == nullptr) {
		int errnum = GetLastError();
		fprintf(stderr, "malloc error: %d\n", errnum);
		return 1;
	}
	block[0] = '\0';
	size_t blockSize = 0;
	int index = 0;
	
	long lastBeginAddr = 0;
	int functionCount = 0;
	while (true) {
		size_t ret = readLine(in, line, sizeof(line));
		if (ret <= 0) {
			break;
		}
		if (ret > 39 && line[0] == ' ' && line[1] == ' ' && line[2] != ' ') {
			char begin[9];
			char end[9];
			char* functionName;
			memcpy(begin, line + 11, 8);
			begin[8] = '\0';
			
			long beginAddr = strtol(begin, nullptr, 16);

			memcpy(end, line + 20, 8);
			end[8] = '\0';
			functionName = line + 39;
			char* fnEnd = strstr(functionName, " ");
			if (fnEnd != nullptr) {
				*fnEnd = '\0';
			}
			char demangleFN[MAX_LINE_SIZE];
			bool ret = demangle(functionName, demangleFN, sizeof(demangleFN));
			if (ret) {
				//updateMethodName(demangleFN, sizeof(demangleFN));
			}
			string linestr = begin;
			linestr.append(end);
			linestr.append(demangleFN);
			linestr.append("\n");

			if (blockSize + linestr.size() > MAX_BLOCK_SIZE) {
				indexes.push_back(lastBeginAddr);
				lastBeginAddr = beginAddr;
				save(handle, index, block, blockSize);
				index++;
				blockSize = 0;
				block[0] = '\0';

				if (index % 10 == 0) {
					if (!EndUpdateResourceA(handle, FALSE)) {
						int errnum = GetLastError();
						fprintf(stderr, "EndUpdateResourceA error: %d\n", errnum);
						return 1;
					}
					handle = BeginUpdateResourceA(file, deleteOld);
					if (handle == nullptr) {
						int errnum = GetLastError();
						fprintf(stderr, "BeginUpdateResourceA error: %d\n", errnum);
						return -1;
					}
				}
			}
			memcpy(block + blockSize, linestr.c_str(), linestr.size());
			blockSize += linestr.size();
			functionCount++;
		}
	}
	if (blockSize > 0) {
		indexes.push_back(lastBeginAddr);
		save(handle, index, block, blockSize);
	}
	free(block);
	fclose(in);

	if (indexes.size() > 0) {
		saveIndex(handle, indexes);
	}

	if (!EndUpdateResourceA(handle, FALSE)) {
		int errnum = GetLastError();
		fprintf(stderr, "EndUpdateResourceA error: %d\n", errnum);
		return 1;
	}

	return 0;
}