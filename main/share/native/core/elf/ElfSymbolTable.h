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

#ifndef _core_ElfSymbolTable_h_
#define _core_ElfSymbolTable_h_

#include "ElfFile.h"

class ElfSymbolTable {
public:
	ElfSymbolTable(Elf_Shdr* shdr);
	~ElfSymbolTable();
	void tryLoadCache(ElfFile* file);
	bool getSymbol(ElfFile* file, address addr, int* stringtableIndex, int* posIndex);
	ElfSymbolTable* getNext() const {
		return next;
	}
	void setNext(ElfSymbolTable* next) {
		this->next = next;
	}

private:
	int getSymbolCount() const {
		return section.getSize() / sizeof(Elf_Sym);
	}
	bool getSymbol0(const Elf_Sym* sym, address addr, int* stringtableIndex, int* posIndex) const;
	address getFunctionAddress0(const Elf_Sym* sym, address addr) const;
	ElfSection section;
	ElfSymbolTable* next;
	bool ok;
};

#endif // _core_ElfSymbolTable_h_