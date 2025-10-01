/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "WindowsDecoder.h"

#include <java/lang/SpinLock.h>
#include <jcpp.h>

#include <windows.h>
#include <psapi.h>
# include <stdlib.h>
#include "zlib/zlib.h"

struct ModuleInfo {
	HMODULE hmodule;
	LPVOID lpBaseOfDll;
	DWORD SizeOfImage;
};

#define MAX_RESOUCE_BLOCK_SIZE 32 * 1024
#define MAX_HMODULE_SIZE 2024
bool decoderInited = false;
::java::lang::SpinLock decorderLock;
ModuleInfo* hmodules = nullptr;
int32_t hmoduleCount = 0;
void* resourceBlockBuffer = nullptr;

#define DATA_INDEX_RESOUCE 7902
#define DATA_BEGIN_RESOUCE 7903

int readLine(char* buf, int bufSize, int& pos, char* line, int lineBufLen) {
	char c;
	int offset = 0;
	int ret = 0;
	int readed = 0;
	for (; offset < lineBufLen - 1; offset++) {
		if (pos >= bufSize) {
			ret = -1;
		} else {
			c = buf[pos];
			pos++;
			ret = 1;
		}
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

bool findResource0(HMODULE result, int32_t index, int32_t addr, char* buf, int bufLen) {
	HRSRC hr = ::FindResource(result, MAKEINTRESOURCE(DATA_BEGIN_RESOUCE + index), RT_RCDATA);
	if (NULL == hr) {
		int ierr = GetLastError();
		return false;
	}
	ULONG nResSize = ::SizeofResource(result, hr); // Data size/length
	HGLOBAL hG = ::LoadResource(result, hr);
	if (NULL == hG || nResSize <= 4) {
		int ierr = GetLastError();
		return false;
	}
	LPBYTE pData = (LPBYTE)LockResource(hG); // Data Ptr
	uLongf destLen = *(int32_t*)pData;
	bool success = false;
	if (destLen <= MAX_RESOUCE_BLOCK_SIZE) {
		char* zipbuf = (char*)resourceBlockBuffer;
		Bytef* dest = (Bytef*)zipbuf;
		const Bytef* source = pData + 4;
		uLong sourceLen = nResSize - 4;

		int ret = ::uncompress2((Bytef*)dest, &destLen, source, &sourceLen);
		if (ret == Z_OK) {
			int pos = 0;
			char line[4096];
			while (true) {
				int ret = readLine((char*)dest, destLen, pos, line, sizeof(line));
				if (ret <= 0) {
					break;
				}
				char begin[9];
				char end[9];
				char* functionName;
				functionName = line + 16;

				memcpy(begin, line, 8);
				begin[8] = '\0';
				int32_t beginAddr = strtol(begin, nullptr, 16);
				memcpy(end, line + 8, 8);
				end[8] = '\0';
				int32_t endAddr = strtol(end, nullptr, 16);

				if (addr >= beginAddr && addr <= endAddr) {
					success = true;
					strncpy(buf, functionName, bufLen);
					updateMethodName(buf, bufLen);
					break;
				}
			}
		}
	}
	FreeResource(hG);
	return success;
}

bool findResource(const char* moduleFileName, DWORD pos, char* buf, int bufLen) {
	HMODULE result = LoadLibrary(moduleFileName);
	HRSRC hr = ::FindResource(result, MAKEINTRESOURCE(DATA_INDEX_RESOUCE), RT_RCDATA);
	if (NULL == hr) {
		int ierr = GetLastError();
		return false;
	}
	ULONG nResSize = ::SizeofResource(result, hr); // Data size/length
	HGLOBAL hG = ::LoadResource(result, hr);
	if (NULL == hG || nResSize <= 0) {
		int ierr = GetLastError();
		return false;
	}
	LPBYTE pData = (LPBYTE)LockResource(hG); // Data Ptr
	int32_t count = nResSize / sizeof(DWORD);
	DWORD* indexes = (DWORD*)pData;
	int32_t lastIndex = -1;
	for (int32_t i = 0; i < count; i++) {
		DWORD begin = indexes[i];
		if (begin == pos) {
			lastIndex = i;
			break;
		}
		if (begin > pos) {
			break;
		}
		lastIndex = i;
	}
	FreeResource(hG);
	if (lastIndex >= 0) {
		return findResource0(result, lastIndex, pos, buf, bufLen);
	}
	return false;
}

static bool decodeLocked(const void* addr, char* buf, int buflen) {
	HANDLE hProcess = GetCurrentProcess();
	for (int i = 0; i < hmoduleCount; i++) {
		ModuleInfo& modInfo = hmodules[i];
		if (addr >= modInfo.lpBaseOfDll && addr < (char*)modInfo.lpBaseOfDll + modInfo.SizeOfImage) {
			TCHAR szModName[MAX_PATH];
			if (GetModuleFileNameEx(hProcess, modInfo.hmodule, szModName, sizeof(szModName) / sizeof(TCHAR))) {
				//printf(TEXT("\t%s (0x%08X)\n"), szModName, hMods[i]);
				DWORD64 pos = ((DWORD64)addr - (DWORD64)modInfo.lpBaseOfDll);
				if (findResource(szModName, (DWORD)pos, buf, buflen)) {
					return true;
				}
			}
			return false;
		}
	}
	return false;
}

void WindowsDecoder::init() {
	::java::lang::LockGuard guard(decorderLock);
	resourceBlockBuffer = $allocRaw(MAX_RESOUCE_BLOCK_SIZE);
	HANDLE hProcess = GetCurrentProcess();
	HMODULE hMods[MAX_HMODULE_SIZE];
	DWORD cbNeeded;
	if (EnumProcessModules(hProcess, hMods, sizeof(hMods), &cbNeeded)) {
		hmoduleCount = cbNeeded / sizeof(HMODULE);
		hmodules = (ModuleInfo*)$allocRaw(sizeof(ModuleInfo) * hmoduleCount);
		for (int32_t i = 0; i < hmoduleCount; i++) {
			MODULEINFO modInfo;
			if (GetModuleInformation(hProcess, hMods[i], &modInfo, sizeof(modInfo))) {
				hmodules[i].hmodule = hMods[i];
				hmodules[i].lpBaseOfDll = modInfo.lpBaseOfDll;
				hmodules[i].SizeOfImage = modInfo.SizeOfImage;
			} else {
				// TODO
			}
		}
	}
	decoderInited = true;
}

bool WindowsDecoder::decode(address addr, char* buf, int buflen) {
	if (!decoderInited) {
		return false;
	}
	if (addr == NULL) {
		return false;
	}
	buf[0] = '\0';
	::java::lang::LockGuard guard(decorderLock);
	return decodeLocked(addr, buf, buflen);
}

void WindowsDecoder::onLoad(const char* libName) {

}