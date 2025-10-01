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

#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <vector>
#include <string>
#include <errno.h>
#include "zlib.h"
#include <map>
#include <fstream>
#include <iostream>

#define MAX_BLOCK_SIZE (32 * 1024)
#define MAX_LINE_SIZE 2048

using namespace std;

vector<string> split(const char* s, const char* separator) {
	vector<string> sv;
	const char* e = strstr(s, separator);
	while (e != nullptr) {
		size_t depSize = e - s;
		//if (depSize + 1 >= sizeof(s)) {
		//	fprintf(stderr, "can not parse %s\n", s);
		//	exit(1);
		//}
		string str;
		str.assign(s, depSize);
		sv.push_back(str);
		//memcpy(dep, s, depSize);
		//dep[depSize] = '\0';
		//printf("dep: %s\n", str.c_str());
		//resoveDep(repo, dep);
		s = e + 1;
		e = strstr(s, separator);
	}
	if (strlen(s) > 0) {
		sv.push_back(s);
	}
	return sv;
}

class DepInfo {
public:
	int depth = 0;
	string groupId;
	string artifactId;
	string version;
	vector<DepInfo*> subDeps;

	string fullName() {
		if (groupId.size() == 0) {
			return artifactId + ":" + version;
		} else {
			return groupId + ":" + artifactId + ":" + version;
		}
	}

	string keyWithoutVersion() {
		if (groupId.size() == 0) {
			return artifactId;
		} else {
			return groupId + ":" + artifactId;
		}
	}

	string makeProjectPath() {
		string filePath;
		string groupIdPath = groupId;
		vector<string> groupIdPathSV = split(groupId.c_str(), ".");
		for (int i = 0; i < groupIdPathSV.size(); i++) {
			if (filePath.empty()) {
				filePath = groupIdPathSV[i];
			} else {
				filePath = filePath + "/" + groupIdPathSV[i];
			}
		}
		if (filePath.empty()) {
			filePath = artifactId + "/" + version;
		} else {
			filePath = filePath + "/" + artifactId + "/" + version;
		}
		return filePath;
	}
	string makeDependenciesFilePath() {
		return makeProjectPath() + "/dependencies.txt";
	}

	string makeIncludePath() {
		return makeProjectPath() + "/include";
	}

	string makeLibPath() {
		return makeProjectPath() + "/lib";
	}

	string makeBinPath() {
		return makeProjectPath() + "/bin";
	}

	string makeBinFilePath(const string& os, const string& buildType) {
		//if (os == "windows") {
			return makeBinPath() + "/" + this->keyWithoutVersion() + ".dll";
		//}
		//return makeBinPath() + "/";
	}
};

std::map<string, vector<DepInfo*>> globalDepMap;
vector<string> resovledDeps;

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

vector<string> readDepFile(const string& depFilePath) {
	vector<string> deps;

	std::ifstream file(depFilePath);

	if (!file.is_open()) {
		fprintf(stderr, "can not open %s\n", depFilePath.c_str());
		exit(1);
	}

	std::string line;

	while (std::getline(file, line)) {
		//std::cout << line << std::endl;
		if (line.size() > 3) {
			deps.push_back(line);
		}
	}

	file.close();

	/*FILE* f = fopen(depFilePath.c_str(), "rb");
	if (f == nullptr) {
		fprintf(stderr, "can not open %s\n", depFilePath.c_str());
		exit(1);
	}
	char line[1024];
	while (true) {
		size_t ret = readLine(f, line, sizeof(line));
		if (ret <= 0) {
			break;
		}
		if (ret > 3) {
			deps.push_back(line);
		}
	}
	fclose(f);*/
	return deps;
}

DepInfo* resoveDep(const char* repo, const char* dep, int depth) {
	if (dep == nullptr || strlen(dep) == 0) {
		return nullptr;
	}
	//printf("resoveDep dep: %s\n", dep);
	resovledDeps.push_back(dep);
	vector<string> sv = split(dep, ":");

	DepInfo* depInfo = new DepInfo();
	if (sv.size() >= 3) {
		depInfo->groupId = sv[0];
		depInfo->artifactId = sv[1];
		depInfo->version = sv[2];
	} else if (sv.size() == 2) {
		depInfo->artifactId = sv[0];
		depInfo->version = sv[1];
	} else {
		fprintf(stderr, "can not parse %s\n", dep);
		exit(1);
	}
	depInfo->depth = depth;
	string depFilePath = repo;
	depFilePath = depFilePath + "/" + depInfo->makeDependenciesFilePath();
	vector<string> depdeps = readDepFile(depFilePath);
	for (int i = 0; i < depdeps.size(); i++) {
		DepInfo* subDepInfo = resoveDep(repo, depdeps[i].c_str(), depth + 1);
		if (subDepInfo != nullptr) {
			depInfo->subDeps.push_back(subDepInfo);
		}
	}
	return depInfo;
}

void printDepThree(const vector<DepInfo*>& depInfos, int depth = 0) {
	for (int i = 0; i < depInfos.size(); i++) {
		DepInfo* depInfo = depInfos[i];
		for (int j = 0; j < depth; j++) {
			printf("--");
		}
		printf("%s\n", depInfo->fullName().c_str());
		printDepThree(depInfo->subDeps, depth + 1);
	}
}

void printDeps(const vector<DepInfo*>& depInfos) {
	for (int i = 0; i < depInfos.size(); i++) {
		DepInfo* depInfo = depInfos[i];
		printf("%s\n", depInfo->fullName().c_str());
		printf("  %s\n", depInfo->makeDependenciesFilePath().c_str());
		printf("  %s\n", depInfo->makeIncludePath().c_str());
	}
}

void printIncludeDirs(const string& repo, const vector<DepInfo*>& depInfos) {
	for (int i = 0; i < depInfos.size(); i++) {
		DepInfo* depInfo = depInfos[i];
		if (i > 0) {
			printf("\n");
		}
		printf("%s/%s", repo.c_str(), depInfo->makeIncludePath().c_str());
	}
}

void printPathDirs(const string& repo, const vector<DepInfo*>& depInfos) {
	for (int i = 0; i < depInfos.size(); i++) {
		DepInfo* depInfo = depInfos[i];
		if (i > 0) {
			printf("\n");
		}
		printf("%s/%s", repo.c_str(), depInfo->makeProjectPath().c_str());
	}
}

void printFullNames(const vector<DepInfo*>& depInfos) {
	for (int i = 0; i < depInfos.size(); i++) {
		DepInfo* depInfo = depInfos[i];
		if (i > 0) {
			printf(",");
		}
		printf("%s", depInfo->fullName().c_str());
	}
}

void printLinkDirs(const string& repo, const vector<DepInfo*>& depInfos) {
	for (int i = 0; i < depInfos.size(); i++) {
		DepInfo* depInfo = depInfos[i];
		if (i > 0) {
			printf("\n");
		}
		printf("%s/%s", repo.c_str(), depInfo->makeLibPath().c_str());
	}
}

void printBinFiles(const string& repo, const vector<DepInfo*>& depInfos, const string& os, const string& buildType) {
	for (int i = 0; i < depInfos.size(); i++) {
		DepInfo* depInfo = depInfos[i];
		if (i > 0) {
			printf("\n");
		}
		printf("%s/%s", repo.c_str(), depInfo->makeBinFilePath(os, buildType).c_str());
	}
}

void printNames(const vector<DepInfo*>& depInfos) {
	for (int i = 0; i < depInfos.size(); i++) {
		DepInfo* depInfo = depInfos[i];
		if (i > 0) {
			printf("\n");
		}
		printf("%s", depInfo->keyWithoutVersion().c_str());
	}
}

bool existsWithoutVersion(const vector<DepInfo*>& depInfos, DepInfo* depInfo) {
	for (int i = 0; i < depInfos.size(); i++) {
		DepInfo* depInfo2 = depInfos[i];
		if (depInfo2->keyWithoutVersion() == depInfo->keyWithoutVersion()) {
			return true;
		}
	}
	return false;
}

void selectDeps(const vector<DepInfo*>& depInfos, vector<DepInfo*>& selectedDepInfos) {
	for (int i = 0; i < depInfos.size(); i++) {
		DepInfo* depInfo = depInfos[i];
		if (!existsWithoutVersion(selectedDepInfos, depInfo)) {
			selectedDepInfos.push_back(depInfo);
		}
		selectDeps(depInfo->subDeps, selectedDepInfos);
	}
}

int main(int argc, char** argv) {
	if (argc == 1) {
		printf("ex: dep [-jcpphome {home}] -deps deps\n");
		return 0;
	}
	string home;
	string deps;
	string out; // staticlib, sharedlib, include, pdb, link_libraries, jar, check, all, install_prefix
	string argKey;
	string os;
	string buildType;
	const char* arch = nullptr;
	for (int i = 1; i < argc; i++) {
		char* arg = argv[i];
		if (arg[0] == '-') {
			argKey = arg;
			continue;
		}
		if (argKey.size() > 0) {
			if (argKey == "-jcpphome") {
				home = arg;
			} else if (argKey == "-out") {
				out = arg;
			} else if (argKey == "-os") {
				os = arg;
			} else if (argKey == "-arch") {
				arch = arg;
			} else if (argKey == "-buildtype") {
				buildType = arg;
			}
			argKey = "";
			continue;
		}
		deps = arg;
	}
	//printf("jcpphome:%s\n", home);
	if (deps == "") {
		return 1;
	}
	if (home == "") {
		
	}
	string repo = home + "/repository";

	//if (out == "") {
	//	out = "all";
	//}
	const char* file = argv[1];
	vector<DepInfo*> depInfos;
	vector<string> sv = split(deps.c_str(), ",");
	for (int i = 0; i < sv.size(); i++) {
		string dep = sv[i];
		DepInfo* depInfo = resoveDep(repo.c_str(), dep.c_str(), 0);
		depInfos.push_back(depInfo);
	}

	vector<DepInfo*> selectedDepInfos;
	selectDeps(depInfos, selectedDepInfos);

	if (out == "") {
		printFullNames(selectedDepInfos);
		return 0;
	}
	if (out == "path") {
		printPathDirs(repo, selectedDepInfos);
		return 0;
	}
	if (out == "includedirs") {
		printIncludeDirs(repo, selectedDepInfos);
		return 0;
	}
	if (out == "linkdirs") {
		printLinkDirs(repo, selectedDepInfos);
		return 0;
	}
	if (out == "names") {
		printNames(selectedDepInfos);
		return 0;
	}
	if (out == "binfiles") {
		printBinFiles(repo, selectedDepInfos, os, buildType);
		return 0;
	}
	printf("os:%s\n", os.c_str());
	printDepThree(depInfos);

	printf("select:\n");
	printDeps(selectedDepInfos);

	return 0;
}