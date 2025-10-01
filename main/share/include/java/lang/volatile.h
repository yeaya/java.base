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

#ifndef _java_lang_volatile_h_
#define _java_lang_volatile_h_
//$$

#include <java/lang/fence.h>

template<typename T>
#ifdef _WIN32
class __declspec(dllexport) $volatile {
#else
class $volatile {
#endif
public:
	using type = T;
	inline $volatile() {
		$storestore();
		value = 0;
		$storeload();
	}
	template<typename V>
	inline $volatile(V v) {
		$storestore();
		value = v;
		$storeload();
	}
	inline operator T() const {
		T ret = value;
		$loadfence();
		return ret;
	}
	inline T operator ()() const {
		T ret = value;
		$loadfence();
		return ret;
	}
	template<typename V>
	inline T operator ()(V v) const {
		$storestore();
		value = v;
		$storeload();
		return v;
	}
	inline T get() const {
		T ret = value;
		$loadfence();
		return ret;
	}
	inline T& ref() const {
		return (T&)value;
	}
	template<typename V>
	inline T put(V v) const {
		$storestore();
		value = v;
		$storeload();
		return v;
	}
	template<typename V>
	inline T operator =(V v) {
		$storestore();
		value = v;
		$storeload();
		return v;
	}
	template<typename V>
	inline T operator +=(V v) {
		T ret = value;
		$loadfence();
		ret += v;
		$storestore();
		value = ret;
		$storeload();
		return ret;
	}
	template<typename V>
	inline T operator -=(V v) {
		T ret = value;
		$loadfence();
		ret -= v;
		$storestore();
		value = ret;
		$storeload();
		return ret;
	}
	template<typename V>
	inline T operator *=(V v) {
		T ret = value;
		$loadfence();
		ret *= v;
		$storestore();
		value = ret;
		$storeload();
		return ret;
	}
	template<typename V>
	inline T operator /=(V v) {
		T ret = value;
		$loadfence();
		ret /= v;
		$storestore();
		value = ret;
		$storeload();
		return ret;
	}
	template<typename V>
	inline T operator %=(V v) {
		T ret = value;
		$loadfence();
		ret %= v;
		$storestore();
		value = ret;
		$storeload();
		return ret;
	}
	template<typename V>
	inline T operator |=(V v) {
		T ret = value;
		$loadfence();
		ret |= v;
		$storestore();
		value = ret;
		$storeload();
		return ret;
	}
	template<typename V>
	inline T operator &=(V v) {
		T ret = value;
		$loadfence();
		ret &= v;
		$storestore();
		value = ret;
		$storeload();
		return ret;
	}
	inline T operator ++() {
		T ret = value;
		$loadfence();
		++ret;
		$storestore();
		value = ret;
		$storeload();
		return ret;
	}
	inline T operator ++(int) {
		T ret = value;
		$loadfence();
		$storestore();
		value = ret + 1;
		$storeload();
		return ret;
	}
	inline T operator --() {
		T ret = value;
		$loadfence();
		--ret;
		$storestore();
		value = ret;
		$storeload();
		return ret;
	}
	inline T operator --(int) {
		T ret = value;
		$loadfence();
		$storestore();
		value = ret - 1;
		$storeload();
		return ret;
	}
	template<typename V>
	inline bool operator ==(V v) {
		bool ret = value == v;
		$loadfence();
		return ret;
	}
	template<typename V>
	inline bool operator !=(V v) {
		bool ret = value != v;
		$loadfence();
		return ret;
	}
	inline T operator ->() {
		T ret = value;
		$loadfence();
		return ret;
	}
	volatile T value;
};

#define $volatile(...) $volatile<__VA_ARGS__>

#endif // _java_lang_volatile_h_