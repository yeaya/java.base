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

#include "ElfSymbolTable.h"

ElfSymbolTable::ElfSymbolTable(Elf_Shdr* shdr) :
		section(shdr), next(nullptr) {
	ok = section.getSize() % sizeof(Elf_Sym) == 0;;
}

ElfSymbolTable::~ElfSymbolTable() {
	if (next != nullptr) {
		delete next;
		next = nullptr;
	}
}

void ElfSymbolTable::tryLoadCache(ElfFile* file) {
	section.loadCache(file);
}

bool ElfSymbolTable::getSymbol0(const Elf_Sym* sym, address addr, int* stringtableIndex, int* posIndex) const {
	if (STT_FUNC == ELF_ST_TYPE(sym->st_info)) {
		Elf_Word st_size = sym->st_size;
		const Elf_Shdr* shdr = section.getHeader();
		address sym_addr = (address)sym->st_value;
		if (sym_addr <= addr && (Elf_Word)(addr - sym_addr) < st_size) {
			*posIndex = sym->st_name;
			*stringtableIndex = shdr->sh_link;
			return true;
		}
	}
	return false;
}

address ElfSymbolTable::getFunctionAddress0(const Elf_Sym* sym, address addr) const {
	if (STT_FUNC == ELF_ST_TYPE(sym->st_info)) {
		Elf_Word st_size = sym->st_size;
		const Elf_Shdr* shdr = section.getHeader();
		address sym_addr = (address)sym->st_value;
		if (sym_addr <= addr && (Elf_Word)(addr - sym_addr) < st_size) {
			return sym_addr;
		}
	}
	return nullptr;
}

bool ElfSymbolTable::getSymbol(ElfFile* file, address addr, int* stringtableIndex, int* posIndex) {
	if (!ok) {
		return false;
	}
	int symbolCount = getSymbolCount();
	Elf_Sym* symbols = (Elf_Sym*)section.getCachedData();
	if (symbols != nullptr) {
		for (int index = 0; index < symbolCount; index++) {
			if (getSymbol0(&symbols[index], addr, stringtableIndex, posIndex)) {
				return true;
			}
		}
	} else {
		ElfFileMarker marker(file);
		if (file->setPosition(section.getOffset())) {
			Elf_Sym sym;
			for (int index = 0; index < symbolCount; index++) {
				if (!file->readBlock((void*)&sym, sizeof(sym))) {
					// file invalid
					ok = false;
					return false;
				}
				if (getSymbol0(&sym, addr, stringtableIndex, posIndex)) {
					return true;
				}
			}
		} else {
			// file invalid
			ok = false;
			return false;
		}
	}
	return false;
}