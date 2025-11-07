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

#ifndef _java_lang_Array_h_
#define _java_lang_Array_h_
//$$

#include <java/lang/BooleanArray.h>
#include <java/lang/ByteArray.h>
#include <java/lang/ShortArray.h>
#include <java/lang/IntArray.h>
#include <java/lang/LongArray.h>
#include <java/lang/CharArray.h>
#include <java/lang/FloatArray.h>
#include <java/lang/DoubleArray.h>
#include <java/lang/ObjectArray.h>

namespace java {
	namespace lang {

template<typename TYPE, int DIM = 1>
class Array : public ObjectArray {
public:
	using T = TYPE;
	constexpr static int D = DIM;
	inline static Class* class$() {
		return getArrayType(TYPE::class$, D);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, Array<T, D - 1>* obj) {
		ObjectArray::set(index, obj);
		return obj;
	}
};

template<typename TYPE>
class Array<TYPE, 1> : public ObjectArray {
public:
	using T = TYPE;
	constexpr static int D = 1;
	inline static Class* class$() {
		return getArrayType(TYPE::class$, D);
	}
	inline T* get(int32_t index);
	inline T* set(int32_t index, T* obj) {
		ObjectArray::set(index, obj);
		return obj;
	}
};

template<>
class Array<Object, 1> : public ObjectArray {
public:
	using T = Object;
	constexpr static int D = 1;
	static Class* class$() {
		return ObjectArray::class$;
	}
	inline Object0* get(int32_t index) {
		return ObjectArray::get(index);
	}
	inline Object* set(int32_t index, Object$* obj) {
		ObjectArray::set(index, obj);
		return (Object*)obj;
	}
};

template<>
class Array<Object, 2> : public ObjectArray {
public:
	using T = Object;
	constexpr static int D = 2;
	static Class* class$() {
		return getArrayType(ObjectArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, ObjectArray* obj) {
		ObjectArray::set(index, obj);
		return (Array<T, D - 1>*)obj;
	}
};

// boolean
template<int DIM>
class Array<bool, DIM> : public ObjectArray {
public:
	using T = bool;
	constexpr static int D = DIM;
	inline Class* class$() {
		return getArrayType(BooleanArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, Array<T, D - 1>* obj) {
		ObjectArray::set(index, obj);
		return obj;
	}
};

template<>
class Array<bool, 1> : public BooleanArray {
public:
	using T = bool;
	constexpr static int D = 1;
	static Class* class$() {
		return BooleanArray::class$;
	}
};

template<>
class Array<bool, 2> : public ObjectArray {
public:
	using T = bool;
	constexpr static int D = 2;
	inline Class* class$() {
		return getArrayType(BooleanArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, BooleanArray* obj) {
		ObjectArray::set(index, obj);
		return (Array<T, D - 1>*)obj;
	}
};

// byte
template<int DIM>
class Array<int8_t, DIM> : public ObjectArray {
public:
	using T = int8_t;
	constexpr static int D = DIM;
	inline Class* class$() {
		return getArrayType(ByteArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, Array<T, D - 1>* obj) {
		ObjectArray::set(index, obj);
		return obj;
	}
};

template<>
class Array<int8_t, 1> : public ByteArray {
public:
	using T = int8_t;
	constexpr static int D = 1;
	static Class* class$() {
		return ByteArray::class$;
	}
};

template<>
class Array<int8_t, 2> : public ObjectArray {
public:
	using T = int8_t;
	constexpr static int D = 2;
	inline Class* class$() {
		return getArrayType(ByteArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, ByteArray* obj) {
		ObjectArray::set(index, obj);
		return (Array<T, D - 1>*)obj;
	}
};

// short
template<int DIM>
class Array<int16_t, DIM> : public ObjectArray {
public:
	using T = int16_t;
	constexpr static int D = DIM;
	inline Class* class$() {
		return getArrayType(ShortArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, Array<T, D - 1>* obj) {
		ObjectArray::set(index, obj);
		return obj;
	}
};

template<>
class Array<int16_t, 1> : public ShortArray {
public:
	using T = int16_t;
	constexpr static int D = 1;
	static Class* class$() {
		return ShortArray::class$;
	}
};

template<>
class Array<int16_t, 2> : public ObjectArray {
public:
	using T = int16_t;
	constexpr static int D = 2;
	inline Class* class$() {
		return getArrayType(ShortArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, ShortArray* obj) {
		ObjectArray::set(index, obj);
		return (Array<T, D - 1>*)obj;
	}
};

// int
template<int DIM>
class Array<int32_t, DIM> : public ObjectArray {
public:
	using T = int32_t;
	constexpr static int D = DIM;
	inline Class* class$() {
		return getArrayType(IntArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, Array<T, D - 1>* obj) {
		ObjectArray::set(index, obj);
		return obj;
	}
};

template<>
class Array<int32_t, 1> : public IntArray {
public:
	using T = int32_t;
	constexpr static int D = 1;
	static Class* class$() {
		return IntArray::class$;
	}
};

template<>
class Array<int32_t, 2> : public ObjectArray {
public:
	using T = int32_t;
	constexpr static int D = 2;
	inline Class* class$() {
		return getArrayType(IntArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, IntArray* obj) {
		ObjectArray::set(index, obj);
		return (Array<T, D - 1>*)obj;
	}
};

// long
template<int DIM>
class Array<int64_t, DIM> : public ObjectArray {
public:
	using T = int64_t;
	constexpr static int D = DIM;
	inline Class* class$() {
		return getArrayType(LongArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, Array<T, D - 1>* obj) {
		ObjectArray::set(index, obj);
		return obj;
	}
};

template<>
class Array<int64_t, 1> : public LongArray {
public:
	using T = int64_t;
	constexpr static int D = 1;
	static Class* class$() {
		return LongArray::class$;
	}
};

template<>
class Array<int64_t, 2> : public ObjectArray {
public:
	using T = int64_t;
	constexpr static int D = 2;
	inline Class* class$() {
		return getArrayType(LongArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, LongArray* obj) {
		ObjectArray::set(index, obj);
		return (Array<T, D - 1>*)obj;
	}
};

// float
template<int DIM>
class Array<float, DIM> : public ObjectArray {
public:
	using T = float;
	constexpr static int D = DIM;
	inline Class* class$() {
		return getArrayType(FloatArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, Array<T, D - 1>* obj) {
		ObjectArray::set(index, obj);
		return obj;
	}
};

template<>
class Array<float, 1> : public FloatArray {
public:
	using T = float;
	constexpr static int D = 1;
	static Class* class$() {
		return FloatArray::class$;
	}
};

template<>
class Array<float, 2> : public ObjectArray {
public:
	using T = float;
	constexpr static int D = 2;
	inline Class* class$() {
		return getArrayType(FloatArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, FloatArray* obj) {
		ObjectArray::set(index, obj);
		return (Array<T, D - 1>*)obj;
	}
};

// double
template<int DIM>
class Array<double, DIM> : public ObjectArray {
public:
	using T = double;
	constexpr static int D = DIM;
	inline Class* class$() {
		return getArrayType(DoubleArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, Array<T, D - 1>* obj) {
		ObjectArray::set(index, obj);
		return obj;
	}
};

template<>
class Array<double, 1> : public DoubleArray {
public:
	using T = double;
	constexpr static int D = 1;
	static Class* class$() {
		return DoubleArray::class$;
	}
};

template<>
class Array<double, 2> : public ObjectArray {
public:
	using T = double;
	constexpr static int D = 2;
	inline Class* class$() {
		return getArrayType(DoubleArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, DoubleArray* obj) {
		ObjectArray::set(index, obj);
		return (Array<T, D - 1>*)obj;
	}
};

// char
template<int DIM>
class Array<char16_t, DIM> : public ObjectArray {
public:
	using T = char16_t;
	constexpr static int D = DIM;
	inline Class* class$() {
		return getArrayType(CharArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, Array<T, D - 1>* obj) {
		ObjectArray::set(index, obj);
		return obj;
	}
};

template<>
class Array<char16_t, 1> : public CharArray {
public:
	using T = char16_t;
	constexpr static int D = 1;
	static Class* class$() {
		return CharArray::class$;
	}
};

template<>
class Array<char16_t, 2> : public ObjectArray {
public:
	using T = char16_t;
	constexpr static int D = 2;
	inline Class* class$() {
		return getArrayType(CharArray::class$, D - 1);
	}
	inline Array<T, D - 1>* get(int32_t index) {
		return (Array<T, D - 1>*)(void*)ObjectArray::get(index);
	}
	inline Array<T, D - 1>* set(int32_t index, CharArray* obj) {
		ObjectArray::set(index, obj);
		return (Array<T, D - 1>*)obj;
	}
};

	} // lang
} // java

using $bytes = ::java::lang::ByteArray;
using $shorts = ::java::lang::ShortArray;
using $ints = ::java::lang::IntArray;
using $longs = ::java::lang::LongArray;
using $floats = ::java::lang::FloatArray;
using $doubles = ::java::lang::DoubleArray;
using $booleans = ::java::lang::BooleanArray;
using $chars = ::java::lang::CharArray;

using $ObjectArray = ::java::lang::ObjectArray;
using $ClassArray = ::java::lang::Array<::java::lang::Class>;
using $StringArray = ::java::lang::Array<::java::lang::String>;
using $ThreadArray = ::java::lang::Array<::java::lang::Thread>;

#define $Array ::java::lang::Array

#endif // _java_lang_Array_h_