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

#include "ElfDecoder.h"

#include <cxxabi.h>
#include <string.h>
#include <new>

ElfDecoder::ElfDecoder() {
	openedFiles = nullptr;
}

ElfDecoder::~ElfDecoder() {
	std::lock_guard<std::mutex> lck(mutex);
	if (openedFiles != nullptr) {
		delete openedFiles;
		openedFiles = nullptr;
	}
}

bool ElfDecoder::demangle(const char* symbol, char* buf, int buflen) {
	if (buf != nullptr && buflen > 1) {
		int status;
		char* demangled = abi::__cxa_demangle(symbol, nullptr, nullptr, &status);
		if (demangled != nullptr) {
			strncpy(buf, demangled, buflen - 1);
			buf[buflen - 1] = '\0';
			::free(demangled);
			return true;
		}
	}
	return false;
}

bool ElfDecoder::decode(address addr, char *buf, int buflen, const char* filePath) {
	std::lock_guard<std::mutex> lck(mutex);
	ElfFile* file = getOrCreateFile(filePath);
	if (file == nullptr) {
		return false;
	}
	if (!file->decode(addr, buf, buflen)) {
		return false;
	}
	if ((buf[0] != '\0')) {
		demangle(buf, buf, buflen);
	}
	return true;
}

ElfFile* ElfDecoder::getOrCreateFile(const char* filePath) {
	ElfFile* file = openedFiles;
	while (file != nullptr) {
		if (file->isSame(filePath)) {
			return file;
		}
		file = file->getNext();
	}
	file = new (std::nothrow)ElfFile();
	if (file != nullptr) {
		if (file->init(filePath)) {
			addFile(file);
		} else {
			delete file;
			file = nullptr;
		}
	}
	return file;
}

void ElfDecoder::addFile(ElfFile* file) {
	file->setNext(openedFiles);
	openedFiles = file;
}