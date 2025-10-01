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

#include <java/lang/ObjectArray.h>
#include <java/lang/IllegalAccessError.h>

#include <java/lang/invoke/VarHandleBooleans$Array.h>
#include <java/lang/invoke/VarHandleBytes$Array.h>
#include <java/lang/invoke/VarHandleChars$Array.h>
#include <java/lang/invoke/VarHandleDoubles$Array.h>
#include <java/lang/invoke/VarHandleFloats$Array.h>
#include <java/lang/invoke/VarHandleInts$Array.h>
#include <java/lang/invoke/VarHandleLongs$Array.h>
#include <java/lang/invoke/VarHandleReferences$Array.h>
#include <java/lang/invoke/VarHandleShorts$Array.h>

#include <java/lang/invoke/VarHandleByteArrayAsChars$ArrayHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsDoubles$ArrayHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsFloats$ArrayHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsInts$ArrayHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsLongs$ArrayHandle.h>
#include <java/lang/invoke/VarHandleByteArrayAsShorts$ArrayHandle.h>

#include <java/lang/invoke/VarHandleBooleans$FieldInstanceReadWrite.h>
#include <java/lang/invoke/VarHandleBytes$FieldInstanceReadWrite.h>
#include <java/lang/invoke/VarHandleChars$FieldInstanceReadWrite.h>
#include <java/lang/invoke/VarHandleDoubles$FieldInstanceReadWrite.h>
#include <java/lang/invoke/VarHandleFloats$FieldInstanceReadWrite.h>
#include <java/lang/invoke/VarHandleInts$FieldInstanceReadWrite.h>
#include <java/lang/invoke/VarHandleLongs$FieldInstanceReadWrite.h>
#include <java/lang/invoke/VarHandleReferences$FieldInstanceReadWrite.h>
#include <java/lang/invoke/VarHandleShorts$FieldInstanceReadWrite.h>

#include <java/lang/invoke/VarHandleBooleans$FieldStaticReadWrite.h>
#include <java/lang/invoke/VarHandleBytes$FieldStaticReadWrite.h>
#include <java/lang/invoke/VarHandleChars$FieldStaticReadWrite.h>
#include <java/lang/invoke/VarHandleDoubles$FieldStaticReadWrite.h>
#include <java/lang/invoke/VarHandleFloats$FieldStaticReadWrite.h>
#include <java/lang/invoke/VarHandleInts$FieldStaticReadWrite.h>
#include <java/lang/invoke/VarHandleLongs$FieldStaticReadWrite.h>
#include <java/lang/invoke/VarHandleReferences$FieldStaticReadWrite.h>
#include <java/lang/invoke/VarHandleShorts$FieldStaticReadWrite.h>

#include <jcpp.h>

using namespace ::java::lang;
using namespace ::java::lang::invoke;

#define READ_WRITE_INST(type, method, toValue) \
	if (clazz == type##$FieldInstanceReadWrite::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(1); \
		return $of(type##$FieldInstanceReadWrite::method(varHandle, begin[0], toValue(begin[1]))); \
	}

#define READ_WRITE_STATIC(type, method, toValue) \
	if (clazz == type##$FieldStaticReadWrite::class$) { \
		return $of(type##$FieldStaticReadWrite::method(varHandle, toValue($nc(args)->get(0)))); \
	}

#define READ_INST(type, method) \
	if (clazz == type##$FieldInstanceReadOnly::class$ || clazz == type##$FieldInstanceReadWrite::class$) { \
		return $of(type##$FieldInstanceReadWrite::method(varHandle, args->get(0))); \
	}

#define WRITE_INST(type, method, toValue) \
	if (clazz == type##$FieldInstanceReadWrite::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(1); \
		type##$FieldInstanceReadWrite::method(varHandle, begin[0], toValue(begin[1])); \
		return; \
	}

#define READ_STATIC(type, method) \
	if (clazz == type##$FieldStaticReadOnly::class$ || clazz == type##$FieldStaticReadWrite::class$) { \
		return $of(type##$FieldStaticReadWrite::method(varHandle)); \
	}

#define WRITE_STATIC(type, method, toValue) \
	if (clazz == type##$FieldStaticReadWrite::class$) { \
		type##$FieldStaticReadWrite::method(varHandle, toValue($nc(args)->get(0))); \
		return; \
	}

#define READ_ARRAY(type, method) \
	if (clazz == type##$Array::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(1); \
		Object* oba = begin[0]; \
		int32_t index = $intValue(begin[1]); \
		return $of(type##$Array::method(varHandle, oba, index)); \
	}

#define WRITE_ARRAY(type, method, toValue) \
	if (clazz == type##$Array::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(2); \
		Object* oba = begin[0]; \
		int32_t index = $intValue(begin[1]); \
		type##$Array::method(varHandle, oba, index, toValue(begin[2])); \
		return; \
	}

#define READ_WRITE_ARRAY(type, method, toValue) \
	if (clazz == type##$Array::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(2); \
		Object* oba = begin[0]; \
		int32_t index = $intValue(begin[1]); \
		return $of(type##$Array::method(varHandle, oba, index, toValue(begin[2]))); \
	}

#define CAS_ARRAY(type, method, toValue) \
	if (clazz == type##$Array::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(3); \
		Object* oba = begin[0]; \
		int32_t index = $intValue(begin[1]); \
		return type##$Array::method(varHandle, oba, index, toValue(begin[2]), toValue(begin[3])); \
	}

#define CAE_ARRAY(type, method, toValue) \
	if (clazz == type##$Array::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(3); \
		Object* oba = begin[0]; \
		int32_t index = $intValue(begin[1]); \
		return $of(type##$Array::method(varHandle, oba, index, toValue(begin[2]), toValue(begin[3]))); \
	}

#define READ_ARRAY_HANDLE(type, method) \
	if (clazz == type##$ArrayHandle::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(1); \
		Object* oba = begin[0]; \
		int32_t index = $intValue(begin[1]); \
		return $of(type##$ArrayHandle::method(varHandle, oba, index)); \
	}

#define WRITE_ARRAY_HANDLE(type, method, toValue) \
	if (clazz == type##$ArrayHandle::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(2); \
		Object* oba = begin[0]; \
		int32_t index = $intValue(begin[1]); \
		type##$ArrayHandle::method(varHandle, oba, index, toValue(begin[2])); \
		return; \
	}

#define CAE_INST(type, method, toValue) \
	if (clazz == type##$FieldInstanceReadWrite::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(2); \
		return $of(type##$FieldInstanceReadWrite::method(varHandle, begin[0], toValue(begin[1]), toValue(begin[2]))); \
	}

#define CAE_STATIC(type, method, toValue) \
	if (clazz == type##$FieldStaticReadWrite::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(1); \
		return $of(type##$FieldStaticReadWrite::method(varHandle, toValue(begin[0]), toValue(begin[1]))); \
	}

#define CAS_INST(type, method, toValue) \
	if (clazz == type##$FieldInstanceReadWrite::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(2); \
		return type##$FieldInstanceReadWrite::method(varHandle, begin[0], toValue(begin[1]), toValue(begin[2])); \
	}

#define CAS_STATIC(type, method, toValue) \
	if (clazz == type##$FieldStaticReadWrite::class$) { \
		Object0** begin = $nc(args)->begin(); \
		args->check(1); \
		return type##$FieldStaticReadWrite::method(varHandle, toValue(begin[0]), toValue(begin[1])); \
	}

Object* _Java_java_lang_invoke_VarHandle_compareAndExchange(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME compareAndExchange

	CAE_INST(VarHandleReferences, METHOD_NAME, $of)
	CAE_INST(VarHandleInts, METHOD_NAME, $intValue)
	CAE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	CAE_INST(VarHandleChars, METHOD_NAME, $charValue)
	CAE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	CAE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	CAE_STATIC(VarHandleReferences, METHOD_NAME, $of)
	CAE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	CAE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	CAE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	CAE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	CAE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAE_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	CAE_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	CAE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	CAE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	CAE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	CAE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	CAE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAE_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_compareAndExchangeAcquire(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME compareAndExchangeAcquire

	CAE_INST(VarHandleReferences, METHOD_NAME, $of)
	CAE_INST(VarHandleInts, METHOD_NAME, $intValue)
	CAE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	CAE_INST(VarHandleChars, METHOD_NAME, $charValue)
	CAE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	CAE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	CAE_STATIC(VarHandleReferences, METHOD_NAME, $of)
	CAE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	CAE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	CAE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	CAE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	CAE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAE_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	CAE_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	CAE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	CAE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	CAE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	CAE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	CAE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAE_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_compareAndExchangeRelease(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME compareAndExchangeRelease

	CAE_INST(VarHandleReferences, METHOD_NAME, $of)
	CAE_INST(VarHandleInts, METHOD_NAME, $intValue)
	CAE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	CAE_INST(VarHandleChars, METHOD_NAME, $charValue)
	CAE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	CAE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	CAE_STATIC(VarHandleReferences, METHOD_NAME, $of)
	CAE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	CAE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	CAE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	CAE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	CAE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAE_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	CAE_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	CAE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	CAE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	CAE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	CAE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	CAE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAE_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}


bool _Java_java_lang_invoke_VarHandle_compareAndSet(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME compareAndSet

	CAS_INST(VarHandleReferences, METHOD_NAME, $of)
	CAS_INST(VarHandleInts, METHOD_NAME, $intValue)
	CAS_INST(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_INST(VarHandleChars, METHOD_NAME, $charValue)
	CAS_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	CAS_STATIC(VarHandleReferences, METHOD_NAME, $of)
	CAS_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	CAS_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	CAS_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	CAS_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	CAS_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	CAS_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	CAS_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return false;
}

Object* _Java_java_lang_invoke_VarHandle_get(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME get

	READ_INST(VarHandleReferences, METHOD_NAME)
	READ_INST(VarHandleInts, METHOD_NAME)
	READ_INST(VarHandleLongs, METHOD_NAME)
	READ_INST(VarHandleChars, METHOD_NAME)
	READ_INST(VarHandleFloats, METHOD_NAME)
	READ_INST(VarHandleDoubles, METHOD_NAME)
	READ_INST(VarHandleBooleans, METHOD_NAME)
	READ_INST(VarHandleBytes, METHOD_NAME)

	READ_STATIC(VarHandleReferences, METHOD_NAME)
	READ_STATIC(VarHandleInts, METHOD_NAME)
	READ_STATIC(VarHandleLongs, METHOD_NAME)
	READ_STATIC(VarHandleChars, METHOD_NAME)
	READ_STATIC(VarHandleFloats, METHOD_NAME)
	READ_STATIC(VarHandleDoubles, METHOD_NAME)
	READ_STATIC(VarHandleBooleans, METHOD_NAME)
	READ_STATIC(VarHandleBytes, METHOD_NAME)

	READ_ARRAY(VarHandleReferences, METHOD_NAME)
	READ_ARRAY(VarHandleInts, METHOD_NAME)
	READ_ARRAY(VarHandleLongs, METHOD_NAME)
	READ_ARRAY(VarHandleChars, METHOD_NAME)
	READ_ARRAY(VarHandleFloats, METHOD_NAME)
	READ_ARRAY(VarHandleDoubles, METHOD_NAME)
	READ_ARRAY(VarHandleBooleans, METHOD_NAME)
	READ_ARRAY(VarHandleBytes, METHOD_NAME)

	READ_ARRAY_HANDLE(VarHandleByteArrayAsChars, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsDoubles, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsFloats, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsInts, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsLongs, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsShorts, METHOD_NAME)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getOpaque(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getOpaque

	READ_INST(VarHandleReferences, METHOD_NAME)
	READ_INST(VarHandleInts, METHOD_NAME)
	READ_INST(VarHandleLongs, METHOD_NAME)
	READ_INST(VarHandleChars, METHOD_NAME)
	READ_INST(VarHandleFloats, METHOD_NAME)
	READ_INST(VarHandleDoubles, METHOD_NAME)
	READ_INST(VarHandleBooleans, METHOD_NAME)
	READ_INST(VarHandleBytes, METHOD_NAME)

	READ_STATIC(VarHandleReferences, METHOD_NAME)
	READ_STATIC(VarHandleInts, METHOD_NAME)
	READ_STATIC(VarHandleLongs, METHOD_NAME)
	READ_STATIC(VarHandleChars, METHOD_NAME)
	READ_STATIC(VarHandleFloats, METHOD_NAME)
	READ_STATIC(VarHandleDoubles, METHOD_NAME)
	READ_STATIC(VarHandleBooleans, METHOD_NAME)
	READ_STATIC(VarHandleBytes, METHOD_NAME)

	READ_ARRAY(VarHandleReferences, METHOD_NAME)
	READ_ARRAY(VarHandleInts, METHOD_NAME)
	READ_ARRAY(VarHandleLongs, METHOD_NAME)
	READ_ARRAY(VarHandleChars, METHOD_NAME)
	READ_ARRAY(VarHandleFloats, METHOD_NAME)
	READ_ARRAY(VarHandleDoubles, METHOD_NAME)
	READ_ARRAY(VarHandleBooleans, METHOD_NAME)
	READ_ARRAY(VarHandleBytes, METHOD_NAME)

	READ_ARRAY_HANDLE(VarHandleByteArrayAsChars, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsDoubles, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsFloats, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsInts, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsLongs, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsShorts, METHOD_NAME)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}


Object* _Java_java_lang_invoke_VarHandle_getVolatile(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getVolatile

	READ_INST(VarHandleReferences, METHOD_NAME)
	READ_INST(VarHandleInts, METHOD_NAME)
	READ_INST(VarHandleLongs, METHOD_NAME)
	READ_INST(VarHandleChars, METHOD_NAME)
	READ_INST(VarHandleFloats, METHOD_NAME)
	READ_INST(VarHandleDoubles, METHOD_NAME)
	READ_INST(VarHandleBooleans, METHOD_NAME)
	READ_INST(VarHandleBytes, METHOD_NAME)

	READ_STATIC(VarHandleReferences, METHOD_NAME)
	READ_STATIC(VarHandleInts, METHOD_NAME)
	READ_STATIC(VarHandleLongs, METHOD_NAME)
	READ_STATIC(VarHandleChars, METHOD_NAME)
	READ_STATIC(VarHandleFloats, METHOD_NAME)
	READ_STATIC(VarHandleDoubles, METHOD_NAME)
	READ_STATIC(VarHandleBooleans, METHOD_NAME)
	READ_STATIC(VarHandleBytes, METHOD_NAME)

	READ_ARRAY(VarHandleReferences, METHOD_NAME)
	READ_ARRAY(VarHandleInts, METHOD_NAME)
	READ_ARRAY(VarHandleLongs, METHOD_NAME)
	READ_ARRAY(VarHandleChars, METHOD_NAME)
	READ_ARRAY(VarHandleFloats, METHOD_NAME)
	READ_ARRAY(VarHandleDoubles, METHOD_NAME)
	READ_ARRAY(VarHandleBooleans, METHOD_NAME)
	READ_ARRAY(VarHandleBytes, METHOD_NAME)

	READ_ARRAY_HANDLE(VarHandleByteArrayAsChars, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsDoubles, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsFloats, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsInts, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsLongs, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsShorts, METHOD_NAME)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAcquire(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAcquire

	READ_INST(VarHandleReferences, METHOD_NAME)
	READ_INST(VarHandleInts, METHOD_NAME)
	READ_INST(VarHandleLongs, METHOD_NAME)
	READ_INST(VarHandleChars, METHOD_NAME)
	READ_INST(VarHandleFloats, METHOD_NAME)
	READ_INST(VarHandleDoubles, METHOD_NAME)
	READ_INST(VarHandleBooleans, METHOD_NAME)
	READ_INST(VarHandleBytes, METHOD_NAME)

	READ_STATIC(VarHandleReferences, METHOD_NAME)
	READ_STATIC(VarHandleInts, METHOD_NAME)
	READ_STATIC(VarHandleLongs, METHOD_NAME)
	READ_STATIC(VarHandleChars, METHOD_NAME)
	READ_STATIC(VarHandleFloats, METHOD_NAME)
	READ_STATIC(VarHandleDoubles, METHOD_NAME)
	READ_STATIC(VarHandleBooleans, METHOD_NAME)
	READ_STATIC(VarHandleBytes, METHOD_NAME)

	READ_ARRAY(VarHandleReferences, METHOD_NAME)
	READ_ARRAY(VarHandleInts, METHOD_NAME)
	READ_ARRAY(VarHandleLongs, METHOD_NAME)
	READ_ARRAY(VarHandleChars, METHOD_NAME)
	READ_ARRAY(VarHandleFloats, METHOD_NAME)
	READ_ARRAY(VarHandleDoubles, METHOD_NAME)
	READ_ARRAY(VarHandleBooleans, METHOD_NAME)
	READ_ARRAY(VarHandleBytes, METHOD_NAME)

	READ_ARRAY_HANDLE(VarHandleByteArrayAsChars, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsDoubles, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsFloats, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsInts, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsLongs, METHOD_NAME)
	READ_ARRAY_HANDLE(VarHandleByteArrayAsShorts, METHOD_NAME)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndAdd(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndAdd

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndAddAcquire(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndAddAcquire

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndAddRelease(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndAddRelease

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndBitwiseAnd(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndBitwiseAnd

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndBitwiseAndAcquire(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndBitwiseAndAcquire

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndBitwiseAndRelease(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndBitwiseAndRelease

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndBitwiseOr(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndBitwiseOr

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndBitwiseOrAcquire(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndBitwiseOrAcquire

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndBitwiseOrRelease(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndBitwiseOrRelease

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndBitwiseXor(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndBitwiseXor

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndBitwiseXorAcquire(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndBitwiseXorAcquire

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndBitwiseXorRelease(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndBitwiseXorRelease

	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndSet(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndSet

	READ_WRITE_INST(VarHandleReferences, METHOD_NAME, $of)
	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleReferences, METHOD_NAME, $of)
	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndSetAcquire(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndSetAcquire

	READ_WRITE_INST(VarHandleReferences, METHOD_NAME, $of)
	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleReferences, METHOD_NAME, $of)
	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

Object* _Java_java_lang_invoke_VarHandle_getAndSetRelease(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME getAndSetRelease

	READ_WRITE_INST(VarHandleReferences, METHOD_NAME, $of)
	READ_WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	READ_WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_STATIC(VarHandleReferences, METHOD_NAME, $of)
	READ_WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	READ_WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	READ_WRITE_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	READ_WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	READ_WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	READ_WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	READ_WRITE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	READ_WRITE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	READ_WRITE_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	READ_WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return nullptr;
}

void _Java_java_lang_invoke_VarHandle_set(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME set

	WRITE_INST(VarHandleReferences, METHOD_NAME, $of)
	WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_STATIC(VarHandleReferences, METHOD_NAME, $of)
	WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsChars, METHOD_NAME, $charValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsDoubles, METHOD_NAME, $doubleValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsFloats, METHOD_NAME, $floatValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsInts, METHOD_NAME, $intValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsLongs, METHOD_NAME, $longValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsShorts, METHOD_NAME, $shortValue);

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
}

void _Java_java_lang_invoke_VarHandle_setOpaque(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME setOpaque

	WRITE_INST(VarHandleReferences, METHOD_NAME, $of)
	WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_STATIC(VarHandleReferences, METHOD_NAME, $of)
	WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsChars, METHOD_NAME, $charValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsDoubles, METHOD_NAME, $doubleValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsFloats, METHOD_NAME, $floatValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsInts, METHOD_NAME, $intValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsLongs, METHOD_NAME, $longValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsShorts, METHOD_NAME, $shortValue);

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
}

void _Java_java_lang_invoke_VarHandle_setRelease(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME setRelease

	WRITE_INST(VarHandleReferences, METHOD_NAME, $of)
	WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_STATIC(VarHandleReferences, METHOD_NAME, $of)
	WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsChars, METHOD_NAME, $charValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsDoubles, METHOD_NAME, $doubleValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsFloats, METHOD_NAME, $floatValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsInts, METHOD_NAME, $intValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsLongs, METHOD_NAME, $longValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsShorts, METHOD_NAME, $shortValue);

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
}

void _Java_java_lang_invoke_VarHandle_setVolatile(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME setVolatile

	WRITE_INST(VarHandleReferences, METHOD_NAME, $of)
	WRITE_INST(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_INST(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_INST(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_STATIC(VarHandleReferences, METHOD_NAME, $of)
	WRITE_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	WRITE_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	WRITE_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	WRITE_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	WRITE_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	WRITE_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	WRITE_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	WRITE_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsChars, METHOD_NAME, $charValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsDoubles, METHOD_NAME, $doubleValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsFloats, METHOD_NAME, $floatValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsInts, METHOD_NAME, $intValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsLongs, METHOD_NAME, $longValue);
	WRITE_ARRAY_HANDLE(VarHandleByteArrayAsShorts, METHOD_NAME, $shortValue);

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
}

bool _Java_java_lang_invoke_VarHandle_weakCompareAndSetPlain(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME weakCompareAndSetPlain

	CAS_INST(VarHandleReferences, METHOD_NAME, $of)
	CAS_INST(VarHandleInts, METHOD_NAME, $intValue)
	CAS_INST(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_INST(VarHandleChars, METHOD_NAME, $charValue)
	CAS_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	CAS_STATIC(VarHandleReferences, METHOD_NAME, $of)
	CAS_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	CAS_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	CAS_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	CAS_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	CAS_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	CAS_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	CAS_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return false;
}

bool _Java_java_lang_invoke_VarHandle_weakCompareAndSet(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME weakCompareAndSet

	CAS_INST(VarHandleReferences, METHOD_NAME, $of)
	CAS_INST(VarHandleInts, METHOD_NAME, $intValue)
	CAS_INST(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_INST(VarHandleChars, METHOD_NAME, $charValue)
	CAS_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	CAS_STATIC(VarHandleReferences, METHOD_NAME, $of)
	CAS_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	CAS_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	CAS_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	CAS_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	CAS_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	CAS_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	CAS_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return false;
}

bool _Java_java_lang_invoke_VarHandle_weakCompareAndSetAcquire(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME weakCompareAndSetAcquire

	CAS_INST(VarHandleReferences, METHOD_NAME, $of)
	CAS_INST(VarHandleInts, METHOD_NAME, $intValue)
	CAS_INST(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_INST(VarHandleChars, METHOD_NAME, $charValue)
	CAS_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	CAS_STATIC(VarHandleReferences, METHOD_NAME, $of)
	CAS_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	CAS_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	CAS_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	CAS_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	CAS_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	CAS_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	CAS_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return false;
}

bool _Java_java_lang_invoke_VarHandle_weakCompareAndSetRelease(VarHandle* varHandle, ObjectArray* args) {
	Class* clazz = $nc($of(varHandle))->getClass();

	#define METHOD_NAME weakCompareAndSetRelease

	CAS_INST(VarHandleReferences, METHOD_NAME, $of)
	CAS_INST(VarHandleInts, METHOD_NAME, $intValue)
	CAS_INST(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_INST(VarHandleChars, METHOD_NAME, $charValue)
	CAS_INST(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_INST(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_INST(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_INST(VarHandleBytes, METHOD_NAME, $byteValue)

	CAS_STATIC(VarHandleReferences, METHOD_NAME, $of)
	CAS_STATIC(VarHandleInts, METHOD_NAME, $intValue)
	CAS_STATIC(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_STATIC(VarHandleChars, METHOD_NAME, $charValue)
	CAS_STATIC(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_STATIC(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_STATIC(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_STATIC(VarHandleBytes, METHOD_NAME, $byteValue)

	CAS_ARRAY(VarHandleReferences, METHOD_NAME, $of)
	CAS_ARRAY(VarHandleInts, METHOD_NAME, $intValue)
	CAS_ARRAY(VarHandleLongs, METHOD_NAME, $longValue)
	CAS_ARRAY(VarHandleChars, METHOD_NAME, $charValue)
	CAS_ARRAY(VarHandleFloats, METHOD_NAME, $floatValue)
	CAS_ARRAY(VarHandleDoubles, METHOD_NAME, $doubleValue)
	CAS_ARRAY(VarHandleBooleans, METHOD_NAME, $booleanValue)
	CAS_ARRAY(VarHandleBytes, METHOD_NAME, $byteValue)

	#undef METHOD_NAME

	$throwNew(IllegalAccessError);
	return false;
}