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

#ifndef _java_lang_YYSet_h_
#define _java_lang_YYSet_h_

#include <cstddef>

namespace java {
    namespace lang {

template<typename T>
class YYSetAllocator {
public:
	void* allocate(size_t numObjs, const void* hit) {
		return operator new(sizeof(T) * numObjs);
	}
	void deallocate(void* p, size_t numObjs){
		operator delete(p);
	}
};

template<typename T, typename Alloc = YYSetAllocator<T*>>
class YYSet {
public:
	class Iterator {
	public:
		Iterator(YYSet* set) {
			this->set = set;
			index = 0;
		}
		bool hasNext() {
			while (index < set->entrySize) {
				if (set->entrys[index] != nullptr) {
					return true;
				}
				index++;
			}
			return false;
		}
		T* next() {
			return set->entrys[index++];
		}
		YYSet* set;
		int32_t index;
	};
public:
	YYSet() {
		size = 0;
		chunkSize = 0;
		chunkCount = 1003;
		entrySize = 0;
		entrys = nullptr;
	}
	~YYSet() {
		deinit();
	}

	void init() {
		grow();
	}
	void deinit() {
		if (entrys != nullptr) {
			alloc.deallocate(entrys, entrySize);
			entrys = nullptr;
		}
	}

	virtual int32_t hashCode(T* x) {
		return (int32_t)((intptr_t)x);
	}
	virtual bool equals(T* x, T* y) {
		return x == y;
	}
	virtual bool equals(T* x, const void* y) {
		return x == y;
	}

	bool grow() {
		if (entrySize > size + chunkCount) {
			return true;
		}
		chunkSize += 2;
		int32_t newSize = chunkSize * chunkCount;
		T** newEntrys = allocbuffer(newSize);
		if (newEntrys == nullptr) {
			return false;
		}
		T** oldEntrys = entrys;
		int32_t oldSize = entrySize;
		entrys = newEntrys;
		entrySize = newSize;
		size = 0;
		for (int32_t i = 0; i < oldSize; i++) {
			add(oldEntrys[i]);
		}
		if (oldEntrys != nullptr) {
			alloc.deallocate(oldEntrys, oldSize);
		}
		return true;
	}

	bool add(T* value) {
		if (value == nullptr) {
			return false;
		}
		uint32_t h = hashCode(value);
		if (!grow()) {
			return false;
		}
		
		int32_t beginChunkIndex = h % chunkCount;
		int32_t beginIndex = beginChunkIndex * chunkSize;
		for (int32_t i = beginIndex; i < entrySize; i++) {
			T* entry = entrys[i];
			if (entry == nullptr) {
				entrys[i] = value;
				size++;
				return true;
			}
			if (equals(entry, value)) {
				return true;
			}
		}
		for (int32_t i = 0; i < beginIndex; i++) {
			T* entry = entrys[i];
			if (entry == nullptr) {
				entrys[i] = value;
				size++;
				return true;
			}
			if (equals(entry,value)) {
				return true;
			}
		}
		return true;
	}

    template<typename V>
    bool exists(int32_t hashCode, V* value) {
	/*	int32_t beginChunkIndex = (uint32_t)hashCode % chunkCount;
		int32_t beginIndex = beginChunkIndex * chunkSize;
		for (int32_t i = beginIndex; i < entrySize; i++) {
			T* entry = entrys[i];
			if (entry == nullptr) {
				return false;
			}
			if (equals(entry, value)) {
                return true;
			}
		}
		for (int32_t i = 0; i < beginIndex; i++) {
			T* entry = entrys[i];
			if (entry == nullptr) {
				return false;
			}
			if (equals(entry, value)) {
                return true;
			}
		}
        return false;*/
		return get(hashCode, value) != nullptr;
    }

	template<typename V>
	bool exists(V* value) {
		return get(value) != nullptr;
	}

    template<typename V>
    T* get(int32_t hashCode, V* value) {
		int32_t beginChunkIndex = (uint32_t)hashCode % chunkCount;
		int32_t beginIndex = beginChunkIndex * chunkSize;
		for (int32_t i = beginIndex; i < entrySize; i++) {
			T* entry = entrys[i];
			if (entry == nullptr) {
				return nullptr;
			}
			if (equals(entry, value)) {
                return entry;
			}
		}
		for (int32_t i = 0; i < beginIndex; i++) {
			T* entry = entrys[i];
			if (entry == nullptr) {
				return nullptr;
			}
			if (equals(entry, value)) {
                return entry;
			}
		}
        return nullptr;
    }

	template<typename V>
	T* get(V* value) {
		int32_t hash = hashCode(value);
		return get(hash, value);
	}

	bool remove(T* value) {
		if (value == nullptr) {
			return false;
		}
		uint32_t hash = hashCode(value);
		int32_t beginChunkIndex = hash % chunkCount;
		int32_t beginIndex = beginChunkIndex * chunkSize;
		for (int32_t i = beginIndex; i < entrySize; i++) {
			T* entry = entrys[i];
			if (entry == nullptr) {
				return false;
			}
			if (equals(entry, value)) {
                return true;
			}
		}
		for (int32_t i = 0; i < beginIndex; i++) {
			T* entry = entrys[i];
			if (entry == nullptr) {
				return false;
			}
			if (equals(entry, value)) {
                return true;
			}
		}
		return false;
	}

private:
	T** allocbuffer(int32_t size) {
		T** entrys = (T**)alloc.allocate(size, nullptr);
		if (entrys != nullptr) {
			for (int32_t i = 0; i < size; i++) {
				entrys[i] = nullptr;
			}
		}
		return entrys;
	}

	Alloc alloc;
	int32_t size;
	int32_t chunkSize;
	int32_t chunkCount;
	int32_t entrySize;
	T** entrys;
};

    }
}

#endif // _java_lang_YYSet_h_