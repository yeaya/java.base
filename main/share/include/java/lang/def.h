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

#ifndef _java_lang_def_h_
#define _java_lang_def_h_
//$$

#include <cstddef>
#include <cstdint>
#include <type_traits>

#ifdef _WIN32
	#define $export __declspec(dllexport)
	#define $import __declspec(dllimport)
#else // GCC
	#define $export __attribute ((visibility("default")))
	#define $import __attribute ((visibility("default")))
#endif // _WIN32

template<bool cond, typename T = void>
using $EnableIf = ::std::enable_if<cond, T>;

#define $enable_if(...) ::std::enable_if_t<bool(__VA_ARGS__), int> = 0
#define $is_same(...) ::std::is_same<__VA_ARGS__>::value
#define $is_base_of(...) ::std::is_base_of<__VA_ARGS__>::value
#define $is_convertible(...) ::std::is_convertible<__VA_ARGS__>::value
#define $is_integral(...) ::std::is_integral<__VA_ARGS__>::value
#define $is_pointer(...) ::std::is_pointer<__VA_ARGS__>::value
#define $is_volatile(...) ::std::is_volatile<__VA_ARGS__>::value

template<typename T, typename A, $enable_if($is_integral(T))>
inline bool $is_aligned(T value, A alignment) {
	return (value % alignment) == 0;
}

template<typename T, typename A, $enable_if($is_integral(T))>
inline T $align_down(T value, A alignment) {
	if (alignment <= 0) {
		return value;
	}
	T result = value - (value % alignment);
	return result;
}

template<typename T, typename A, $enable_if($is_integral(T))>
inline T $align_up(T value, A alignment) {
	if (alignment <= 0) {
		return value;
	}
	value += alignment - 1;
	T result = value - (value % alignment);
	return result;
}

template<typename T, typename A>
inline T* $align_up(T* ptr, A alignment) {
	return (T*)$align_up((uintptr_t)ptr, alignment);
}

template<typename T, typename A>
inline T* $align_down(T* ptr, A alignment) {
	return (T*)$align_down((uintptr_t)ptr, alignment);
}

#endif // _java_lang_def_h_