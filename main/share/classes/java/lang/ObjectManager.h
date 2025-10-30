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

#ifndef _java_lang_ObjectManager_h_
#define _java_lang_ObjectManager_h_

// #define JCPP_USE_NATIVE_OBJECT_STACK
// #define JCPP_USE_NATIVE_OBJECT_STACK_MAGIC
#define JCPP_NATIVE_OBJECT_STACK_MAGIC 0x1122330000332211

#include <java/lang/Array.h>

template<typename U>
class $CheckClass {
public:
	template<typename T, $enable_if($is_same(::java::lang::Object, T))>
	static constexpr bool checkObject(T*) { return true; };
	static constexpr bool checkObject(...) { return false; };

	template<typename T, $enable_if($is_same(::java::lang::Object0, T))>
	static constexpr bool checkObject0(T*) { return true; };
	static constexpr bool checkObject0(...) { return false; };

	template<typename T, $enable_if($is_base_of(::java::lang::BaseArray, T))>
	static constexpr bool checkArray(T*) { return true; };
	static constexpr bool checkArray(...) { return false; };

	template<typename T, void (T::*)() = &T::init$>
	static constexpr bool checkInit(T*) { return true; };
	static constexpr bool checkInit(...) { return false; };

	template<typename T, void (T::*)(int8_t) = &T::init$>
	static constexpr bool checkInitInt8(T*) { return true; };
	static constexpr bool checkInitInt8(...) { return false; };

	template<typename T, void (T::*)(int16_t) = &T::init$>
	static constexpr bool checkInitInt16(T*) { return true; };
	static constexpr bool checkInitInt16(...) { return false; };

	template<typename T, void (T::*)(int32_t) = &T::init$>
	static constexpr bool checkInitInt32(T*) { return true; };
	static constexpr bool checkInitInt32(...) { return false; };

	template<typename T, void (T::*)(int64_t) = &T::init$>
	static constexpr bool checkInitInt64(T*) { return true; };
	static constexpr bool checkInitInt64(...) { return false; };

	template<typename T, void (T::*)(bool) = &T::init$>
	static constexpr bool checkInitBool(T*) { return true; };
	static constexpr bool checkInitBool(...) { return false; };

	template<typename T, void (T::*)(char16_t) = &T::init$>
	static constexpr bool checkInitChar(T*) { return true; };
	static constexpr bool checkInitChar(...) { return false; };

	template<typename T, void (T::*)(float) = &T::init$>
	static constexpr bool checkInitFloat(T*) { return true; };
	static constexpr bool checkInitFloat(...) { return false; };

	template<typename T, void (T::*)(double) = &T::init$>
	static constexpr bool checkInitDouble(T*) { return true; };
	static constexpr bool checkInitDouble(...) { return false; };

	static constexpr bool isSubObject0 = !checkObject(static_cast<U*>(0))
		&& (
			checkObject0(static_cast<U*>(0))
			|| checkArray(static_cast<U*>(0))
			|| checkInit(static_cast<U*>(0))
			|| checkInitInt8(static_cast<U*>(0))
			|| checkInitInt16(static_cast<U*>(0))
			|| checkInitInt32(static_cast<U*>(0))
			|| checkInitInt64(static_cast<U*>(0))
			|| checkInitBool(static_cast<U*>(0))
			|| checkInitChar(static_cast<U*>(0))
			|| checkInitFloat(static_cast<U*>(0))
			|| checkInitDouble(static_cast<U*>(0))
			|| ::java::lang::MarkReader<U>::isClass
		);

	static constexpr bool hasClass = ::java::lang::MarkReader<U>::hasClass;
};

#define $is_object0(...) $CheckClass<__VA_ARGS__>::isSubObject0
#define $has_class(...) $CheckClass<__VA_ARGS__>::hasClass

template<typename T, $enable_if(!$is_object0(T))>
inline ::java::lang::Object* $of(T* object) {
	return (::java::lang::Object*)(void*)object;
}
template<typename T, $enable_if(!$is_object0(T))>
inline ::java::lang::Object* $of($volatile<T*>& object) {
	return (::java::lang::Object*)(void*)object;
}
template<typename T, $enable_if($is_object0(T))>
inline ::java::lang::Object0* $of(T* object) {
	return (::java::lang::Object0*)(void*)object;
}
template<typename T, $enable_if($is_object0(T))>
inline ::java::lang::Object0* $of($volatile<T*>& object) {
	return (::java::lang::Object0*)(void*)object;
}
inline ::java::lang::Object* $of(Object$* object) {
	return (::java::lang::Object*)(void*)object;
}
inline ::std::nullptr_t $of(::std::nullptr_t) {
	return nullptr;
}

namespace java {
	namespace lang {

#define JCPP_ENABLE_CHECK_TO_OBJECT0_ADDRESS

//#define JCPP_OBJECT_VAR_STACK_DUAL_STACK
//#define JCPP_OBJECT_VAR_STACK_SAVE_ADDRESS
//#define JCPP_OBJECT_STACK_OFFSET_MODE
class $export ObjectStack {
public:
#ifdef JCPP_OBJECT_STACK_OFFSET_MODE
	void init(void** varStack, Object** refStack) {
		this->varStack = varStack;
		this->refStack = refStack;
		varStackEnd = varStackRemain = 0;
		refStackEnd = 0;
	}
	int64_t varStackEnd;
	volatile int64_t varStackRemain;
	int64_t refStackEnd;
#else
	void init(void** varStack, Object** refStack) {
		this->varStack = varStack;
		this->refStack = refStack;
		varStackEnd = varStackRemain = varStack;
		refStackEnd = refStack;
	}
	void** varStackEnd;
	void** volatile varStackRemain;
	Object** refStackEnd;
#endif

	void** varStack;
	Object** refStack;

#ifdef JCPP_OBJECT_VAR_STACK_DUAL_STACK
	inline Object*& pushLocalVar(Object$* value) {
#ifdef JCPP_OBJECT_STACK_OFFSET_MODE
		Object*& target = (Object*&)varStack[varStackEnd];
		varStack[varStackEnd] = value;
#else
		Object*& target = (Object*&)*varStackEnd;
		*varStackEnd = value;
#endif
		varStackEnd++;
		varStackRemain = varStackEnd;
		return target;
	}

#ifdef JCPP_OBJECT_STACK_OFFSET_MODE
	inline void popLocalVar() {
		varStackEnd--;
	}
#else
	inline void popLocalVar(void** ptr) {
		varStackEnd = ptr;
	}
#endif
#elif defined(JCPP_OBJECT_VAR_STACK_SAVE_ADDRESS)
	inline void pushLocalVar(Object** addr) {
#ifdef JCPP_OBJECT_STACK_OFFSET_MODE
		varStack[varStackEnd] = addr;
#else
		*varStackEnd = addr;
#endif
		varStackEnd++;
		varStackRemain = varStackEnd;
	}

	inline void popLocalVar() {
		varStackEnd--;
#ifdef JCPP_OBJECT_STACK_OFFSET_MODE
		void* addr = varStack[varStackEnd];
		if (addr != nullptr) {
			varStack[varStackEnd] = *(Object**)addr;
		}
#else
		void* addr = *varStackEnd;
		if (addr != nullptr) {
			*varStackEnd = *(Object**)addr;
		}
#endif
	}
#else
	inline Object*& pushLocalVar(Object$* value) {
#ifdef JCPP_OBJECT_STACK_OFFSET_MODE
		Object*& target = (Object*&)varStack[varStackEnd];
		target = (Object*)value;
#else
		Object*& target = (Object*&)*varStackEnd;
		target = (Object*)value;
#endif
		varStackEnd++;
		varStackRemain = varStackEnd;
		return target;
	}

	inline void popLocalVar() {
		varStackEnd--;
	}
#endif
	// make sure obj never be null
	inline void pushLocalRef(Object$* obj) {
#ifdef JCPP_OBJECT_STACK_OFFSET_MODE
		refStack[refStackEnd] = (Object*)obj;
#else
		*refStackEnd = (Object*)obj;
#endif
		refStackEnd++;
	}

	inline void popLocalRef() {
		refStackEnd--;
	}
	inline static ObjectStack*& currentObjectStack() {
		thread_local ObjectStack* objectStack = nullptr;
		return objectStack;
	}
};

class ObjectStackCache {
public:
	inline static ObjectStack*& currentObjectStack() {
		thread_local ObjectStack* objectStack = nullptr;
		return objectStack;
	}
};

#define $setObjectStackCache() ::java::lang::ObjectStackCache::currentObjectStack() = ::java::lang::ObjectStack::currentObjectStack()

#ifdef JCPP_USE_LIB_CURRENT_OBJECT_STACK_CACHE
	#define $getCurrentObjectStatck() ::java::lang::ObjectStackCache::currentObjectStack()
	#define $onLibThreadStart(event) $setObjectStackCache()
#else
	#define $getCurrentObjectStatck() ::java::lang::ObjectStack::currentObjectStack()
	#define $onLibThreadStart(event)
#endif

class $export ObjectManager {
public:
	static void attachCurrentThread();
	static void detachCurrentThread();
	static ObjectStack* getCurrentObjectStack();
	static void* langObjectToObject0Address;
	static inline void* getToObject0Address(const Object$* obj) {
		void*** pVtab = (void***)(obj);
#if defined(__clang__) || defined(__GNUC__)
		return *(*pVtab + 2); // the-deleting-destructor-occupy-a-second-vtable-slot
#else
		return *(*pVtab + 1);
#endif
	}
	static inline bool checkToObject0Address(const Object$* obj) {
		void* addr = getToObject0Address(obj);
		return addr == langObjectToObject0Address;
	}

	static Class* allocClassClass();
	static Object* alloc(Class* clazz, int64_t size);
	static Object* allocOrNull(Class* clazz, int64_t size);

	static void* allocRaw(int64_t size);
	static void* allocRawOrNull(int64_t size);
	static void* allocRawOrExit(int64_t size);
	static void freeRaw(void* raw);
	// never to free
	static void* allocRawStatic(int64_t size);
	static void* allocRawStaticOrNull(int64_t size);
	static void* allocRawStaticOrExit(int64_t size);
	static int64_t sizeOfRaw(const void* raw);
	static void memsetRaw(void* raw, int value);

	static Array<int8_t>* newByteArray(int32_t length);
	static Array<int16_t>* newShortArray(int32_t length);
	static Array<int32_t>* newIntArray(int32_t length);
	static Array<int64_t>* newLongArray(int32_t length);
	static Array<float>* newFloatArray(int32_t length);
	static Array<double>* newDoubleArray(int32_t length);
	static Array<bool>* newBooleanArray(int32_t length);
	static Array<char16_t>* newCharArray(int32_t length);

	static Array<int8_t>* newByteArray(const ::std::initializer_list<int8_t>& elements);
	static Array<int16_t>* newShortArray(const ::std::initializer_list<int16_t>& elements);
	static Array<int32_t>* newIntArray(const ::std::initializer_list<int32_t>& elements);
	static Array<int64_t>* newLongArray(const ::std::initializer_list<int64_t>& elements);
	static Array<float>* newFloatArray(const ::std::initializer_list<float>& elements);
	static Array<double>* newDoubleArray(const ::std::initializer_list<double>& elements);
	static Array<bool>* newBooleanArray(const ::std::initializer_list<bool>& elements);
	static Array<char16_t>* newCharArray(const ::std::initializer_list<char16_t>& elements);

	static ObjectArray* newObjectArray(int32_t length);
	static ObjectArray* newObjectArray(const ::std::initializer_list<Object$*>& elements);
	static ObjectArray* newObjectArray(Class* componentType, int32_t length);
	static ObjectArray* newObjectArray(Class* elementType, int32_t dim, int32_t length);
	static ObjectArray* newObjectArray(Class* elementType, int32_t dim, const ::std::initializer_list<Object$*>& elements);

	static BaseArray* newArray(Class* componentType, int32_t length);
	static BaseArray* newArrayOrNull(Class* componentType, int32_t length);
	static BaseArray* newMultiArray(Class* elementType, $ints* dim);

	static Object* allocStatic(Class* clazz, int64_t size);
	static Object* allocStaticOrNull(Class* clazz, int64_t size);
	static Object* allocConst(Class* clazz, int64_t size);
	static Object* allocConstOrNull(Class* clazz, int64_t size);
	static Object* allocStaticArray(Class* clazz, int32_t length);
	static Object* allocStaticArrayOrNull(Class* clazz, int32_t length);
	static Object* allocConstArray(Class* clazz, int32_t length);
	static Object* allocConstArrayOrNull(Class* clazz, int32_t length);

	static void* alloc(const char* className, int64_t size, int32_t mark, bool isBaseOfObject);
	static void* allocOrNull(const char* className, int64_t size, int32_t mark, bool isBaseOfObject);

	static Object0* clone(Object0* inst);

	static Object* assignField(Object0* owner, int32_t fieldOffset, Object$* value);
	static Object* assignField(Object0* owner, int32_t fieldOffset, Object0* value);
	static Object* assignField(Object0* owner, int32_t fieldOffset, ::std::nullptr_t);
	static Object* assignField0(Object0* owner, int32_t fieldOffset, Object0* value);
	static Object* assignField0(Object0* owner, int32_t fieldOffset, ::std::nullptr_t);

	static String* plusAssignField(Object0* owner, int32_t fieldOffset, String* value);

	static Object0* assignArray(ObjectArray* array, Object0*& field, Object$* value);
	static Object0* assignArray(ObjectArray* array, Object0*& field, Object0* value);
	static Object0* assignArray(ObjectArray* array, Object0*& field, ::std::nullptr_t);

	static void fillArray(ObjectArray* array, int32_t fromIndex, int32_t toIndex, Object$* value);
	static void fillArray(ObjectArray* array, int32_t fromIndex, int32_t toIndex, Object0* value);
	static void fillArray(ObjectArray* array, int32_t fromIndex, int32_t toIndex, ::std::nullptr_t);

	static Object* assignStatic(Object*& var, Object* value);
	static Object* assignStatic(Object*& var, Object0* value);
	static Object* assignStatic(Object0*& var, Object0* value);
	static Object* assignStatic(Object*& var, ::std::nullptr_t);
	static Object* assignStatic(Object0*& var, ::std::nullptr_t);

	static void copyArray(ObjectArray* dstArray, int32_t dstPos, const ObjectArray* srcArray, int32_t srcPos, int32_t length);
	static void copyArray(ObjectArray* array, int32_t dstPos, int32_t srcPos, int32_t length);

	static void setObjectArrayClass(ObjectArray* array, Class* clazz);

	// for JNI
	static void prepareNative();
	static void finishNative();
	static void pushLocalFrame(int32_t capacity);
	static Object* popLocalFrame(Object$* result);
	static int32_t ensureLocalCapacity(int32_t capacity);
	static void newLocalRef(Object$* obj);
	static void newLocalRef(Object0* obj);
	static void deleteLocalRef(Object$* obj);
	static Object* newGlobalRef(Object$* obj);
	static void deleteGlobalRef(Object$* obj);
	static Object* newWeakGlobalRef(Object$* obj);
	static void deleteWeakGlobalRef(Object$* obj);

	static bool hasPendingException();
	static void setPendingException(Throwable* e);
	static Throwable* getPendingException();
	static Throwable* catchPendingException();

	static bool compareAndSetReference(Object0* owner, Object** target, Object$* expected, Object$* value);
	static bool compareAndSetReference(Object** target, Object$* expected, Object$* value);
	static Object* compareAndExchangeReference(Object0* owner, Object** target, Object$* expected, Object$* value);
	static Object* compareAndExchangeReference(Object** target, Object$* expected, Object$* value);

	static Object* newInstanceReflect(String* className, String* descriptor, ...);
	static Object* invokeReflect(String* className, String* methodName, String* descriptor, Object$* obj, ...);
	static Object* invokeReflectStatic(String* className, String* methodName, String* descriptor, ...);
	static Object* getReflect(String* className, String* fieldName, Object$* obj);
	static void setReflect(String* className, String* fieldName, Object$* obj, Object$* value);
	static Object* getReflectStatic(String* className, String* fieldName);
	static void setReflectStatic(String* className, String* fieldName, Object$* value);

	static void debug(Object$* obj, int32_t mask = 0xFFFFFFFF, int32_t ttl = 1);
	static void setDebugOpt(Object$* obj, int64_t opt);
	static int64_t getDebugOpt(Object$* obj);
};

#define $debug(...) ::java::lang::ObjectManager::debug(__VA_ARGS__)

class $export MagicObjectVar {
public:
	inline MagicObjectVar(Object$* obj) : obj(obj) {
	}
	inline ~MagicObjectVar() {
		obj = nullptr;
	}
	void* volatile magic = (void*)JCPP_NATIVE_OBJECT_STACK_MAGIC;
	Object$* volatile obj;
};

template<typename T>
class MagicRef {
public:
	MagicRef(const MagicRef&) = delete;
	inline MagicRef(T* t) : t(t) {
	}
	inline ~MagicRef() {
		t = nullptr;
	}
	void* volatile magic = (void*)JCPP_NATIVE_OBJECT_STACK_MAGIC;
	T* volatile t;
};

template<typename T>
inline ::java::lang::MagicRef<T> makeMagicRef(T* t) {
	return ::java::lang::MagicRef<T>(t);
}
template<typename T>
inline ::java::lang::MagicRef<T> makeMagicRef(const $volatile(T)& t) {
	return ::java::lang::MagicRef<T>(t.get());
}

#ifdef JCPP_OBJECT_VAR_STACK_DUAL_STACK
template<typename T, typename S = int32_t>
class ObjectVar {
public:
	inline ObjectVar(T* value, int32_t) {
		var = &$getCurrentObjectStatck()->pushLocalVar(value);
	}
	inline T* assign(T* value) {
		*var = (Object*)(void*)value;
		return value;
	}
	inline ~ObjectVar() {
		$getCurrentObjectStatck()->popLocalVar((void**)var);
	}
	Object** volatile var;
};
template<typename T>
class ObjectVar<T, ObjectStack*> {
public:
	inline ObjectVar(T* value, ObjectStack* s) {
		var = &s->pushLocalVar(value);
		objectStack = s;
	}
	inline T* assign(T* value) {
		*var = (Object*)(void*)value;
		return value;
	}
	inline ~ObjectVar() {
		objectStack->popLocalVar((void**)var);
	}
	Object** volatile var;
	ObjectStack* objectStack;
};
#define $var(type, name, ...) \
			type* name = $tryCast<type>(__VA_ARGS__); \
			::java::lang::ObjectVar<type, decltype($localCurrentObjectStackCache)> name##$objvar(name, $localCurrentObjectStackCache);
#define $auto(name, ...) \
			auto name = __VA_ARGS__; \
			::java::lang::ObjectVar<decltype(*name), decltype($localCurrentObjectStackCache)> name##$objvar(name, $localCurrentObjectStackCache);
#elif defined(JCPP_OBJECT_VAR_STACK_SAVE_ADDRESS)
template<typename T>
class ObjectVar {
public:
	inline ObjectVar(Object** addr) {
		$getCurrentObjectStatck()->pushLocalVar(addr);
	}
	inline ~ObjectVar() {
		$getCurrentObjectStatck()->popLocalVar();
	}
};
#else
template<typename T, typename S = int32_t>
class ObjectVar {
public:
	inline ObjectVar(int32_t) {
		objectStack = $getCurrentObjectStatck();
	}
	inline Object*& pushLocalVar(T* value) {
		return objectStack->pushLocalVar(value);
	}
	inline ~ObjectVar() {
		objectStack->popLocalVar();
	}
	ObjectStack* objectStack;
};
template<typename T>
class ObjectVar<T, ObjectStack*> {
public:
	inline ObjectVar(ObjectStack* s) {
		objectStack = s;
	}
	inline Object*& pushLocalVar(T* value) {
		return objectStack->pushLocalVar(value);
	}
	inline ~ObjectVar() {
		objectStack->popLocalVar();
	}
	ObjectStack* objectStack;
};

#define $var(type, name, ...) \
			type* name##$objvalue = $tryCast<type>(__VA_ARGS__); \
			::java::lang::ObjectVar<type, decltype($localCurrentObjectStackCache)> name##$objvar($localCurrentObjectStackCache); \
			type*& name = (type*&)(void*&)name##$objvar.pushLocalVar(name##$objvalue);
#define $auto(name, ...) \
			auto name##$objvalue = __VA_ARGS__; \
			::java::lang::ObjectVar<decltype(name##$objvalue), decltype($localCurrentObjectStackCache)> name##$objvar($localCurrentObjectStackCache); \
			decltype(name##$objvalue)& name = (decltype(name##$objvalue)&)(void*&)name##$objvar.pushLocalVar(name##$objvalue);
#endif

template<typename T, typename S = int32_t>
class Ref {
public:
	Ref(const Ref&) = delete;
	inline Ref(Ref&& ref) {
		this->ref = ref.ref;
		this->objectStack = ref.objectStack;
		ref.ref = nullptr;
	}
	inline Ref(T* ref, int32_t) : ref(ref) {
		if (ref != nullptr) {
			objectStack = $getCurrentObjectStatck();
			objectStack->pushLocalRef($of(ref));
		}
	}
	inline ~Ref() {
		if (ref != nullptr) {
			objectStack->popLocalRef();
		}
	}
	T* ref;
	ObjectStack* objectStack;
};
template<typename T>
class Ref<T, ObjectStack*> {
public:
	Ref(const Ref&) = delete;
	inline Ref(Ref&& ref) {
		this->ref = ref.ref;
		this->objectStack = ref.objectStack;
		ref.ref = nullptr;
	}
	inline Ref(T* ref, ObjectStack* s) : ref(ref), objectStack(s) {
		if (ref != nullptr) {
			s->pushLocalRef($of(ref));
		}
	}
	inline ~Ref() {
		if (ref != nullptr) {
			objectStack->popLocalRef();
		}
	}
	T* ref;
	ObjectStack* objectStack;
};

template<typename T, typename S>
inline ::java::lang::Ref<T, S> makeRef(S s, T* ref) {
	return ::java::lang::Ref<T, S>(ref, s);
}
template<typename T, typename S>
inline ::java::lang::Ref<T, S> makeRef(S s, const $volatile(T)& ref) {
	return ::java::lang::Ref<T, S>(ref.get(), s);
}

#define $ref(...) ::java::lang::makeRef($localCurrentObjectStackCache, __VA_ARGS__).ref

template<typename T>
class Allocator {
public:
	using value_type = T;
	T* allocate(size_t numObjs, const void* hit = nullptr) {
		return (T*)::java::lang::ObjectManager::allocRaw(sizeof(T) * numObjs);
	}
	void deallocate(void* p, size_t numObjs){
		::java::lang::ObjectManager::freeRaw(p);
	}
};

template<typename T>
class NothrowAllocator {
public:
	using value_type = T;
	T* allocate(size_t numObjs, const void* hit = nullptr) {
		return (T*)::java::lang::ObjectManager::allocRawOrNull(sizeof(T) * numObjs);
	}
	void deallocate(void* p, size_t numObjs){
		::java::lang::ObjectManager::freeRaw(p);
	}
};

template<typename T>
void attachCurrentThread() {
	::java::lang::ObjectManager::attachCurrentThread();
}

template<typename T>
void detachCurrentThread() {
	::java::lang::ObjectManager::detachCurrentThread();
}

	} // lang
} // java

// 0: default is disable
const int32_t $localCurrentObjectStackCache = 0;
#define $useLocalCurrentObjectStackCache() ::java::lang::ObjectStack* $localCurrentObjectStackCache = $getCurrentObjectStatck()

#define $attachCurrentThread() ::java::lang::attachCurrentThread<void>()
#define $detachCurrentThread() ::java::lang::detachCurrentThread<void>()

#endif // _java_lang_ObjectManager_h_