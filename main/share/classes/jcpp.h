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

#ifndef _jcpp_h_
#define _jcpp_h_
//$$

#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ObjectManager.h>
#include <java/lang/CallerHelper.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Class.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Short.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Float.h>
#include <java/lang/Double.h>
#include <java/lang/Boolean.h>
#include <java/lang/Character.h>
#include <java/lang/Void.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/NullPointerException.h>
#include <java/io/PrintStream.h>

#include <new>
#include <typeinfo>

#define $StringBuilder ::java::lang::StringBuilder

#define $connectMacro0(l, r) l ## r
#define $connectMacro1(l, r) $connectMacro0(l, r)
#define $connectMacro(l, r) $connectMacro1(l, r)
#define $connectMacroLine(x) $connectMacro(x, __LINE__)

#define $hasFlag(flags, flag) (((flags) & (flag)) == (flag))

// get array length
#define $lengthOf(x) (sizeof(x) / sizeof(x[0]))

inline ::std::nullptr_t $nullcheck(::std::nullptr_t) {
	::java::lang::Object0::throwNullPointerException();
	return nullptr;
}

template<typename T>
inline T* $nullcheck(T* obj) {
	if (obj == nullptr) {
		::java::lang::Object0::throwNullPointerException();
	}
	return obj;
}
template<typename T>
inline T* $nullcheck(const $volatile(T*)& obj) {
	T* v = obj;
	if (v == nullptr) {
		::java::lang::Object0::throwNullPointerException();
	}
	return v;
}

#define JCPP_ENABLE_NC
#ifdef JCPP_ENABLE_NC
	#define $nc(x) $nullcheck(x)
#else
	#ifdef _DEBUG
		#define $nc(x) $nullcheck(x)
	#else
		#define $nc(x) (x)
	#endif
#endif

inline ::java::lang::Object0* $toObject0(::std::nullptr_t) {
	return (::java::lang::Object0*)nullptr;
}
template<typename T, $enable_if(!$is_object0(T))>
inline ::java::lang::Object0* $toObject0(const T* inst) {
	if (inst != nullptr) {
#ifdef JCPP_ENABLE_CHECK_TO_OBJECT0_ADDRESS
		if (::java::lang::ObjectManager::checkToObject0Address(inst)) {
			return (::java::lang::Object0*)(void*)inst;
		}
#endif
		return ((::java::lang::Object*)(void*)inst)->toObject0$();
	}
	return nullptr;
}
template<typename T, $enable_if($is_object0(T))>
inline ::java::lang::Object0* $toObject0(const T* inst) {
	return (::java::lang::Object0*)(void*)inst;
}
template<typename T>
inline ::java::lang::Object0* $toObject0(const $volatile(T*)& inst) {
	return $toObject0(inst.get());
}

template<typename T, $enable_if(!$is_object0(T))>
inline ::java::lang::Object0* $sureObject0(const T* inst) {
	$nullcheck(inst);
	//return ::java::lang::Object0::sureObject0(inst);
#ifdef JCPP_ENABLE_CHECK_TO_OBJECT0_ADDRESS
	if (::java::lang::ObjectManager::checkToObject0Address(inst)) {
		return (::java::lang::Object0*)(void*)inst;
	}
#endif
	return ((::java::lang::Object*)(void*)inst)->toObject0$();
}
template<typename T, $enable_if($is_object0(T))>
inline ::java::lang::Object0* $sureObject0(const T* inst) {
	$nullcheck(inst);
	return (::java::lang::Object0*)(void*)$nc(inst);
}
template<typename T>
inline ::java::lang::Object0* $sureObject0(const $volatile(T*)& inst) {
	return $sureObject0(inst.get());
}

template<typename T, $enable_if(::java::lang::MarkReader<T>::preload || ::java::lang::MarkReader<T>::preinit)>
inline void $load() {
}

template<typename T, $enable_if(!(::java::lang::MarkReader<T>::preload || ::java::lang::MarkReader<T>::preinit) && !$is_base_of(::java::lang::ObjectArray, T))>
inline void $load() {
	if (T::class$ == nullptr) {
		T::load$(nullptr, false);
	}
}

template<typename T, $enable_if(!(::java::lang::MarkReader<T>::preload || ::java::lang::MarkReader<T>::preinit) && $is_base_of(::java::lang::ObjectArray, T) && $is_base_of(::java::lang::Object, typename T::T))>
inline void $load() {
	$load<typename T::T>();
}

template<typename T, $enable_if(!(::java::lang::MarkReader<T>::preload || ::java::lang::MarkReader<T>::preinit) && $is_base_of(::java::lang::ObjectArray, T) && !$is_base_of(::java::lang::Object, typename T::T))>
inline void $load() {
}

#define $load(...) $load<__VA_ARGS__>()

template<typename T, $enable_if($is_base_of(::java::lang::BooleanArray, T))>
inline ::java::lang::Class* $getClass() {
	return ::java::lang::BooleanArray::class$;
}
template<typename T, $enable_if($is_base_of(::java::lang::ByteArray, T))>
inline ::java::lang::Class* $getClass() {
	return ::java::lang::ByteArray::class$;
}
template<typename T, $enable_if($is_base_of(::java::lang::ShortArray, T))>
inline ::java::lang::Class* $getClass() {
	return ::java::lang::ShortArray::class$;
}
template<typename T, $enable_if($is_base_of(::java::lang::IntArray, T))>
inline ::java::lang::Class* $getClass() {
	return ::java::lang::IntArray::class$;
}
template<typename T, $enable_if($is_base_of(::java::lang::LongArray, T))>
inline ::java::lang::Class* $getClass() {
	return ::java::lang::LongArray::class$;
}
template<typename T, $enable_if($is_base_of(::java::lang::FloatArray, T))>
inline ::java::lang::Class* $getClass() {
	return ::java::lang::FloatArray::class$;
}
template<typename T, $enable_if($is_base_of(::java::lang::DoubleArray, T))>
inline ::java::lang::Class* $getClass() {
	return ::java::lang::DoubleArray::class$;
}
template<typename T, $enable_if($is_base_of(::java::lang::CharArray, T))>
inline ::java::lang::Class* $getClass() {
	return ::java::lang::CharArray::class$;
}
template<typename T, $enable_if(!$is_base_of(::java::lang::ObjectArray, T)
		&& !$is_base_of(::java::lang::BooleanArray, T)
		&& !$is_base_of(::java::lang::ByteArray, T)
		&& !$is_base_of(::java::lang::ShortArray, T)
		&& !$is_base_of(::java::lang::IntArray, T)
		&& !$is_base_of(::java::lang::LongArray, T)
		&& !$is_base_of(::java::lang::FloatArray, T)
		&& !$is_base_of(::java::lang::DoubleArray, T)
		&& !$is_base_of(::java::lang::CharArray, T)
	)>
inline ::java::lang::Class* $getClass() {
	return T::class$;
}

template<typename T, $enable_if($is_base_of(::java::lang::ObjectArray, T) && $is_same(::java::lang::ObjectArray, T))>
inline ::java::lang::Class* $getClass() {
	return T::class$;
}

template<typename T, int dim, $enable_if($is_same(int8_t, T))>
inline ::java::lang::Class* $getObjectArrayClass() {
	return ::java::lang::Byte::TYPE->arrayType(dim);
}

template<typename T, int dim, $enable_if($is_same(int16_t, T))>
inline ::java::lang::Class* $getObjectArrayClass() {
	return ::java::lang::Short::TYPE->arrayType(dim);
}

template<typename T, int dim, $enable_if($is_same(int32_t, T))>
inline ::java::lang::Class* $getObjectArrayClass() {
	return ::java::lang::Integer::TYPE->arrayType(dim);
}

template<typename T, int dim, $enable_if($is_same(int64_t, T))>
inline ::java::lang::Class* $getObjectArrayClass() {
	return ::java::lang::Long::TYPE->arrayType(dim);
}

template<typename T, int dim, $enable_if($is_same(float, T))>
inline ::java::lang::Class* $getObjectArrayClass() {
	return ::java::lang::Float::TYPE->arrayType(dim);
}

template<typename T, int dim, $enable_if($is_same(double, T))>
inline ::java::lang::Class* $getObjectArrayClass() {
	return ::java::lang::Double::TYPE->arrayType(dim);
}

template<typename T, int dim, $enable_if($is_same(bool, T))>
inline ::java::lang::Class* $getObjectArrayClass() {
	return ::java::lang::Boolean::TYPE->arrayType(dim);
}

template<typename T, int dim, $enable_if($is_same(char16_t, T))>
inline ::java::lang::Class* $getObjectArrayClass() {
	return ::java::lang::Character::TYPE->arrayType(dim);
}

template<typename T, int dim, $enable_if($is_base_of(::java::lang::Object, T))>
inline ::java::lang::Class* $getObjectArrayClass() {
	return T::class$->arrayType(dim);
}

template<typename T, $enable_if($is_base_of(::java::lang::ObjectArray, T) && !$is_same(::java::lang::ObjectArray, T)
		&& !$is_base_of(::java::lang::BooleanArray, T)
		&& !$is_base_of(::java::lang::ByteArray, T)
		&& !$is_base_of(::java::lang::ShortArray, T)
		&& !$is_base_of(::java::lang::IntArray, T)
		&& !$is_base_of(::java::lang::LongArray, T)
		&& !$is_base_of(::java::lang::FloatArray, T)
		&& !$is_base_of(::java::lang::DoubleArray, T)
		&& !$is_base_of(::java::lang::CharArray, T)
	)>
inline ::java::lang::Class* $getClass() {
	return $getObjectArrayClass<typename T::T, T::D>();
}

#define $getClass(...) ($getClass<__VA_ARGS__>())

template<typename T, $enable_if(::java::lang::MarkReader<T>::preinit || (::java::lang::MarkReader<T>::preload && ::java::lang::MarkReader<T>::noClassInit))>
inline void $init() {
}

template<typename T, $enable_if(
	!(::java::lang::MarkReader<T>::preinit || (::java::lang::MarkReader<T>::preload && ::java::lang::MarkReader<T>::noClassInit))
)>
inline void $init() {
	if (T::class$ == nullptr || T::class$->state != ::java::lang::Class::CLASS_STATE_INITIALIZED) {
		T::load$(nullptr, true);
	}
}

#define $init(...) $init<__VA_ARGS__>()

template<typename To, typename From, $enable_if($is_convertible(From*, To*))>
To* $tryCast(From* from) {
	return from;
}

template<typename To, typename From, $enable_if(
	!$is_convertible(From*, To*) &&
	$is_same(::java::lang::Object, To)
)>
To* $tryCast(From* from) {
	return (::java::lang::Object*)(void*)from;
}

template<typename To, typename From, $enable_if(
	!$is_convertible(From*, To*) &&
	!$is_same(::java::lang::Object, To) &&
	$is_same(::java::lang::Object0, To) && $is_object0(From)
)>
To* $tryCast(From* from) {
	return (::java::lang::Object0*)(void*)from;
}

template<typename To, typename From>
inline To* $tryCast(const $volatile(From*)& f) {
	return $tryCast<To>(f.get());
}

template<typename To>
inline To* $tryCast(::std::nullptr_t) {
	return (To*)nullptr;
}

// used in $catch()
template<typename To, $enable_if($is_base_of(::java::lang::Throwable, To))>
inline To* $tryCast(const ::java::lang::Throwable* ex) {
	return (To*)(ex);
}

#ifdef JCPP_USE_NATIVE_OBJECT_STACK
	#define $ref(...) (__VA_ARGS__)

	#define $var(type, name, ...) \
		type* name = $tryCast<type>(__VA_ARGS__);
	#define $auto(name, ...) \
		auto name = __VA_ARGS__;
#elif defined(JCPP_USE_NATIVE_OBJECT_STACK_MAGIC)
	#define $ref(...) ::java::lang::makeMagicRef(__VA_ARGS__).t

	#define $var(type, name, ...) \
			type* name##$init = $tryCast<type>(__VA_ARGS__); \
			volatile ::java::lang::MagicObjectVar name##$objvar(name##$init); \
			type*& name = (type*&)name##$objvar.obj;
	#define $auto(name, ...) \
			auto name##$init = __VA_ARGS__; \
			volatile ::java::lang::MagicObjectVar name##$objvar(name##$init); \
			decltype(name##$init)& name = (decltype(name##$init)&)name##$objvar.obj;
#else
	//#define $ref(...) ::java::lang::makeRef(__VA_ARGS__).t
	// #define $ref(x) ((decltype(x))(void*)::java::lang::Ref($of(x)).t)

	#ifdef JCPP_OBJECT_VAR_STACK_DUAL_STACK
	//	#define $var(type, name, ...) \
	//			type* name = $tryCast<type>(__VA_ARGS__); \
	//			::java::lang::ObjectVar name##$objvar(name, $currentStackCache);
	//	#define $auto(name, ...) \
	//			auto name = __VA_ARGS__; \
	//			::java::lang::ObjectVar name##$objvar(name, $currentStackCache);
	#elif defined(JCPP_OBJECT_VAR_STACK_SAVE_ADDRESS)
		#define $var(type, name, ...) \
				type* name = $tryCast<type>(__VA_ARGS__); \
				::java::lang::ObjectVar<type> name##$objvar((::java::lang::Object**)&name);
		#define $auto(name, ...) \
				auto name = __VA_ARGS__; \
				::java::lang::ObjectVar<decltype(name##$objvalue)> name##$objvar((::java::lang::Object**)&name);
	#else
		#define $var(type, name, ...) \
			type*& name = (type*&)(void*&)::java::lang::ObjectStack::currentObjectStack()->pushLocalVar($tryCast<type>(__VA_ARGS__)); \
			::java::lang::ObjectVar<type> name##$objvar;
		#define $auto(name, ...) \
			auto name##$objvalue = __VA_ARGS__; \
			decltype(name##$objvalue)& name = (decltype(name##$objvalue)&)(void*&)::java::lang::ObjectStack::currentObjectStack()->pushLocalVar(name##$objvalue); \
			::java::lang::ObjectVar<decltype(name##$objvalue)> name##$objvar;
	#endif // JCPP_OBJECT_VAR_STACK_SAVE_ADDRESS
#endif // JCPP_USE_NATIVE_OBJECT_STACK

#ifdef $
#undef $
#endif

#define $(...) $ref(__VA_ARGS__)

template<typename T = int8_t>
inline T* $allocRaw(int64_t length = 1) {
	return (T*)::java::lang::ObjectManager::allocRaw(sizeof(T[1]) * length);
}

template<typename T = int8_t>
inline T* $allocRawOrNull(int64_t length = 1) {
	return (T*)::java::lang::ObjectManager::allocRawOrNull(sizeof(T[1]) * length);
}

inline void $freeRaw(void* raw) {
	::java::lang::ObjectManager::freeRaw(raw);
}

template<typename T = int8_t>
inline T* $allocRawStatic(int64_t length = 1) {
	return (T*)::java::lang::ObjectManager::allocRawStatic(sizeof(T[1]) * length);
}

template<typename T = int8_t>
inline T* $allocRawStaticOrNull(int64_t length = 1) {
	return (T*)::java::lang::ObjectManager::allocRawStaticOrNull(sizeof(T[1]) * length);
}

inline int64_t $sizeOfRaw(const void* raw) {
	return ::java::lang::ObjectManager::sizeOfRaw(raw);
}

inline void $memsetRaw(void* raw, int value) {
	::java::lang::ObjectManager::memsetRaw(raw, value);
}

template<typename T, $enable_if($is_base_of(::java::lang::Object, T) && !$is_base_of(::java::lang::BaseArray, T))>
inline T* $alloc() {
	$load(T);
	return new(::java::lang::ObjectManager::alloc(T::class$, sizeof(T))) T();
}

template<typename T, $enable_if($is_base_of(::java::lang::Object, T) && !$is_base_of(::java::lang::BaseArray, T))>
inline T* $allocStatic() {
	$load(T);
	return new(::java::lang::ObjectManager::allocStatic(T::class$, sizeof(T))) T();
}
template<typename T, $enable_if($is_base_of(::java::lang::BaseArray, T))>
inline T* $allocStatic(int32_t length) {
	$load(T);
	return new(::java::lang::ObjectManager::allocStaticArray($getClass(T), length)) T(length);
}

template<typename T, $enable_if($is_base_of(::java::lang::Object, T) && !$is_base_of(::java::lang::BaseArray, T))>
inline T* $allocConst() {
	$load(T);
	return new(::java::lang::ObjectManager::allocConst(T::class$, sizeof(T))) T();
}
template<typename T, $enable_if($is_base_of(::java::lang::BaseArray, T))>
inline T* $allocConst(int32_t length) {
	$load(T);
	return new(::java::lang::ObjectManager::allocConstArray($getClass(T), length)) T(length);
}

template<typename T, $enable_if($is_base_of(::java::lang::Object, T) && !$is_base_of(::java::lang::BaseArray, T) && $has_class(T)), typename... Types>
inline T* $new(Types... _Args) {
	$init(T);
	$var(T, inst, new(::java::lang::ObjectManager::alloc(T::class$, sizeof(T))) T());
	inst->init$(::std::forward<Types>(_Args)...);
	return inst;
}

template<typename T, $enable_if(::std::is_class_v<T> && !$is_base_of(::java::lang::Object, T))>
inline $Objectx<T>* $alloc() {
	$var($Objectx<T>, inst, new(::java::lang::ObjectManager::alloc(typeid(T).name(), (int64_t)sizeof($Objectx<T>), $getMark(T), false)) $Objectx<T>());
	return inst;
}

template<typename T, $enable_if(::std::is_class_v<T> && !$is_base_of(::java::lang::Object, T)), typename... Types>
inline $Objectx<T>* $new(Types... _Args) {
	$var($Objectx<T>, inst, new(::java::lang::ObjectManager::alloc(typeid(T).name(), (int64_t)sizeof($Objectx<T>), $getMark(T), false)) $Objectx<T>());
	T* t = inst;
	new (t) T(::std::forward<Types>(_Args)...);
	return inst;
}

template<typename T, $enable_if(!::std::is_class_v<T>)>
inline $Objectv<T>* $alloc() {
	$var($Objectv<T>, inst, new(::java::lang::ObjectManager::alloc(typeid(T).name(), (int64_t)sizeof($Objectv<T>), $getMark(T), false)) $Objectv<T>());
	return inst;
}

template<typename T, $enable_if(!::std::is_class_v<T>)>
inline $Objectv<T>* $new(T& value) {
	$var($Objectv<T>, inst, new(::java::lang::ObjectManager::alloc(typeid(T).name(), (int64_t)sizeof($Objectv<T>), $getMark(T), false)) $Objectv<T>());
	inst->value = value;
	return inst;
}

template<typename T, $enable_if(
		!$is_base_of(::java::lang::BaseArray, T)
		&& !$has_class(T)
		&& $is_base_of(::java::lang::Object, T)
	), class... Types>
inline T* $new(Types... _Args) {
	$var(T, inst, new(::java::lang::ObjectManager::alloc(typeid(T).name(), (int64_t)sizeof(T), $getMark(T), true)) T());
	inst->init$(::std::forward<Types>(_Args)...);
	return inst;
}

template<typename T, $enable_if($is_base_of(::java::lang::ByteArray, T))>
inline $Array<int8_t>* $new(int32_t length) {
	return ::java::lang::ObjectManager::newByteArray(length);
}

template<typename T,  $enable_if($is_base_of(::java::lang::ShortArray, T))>
inline $Array<int16_t>* $new(int32_t length) {
	return ::java::lang::ObjectManager::newShortArray(length);
}

template<typename T, $enable_if($is_base_of(::java::lang::IntArray, T))>
inline $Array<int32_t>* $new(int32_t length) {
	return ::java::lang::ObjectManager::newIntArray(length);
}

template<typename T, $enable_if($is_base_of(::java::lang::LongArray, T))>
inline $Array<int64_t>* $new(int32_t length) {
	return ::java::lang::ObjectManager::newLongArray(length);
}

template<typename T, $enable_if($is_base_of(::java::lang::FloatArray, T))>
inline $Array<float>* $new(int32_t length) {
	return ::java::lang::ObjectManager::newFloatArray(length);
}

template<typename T, $enable_if($is_base_of(::java::lang::DoubleArray, T))>
inline $Array<double>* $new(int32_t length) {
	return ::java::lang::ObjectManager::newDoubleArray(length);
}

template<typename T, $enable_if($is_base_of(::java::lang::BooleanArray, T))>
inline $Array<bool>* $new(int32_t length) {
	return ::java::lang::ObjectManager::newBooleanArray(length);
}

template<typename T, $enable_if($is_base_of(::java::lang::CharArray, T))>
inline $Array<char16_t>* $new(int32_t length) {
	return ::java::lang::ObjectManager::newCharArray(length);
}

template<typename T, int dim, $enable_if($is_same(int8_t, T))>
inline ::java::lang::Object* $newArray(int32_t length) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Byte::TYPE, dim, length);
}

template<typename T, int dim, $enable_if($is_same(int16_t, T))>
inline ::java::lang::Object* $newArray(int32_t length) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Short::TYPE, dim, length);
}

template<typename T, int dim, $enable_if($is_same(int32_t, T))>
inline ::java::lang::Object* $newArray(int32_t length) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Integer::TYPE, dim, length);
}

template<typename T, int dim, $enable_if($is_same(int64_t, T))>
inline ::java::lang::Object* $newArray(int32_t length) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Long::TYPE, dim, length);
}

template<typename T, int dim, $enable_if($is_same(float, T))>
inline ::java::lang::Object* $newArray(int32_t length) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Float::TYPE, dim, length);
}

template<typename T, int dim, $enable_if($is_same(double, T))>
inline ::java::lang::Object* $newArray(int32_t length) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Double::TYPE, dim, length);
}

template<typename T, int dim, $enable_if($is_same(bool, T))>
inline ::java::lang::Object* $newArray(int32_t length) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Boolean::TYPE, dim, length);
}

template<typename T, int dim, $enable_if($is_same(char16_t, T))>
inline ::java::lang::Object* $newArray(int32_t length) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Character::TYPE, dim, length);
}

template<typename T, int dim, $enable_if($is_base_of(::java::lang::Object, T))>
inline ::java::lang::Object* $newArray(int32_t length) {
	$load(T);
	return ::java::lang::ObjectManager::newObjectArray(T::class$, dim, length);
}

template<typename T, int dim, typename... Params>
inline ::java::lang::Object* $newArray(int32_t length, Params... lengths) {
	::java::lang::ObjectArray* a = (::java::lang::ObjectArray*)$newArray<T, dim>(length);
	$var(::java::lang::ObjectArray, array, a);
	for (int32_t i = 0; i < length; i++) {
		::java::lang::Object0* obj0 = (::java::lang::Object0*)$newArray<T, dim - 1>(lengths...);
		array->set(i, obj0);
	}
	return array;
}

template<typename T, typename... Params, $enable_if($is_base_of(::java::lang::ObjectArray, T) && !$is_same(::java::lang::ObjectArray, T))>
inline T* $new(Params... lengths) {
	return (T*)$newArray<typename T::T, T::D>(lengths...);
}

template<typename T, $enable_if($is_same(::java::lang::ObjectArray, T))>
inline T* $new(int32_t length) {
	return ::java::lang::ObjectManager::newObjectArray(length);
}

template<typename T, int dim, $enable_if($is_base_of(::java::lang::Object, T))>
inline ::java::lang::Object* $newObjectArray(const ::std::initializer_list<Object$*>& elements) {
	$load(T);
	return ::java::lang::ObjectManager::newObjectArray(T::class$, dim, elements);
}

template<typename T, int dim, $enable_if($is_same(int8_t, T))>
inline ::java::lang::Object* $newObjectArray(const ::std::initializer_list<Object$*>& elements) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Byte::TYPE, dim, elements);
}

template<typename T, int dim, $enable_if($is_same(int16_t, T))>
inline ::java::lang::Object* $newObjectArray(const ::std::initializer_list<Object$*>& elements) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Short::TYPE, dim, elements);
}

template<typename T, int dim, $enable_if($is_same(int32_t, T))>
inline ::java::lang::Object* $newObjectArray(const ::std::initializer_list<Object$*>& elements) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Integer::TYPE, dim, elements);
}

template<typename T, int dim, $enable_if($is_same(int64_t, T))>
inline ::java::lang::Object* $newObjectArray(const ::std::initializer_list<Object$*>& elements) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Long::TYPE, dim, elements);
}

template<typename T, int dim, $enable_if($is_same(float, T))>
inline ::java::lang::Object* $newObjectArray(const ::std::initializer_list<Object$*>& elements) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Float::TYPE, dim, elements);
}

template<typename T, int dim, $enable_if($is_same(double, T))>
inline ::java::lang::Object* $newObjectArray(const ::std::initializer_list<Object$*>& elements) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Double::TYPE, dim, elements);
}

template<typename T, int dim, $enable_if($is_same(bool, T))>
inline ::java::lang::Object* $newObjectArray(const ::std::initializer_list<Object$*>& elements) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Boolean::TYPE, dim, elements);
}

template<typename T, int dim, $enable_if($is_same(char16_t, T))>
inline ::java::lang::Object* $newObjectArray(const ::std::initializer_list<Object$*>& elements) {
	return ::java::lang::ObjectManager::newObjectArray(::java::lang::Character::TYPE, dim, elements);
}

template<typename T, $enable_if($is_base_of(::java::lang::ObjectArray, T) && !$is_same(::java::lang::ObjectArray, T))>
inline T* $new(const ::std::initializer_list<Object$*>& elements) {
	return (T*)$newObjectArray<typename T::T, T::D>(elements);
}
template<typename T, $enable_if($is_same(::java::lang::ObjectArray, T))>
inline T* $new(const ::std::initializer_list<Object$*>& elements) {
	return (T*)$newObjectArray<typename ::java::lang::Object, 1>(elements);
}

template<typename T, $enable_if($is_base_of(::java::lang::ByteArray, T))>
inline $Array<int8_t>* $new(const ::std::initializer_list<int8_t>& elements) {
	return ::java::lang::ObjectManager::newByteArray(elements);
}

template<typename T, $enable_if($is_base_of(::java::lang::ShortArray, T))>
inline $Array<int16_t>* $new(const ::std::initializer_list<int16_t>& elements) {
	return ::java::lang::ObjectManager::newShortArray(elements);
}

template<typename T, $enable_if($is_base_of(::java::lang::IntArray, T))>
inline $Array<int32_t>* $new(const ::std::initializer_list<int32_t>& elements) {
	return ::java::lang::ObjectManager::newIntArray(elements);
}

template<typename T, $enable_if($is_base_of(::java::lang::LongArray, T))>
inline $Array<int64_t>* $new(const ::std::initializer_list<int64_t>& elements) {
	return ::java::lang::ObjectManager::newLongArray(elements);
}

template<typename T, $enable_if($is_base_of(::java::lang::FloatArray, T))>
inline $Array<float>* $new(const ::std::initializer_list<float>& elements) {
	return ::java::lang::ObjectManager::newFloatArray(elements);
}

template<typename T, $enable_if($is_base_of(::java::lang::DoubleArray, T))>
inline $Array<double>* $new(const ::std::initializer_list<double>& elements) {
	return ::java::lang::ObjectManager::newDoubleArray(elements);
}

template<typename T, $enable_if($is_base_of(::java::lang::BooleanArray, T))>
inline $Array<bool>* $new(const ::std::initializer_list<bool>& elements) {
	return ::java::lang::ObjectManager::newBooleanArray(elements);
}

template<typename T, $enable_if($is_base_of(::java::lang::CharArray, T))>
inline $Array<char16_t>* $new(const ::std::initializer_list<char16_t>& elements) {
	return ::java::lang::ObjectManager::newCharArray(elements);
}

#define $alloc(x) $alloc<x>()
#define $$alloc(x) $ref($alloc<x>())
#define $new(x, ...) $new<x>(__VA_ARGS__)
#define $$new(x, ...) $ref($new<x>(__VA_ARGS__))

#define $cstr(...) ::java::lang::String::constValueOf(__VA_ARGS__)
#define $str(...) ::java::lang::String::valueOf(__VA_ARGS__)
#define $$str(...) $ref(::java::lang::String::valueOf(__VA_ARGS__))

inline ::java::lang::String* operator "" _s(const char* s, ::std::size_t size) {
	return ::java::lang::String::literalOf(s);
}

inline ::java::lang::String* operator "" _s(const char16_t* s, ::std::size_t size) {
	return ::java::lang::String::literalOf(s);
}

template<typename T1, typename T2, $enable_if($is_pointer(T1) && $is_pointer(T2))>
inline ::java::lang::String* $concat(T1 s1, T2 s2) {
	return ::java::lang::String::concat(s1, s2);
}
template<typename T1, typename T2, $enable_if(!$is_pointer(T1) && $is_pointer(T2))>
inline ::java::lang::String* $concat(T1 s1, T2 s2) {
	return ::java::lang::String::concat($$str(s1), s2);
}
template<typename T1, typename T2, $enable_if($is_pointer(T1) && !$is_pointer(T2))>
inline ::java::lang::String* $concat(T1 s1, T2 s2) {
	return ::java::lang::String::concat(s1, $$str(s2));
}
template<typename T1, typename T2, $enable_if(!$is_pointer(T1) && !$is_pointer(T2))>
inline ::java::lang::String* $concat(T1 s1, T2 s2) {
	return ::java::lang::String::concat($$str(s1), $$str(s2));
}
template<typename T>
inline ::java::lang::String* $concat(T s, ::std::nullptr_t) {
	return ::java::lang::String::concat(s, "null");
}
template<typename T>
inline ::java::lang::String* $concat(::std::nullptr_t, T s) {
	return ::java::lang::String::concat("null", s);
}
inline ::java::lang::String* $concat(::std::nullptr_t, ::std::nullptr_t) {
	return "nullnull"_s;
}
template<typename T1, typename T2>
inline ::java::lang::String* $concat(const $volatile(T1)& s1, T2 s2) {
	return $concat(s1.get(), s2);
}
template<typename T1, typename T2>
inline ::java::lang::String* $concat(T1 s1, const $volatile(T2)& s2) {
	return $concat(s1, s2.get());
}
template<typename T1, typename T2>
inline ::java::lang::String* $concat(const $volatile(T1)& s1, const $volatile(T2)& s2) {
	return $concat(s1.get(), s2.get());
}

#define $$concat(s1, s2) $ref($concat(s1, s2))

template<typename T>
inline ::java::lang::String* $toString(T* x) {
	if (x != nullptr) {
		return x->toString();
	} else {
		return "null"_s;
	}
}
template<typename T>
inline ::java::lang::String* $toString(const $volatile(T*)& x) {
	return $toString(x.get());
}

#define $tostr(...) $toString(__VA_ARGS__)
#define $$tostr(...) $ref($toString(__VA_ARGS__))

class $ObjectMonitorGuard {
public:
	template<typename T>
	inline $ObjectMonitorGuard(const T* object) {
		::java::lang::Object0* obj0 = $sureObject0(object);
		this->object0 = obj0;
		::java::lang::Object0::lock(obj0);
	}
	template<typename T>
	inline $ObjectMonitorGuard(const $volatile(T*)& object) {
		::java::lang::Object0* obj0 = $sureObject0(object.get());
		this->object0 = obj0;
		::java::lang::Object0::lock(obj0);
	}
	inline ~$ObjectMonitorGuard() {
		::java::lang::Object0::unlock(object0);
	}
	$ObjectMonitorGuard(const $ObjectMonitorGuard&) = delete;
	inline $ObjectMonitorGuard($ObjectMonitorGuard&& omg) {
		this->object0 = omg.object0;
		omg.object0 = nullptr;
	}
	mutable ::java::lang::Object0* object0;
};

template<typename T>
inline $ObjectMonitorGuard $makeObjectMonitorGuard(T* t) {
	return $ObjectMonitorGuard(t);
}

class $ObjectMonitorGuardAllowNull {
public:
	template<typename T>
	inline $ObjectMonitorGuardAllowNull(T object) {
		::java::lang::Object0* obj0 = $toObject0(object);
		this->object0 = obj0;
		::java::lang::Object0::lock(obj0);
	}
	inline ~$ObjectMonitorGuardAllowNull() {
		::java::lang::Object0::unlock(object0);
	}
	mutable ::java::lang::Object0* object0;
};

#define $synchronized(x) if ($ObjectMonitorGuard $connectMacroLine(syncGuard$)(x); true)
// TODO this impl maybe used for old c++ version compiler 
// #define $synchronized(x) if ($makeObjectMonitorGuard(x).object0 != nullptr || true)

template<typename T>
inline void $throw0(T e) {
	if (e != nullptr) {
		e->throwWrapper$();
	}
}

#define $throw(e) { \
	$throw0(e); \
	$throwNew(::java::lang::NullPointerException); \
}

#define $throwNew(e, ...) \
	throw $new<e>(__VA_ARGS__)->wrapper$();

#define $pendingException(x) ::java::lang::ObjectManager::setPendingException(x)
#define $catch() (const ::java::lang::Throwable*)::java::lang::ObjectManager::catchPendingException()

#define $offsetOf(owner, member) ((int32_t)(int64_t)&reinterpret_cast<char const volatile&>((((::std::decay<decltype(owner)>::type)0)->member)))
#define $offsetOfThis(member) $offsetOf(this, member)

#define $$nullcheck(x) $ref($nullcheck(x))

template<typename T, $enable_if($is_integral(T))>
inline int32_t $div(int32_t x, T y) {
	if (y == 0) {
		$throwNew(::java::lang::ArithmeticException, "/ by zero"_s);
	}
	if (y == -1 && x == ::java::lang::Integer::MIN_VALUE) {
		return ::java::lang::Integer::MIN_VALUE;
	}
	return (int32_t)(x / y);
}

inline int64_t $div(int32_t x, int64_t y) {
	if (y == 0) {
		$throwNew(::java::lang::ArithmeticException, "/ by zero"_s);
	}
	if (y == -1 && x == ::java::lang::Integer::MIN_VALUE) {
		return ::java::lang::Integer::MIN_VALUE;
	}
	return x / y;
}

template<typename T, $enable_if($is_integral(T))>
inline int64_t $div(int64_t x, T y) {
	if (y == 0) {
		$throwNew(::java::lang::ArithmeticException, "/ by zero"_s);
	}
	if (y == -1 && x == ::java::lang::Long::MIN_VALUE) {
		return ::java::lang::Long::MIN_VALUE;
	}
	return (int64_t)(x / y);
}

template<typename Tx, typename Ty,
	$enable_if($is_same(Tx, double) || $is_same(Ty, double))>
inline double $div(Tx x, Ty y) {
	if (y == 0) {
		union {
			int64_t l;
			double d;
		} u;
		if (x > 0) {
			u.l = 0x7ff0000000000000L;
		} else if (x < 0) {
			u.l = 0xfff0000000000000L;
		} else {
			u.l = 0x7ff8000000000000L;
		}
		return u.d;
	}
	return (x / y);
}

template<typename Tx, typename Ty,
	$enable_if($is_same(Tx, float) || $is_same(Ty, float)),
	$enable_if(!$is_same(Tx, double) && !$is_same(Ty, double))>
inline float $div(Tx x, Ty y) {
	if (y == 0) {
		union {
			int32_t i;
			float f;
		} u;
		if (x > 0) {
			u.i = 0x7f800000;
		} else if (x < 0) {
			u.i = 0xff800000;
		} else {
			u.i = 0x7fc00000;
		}
		return u.f;
	}
	return (x / y);
}
template<typename Tx, typename Ty>
inline auto $div(const $volatile(Tx)& x, Ty y) {
	return $div(x.get(), y);
}
template<typename Tx, typename Ty>
inline auto $div(Tx x, const $volatile(Ty)& y) {
	return $div(x, y.get());
}
template<typename Tx, typename Ty>
inline auto $div(const $volatile(Tx)& x, const $volatile(Ty)& y) {
	return $div(x.get(), y.get());
}

// mod
template<typename TypeX, typename TypeY, $enable_if($is_same(TypeX, int8_t) || $is_same(TypeX, int16_t) || $is_same(TypeX, int32_t))>
inline int32_t $mod(TypeX x, TypeY y) {
	if (y == 0) {
		$throwNew(::java::lang::ArithmeticException, "/ by zero"_s);
	}
	if (y == -1 && x == ::java::lang::Integer::MIN_VALUE) {
		return 0;
	}
	return (int32_t)(x % y);
}

template<typename T>
inline int64_t $mod(int64_t x, T y) {
	if (y == 0) {
		$throwNew(::java::lang::ArithmeticException, "/ by zero"_s);
	}
	if (y == -1 && x == ::java::lang::Long::MIN_VALUE) {
		return 0;
	}
	return (int64_t)(x % y);
}

template<typename TypeX, typename TypeY, $enable_if($is_same(TypeX, double) || $is_same(TypeY, double))>
inline double $mod(TypeX x, TypeY y) {
	return ::java::lang::Double::mod(x, y);
}

template<typename TypeX, typename TypeY,
	$enable_if($is_same(TypeX, float) || $is_same(TypeY, float)),
	$enable_if(!$is_same(TypeX, double) && !$is_same(TypeY, double))>
inline float $mod(TypeX x, TypeY y) {
	return ::java::lang::Float::mod(x, y);
}
template<typename X, typename Y>
inline auto $mod(const $volatile(X)& x, Y y) {
	return $mod(x.get(), y);
}
template<typename X, typename Y>
inline auto $mod(X x, const $volatile(Y)& y) {
	return $mod(x, y.get());
}
template<typename X, typename Y>
inline auto $mod(const $volatile(X)& x, const $volatile(Y)& y) {
	return $mod(x.get(), y.get());
}

// usr
template<typename TypeX, typename TypeY, $enable_if($is_same(TypeX, int8_t) || $is_same(TypeX, int16_t) || $is_same(TypeX, int32_t))>
inline int32_t $usr(TypeX x, TypeY y) {
	return (int32_t)(((uint32_t)(int32_t)x) >> (y & 31));
}
template<typename T>
inline int64_t $usr(int64_t x, T y) {
	return (int64_t)(((uint64_t)x) >> (y & 63));
}
template<typename X, typename Y>
inline auto $usr(const $volatile(X)& x, Y y) {
	return $usr(x.get(), y);
}
template<typename X, typename Y>
inline auto $usr(X x, const $volatile(Y)& y) {
	return $usr(x, y.get());
}
template<typename X, typename Y>
inline auto $usr(const $volatile(X)& x, const $volatile(Y)& y) {
	return $usr(x.get(), y.get());
}

// sr
template<typename TypeX, typename TypeY, $enable_if($is_same(TypeX, int8_t) || $is_same(TypeX, int16_t) || $is_same(TypeX, int32_t))>
inline int32_t $sr(TypeX x, TypeY y) {
	return (int32_t)(((int32_t)x) >> (y & 31));
}
template<typename T>
inline int64_t $sr(int64_t x, T y) {
	return (int64_t)(x >> (y & 63));
}
template<typename X, typename Y>
inline auto $sr(const $volatile(X)& x, Y y) {
	return $sr(x.get(), y);
}
template<typename X, typename Y>
inline auto $sr(X x, const $volatile(Y)& y) {
	return $sr(x, y.get());
}
template<typename X, typename Y>
inline auto $sr(const $volatile(X)& x, const $volatile(Y)& y) {
	return $sr(x.get(), y.get());
}

// sl
template<typename TypeX, typename TypeY, $enable_if($is_same(TypeX, int8_t) || $is_same(TypeX, int16_t) || $is_same(TypeX, int32_t))>
inline int32_t $sl(TypeX x, TypeY y) {
	return (int32_t)(((int32_t)x) << (y & 31));
}
template<typename T>
inline int64_t $sl(int64_t x, T y) {
	return (int64_t)(x << (y & 63));
}
template<typename X, typename Y>
inline auto $sl(const $volatile(X)& x, Y y) {
	return $sl(x.get(), y);
}
template<typename X, typename Y>
inline auto $sl(X x, const $volatile(Y)& y) {
	return $sl(x, y.get());
}
template<typename X, typename Y>
inline auto $sl(const $volatile(X)& x, const $volatile(Y)& y) {
	return $sl(x.get(), y.get());
}

template<typename T, typename Array>
inline T* $arrayGet(Array* array, int32_t index) {
	return (T*)(void*)array->get(index);
}
#define $arrayGet(T, array, index) (T*)(void*)array->get(index)

template<typename Field, typename Owner, typename Value,
	$enable_if($is_object0(Field))>
inline Field* $assignField0($volatile(Field*)*, Owner* owner, int32_t fieldOffset, Value value) {
	Field* v = $tryCast<Field>(value);
	$storestore();
	::java::lang::Object* ret = ::java::lang::ObjectManager::assignField0((::java::lang::Object0*)owner, fieldOffset, $of(v));
	$storeload();
	return (Field*)(void*)ret;
}
template<typename Field, typename Owner, typename Value,
	$enable_if(!$is_object0(Field))>
inline Field* $assignField0($volatile(Field*)*, Owner* owner, int32_t fieldOffset, Value value) {
	Field* v = $tryCast<Field>(value);
	$storestore();
	::java::lang::Object* ret = ::java::lang::ObjectManager::assignField((::java::lang::Object0*)owner, fieldOffset, $of(v));
	$storeload();
	return (Field*)(void*)ret;
}
template<typename Field, typename Owner, typename Value,
	$enable_if($is_object0(Field))>
inline Field* $assignField0(Field** field, Owner* owner, int32_t fieldOffset, Value value) {
	Field* v = $tryCast<Field>(value);
	return (Field*)(void*)::java::lang::ObjectManager::assignField0((::java::lang::Object0*)owner, fieldOffset, $of(v));
}
template<typename Field, typename Owner, typename Value,
	$enable_if(!$is_object0(Field))>
inline Field* $assignField0(Field** field, Owner* owner, int32_t fieldOffset, Value value) {
	Field* v = $tryCast<Field>(value);
	return (Field*)(void*)::java::lang::ObjectManager::assignField((::java::lang::Object0*)owner, fieldOffset, $of(v));
}

//#define $assignField(owner, fieldName, value) $assignField0<::std::decay<decltype(*owner->fieldName)>::type, decltype(*owner->fieldName)>(owner, $offsetOf(owner, fieldName), value)
#define $assignField(owner, fieldName, ...) $assignField0((decltype(owner->fieldName)*)nullptr, owner, $offsetOf(owner, fieldName), __VA_ARGS__)
// #define $set(owner, fieldName, value) $setField0<::std::decay<decltype(*owner->fieldName)>::type, decltype(*owner->fieldName)>(owner, $offsetOf(owner, fieldName), value)

// #define $set(owner, fieldName, ...) {::std::decay<decltype(*owner->fieldName)>::type* $connectMacroLine(fieldName##value$) = $tryCast<::std::decay<decltype(*owner->fieldName)>::type>(__VA_ARGS__); 	$setField0<::std::decay<decltype(*owner->fieldName)>::type, decltype(*owner->fieldName)>(owner, $offsetOf(owner, fieldName), $connectMacroLine(fieldName##value$));}
// for fix vc error C1001
// #define $set(owner, fieldName, ...) {::std::decay<decltype(**&owner->fieldName)>::type* $connectMacroLine(fieldName##value$) = $tryCast<::std::decay<decltype(**&owner->fieldName)>::type>(__VA_ARGS__); 	$setField0<::std::decay<decltype(**&owner->fieldName)>::type, decltype(**&owner->fieldName)>(owner, $offsetOf(owner, fieldName), $connectMacroLine(fieldName##value$));}
//#define $set(owner, fieldName, ...) $setField0<::std::decay<decltype(**&owner->fieldName)>::type, decltype(**&owner->fieldName)>(owner, owner->fieldName, $tryCast<::std::decay<decltype(**&owner->fieldName)>::type>(__VA_ARGS__))
#define $set(owner, fieldName, ...) $assignField(owner, fieldName, __VA_ARGS__)

template<typename Type, typename Value, $enable_if(!$is_object0(Type))>
inline Type* $assignStatic0(Type*& field, Value value) {
	Type* v = $tryCast<Type>(value);
	return (Type*)(void*)::java::lang::ObjectManager::assignStatic((::java::lang::Object*&)(void*&)field, $of(v));
}
template<typename Type, typename Value, $enable_if($is_object0(Type))>
inline Type* $assignStatic0(Type*& field, Value value) {
	Type* v = $tryCast<Type>(value);
	return (Type*)(void*)::java::lang::ObjectManager::assignStatic((::java::lang::Object0*&)(void*&)field, $of(v));
}

template<typename Type, $enable_if(!$is_object0(Type))>
inline Type* $assignStatic0(Type*& field, ::std::nullptr_t value) {
	return (Type*)(void*)::java::lang::ObjectManager::assignStatic((::java::lang::Object*&)(void*&)field, nullptr);
}

template<typename Type, $enable_if($is_object0(Type))>
inline Type* $assignStatic0(Type*& field, ::std::nullptr_t value) {
	return (Type*)(void*)::java::lang::ObjectManager::assignStatic((::java::lang::Object0*&)(void*&)field, nullptr);
}

template<typename Type, typename Value>
inline Type* $assignStatic0($volatile(Type*)& field, Value value) {
	$storestore();
	Type* ret = $assignStatic0(field.ref(), value);
	$storeload();
	return ret;
}

#define $assignStatic(left, ...) $assignStatic0(left, __VA_ARGS__)

#ifdef JCPP_OBJECT_VAR_STACK_DUAL_STACK
#define $assignLocalVar(var, x) var.assign(x)
#else
#define $assignLocalVar(var, x) (x)
#endif

//template<typename Type, typename Value, $enable_if(!$is_object0(Type))>
//inline Type* $assignLocal0(::java::lang::ObjectVar<Type>& var, Value value) {
//	Type* v = $tryCast<Type>(value);
//	$assignLocalVar(var, v);
//	return v;
//}
//template<typename Type, typename Value, $enable_if($is_object0(Type))>
//inline Type* $assignLocal0(::java::lang::ObjectVar<Type>& var, Value value) {
//	Type* v = $tryCast<Type>(value);
//	$assignLocalVar(var, v);
//	return v;
//}
//
//template<typename Type, $enable_if(!$is_object0(Type))>
//inline Type* $assignLocal0(::java::lang::ObjectVar<Type>& var, ::std::nullptr_t value) {
//	$assignLocalVar(var, nullptr);
//	return nullptr;
//}
//template<typename Type, $enable_if($is_object0(Type))>
//inline Type* $assignLocal0(::java::lang::ObjectVar<Type>& var, ::std::nullptr_t value) {
//	$assignLocalVar(var, nullptr);
//	return nullptr;
//}

//#define $assignLocal(var, ...) (var = $assignLocal0(var##$objvar, __VA_ARGS__))
#define $assignLocal(var, ...) (var = $assignLocalVar(var##$objvar, $tryCast<::std::decay<decltype(*var)>::type>(__VA_ARGS__)))
//#define $assignLocal(var, ...) res$objvar.assign($tryCast<::std::decay<decltype(*res)>::type>(String::concat(oldField, value)));
#define $assign(var, ...) $assignLocal(var, __VA_ARGS__)

//template<typename T, $enable_if($is_base_of(::java::lang::Object, T))>
//inline ::java::lang::String* $plusAssignLocal0(::java::lang::ObjectVar<::java::lang::String>& var, ::java::lang::String* varValue, T* value) {
//	$var(::java::lang::String, res, ::java::lang::String::concat(varValue, $$tostr(value)));
//	$assignLocalVar(var, res);
//	return res;
//}
//
//template<typename T, $enable_if(!$is_base_of(::java::lang::Object, T))>
//inline ::java::lang::String* $plusAssignLocal0(::java::lang::ObjectVar<::java::lang::String>& var, ::java::lang::String* varValue, T value) {
//	$var(::java::lang::String, res, ::java::lang::String::concat(varValue, $$str(value)));
//	$assignLocalVar(var, res);
//	return res;
//}
//
//template<typename T>
//inline ::java::lang::String* $plusAssignLocal0(::java::lang::ObjectVar<::java::lang::String>& var, ::java::lang::String* varValue, ::java::lang::String* value) {
//	$var(::java::lang::String, res, ::java::lang::String::concat(varValue, value));
//	$assignLocalVar(var, res);
//	return res;
//}
//
//template<typename T>
//inline ::java::lang::String* $plusAssignLocal0(::java::lang::ObjectVar<::java::lang::String>& var, ::java::lang::String* varValue, ::std::nullptr_t) {
//	$var(::java::lang::String, res, ::java::lang::String::concat(varValue, "null"_s));
//	$assignLocalVar(var, res);
//	return res;
//}

//#define $plusAssignLocal(var, ...) (var = $plusAssignLocal0(var##$objvar, var, __VA_ARGS__))
//#define $plusAssignLocal(var, ...) $assignLocalVar(var = $(::java::lang::String::concat(varValue, __VA_ARGS__)))
#define $plusAssignLocal(var, ...) (var = $assignLocalVar(var##$objvar, $tryCast<::std::decay<decltype(*var)>::type>(::java::lang::String::concat(var, $$str(__VA_ARGS__)))))
#define $plusAssign(var, ...) $plusAssignLocal(var, __VA_ARGS__)

template<typename T, $enable_if($is_base_of(::java::lang::Object, T))>
inline ::java::lang::String* $plusAssignStatic0(::java::lang::String*& left, T* right) {
	$var(::java::lang::String, res, ::java::lang::String::concat(left, $$tostr(right)));
	return (::java::lang::String*)(void*)::java::lang::ObjectManager::assignStatic((::java::lang::Object0*&)(void*&)left, $of(res));
}

template<typename T, $enable_if(!$is_base_of(::java::lang::Object, T))>
inline ::java::lang::String* $plusAssignStatic0(::java::lang::String*& left, T right) {
	$var(::java::lang::String, res, ::java::lang::String::concat(left, $$str(right)));
	return (::java::lang::String*)(void*)::java::lang::ObjectManager::assignStatic((::java::lang::Object0*&)(void*&)left, $of(res));
}

template<typename T>
inline ::java::lang::String* $plusAssignStatic0(::java::lang::String*& left, ::std::nullptr_t) {
	$var(::java::lang::String, res, ::java::lang::String::concat(left, "null"_s));
	return (::java::lang::String*)(void*)::java::lang::ObjectManager::assignStatic((::java::lang::Object0*&)(void*&)left, $of(res));
}

template<typename T>
inline ::java::lang::String* $plusAssignStatic0(::java::lang::String*& left, ::java::lang::String* right) {
	$var(::java::lang::String, res, ::java::lang::String::concat(left, right));
	return (::java::lang::String*)(void*)::java::lang::ObjectManager::assignStatic((::java::lang::Object0*&)(void*&)left, $of(res));
}

template<typename T, typename V>
inline ::java::lang::String* $plusAssignStatic0($volatile(T*)& left, V right) {
	$storestore();
	::java::lang::String* res = $plusAssignStatic0(left.ref(), right);
	$storeload();
	return res;
}

#define $plusAssignStatic(left, ...) $plusAssignStatic0(left, __VA_ARGS__)

template<typename Owner, typename Field, typename Value,
	$enable_if($is_base_of(::java::lang::Object, Value))>
inline ::java::lang::String* $plusaAssignField0($volatile(Field*)*, Owner* owner, int32_t fieldOffset, Value* value) {
	$storestore();
	::java::lang::String* ret = ::java::lang::ObjectManager::plusAssignField((::java::lang::Object0*)owner, fieldOffset, $$tostr(value));
	$storeload();
	return ret;
}

template<typename Owner, typename Field, typename Value,
	$enable_if(!$is_base_of(::java::lang::Object, Value))>
inline ::java::lang::String* $plusaAssignField0($volatile(Field*)*, Owner* owner, int32_t fieldOffset, Value value) {
	$storestore();
	::java::lang::String* ret = ::java::lang::ObjectManager::plusAssignField((::java::lang::Object0*)owner, fieldOffset, $$str(value));
	$storeload();
	return ret;
}

template<typename Owner, typename Field>
inline ::java::lang::String* $plusaAssignField0($volatile(Field*)*, Owner* owner, int32_t fieldOffset, ::java::lang::String* value) {
	$storestore();
	::java::lang::String* ret = ::java::lang::ObjectManager::plusAssignField((::java::lang::Object0*)owner, fieldOffset, value);
	$storeload();
	return ret;
}

template<typename Owner, typename Field, typename Value,
	$enable_if($is_base_of(::java::lang::Object, Value))>
inline ::java::lang::String* $plusaAssignField0(Field**, Owner* owner, int32_t fieldOffset, Value* value) {
	return ::java::lang::ObjectManager::plusAssignField((::java::lang::Object0*)owner, fieldOffset, $$tostr(value));
}

template<typename Owner, typename Field, typename Value,
	$enable_if(!$is_base_of(::java::lang::Object, Value))>
inline ::java::lang::String* $plusaAssignField0(Field**, Owner* owner, int32_t fieldOffset, Value value) {
	return ::java::lang::ObjectManager::plusAssignField((::java::lang::Object0*)owner, fieldOffset, $$str(value));
}

template<typename Owner, typename Field>
inline ::java::lang::String* $plusaAssignField0(Field**, Owner* owner, int32_t fieldOffset, ::java::lang::String* value) {
	return ::java::lang::ObjectManager::plusAssignField((::java::lang::Object0*)owner, fieldOffset, value);
}

//#define $plusAssignField(owner, fieldName, value) $plusaAssignField0<decltype(*owner->fieldName)>(owner, $offsetOf(owner, fieldName), value)
#define $plusAssignField(owner, fieldName, ...) $plusaAssignField0((decltype(owner->fieldName)*)nullptr, owner, $offsetOf(owner, fieldName), __VA_ARGS__)

template<typename T>
inline int8_t $usrAssign(int8_t& left, T right) {
	left = (int8_t)$usr(left, right);
	return left;
}

template<typename T>
inline int16_t $usrAssign(int16_t& left, T right) {
	left = (int16_t)$usr(left, right);
	return left;
}

template<typename T>
inline char16_t $usrAssign(char16_t& left, T right) {
	left = (char16_t)$usr(left, right);
	return left;
}

template<typename T>
inline int32_t $usrAssign(int32_t& left, T right) {
	left = (int32_t)$usr(left, right);
	return left;
}

template<typename T>
inline int64_t $usrAssign(int64_t& left, T right) {
	left = (int64_t)$usr(left, right);
	return left;
}
template<typename X, typename Y>
inline auto $usrAssign($volatile(X)& x, Y y) {
	$storestore();
	auto ret = $usrAssign(x.ref(), y);
	$storeload();
	return ret;
}
template<typename X, typename Y>
inline auto $usrAssign(X& x, const $volatile(Y)& y) {
	return $usrAssign(x, y.get());
}
template<typename X, typename Y>
inline auto $usrAssign($volatile(X)& x, const $volatile(Y)& y) {
	$storestore();
	auto ret = $usrAssign(x.ref(), y.get());
	$storeload();
	return ret;
}

template<typename T>
inline int8_t $modAssign(int8_t& left, T right) {
	left %= right;
	return left;
}

template<typename T>
inline int16_t $modAssign(int16_t& left, T right) {
	left %= right;
	return left;
}

template<typename T>
inline int32_t $modAssign(int32_t& left, T right) {
	left %= right;
	return left;
}

template<typename T>
inline int64_t $modAssign(int64_t& left, T right) {
	left %= right;
	return left;
}

template<typename T>
inline float $modAssign(float& left, T right) {
	left = ::java::lang::Float::mod(left, right);
	return left;
}

template<typename T>
inline double $modAssign(double& left, T right) {
	left = ::java::lang::Double::mod(left, right);
	return left;
}
template<typename X, typename Y>
inline auto $modAssign($volatile(X)& x, Y y) {
	$storestore();
	auto ret = $modAssign(x.ref(), y);
	$storeload();
	return ret;
}
template<typename X, typename Y>
inline auto $modAssign(X& x, const $volatile(Y)& y) {
	return $modAssign(x, y.get());
}
template<typename X, typename Y>
inline auto $modAssign($volatile(X)& x, const $volatile(Y)& y) {
	$storestore();
	auto ret = $modAssign(x.ref(), y.get());
	$storeload();
	return ret;
}

template<typename Type, typename Inst>
inline bool $instanceOf(Inst inst) {
	$load(Type);
	return ::java::lang::Class::instanceOf($getClass(Type), $of(inst));
}
#define $instanceOf(x, ...) $instanceOf<x>(__VA_ARGS__)
#define $$instanceOf(x, ...) $ref($instanceOf<x>(__VA_ARGS__))

template<typename To, typename From, $enable_if($is_convertible(From*, To*))>
To* $sure(From* from) {
	$nullcheck(from);
	return from;
}

template<typename To, typename From, $enable_if(
	!$is_convertible(From*, To*) &&
	$is_same(::java::lang::Object, To)
)>
To* $sure(From* from) {
	$nullcheck(from);
	return (::java::lang::Object*)(void*)from;
}

template<typename To, typename From, $enable_if(
	!$is_convertible(From*, To*) &&
	!$is_same(::java::lang::Object, To) &&
	$is_same(::java::lang::Object0, To) && $is_object0(From)
)>
To* $sure(From* from) {
	$nullcheck(from);
	return (::java::lang::Object0*)(void*)from;
}

template<typename To, typename From, $enable_if(
	!$is_convertible(From*, To*) &&
	!$is_same(::java::lang::Object, To) &&
	!($is_same(::java::lang::Object0, To) && $is_object0(From))
)>
To* $sure(From* from) {
	$load(To);
	return (To*)(void*)::java::lang::Class::cast0($getClass(To), $of(from));
}

template<typename To, typename From>
inline To* $sure(const $volatile(From*)& f) {
	return $sure<To>(f.get());
}

template<typename To>
inline To* $sure(::std::nullptr_t) {
	$nullcheck(nullptr);
	return (To*)nullptr;
}

#define $sure(x, ...) $sure<x>(__VA_ARGS__)
#define $$sure(x, ...) $ref($sure<x>(__VA_ARGS__))

template<typename To, typename From, $enable_if($is_convertible(From*, To*))>
To* $cast(From* from) {
	return from;
}

template<typename To, typename From, $enable_if(
	!$is_convertible(From*, To*) &&
	$is_same(::java::lang::Object, To)
)>
To* $cast(From* from) {
	return (::java::lang::Object*)(void*)from;
}

template<typename To, typename From, $enable_if(
	!$is_convertible(From*, To*) &&
	!$is_same(::java::lang::Object, To) &&
	$is_same(::java::lang::Object0, To) && $is_object0(From)
)>
To* $cast(From* from) {
	return (::java::lang::Object0*)(void*)from;
}

template<typename To, typename From, $enable_if(
	!$is_convertible(From*, To*) &&
	!$is_same(::java::lang::Object, To) &&
	!($is_same(::java::lang::Object0, To) && $is_object0(From))
)>
To* $cast(From* from) {
	$load(To);
	return (To*)(void*)::java::lang::Class::cast0($getClass(To), $of(from));
}

template<typename To>
inline To* $cast(::std::nullptr_t) {
	return (To*)nullptr;
}

static const int64_t $int64_high_bit = (int64_t)1 << (int64_t)63;

template<typename To, $enable_if($is_same(To, int64_t))>
inline int64_t $cast(float f) {
	int64_t tmp = (int64_t)f;
	if (tmp != $int64_high_bit) {
		return tmp;
	} else {
		// isnan
		if (f != f) {
			return 0;
		}
		if (f < 0) {
			return ::java::lang::Long::MIN_VALUE;
		} else {
			return ::java::lang::Long::MAX_VALUE;
		}
	}
}

template<typename To, $enable_if($is_same(To, int64_t))>
inline int64_t $cast(double d) {
	int64_t tmp = (int64_t)d;
	if (tmp != $int64_high_bit) {
		return tmp;
	} else {
		// isnan
		if (d != d) {
			return 0;
		}
		if (d < 0) {
			return ::java::lang::Long::MIN_VALUE;
		} else {
			return ::java::lang::Long::MAX_VALUE;
		}
	}
}

template<typename To, typename From, $enable_if($is_same(To, int64_t))>
inline int64_t $cast(From from) {
	return (int64_t)from;
}

template<typename To, $enable_if($is_same(To, int32_t))>
inline int32_t $cast(float f) {
	int64_t tmp = (int64_t)f;
	if (tmp != $int64_high_bit) {
		if (tmp >= ::java::lang::Integer::MAX_VALUE) {
			return ::java::lang::Integer::MAX_VALUE;
		}
		if (tmp <= ::java::lang::Integer::MIN_VALUE) {
			return ::java::lang::Integer::MIN_VALUE;
		}
		return (int32_t)tmp;
	} else {
		// isnan
		if (f != f) {
			return 0;
		}
		if (f < 0) {
			return ::java::lang::Integer::MIN_VALUE;
		} else {
			return ::java::lang::Integer::MAX_VALUE;
		}
	}
}

template<typename To, typename From, $enable_if($is_same(To, int32_t))>
inline int32_t $cast(From from) {
	return (int32_t)from;
}

template<typename To, $enable_if($is_same(To, int8_t))>
inline int8_t $cast(float f) {
	int64_t tmp = (int64_t)f;
	if (tmp != $int64_high_bit) {
		if (tmp >= ::java::lang::Byte::MAX_VALUE) {
			return ::java::lang::Byte::MAX_VALUE;
		}
		if (tmp <= ::java::lang::Byte::MIN_VALUE) {
			return ::java::lang::Byte::MIN_VALUE;
		}
		return (int8_t)tmp;
	} else {
		// isnan
		if (f != f) {
			return 0;
		}
		if (f < 0) {
			return ::java::lang::Byte::MIN_VALUE;
		} else {
			return ::java::lang::Byte::MAX_VALUE;
		}
	}
}

template<typename To, typename From, $enable_if($is_same(To, int8_t))>
inline int8_t $cast(From from) {
	return (int8_t)from;
}

template<typename To, $enable_if($is_same(To, int16_t))>
inline int16_t $cast(float f) {
	int64_t tmp = (int64_t)f;
	if (tmp != $int64_high_bit) {
		if (tmp >= ::java::lang::Short::MAX_VALUE) {
			return ::java::lang::Short::MAX_VALUE;
		}
		if (tmp <= ::java::lang::Short::MIN_VALUE) {
			return ::java::lang::Short::MIN_VALUE;
		}
		return (int16_t)tmp;
	} else {
		// isnan
		if (f != f) {
			return 0;
		}
		if (f < 0) {
			return ::java::lang::Short::MIN_VALUE;
		} else {
			return ::java::lang::Short::MAX_VALUE;
		}
	}
}

template<typename To, typename From, $enable_if($is_same(To, int16_t))>
inline int16_t $cast(From from) {
	return (int16_t)from;
}

template<typename To, $enable_if($is_same(To, int8_t))>
inline int8_t $cast(double d) {
	int64_t tmp = (int64_t)d;
	if (tmp != $int64_high_bit) {
		if (tmp >= ::java::lang::Byte::MAX_VALUE) {
			return ::java::lang::Byte::MAX_VALUE;
		}
		if (tmp <= ::java::lang::Byte::MIN_VALUE) {
			return ::java::lang::Byte::MIN_VALUE;
		}
		return (int8_t)tmp;
	} else {
		// isnan
		if (d != d) {
			return 0;
		}
		if (d < 0) {
			return ::java::lang::Byte::MIN_VALUE;
		} else {
			return ::java::lang::Byte::MAX_VALUE;
		}
	}
}

template<typename To, $enable_if($is_same(To, int16_t))>
inline int16_t $cast(double d) {
	int64_t tmp = (int64_t)d;
	if (tmp != $int64_high_bit) {
		if (tmp >= ::java::lang::Short::MAX_VALUE) {
			return ::java::lang::Short::MAX_VALUE;
		}
		if (tmp <= ::java::lang::Short::MIN_VALUE) {
			return ::java::lang::Short::MIN_VALUE;
		}
		return (int16_t)tmp;
	} else {
		// isnan
		if (d != d) {
			return 0;
		}
		if (d < 0) {
			return ::java::lang::Short::MIN_VALUE;
		} else {
			return ::java::lang::Short::MAX_VALUE;
		}
	}
}

template<typename To, $enable_if($is_same(To, int32_t))>
inline int32_t $cast(double d) {
	int64_t tmp = (int64_t)d;
	if (tmp != $int64_high_bit) {
		if (tmp >= ::java::lang::Integer::MAX_VALUE) {
			return ::java::lang::Integer::MAX_VALUE;
		}
		if (tmp <= ::java::lang::Integer::MIN_VALUE) {
			return ::java::lang::Integer::MIN_VALUE;
		}
		return (int32_t)tmp;
	} else {
		// isnan
		if (d != d) {
			return 0;
		}
		if (d < 0) {
			return ::java::lang::Integer::MIN_VALUE;
		} else {
			return ::java::lang::Integer::MAX_VALUE;
		}
	}
}

template<typename To, typename From, $enable_if($is_same(To, bool))>
inline bool $cast(From from) {
	return (bool)from;
}

template<typename To, typename From, $enable_if($is_base_of(::java::lang::Object, To))>
inline To* $cast(const $volatile(From*)& from) {
	return $cast<To>(from.get());
}
template<typename To, typename From, $enable_if(!$is_base_of(::java::lang::Object, To))>
inline To $cast(const $volatile(From)& from) {
	return $cast<To>(from.get());
}

#define $cast(x, ...) $cast<x>(__VA_ARGS__)
#define $$cast(x, ...) $ref($cast<x>(__VA_ARGS__))

// force cast
template<typename To, typename From>
inline To* $fcast(From* from) {
	return static_cast<To*>(static_cast<void*>(from));
}
template<typename To, typename From>
inline To* $fcast(const $volatile(From)& from) {
	return $fcast<To>(from.get());
}
template<typename T>
inline T* $fcast(::std::nullptr_t) {
	return static_cast<T*>(nullptr);
}

#define $fcast(x, ...) $fcast<x>(__VA_ARGS__)
#define $$fcast(x, ...) $ref($fcast<x>(__VA_ARGS__))

template<typename To, typename From>
To* $as(From* obj) {
	if (obj == nullptr) {
		return nullptr;
	} else {
		return obj->as$((To*)nullptr);
	}
}
template<typename To, typename From>
inline To* $as(const $volatile(From*)& obj) {
	return $as<To>(obj.get());
}

#define $as(x, ...) $as<x>(__VA_ARGS__)
#define $$as(x, ...) $ref($as<x>(__VA_ARGS__))

template<typename T1, typename T2,
	$enable_if($is_object0(T1) && $is_object0(T2))>
inline bool $equals(T1* obj1, T2* obj2) {
	::java::lang::Object* o1 = (::java::lang::Object*)(void*)obj1;
	::java::lang::Object* o2 = (::java::lang::Object*)(void*)obj2;
	return o1 == o2;
}

template<typename T1, typename T2,
	$enable_if(!($is_object0(T1) && $is_object0(T2)))>
inline bool $equals(T1* obj1, T2* obj2) {
	::java::lang::Object* o1 = (::java::lang::Object*)(void*)obj1;
	::java::lang::Object* o2 = (::java::lang::Object*)(void*)obj2;
	if (o1 == o2) {
		return true;
	}
	return $toObject0(o1) == $toObject0(o2);
}
template<typename T1, typename T2>
inline bool $equals(const $volatile(T1*)& obj1, T2* obj2) {
	return $equals(obj1.get(), obj2);
}
template<typename T1, typename T2>
inline bool $equals(T1* obj1, const $volatile(T2*)& obj2) {
	return $equals(obj1, obj2.get());
}
template<typename T1, typename T2>
inline bool $equals(const $volatile(T1*)& obj1, const $volatile(T2*)& obj2) {
	return $equals(obj1.get(), obj2.get());
}

inline int8_t $byteValue(::java::lang::Byte* obj) {
	return $nc(obj)->byteValue();
}

template<typename T>
inline int8_t $byteValue(T* obj) {
	$Object0* obj0 = $sureObject0(obj);
	::java::lang::Class* clazz = obj0->getClass();
	if (clazz == ::java::lang::Byte::class$) {
		return $fcast<::java::lang::Byte>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Integer::class$) {
		return $fcast<::java::lang::Integer>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Short::class$) {
		return $fcast<::java::lang::Short>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Long::class$) {
		return $fcast<::java::lang::Long>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Character::class$) {
		return (int8_t)$fcast<::java::lang::Character>(obj0)->charValue();
	}
	if (clazz == ::java::lang::Boolean::class$) {
		return $fcast<::java::lang::Boolean>(obj0)->booleanValue() ? 1 : 0;
	}
	if (clazz == ::java::lang::Double::class$) {
		return $fcast<::java::lang::Double>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Float::class$) {
		return $fcast<::java::lang::Float>(obj0)->byteValue();
	}
	$throwNew(::java::lang::IllegalArgumentException);
}
template<typename T>
inline int8_t $byteValue(const $volatile(T*)& obj) {
	return $byteValue(obj.get());
}

inline int16_t $shortValue(::java::lang::Short* obj) {
	return $nc(obj)->shortValue();
}

template<typename T>
inline int16_t $shortValue(T* obj) {
	$Object0* obj0 = $sureObject0(obj);
	::java::lang::Class* clazz = obj0->getClass();
	if (clazz == ::java::lang::Short::class$) {
		return $fcast<::java::lang::Short>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Integer::class$) {
		return $fcast<::java::lang::Integer>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Byte::class$) {
		return $fcast<::java::lang::Byte>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Long::class$) {
		return $fcast<::java::lang::Long>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Character::class$) {
		return $fcast<::java::lang::Character>(obj0)->charValue();
	}
	if (clazz == ::java::lang::Boolean::class$) {
		return $fcast<::java::lang::Boolean>(obj0)->booleanValue() ? 1 : 0;
	}
	if (clazz == ::java::lang::Double::class$) {
		return $fcast<::java::lang::Double>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Float::class$) {
		return $fcast<::java::lang::Float>(obj0)->shortValue();
	}
	$throwNew(::java::lang::IllegalArgumentException);
}
template<typename T>
inline int16_t $shortValue(const $volatile(T*)& obj) {
	return $shortValue(obj.get());
}

inline int32_t $intValue(::java::lang::Integer* obj) {
	return $nc(obj)->intValue();
}
template<typename T>
inline int32_t $intValue(T* obj) {
	$Object0* obj0 = $sureObject0(obj);
	::java::lang::Class* clazz = obj0->getClass();
	if (clazz == ::java::lang::Integer::class$) {
		return $fcast<::java::lang::Integer>(obj0)->intValue();
	}
	if (clazz == ::java::lang::Short::class$) {
		return $fcast<::java::lang::Short>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Byte::class$) {
		return $fcast<::java::lang::Byte>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Long::class$) {
		return $fcast<::java::lang::Long>(obj0)->intValue();
	}
	if (clazz == ::java::lang::Character::class$) {
		return $fcast<::java::lang::Character>(obj0)->charValue();
	}
	if (clazz == ::java::lang::Boolean::class$) {
		return $fcast<::java::lang::Boolean>(obj0)->booleanValue() ? 1 : 0;
	}
	if (clazz == ::java::lang::Double::class$) {
		return $fcast<::java::lang::Double>(obj0)->intValue();
	}
	if (clazz == ::java::lang::Float::class$) {
		return $fcast<::java::lang::Float>(obj0)->intValue();
	}
	$throwNew(::java::lang::IllegalArgumentException);
}
template<typename T>
inline int32_t $intValue(const $volatile(T*)& obj) {
	return $intValue(obj.get());
}

inline int64_t $longValue(::java::lang::Long* obj) {
	return $nc(obj)->longValue();
}
template<typename T>
inline int64_t $longValue(T* obj) {
	$Object0* obj0 = $sureObject0(obj);
	::java::lang::Class* clazz = obj0->getClass();
	if (clazz == ::java::lang::Long::class$) {
		return $fcast<::java::lang::Long>(obj0)->longValue();
	}
	if (clazz == ::java::lang::Integer::class$) {
		return $fcast<::java::lang::Integer>(obj0)->intValue();
	}
	if (clazz == ::java::lang::Short::class$) {
		return $fcast<::java::lang::Short>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Byte::class$) {
		return $fcast<::java::lang::Byte>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Character::class$) {
		return $fcast<::java::lang::Character>(obj0)->charValue();
	}
	if (clazz == ::java::lang::Boolean::class$) {
		return $fcast<::java::lang::Boolean>(obj0)->booleanValue() ? 1 : 0;
	}
	if (clazz == ::java::lang::Double::class$) {
		return $fcast<::java::lang::Double>(obj0)->longValue();
	}
	if (clazz == ::java::lang::Float::class$) {
		return $fcast<::java::lang::Float>(obj0)->longValue();
	}
	$throwNew(::java::lang::IllegalArgumentException);
}
template<typename T>
inline int64_t $longValue(const $volatile(T*)& obj) {
	return $longValue(obj.get());
}

inline float $floatValue(::java::lang::Float* obj) {
	return $nc(obj)->floatValue();
}
template<typename T>
inline float $floatValue(T* obj) {
	$Object0* obj0 = $sureObject0(obj);
	::java::lang::Class* clazz = obj0->getClass();
	if (clazz == ::java::lang::Float::class$) {
		return $fcast<::java::lang::Float>(obj0)->floatValue();
	}
	if (clazz == ::java::lang::Double::class$) {
		return $fcast<::java::lang::Double>(obj0)->floatValue();
	}
	if (clazz == ::java::lang::Long::class$) {
		return (float)$fcast<::java::lang::Long>(obj0)->longValue();
	}
	if (clazz == ::java::lang::Integer::class$) {
		return (float)$fcast<::java::lang::Integer>(obj0)->intValue();
	}
	if (clazz == ::java::lang::Short::class$) {
		return $fcast<::java::lang::Short>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Byte::class$) {
		return $fcast<::java::lang::Byte>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Character::class$) {
		return $fcast<::java::lang::Character>(obj0)->charValue();
	}
	if (clazz == ::java::lang::Boolean::class$) {
		return $fcast<::java::lang::Boolean>(obj0)->booleanValue() ? 1.0f : 0.0f;
	}
	$throwNew(::java::lang::IllegalArgumentException);
}
template<typename T>
inline float $floatValue(const $volatile(T*)& obj) {
	return $floatValue(obj.get());
}

inline double $doubleValue(::java::lang::Double* obj) {
	return $nc(obj)->doubleValue();
}
template<typename T>
inline double $doubleValue(T* obj) {
	$Object0* obj0 = $sureObject0(obj);
	::java::lang::Class* clazz = obj0->getClass();
	if (clazz == ::java::lang::Double::class$) {
		return $fcast<::java::lang::Double>(obj0)->doubleValue();
	}
	if (clazz == ::java::lang::Float::class$) {
		return $fcast<::java::lang::Float>(obj0)->floatValue();
	}
	if (clazz == ::java::lang::Long::class$) {
		return (double)$fcast<::java::lang::Long>(obj0)->longValue();
	}
	if (clazz == ::java::lang::Integer::class$) {
		return $fcast<::java::lang::Integer>(obj0)->intValue();
	}
	if (clazz == ::java::lang::Short::class$) {
		return $fcast<::java::lang::Short>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Byte::class$) {
		return $fcast<::java::lang::Byte>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Character::class$) {
		return $fcast<::java::lang::Character>(obj0)->charValue();
	}
	if (clazz == ::java::lang::Boolean::class$) {
		return $fcast<::java::lang::Boolean>(obj0)->booleanValue() ? 1.0 : 0.0;
	}
	$throwNew(::java::lang::IllegalArgumentException);
}
template<typename T>
inline double $doubleValue(const $volatile(T*)& obj) {
	return $doubleValue(obj.get());
}

inline bool $booleanValue(::java::lang::Boolean* obj) {
	return $nc(obj)->booleanValue();
}
template<typename T>
inline bool $booleanValue(T* obj) {
	$Object0* obj0 = $sureObject0(obj);
	::java::lang::Class* clazz = obj0->getClass();
	if (clazz == ::java::lang::Boolean::class$) {
		return $fcast<::java::lang::Boolean>(obj0)->booleanValue();
	}
	if (clazz == ::java::lang::Byte::class$) {
		return $fcast<::java::lang::Byte>(obj0)->byteValue() != 0;
	}
	if (clazz == ::java::lang::Short::class$) {
		return $fcast<::java::lang::Short>(obj0)->shortValue() != 0;
	}
	if (clazz == ::java::lang::Integer::class$) {
		return $fcast<::java::lang::Integer>(obj0)->intValue() != 0;
	}
	if (clazz == ::java::lang::Long::class$) {
		return $fcast<::java::lang::Long>(obj0)->longValue() != 0;
	}
	if (clazz == ::java::lang::Character::class$) {
		return $fcast<::java::lang::Character>(obj0)->charValue() != 0;
	}
	$throwNew(::java::lang::IllegalArgumentException);
}
template<typename T>
inline bool $booleanValue(const $volatile(T*)& obj) {
	return $booleanValue(obj.get());
}

inline char16_t $charValue(::java::lang::Character* obj) {
	return $nc(obj)->charValue();
}
template<typename T>
inline char16_t $charValue(T* obj) {
	$Object0* obj0 = $sureObject0(obj);
	::java::lang::Class* clazz = obj0->getClass();
	if (clazz == ::java::lang::Character::class$) {
		return $fcast<::java::lang::Character>(obj0)->charValue();
	}
	if (clazz == ::java::lang::Short::class$) {
		return $fcast<::java::lang::Short>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Integer::class$) {
		return $fcast<::java::lang::Integer>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Long::class$) {
		return $fcast<::java::lang::Long>(obj0)->shortValue();
	}
	if (clazz == ::java::lang::Byte::class$) {
		return $fcast<::java::lang::Byte>(obj0)->byteValue();
	}
	if (clazz == ::java::lang::Boolean::class$) {
		return $fcast<::java::lang::Boolean>(obj0)->booleanValue() ? 1 : 0;
	}
	$throwNew(::java::lang::IllegalArgumentException);
}
template<typename T>
inline char16_t $charValue(const $volatile(T*)& obj) {
	return $charValue(obj.get());
}

inline ::java::lang::Object0* $of(int8_t i8) {
	return (::java::lang::Object0*)(void*)::java::lang::Byte::valueOf(i8);
}

inline ::java::lang::Object0* $of(int16_t i16) {
	return (::java::lang::Object0*)(void*)::java::lang::Short::valueOf(i16);
}

inline ::java::lang::Object0* $of(int32_t i32) {
	return (::java::lang::Object0*)(void*)::java::lang::Integer::valueOf(i32);
}

inline ::java::lang::Object0* $of(int64_t i64) {
	return (::java::lang::Object0*)(void*)::java::lang::Long::valueOf(i64);
}

inline ::java::lang::Object0* $of(char16_t c) {
	return (::java::lang::Object0*)(void*)::java::lang::Character::valueOf(c);
}

inline ::java::lang::Object0* $of(float f) {
	return (::java::lang::Object0*)(void*)::java::lang::Float::valueOf(f);
}

inline ::java::lang::Object0* $of(double d) {
	return (::java::lang::Object0*)(void*)::java::lang::Double::valueOf(d);
}

inline ::java::lang::Object0* $of(bool b) {
	return (::java::lang::Object0*)(void*)::java::lang::Boolean::valueOf(b);
}

inline ::java::lang::Object0* $of(void) {
	return (::java::lang::Object0*)(void*)$new<::java::lang::Void>();
}

template<typename T>
inline auto $of(const $volatile<T>& v) {
	return $of(v.get());
}

#define $$of(x) $ref($of(x))

class $ObjectBox {
public:
	$ObjectBox(Object$* obj) : obj(obj) {}
	Object$* obj;
	inline operator int8_t() const {
		return $byteValue(obj);
	}
	inline operator int16_t() const {
		return $shortValue(obj);
	}
	inline operator int32_t() const {
		return $intValue(obj);
	}
	inline operator int64_t() const {
		return $longValue(obj);
	}
	inline operator float() const {
		return $floatValue(obj);
	}
	inline operator double() const {
		return $doubleValue(obj);
	}
	inline operator bool() const {
		return $booleanValue(obj);
	}
	inline operator char16_t() const {
		return $charValue(obj);
	}
	template<typename T>
	inline operator T*() const {
		return $cast<T>(obj);
	}
};

inline $ObjectBox $makeBox(Object$* obj) {
	return $ObjectBox(obj);
}
template<typename T>
inline $ObjectBox $makeBox(const $volatile(T*)& obj) {
	return $ObjectBox(obj.get());
}

template<typename T, $enable_if($is_object0(T))>
inline T* $arrayComponentCast(::java::lang::Object0* obj) {
	return (T*)obj;
}
template<typename T, $enable_if(!$is_object0(T))>
inline T* $arrayComponentCast(::java::lang::Object0* obj) {
	if (obj != nullptr) {
		return (T*)(void*)T::class$->cast(obj);
	} else {
		return nullptr;
	}
}
template <typename T>
inline T* ::java::lang::Array<T, 1>::get(int32_t index) {
	return $arrayComponentCast<T>(::java::lang::ObjectArray::get(index));
}

#define $prepareNative0(methodIndex, className, methodName, returnType, ...) \
	typedef returnType (*_NATIVE_METHOD_##methodName)(void* env, Object$*, ##__VA_ARGS__); \
	_NATIVE_METHOD_##methodName $native$Method = (_NATIVE_METHOD_##methodName)_##className##_MethodInfo_[methodIndex].nativeAddress; \
	if ($native$Method == nullptr) { \
		$native$Method = (_NATIVE_METHOD_##methodName)::java::lang::System::loadNativeMethod(className::class$, &_##className##_MethodInfo_[methodIndex]); \
	} \
	::java::lang::ObjectManager::prepareNative();
#define $prepareNative(className, methodName, returnType, ...) \
	$prepareNative0(_METHOD_INDEX_##methodName, className, methodName, returnType, ##__VA_ARGS__)

#define $prepareNativeStatic0(methodIndex, className, methodName, returnType, ...) \
	$init(className); \
	typedef returnType (*_NATIVE_METHOD_##methodName)(void* env, ::java::lang::Class*, ##__VA_ARGS__); \
	_NATIVE_METHOD_##methodName $native$Method = (_NATIVE_METHOD_##methodName)_##className##_MethodInfo_[methodIndex].nativeAddress; \
	if ($native$Method == nullptr) { \
		$native$Method = (_NATIVE_METHOD_##methodName)::java::lang::System::loadNativeMethod(className::class$, &_##className##_MethodInfo_[methodIndex]); \
	} \
	::java::lang::ObjectManager::prepareNative();
#define $prepareNativeStatic(className, methodName, returnType, ...) \
	$prepareNativeStatic0(_METHOD_INDEX_##methodName, className, methodName, returnType, ##__VA_ARGS__)

#define $invokeNative(className, methodName, ...) $native$Method(::java::lang::System::getJNIEnv(), this, ##__VA_ARGS__)
#define $invokeNativeStatic(className, methodName, ...) $native$Method(::java::lang::System::getJNIEnv(), className::class$, ##__VA_ARGS__)

#define $finishNative() ::java::lang::ObjectManager::finishNative()
#define $finishNativeStatic() ::java::lang::ObjectManager::finishNative()

#define $shouldNotReachHere() $throwNew(::java::lang::RuntimeException, "should not reach here"_s)

#define $newInstanceReflect(className, descriptor, ...) ::java::lang::ObjectManager::newInstanceReflect(className, descriptor, ##__VA_ARGS__)
#define $invokeReflect(className, methodName, descriptor, obj, ...) ::java::lang::ObjectManager::invokeReflect(className, methodName, descriptor, obj, ##__VA_ARGS__)
#define $invokeReflectStatic(className, methodName, descriptor, ...) ::java::lang::ObjectManager::invokeReflectStatic(className, methodName, descriptor, ##__VA_ARGS__)
#define $getReflect(className, fieldName, obj) ::java::lang::ObjectManager::getReflect(className, fieldName, obj)
#define $setReflect(className, fieldName, obj, value) ::java::lang::ObjectManager::setReflect(className, fieldName, obj, value)
#define $getReflectStatic(className, fieldName) ::java::lang::ObjectManager::getReflectStatic(className, fieldName)
#define $setReflectStatic(className, fieldName, value) ::java::lang::ObjectManager::setReflectStatic(className, fieldName, value)

#define $loadClass(clazz, name, initialize, ...) ::java::lang::Class::loadClass(name, initialize, &class$, sizeof(clazz), $getMark(clazz), ##__VA_ARGS__)

#endif // _jcpp_h_