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
#include "MacosxDecoder.h"

#include <cxxabi.h>
#include <mach-o/loader.h>
#include <mach-o/nlist.h>

struct symtab_command* findSymTab(struct mach_header_64* base) {
	struct load_command* pos = (struct load_command*)base + sizeof(struct mach_header_64);
	for (uint32_t i = 0; i < base->ncmds; i++) {
		struct load_command* cmd = (struct load_command*)pos;
		if (cmd->cmd == LC_SYMTAB) {
			return (struct symtab_command*)pos;
		}
		pos += cmd->cmdsize;
	}
	return nullptr;
}

char* findString(char* strtab, uint32_t tablesize, int strx) {
	if (strx == 0) {
		return nullptr;
	}
	char* strtabEnd = strtab + tablesize;
	// space char
	if (*strtab == ' ') {
		strtab++;
		if (*strtab != 0) {
			return nullptr;
		}
		strtab++;
	} else {
		// four zero bytes
		if (*(uint32_t*)strtab != 0) {
			return nullptr;
		}
		strtab += 4;
	}
	// start at index 1
	int index = 1;
	while (strtab < strtabEnd) {
		if (index == strx) {
			return strtab;
		}
		// find next string
		while (*strtab != 0) {
			strtab++;
		}
		strtab++; // skip zero
		index++;
	}
	return nullptr;
}

bool MacosxDecoder::demangle(const char* symbol, char* buf, int buflen) {
	int status;
	char* result = abi::__cxa_demangle(symbol, nullptr, nullptr, &status);
	if (result != nullptr) {
		jio_snprintf(buf, buflen, "%s", result);
		::free(result);
		return true;
	}
	return false;
}

bool MacosxDecoder::decode(address addr, char* buf, int buflen, const void* base) {
	struct symtab_command* symtab = findSymTab((struct mach_header_64*)base);
	if (symtab == nullptr) {
		return false;
	}
	uint64_t offset = (uintptr_t)base - (uintptr_t)addr;
	void* symtabAddr = (void*)((uintptr_t)base + symtab->symoff);
	struct nlist_64* cur_nlist = (struct nlist_64*)symtabAddr;
	struct nlist_64* last_nlist = cur_nlist;
	uint32_t foundStrx = 0;
	for (uint32_t i = 0; i < symtab->nsyms; i++) {
		if (offset == cur_nlist->n_value) {
			foundStrx = cur_nlist->n_un.n_strx;
			break;
		} else if (offset > cur_nlist->n_value) {
			foundStrx = last_nlist->n_un.n_strx;
			break;
		}
		last_nlist = cur_nlist;
		cur_nlist = cur_nlist + sizeof(struct nlist_64);
	}
	char* sym = findString((char*)((uintptr_t)base + symtab->stroff), symtab->strsize, foundStrx);
	if (sym != nullptr) {
		strncpy(buf, sym, buflen);
		buf[buflen - 1] = '\0';
		return true;
	}
	return false;
}