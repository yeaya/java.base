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

#ifndef _java_lang_Object_h_
#define _java_lang_Object_h_
//$ class java.lang.Object

#include <java/lang/def.h>
#include <java/lang/volatile.h>

#ifdef Object$
#undef Object$
#endif
using Object$ = void;

// modify
const int32_t $PUBLIC = 1;
const int32_t $PRIVATE = 1 << 1;
const int32_t $PROTECTED = 1 << 2;
const int32_t $STATIC = 1 << 3;
const int32_t $FINAL = 1 << 4;
const int32_t $SYNCHRONIZED = 1 << 5;
const int32_t $VOLATILE = 1 << 6;
const int32_t $TRANSIENT = 1 << 7;
const int32_t $NATIVE = 1 << 8;
const int32_t $INTERFACE = 1 << 9;
const int32_t $ABSTRACT = 1 << 10;
const int32_t $STRICT = 1 << 11;
const int32_t $BRIDGE = 1 << 6;
const int32_t $VARARGS = 1 << 7;
const int32_t $SYNTHETIC = 1 << 12;
const int32_t $ANNOTATION = 1 << 13;
const int32_t $ENUM = 1 << 14;
const int32_t $MANDATED = 1 << 15;
const int32_t $DEPRECATED = 1 << 17;

const int32_t $ACC_SUPER = 1 << 5;

// mark flag
const int32_t $CLASS = 1;
const int32_t $PRELOAD = 1 << 1;
const int32_t $PREINIT = 1 << 2;
const int32_t $HAS_CLASS = 1 << 3; // has class$
const int32_t $HAS_FINALIZE = 1 << 4;
const int32_t $CLONEABLE = 1 << 5;
const int32_t $NO_CLASS_INIT = 1 << 6;
//const int32_t $INTERFACE = 1 << 9; // from modify

namespace java {
	namespace lang {

class Class;
class Object;
class Object0;
class String;
class System;
class Thread;
class Throwable;

class Value {
public:
	Value() {}
	Value(int8_t i8) {
		u.i8 = i8;
	}
	Value(int16_t i16) {
		u.i16 = i16;
	}
	Value(int32_t i32) {
		u.i32 = i32;
	}
	Value(int64_t i64) {
		u.i64 = i64;
	}
	Value(float f) {
		u.f = f;
	}
	Value(double d) {
		u.d = d;
	}
	Value(bool b) {
		u.b = b;
	}
	Value(char16_t c) {
		u.c = c;
	}
	Value(Object$* o) {
		u.o = o;
	}
	union {
		int8_t i8;
		int16_t i16;
		int32_t i32;
		int64_t i64;
		float f;
		double d;
		bool b;
		char16_t c;
		Object$* o;
	} u;
	inline operator int8_t() const {
		return u.i8;
	}
	inline operator int16_t() const {
		return u.i16;
	}
	inline operator int32_t() const {
		return u.i32;
	}
	inline operator int64_t() const {
		return u.i64;
	}
	inline operator float() const {
		return u.f;
	}
	inline operator double() const {
		return u.d;
	}
	inline operator bool() const {
		return u.b;
	}
	inline operator char16_t() const {
		return u.c;
	}
	template<typename T>
	inline operator T*() const {
		return (T*)u.o;
	}
	inline void operator =(int8_t i8) {
		u.i8 = i8;
	}
	inline void operator =(int16_t i16) {
		u.i16 = i16;
	}
	inline void operator =(int32_t i32) {
		u.i32 = i32;
	}
	inline void operator =(int64_t i64) {
		u.i64 = i64;
	}
	inline void operator =(float f) {
		u.f = f;
	}
	inline void operator =(double d) {
		u.d = d;
	}
	inline void operator =(bool b) {
		u.b = b;
	}
	inline void operator =(char16_t c) {
		u.c = c;
	}
	template<typename T>
	inline void operator =(T* o) {
		u.o = o;
	}
	inline int8_t& byteValue() {
		return u.i8;
	}
	inline int16_t& shortValue() {
		return u.i16;
	}
	inline int32_t& intValue() {
		return u.i32;
	}
	inline int64_t& longValue() {
		return u.i64;
	}
	inline float& floatValue() {
		return u.f;
	}
	inline double& doubleValue() {
		return u.d;
	}
	inline bool& booleanValue() {
		return u.b;
	}
	inline char16_t& charValue() {
		return u.c;
	}
	inline Object*& objectValue() {
		return (Object*&)u.o;
	}
	template<typename T>
	inline T*& is() {
		return (T*&)u.o;
	}
};

template<typename T, typename... Args>
class HasMark {
private:
	template<typename U>
	static constexpr auto check(U** p) -> typename ::std::is_same<decltype(::std::declval<U>().$$mark(p, p)), int32_t>::type;
	template<typename U>
	static constexpr ::std::false_type check(...);
	typedef decltype(check<T>(0)) type;
public:
	static constexpr bool value = type::value;
};

template<typename U>
class MarkReader {
	template<typename T, $enable_if($is_base_of(::java::lang::Object, T) && HasMark<T>::value)>
	static constexpr int32_t getValue(T*) {
		return T::$$mark((T**)0, (T**)0);
	}
	static constexpr int32_t getValue(...) { return 0; }
public:
	static constexpr int32_t value = getValue(static_cast<U*>(0));
	static constexpr bool isClass = (value & $CLASS) == $CLASS;
	static constexpr bool preload = (value & $PRELOAD) == $PRELOAD;
	static constexpr bool preinit = (value & $PREINIT) == $PREINIT;
	static constexpr bool noClassInit = (value & $NO_CLASS_INIT) == $NO_CLASS_INIT;
	static constexpr bool hasClass = (value & $HAS_CLASS) == $HAS_CLASS;
};

#define $getMark(...) ::java::lang::MarkReader<__VA_ARGS__>::value

constexpr int32_t mergeMark(int32_t mark, int32_t value) {
	if ((value & $HAS_FINALIZE) == $HAS_FINALIZE) {
		mark |= $HAS_FINALIZE;
	}
	if ((value & $CLONEABLE) == $CLONEABLE) {
		mark |= $CLONEABLE;
	}
	if ((value & $NO_CLASS_INIT) == 0) {
		mark &= ~$NO_CLASS_INIT;
	}
	return mark;
}

template<typename T>
inline constexpr int32_t mergeMark(int32_t mark) {
	return mergeMark(mark, $getMark(T));
}

template<typename... Types, $enable_if(sizeof...(Types) == 0)>
inline constexpr int32_t mergeMark(int32_t mark) {
	return mark;
}

template<typename T, typename... Types, $enable_if(sizeof...(Types) > 0)>
inline constexpr int32_t mergeMark(int32_t mark) {
	mark = mergeMark(mark, $getMark(T));
	mark = mergeMark<Types...>(mark);
	return mark;
}

#define $mark(c, x, ...) \
public: \
	template<typename MarkType> \
	static constexpr int32_t $$mark(MarkType**, c**) { \
		return ::java::lang::mergeMark<__VA_ARGS__>(x); \
	}

#define $class(c, x, ...) \
public: \
	$mark(c, x | $CLASS | $HAS_CLASS, ##__VA_ARGS__) \
	static ::java::lang::Class* load$(::java::lang::String* name = nullptr, bool initialize = false); \
	static ::java::lang::Class* class$;

#define $interface(c, x, ...) \
public: \
	$mark(c, x | $INTERFACE | $HAS_CLASS, ##__VA_ARGS__) \
	static ::java::lang::Class* load$(::java::lang::String* name = nullptr, bool initialize = false); \
	static ::java::lang::Class* class$;

class $import Object {
	$class(Object, $PRELOAD | $PREINIT | $NO_CLASS_INIT)
public:
	Object() {};
	void init$() {};
	Object(const Object&) = delete;
	Object& operator=(const Object&) = delete;
	virtual Object0* toObject0$() const {return (Object0*)this;}
	Class* getClass() const;
	virtual int32_t hashCode();
	virtual bool equals(Object$* obj);
	virtual Object* clone();
	virtual String* toString();
	void notify() const;
	void notifyAll() const;
	void wait() const;
	void wait(int64_t timeoutMillis) const;
	void wait(int64_t timeoutMillis, int32_t nanos) const;
	virtual void finalize();
};

class $import Object0 : public Object {
public:
	virtual int32_t hashCode() override;
	virtual bool equals(Object$* obj) override;
	virtual Object* clone() override;
	virtual String* toString() override;
	static Object0* toObject0(const Object$* obj);
	static Object0* sureObject0(const Object$* obj);
	static void lock(const Object0* obj);
	static bool trylock(const Object0* obj);
	static void unlock(const Object0* obj);
	static void nullcheck(const Object$* obj);
	static void throwNullPointerException();
	Class* getClass() const;
	void lock() const;
	bool trylock() const;
	void unlock() const;
};

template<typename T>
class Objectx : public Object, public T {
	using type = Objectx<T>;
	$mark(type, $CLASS | $NO_CLASS_INIT, Object)
public:
	virtual Object0* toObject0$() const override {return (Object0*)(void*)this;}
	virtual int32_t hashCode() override {return ((Object0*)(void*)this)->hashCode();}
	virtual bool equals(Object$* obj) override {return ((Object0*)(void*)this)->equals(obj);}
	virtual String* toString() override {return ((Object0*)(void*)this)->toString();}
};

template<typename T>
class Objectv : public Object {
	using type = Objectv<T>;
	$mark(type, $CLASS | $NO_CLASS_INIT, Object)
public:
	virtual int32_t hashCode() override {
		return (int32_t)(int64_t)value;
	}
	virtual bool equals(Object$* obj) override {
		if (obj != nullptr) {
			Object0* this0 = (Object0*)(void*)this;
			Object0* obj0 = Object0::toObject0(obj);
			if (this0->getClass() == obj0->getClass()) {
				Objectv<T>* objv = (Objectv<T>*)obj;
				return objv->value == value;
			}
		}
		return false;
	}
	T value;
};

	} // lang
} // java

using $Class = ::java::lang::Class;
using $Object = ::java::lang::Object;
using $Object0 = ::java::lang::Object0;
using $String = ::java::lang::String;
using $System = ::java::lang::System;
using $Thread = ::java::lang::Thread;
using $Throwable = ::java::lang::Throwable;
using $Value = ::java::lang::Value;
#define $Objectx ::java::lang::Objectx
#define $Objectv ::java::lang::Objectv

#endif // _java_lang_Object_h_