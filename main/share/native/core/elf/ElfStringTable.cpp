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

#include "jvm.h"
#include "ElfStringTable.h"

ElfStringTable::ElfStringTable(Elf_Shdr* shdr, int sectionIndex) :
		section(shdr), next(nullptr), sectionIndex(sectionIndex) {
	ok = true;
}

ElfStringTable::~ElfStringTable() {
	if (next != nullptr) {
		delete next;
		next = nullptr;
	}
}

void ElfStringTable::tryLoadCache(ElfFile* file) {
	section.loadCache(file);
}

bool ElfStringTable::getString(ElfFile* file, size_t pos, char* buf, int buflen) {
	if (!ok) {
		return false;
	}

	if (pos >= section.getSize()) {
		return false;
	}

	const char* data = (const char*)section.getCachedData();
	if (data != nullptr) {
		jio_snprintf(buf, buflen, "%s", data + pos);
		return true;
	} else { // no cache data, read from file instead
		const Elf_Shdr* const shdr = section.getHeader();
		ElfFileMarker marker(file);
		if (file->readBlock(shdr->sh_offset + pos, (void*)buf, size_t(buflen))) {
			buf[buflen - 1] = '\0';
			return true;
		} else {
			ok = false;
			return false;
		}
	}
}