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

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <new>

#include "ElfFile.h"
#include "ElfStringTable.h"
#include "ElfSymbolTable.h"

#define $free ::free
#define $malloc ::malloc

ElfSection::ElfSection(const Elf_Shdr* hdr) : cachedData(nullptr) {
	memcpy((void*)&header, (const void*)hdr, sizeof(Elf_Shdr));
}

ElfSection::~ElfSection() {
	if (cachedData != nullptr) {
		$free(cachedData);
	}
}

// int64_t sumSize = 0;
bool ElfSection::loadCache(ElfFile* file) {
	int64_t size = getSize();
	int64_t offset = getOffset();
	if (size <= 0 || offset <= 0) {
		return false;
	}
	// sumSize += size;
	// printf("load_section %ld %ld\n", sumSize, size);
	cachedData = (char*)$malloc(size + 1);
	if (cachedData == nullptr) {
		return true;
	} else {
		ElfFileMarker marker(file);
		if (file->readBlock(offset, cachedData, size)) {
			return true;
		}
		$free(cachedData);
		cachedData = nullptr;
		return false;
	}
}

ElfFile::ElfFile() :
		next(nullptr), filePath(nullptr), file(nullptr),
		symbolTables(nullptr), stringTables(nullptr),
		ok(true) {
	memset(&header, 0, sizeof(header));
}

ElfFile::~ElfFile() {
	if (stringTables != nullptr) {
		delete stringTables;
		stringTables = nullptr;
	}

	if (symbolTables != nullptr) {
		delete symbolTables;
		symbolTables = nullptr;
	}

	if (file != nullptr) {
		fclose(file);
		file = nullptr;
	}

	if (filePath != nullptr) {
		$free((void*)filePath);
		filePath = nullptr;
	}

	if (next != nullptr) {
		delete next;
		next = nullptr;
	}
}

bool ElfFile::init(const char* filePath) {
	size_t len = strlen(filePath) + 1;
	this->filePath = (char*)$malloc(len * sizeof(char));
	if (this->filePath == nullptr) {
		// out of memory
		ok = false;
		return ok;
	}
	strcpy(this->filePath, filePath);
	ok = parse(filePath);
	return ok;
}

bool ElfFile::parse(const char* filePath) {
	file = fopen(filePath, "r");
	if (file != nullptr) {
		return loadTables();
	} else {
		// can not open file
		return false;
	}
}

bool ElfFile::checkElfHeader() {
	return (header.e_ident[EI_MAG0] == ELFMAG0 &&
		header.e_ident[EI_MAG1] == ELFMAG1 &&
		header.e_ident[EI_MAG2] == ELFMAG2 &&
		header.e_ident[EI_MAG3] == ELFMAG3&&
		header.e_ident[EI_CLASS] != ELFCLASSNONE &&
		header.e_ident[EI_DATA] != ELFDATANONE);
}

bool ElfFile::loadTables() {
	if (!readBlock(&header, sizeof(header))) {
		return false;
	}

	if (!checkElfHeader() || !setPosition(header.e_shoff)) {
		return false;
	}

	Elf_Shdr shdr;
	for (int index = 0; index < header.e_shnum; index++) {
		if (!readBlock(&shdr, sizeof(shdr))) {
			return false;
		}
		if (index == header.e_shstrndx) {
			continue;
		}
		if (shdr.sh_type == SHT_STRTAB) {
			ElfStringTable* table = new (std::nothrow) ElfStringTable(&shdr, index);
			if (table == nullptr) {
				return false;
			}
			// table->tryLoadCache(this);
			addStringTable(table);
		} else if (shdr.sh_type == SHT_SYMTAB || shdr.sh_type == SHT_DYNSYM) {
			ElfSymbolTable* table = new (std::nothrow) ElfSymbolTable(&shdr);
			if (table == nullptr) {
				return false;
			}
			table->tryLoadCache(this);
			addSymbolTable(table);
		}
	}
	return true;
}

bool ElfFile::decode(address addr, char* buf, int buflen) {
	if (!ok) {
		return false;
	}

	int stringTableIndex;
	int posInStringTable;
	ElfSymbolTable* symbolTable = symbolTables;
	while (symbolTable != nullptr) {
		if (symbolTable->getSymbol(this, addr, &stringTableIndex, &posInStringTable)) {
			break;
		}
		symbolTable = symbolTable->getNext();
	}
	if (symbolTable == nullptr) {
		return false;
	}

	ElfStringTable* stringTable = getStringTableByIndex(stringTableIndex);
	if (stringTable == nullptr) {
		// ok = false;
		return false;
	}
	return stringTable->getString(this, posInStringTable, buf, buflen);
}

void ElfFile::addSymbolTable(ElfSymbolTable* table) {
	table->setNext(symbolTables);
	symbolTables = table;
}

void ElfFile::addStringTable(ElfStringTable* table) {
	table->setNext(stringTables);
	stringTables = table;
}

ElfStringTable* ElfFile::getStringTableByIndex(int index) const {
	ElfStringTable* stringTable = stringTables;
	while (stringTable != nullptr) {
		if (stringTable->getSectionIndex() == index) {
			return stringTable;
		}
		stringTable = stringTable->getNext();
	}
	return nullptr;
}

bool ElfFile::readBlock(void* buf, size_t size) {
	return fread(buf, size, 1, file) == 1;
}

bool ElfFile::readBlock(long position, void* buf, size_t size) {
	if (setPosition(position)) {
		return readBlock(buf, size);
	}
	return false;
}

long ElfFile::getPosition() {
	return ftell(file);
}

bool ElfFile::setPosition(long position) {
	return fseek(file, position, SEEK_SET) == 0;
}

bool ElfFile::readSectionHeader(Elf_Shdr* sectionHeader) {
	return readBlock(sectionHeader, sizeof(Elf_Shdr));
}