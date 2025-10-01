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

#ifndef _core_ElfFile_h_
#define _core_ElfFile_h_

#include "coreDef.h"

#if defined(__OpenBSD__)
	#include <sys/exec_elf.h>
#else
	#include <elf.h>
#endif

#include <stdio.h>

#ifdef _LP64

	typedef Elf64_Half Elf_Half;
	typedef Elf64_Word Elf_Word;
	typedef Elf64_Off Elf_Off;
	typedef Elf64_Addr Elf_Addr;

	typedef Elf64_Ehdr Elf_Ehdr;
	typedef Elf64_Shdr Elf_Shdr;
	typedef Elf64_Phdr Elf_Phdr;
	typedef Elf64_Sym Elf_Sym;

	#if !defined(_ALLBSD_SOURCE) || defined(__APPLE__)
		#define ELF_ST_TYPE ELF64_ST_TYPE
	#endif

#else

	typedef Elf32_Half Elf_Half;
	typedef Elf32_Word Elf_Word;
	typedef Elf32_Off Elf_Off;
	typedef Elf32_Addr Elf_Addr;

	typedef Elf32_Ehdr Elf_Ehdr;
	typedef Elf32_Shdr Elf_Shdr;
	typedef Elf32_Phdr Elf_Phdr;
	typedef Elf32_Sym Elf_Sym;

	#if !defined(_ALLBSD_SOURCE) || defined(__APPLE__)
		#define ELF_ST_TYPE ELF32_ST_TYPE
	#endif
#endif

class ElfStringTable;
class ElfSymbolTable;

class ElfFile {
public:
	ElfFile();
	~ElfFile();

	bool init(const char* filePath);
	bool decode(address addr, char* buf, int buflen);
	bool isSame(const char* filePath) const {
		return (filePath != nullptr && this->filePath != NULL && !strcmp(filePath, this->filePath));
	}

	bool checkElfHeader();
	bool parse(const char* filename);
	bool loadTables();

	ElfFile* getNext() const {
		 return next;
	}
	void setNext(ElfFile* file) {
		this->next = file;
	}
	void addStringTable(ElfStringTable* table);
	void addSymbolTable(ElfSymbolTable* table);
	ElfStringTable* getStringTableByIndex(int index) const;

	FILE* getFile() const {
		return file;
	}

	bool readBlock(void* buf, size_t size);
	bool readBlock(long position, void* buf, size_t size);
	long getPosition();
	bool setPosition(long position);
	bool readSectionHeader(Elf_Shdr* sectionHeader);

private:
	ElfFile* next;
	char* filePath;
	FILE* file;
	Elf_Ehdr header;
	ElfSymbolTable* symbolTables;
	ElfStringTable* stringTables;
	bool ok;
};

class ElfFileMarker {
public:
	ElfFileMarker(ElfFile* const file) {
		this->file = file;
		position = file->getPosition();
	}
	~ElfFileMarker() {
		file->setPosition(position);
	}
private:
	ElfFile* file;
	long position;
};

class ElfSection {
public:
	ElfSection(const Elf_Shdr* hdr);
	~ElfSection();
	bool loadCache(ElfFile* const file);
	int64_t getOffset() const {
		return header.sh_offset;
	}
	int64_t getSize() const {
		return header.sh_size;
	}
	const Elf_Shdr* getHeader() const {
		return &header;
	}
	const void* getCachedData() const {
		return (const void*)cachedData;
	}
	bool check(int64_t value) const {
		return header.sh_size > 0 && value >= header.sh_addr && value <= header.sh_addr + header.sh_size;
	}

private:
	Elf_Shdr header;
	char* cachedData;
};

#endif // _core_ElfFile_h_