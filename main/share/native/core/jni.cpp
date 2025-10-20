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

#include "jni.h"
#include "jvm.h"

#include "interfaceSupport.h"
#include "JavaThread.h"
#include "OSThread.h"
#include "Platform.h"

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Machine.h>
#include <java/lang/Module.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Constructor.h>
#include <java/nio/Buffer.h>
#include <java/nio/DirectByteBuffer.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jdk/internal/misc/Unsafe.h>
#include <java/lang/ObjectHead.h>
#include <java.base.h>
#include <jcpp.h>

using namespace ::java::lang;
using ::java::lang::ref::WeakReference;
using $Thread = ::java::lang::Thread;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $Constructor = ::java::lang::reflect::Constructor;
using ::java::nio::Buffer;
using ::java::nio::DirectByteBuffer;
using ::sun::nio::ch::DirectBuffer;
using jdk::internal::reflect::Reflection;
using jdk::internal::misc::Unsafe;

extern const struct JNIInvokeInterface_ jni_InvokeInterface;

std::atomic_bool vmCreated = false;
struct JavaVM_ javaVM = {&jni_InvokeInterface};

#define resolveRef Platform::resolveRef
#define invoke(...) Platform::invokeJni(__VA_ARGS__)
#define initInst(...) Platform::initInstanceJni(__VA_ARGS__)

inline Object* of($Value ret, $Method* method) {
	Class* returnType = method->returnType;
	if (!returnType->isPrimitive()) {
		return ret.objectValue();
	} else {
		if (returnType == Byte::TYPE) {
			return $of(ret.byteValue());
		} else if (returnType == Short::TYPE) {
			return $of(ret.shortValue());
		} else if (returnType == Integer::TYPE) {
			return $of(ret.intValue());
		} else if (returnType == Long::TYPE) {
			return $of(ret.longValue());
		} else if (returnType == Float::TYPE) {
			return $of(ret.floatValue());
		} else if (returnType == Double::TYPE) {
			return $of(ret.doubleValue());
		} else if (returnType == Boolean::TYPE) {
			return $of(ret.booleanValue());
		} else if (returnType == Character::TYPE) {
			return $of(ret.charValue());
		}
		return Void::VOID$;
	}
}

JNI_ENTRY(jclass, jni_DefineClass(JNIEnv* env, const char* name, jobject loaderRef, const jbyte *buf, jsize bufLen))
	$var(Object, obj, resolveRef(loaderRef));
	ClassLoader* loader = (ClassLoader*)obj;
	$var(String, className, $str(name));
	$var($bytes, bytes, $new<$bytes>(bufLen));
	bytes->setRegion(0, bufLen, (int8_t*)buf);
	Class* clazz = Machine::defineClass1(loader, className, bytes, 0, bufLen, nullptr, nullptr);
	return (jclass)clazz;
JNI_END(nullptr)

JNI_ENTRY(jclass, jni_FindClass(JNIEnv* env, const char* name))
	$var(String, className, $str(name));
	if (className->charAt(0) == '[') {
		return (jclass)Machine::findClass(nullptr, className);
	}
	$assign(className, className->replace('/', '.'));
	if (!Machine::isInited()) {
		return (jclass)Machine::findClass(nullptr, className);
	}
	Class* clazz = nullptr;
	int32_t index = className->lastIndexOf('.');
	if (index != -1) {
		$var(String, packageName, className->substring(0, index));
		if (packageName->equals("java.lang")) {
			clazz = ClassLoader::findBootstrapClassOrNull(className);
		}
	}
	if (clazz == nullptr) {
		Class* caller = Reflection::getCallerClass();
		if (caller != nullptr) {
			ClassLoader* loader = caller->getClassLoader();
			if (loader == nullptr) {
				clazz = ClassLoader::findBootstrapClassOrNull(className);
			} else {
				clazz = loader->loadClass(className, false);
			}
		} else {
			clazz = ClassLoader::getSystemClassLoader()->loadClass(className, false);
		}
	}
	if (clazz != nullptr) {
		clazz->ensureClassInitialized();
	}
	return (jclass)clazz;
JNI_END(nullptr)

JNI_ENTRY(jmethodID, jni_FromReflectedMethod(JNIEnv* env, jobject method))
	$var(Object, obj, resolveRef(method));
	if ($instanceOf($Method, obj)) {
		$Method* method2 = $cast($Method, obj);
		return (jmethodID)$nc(method2->clazz)->refMethod($ref(method2->getName()), $ref(method2->getDescriptor()));
	}
	if ($instanceOf($Constructor, obj)) {
		$Constructor* constructor = $cast($Constructor, obj);
		return (jmethodID)$nc(constructor->clazz)->refConstructor($ref(constructor->getDescriptor()));
	}
	return (jmethodID)nullptr;
JNI_END(nullptr)

JNI_ENTRY(jfieldID, jni_FromReflectedField(JNIEnv* env, jobject field))
	$var(Object, obj, resolveRef(field));
	$Field* field2 = $cast($Field, obj);
	if (field2 != nullptr) {
		return (jfieldID)$nc(field2->clazz)->refField($ref(field2->getName()));
	}
	return (jfieldID)nullptr;
JNI_END(nullptr)

JNI_ENTRY(jobject, jni_ToReflectedMethod(JNIEnv* env, jclass cls, jmethodID methodId, jboolean isStatic))
	return (jobject)methodId;
JNI_END(nullptr)

JNI_ENTRY(jclass, jni_GetSuperclass(JNIEnv* env, jclass sub))
	Class* clazz = (Class*)sub;
	Class* superClass = $nc(clazz)->getSuperclass();
	return (jclass)superClass;
JNI_END(nullptr)

JNI_ENTRY(jboolean, jni_IsAssignableFrom(JNIEnv* env, jclass sub, jclass super))
	Class* subClass = (Class*)sub;
	Class* superClass = (Class*)super;
	return $nc(superClass)->isAssignableFrom(subClass);
JNI_END(JNI_FALSE)

JNI_ENTRY(jint, jni_Throw(JNIEnv* env, jthrowable obj))
	$var(Object, obj2, resolveRef(obj));
	ObjectManager::setPendingException(($Throwable*)obj2);
	return JNI_OK;
JNI_END(JNI_ERR)

JNI_ENTRY(jint, jni_ThrowNew(JNIEnv* env, jclass clazz, const char* message))
	Class* cls = (Class*)clazz;
	if (Throwable::class$->isAssignableFrom(cls)) {
		$var(Throwable, e, (Throwable*)cls->newInstance());
		$set(e, detailMessage, $str(message));
		ObjectManager::setPendingException(e);
		return JNI_OK;
	}
JNI_END(JNI_ERR)

JNI_ENTRY(jthrowable, jni_ExceptionOccurred(JNIEnv* env))
	Throwable* exec = ObjectManager::getPendingException();
	ObjectManager::newLocalRef(exec);
	return (jthrowable)exec;
JNI_END(nullptr)

JNI_ENTRY(void, jni_ExceptionDescribe(JNIEnv* env))
	$var(Throwable, e, ObjectManager::getPendingException());
	if (e != nullptr) {
		System::out->println($ref(e->getMessage()));
	}
JNI_END_VOID

JNI_ENTRY(void, jni_ExceptionClear(JNIEnv* env))
	ObjectManager::setPendingException(nullptr);
JNI_END_VOID

JNI_ENTRY(void, jni_FatalError(JNIEnv* env, const char* msg))
	System::out->print(String::valueOf({$cstr("FATAL ERROR in native method: "), $$str(msg)}));
	OS::abort();
JNI_END_VOID

JNI_ENTRY(jint, jni_PushLocalFrame(JNIEnv* env, jint capacity))
	if (capacity < 0) {
		return JNI_ERR;
	}
	ObjectManager::pushLocalFrame(capacity);
	return JNI_OK;
JNI_END(JNI_ERR)

JNI_ENTRY(jobject, jni_PopLocalFrame(JNIEnv* env, jobject result))
	$var(Object, obj, resolveRef(result));
	Object* ret = ObjectManager::popLocalFrame(obj);
	return (jobject)ret;
JNI_END(nullptr)

JNI_ENTRY(jobject, jni_NewGlobalRef(JNIEnv* env, jobject obj))
	$var(Object, obj2, resolveRef(obj));
	Object* ref = ObjectManager::newGlobalRef(obj2);
	return (jobject)ref;
JNI_END(nullptr)

JNI_ENTRY(void, jni_DeleteGlobalRef(JNIEnv* env, jobject ref))
	ObjectManager::deleteGlobalRef(ref);
JNI_END_VOID

JNI_ENTRY(void, jni_DeleteLocalRef(JNIEnv* env, jobject obj))
	$var(Object, obj2, resolveRef(obj));
	ObjectManager::deleteLocalRef(obj2);
JNI_END_VOID

JNI_ENTRY(jboolean, jni_IsSameObject(JNIEnv* env, jobject r1, jobject r2))
	$var(Object, obj1, resolveRef(r1));
	$var(Object, obj2, resolveRef(r2));
	return $equals(obj1, obj2);
JNI_END(false)

JNI_ENTRY(jobject, jni_NewLocalRef(JNIEnv* env, jobject ref))
	$var(Object, obj, resolveRef(ref));
	ObjectManager::newLocalRef(obj);
	return (jobject)obj;
JNI_END(nullptr)

JNI_ENTRY(jint, jni_EnsureLocalCapacity(JNIEnv* env, jint capacity))
	if (capacity >= 0) {
		return JNI_OK;
	} else {
		return JNI_ERR;
	}
JNI_END(JNI_ERR)

JNI_ENTRY(jobjectRefType, jni_GetObjectRefType(JNIEnv* env, jobject obj))
	if (obj != nullptr) {
		Object0* obj0 = $toObject0(obj);
		ObjectHead* oh = toOh(obj0);
		if (oh->isGlobalRef()) {
			if (oh->getRefType() == OBJECT_REF_TYPE_WEAK) {
				return JNIWeakGlobalRefType;
			} else {
				return JNIGlobalRefType;
			}
		}
		return JNILocalRefType;
	}
	return JNIInvalidRefType;
JNI_END(JNIInvalidRefType)

JNI_ENTRY(jobject, jni_AllocObject(JNIEnv* env, jclass clazz))
	Class* cls = (Class*)clazz;
	Object* obj = $nc(cls)->allocateInstance();
	ObjectManager::newLocalRef(obj);
	return (jobject)obj;
JNI_END(nullptr)

JNI_ENTRY(jobject, jni_NewObjectA(JNIEnv* env, jclass clazz, jmethodID methodID, const jvalue* args))
	Class* cls = (Class*)clazz;
	Object* inst = $nc(cls)->allocateInstance();
	ObjectManager::newLocalRef(inst);
	$Constructor* constructor = ($Constructor*)methodID;
	initInst(constructor, inst, args);
	return (jobject)inst;
JNI_END(nullptr)

JNI_ENTRY(jobject, jni_NewObjectV(JNIEnv* env, jclass clazz, jmethodID methodID, va_list args))
	Class* cls = (Class*)clazz;
	Object* inst = $nc(cls)->allocateInstance();
	ObjectManager::newLocalRef(inst);
	$Constructor* constructor = ($Constructor*)methodID;
	initInst(constructor, inst, args);
	return (jobject)inst;
JNI_END(nullptr)

JNI_ENTRY(jobject, jni_NewObject(JNIEnv* env, jclass clazz, jmethodID methodID, ...))
	Class* cls = (Class*)clazz;
	Object* inst = $nc(cls)->allocateInstance();
	ObjectManager::newLocalRef(inst);
	$Constructor* constructor = ($Constructor*)methodID;
	va_list args;
	va_start(args, methodID);
	initInst(constructor, inst, args);
	va_end(args);
	return (jobject)inst;
JNI_END(nullptr)

JNI_ENTRY(jclass, jni_GetObjectClass(JNIEnv* env, jobject obj))
	$var(Object, obj2, resolveRef(obj));
	Class* clazz = $nc(obj2)->getClass();
	return (jclass)clazz;
JNI_END(nullptr)

JNI_ENTRY(jboolean, jni_IsInstanceOf(JNIEnv* env, jobject obj, jclass clazz))
	$var(Object, obj2, resolveRef(obj));
	Class* cls = (Class*)clazz;
	return $nc(cls)->isInstance(obj2);
JNI_END(JNI_FALSE)

JNI_ENTRY(jmethodID, jni_GetMethodID(JNIEnv* env, jclass clazz, const char* name, const char* sig))
	Class* cls = (Class*)clazz;
	$Method* method = $nc(cls)->refMethod($$str(name), $$str(sig));
	if (method != nullptr && method->isStatic()) {
	// TODO
	}
	return (jmethodID)method;
JNI_END(nullptr)

JNI_ENTRY(jmethodID, jni_GetStaticMethodID(JNIEnv* env, jclass clazz, const char* name, const char* sig))
	Class* cls = (Class*)clazz;
	$Method* method = cls->refMethod($$str(name), $$str(sig));
	if (method != nullptr && !method->isStatic()) {
	// TODO
	}
	return (jmethodID)method;
JNI_END(nullptr)

// call method
JNI_ENTRY(void, jni_CallVoidMethod(JNIEnv* env, jobject obj, jmethodID methodID, ...))
	Object* m = (Object*)methodID;
	va_list args;
	va_start(args, methodID);
	if ($instanceOf($Method, m)) {
		$Method* method = $cast($Method, m);
		invoke(false, ($Method*)methodID, obj, args);
		return;
	}
	if ($instanceOf($Constructor, m)) {
		$Constructor* constructor = $cast($Constructor, m);
		initInst(constructor, obj, args);
	}
	va_end(args);
JNI_END_VOID

JNI_ENTRY(jobject, jni_CallObjectMethod(JNIEnv* env, jobject obj, jmethodID methodID, ...))
	va_list args;
	va_start(args, methodID);
	$Method* method = ($Method*)methodID;
	$Value res = invoke(false, method, obj, args);
	Object* ret = of(res, method);
	ObjectManager::newLocalRef(ret);
	va_end(args);
	return (jobject)ret;
JNI_END(nullptr)

#define DEFINE_CALL_METHOD(ResultType, Result, Tag, DefaultReturnValue) \
JNI_ENTRY(ResultType, jni_Call##Result##Method(JNIEnv* env, jobject obj, jmethodID methodID, ...)) \
	va_list args; \
	va_start(args, methodID); \
	$Value res = invoke(false, ($Method*)methodID, obj, args); \
	va_end(args); \
	return (ResultType)res.Tag##Value();\
JNI_END(DefaultReturnValue)

DEFINE_CALL_METHOD(jboolean, Boolean, boolean, JNI_FALSE)
DEFINE_CALL_METHOD(jbyte, Byte, byte, 0)
DEFINE_CALL_METHOD(jchar, Char, char, 0)
DEFINE_CALL_METHOD(jshort, Short, short, 0)
DEFINE_CALL_METHOD(jint, Int, int, 0)
DEFINE_CALL_METHOD(jlong, Long, long, 0)
DEFINE_CALL_METHOD(jfloat, Float, float, 0)
DEFINE_CALL_METHOD(jdouble, Double, double, 0)

JNI_ENTRY(void, jni_CallVoidMethodV(JNIEnv* env, jobject obj, jmethodID methodID, va_list args))
	Object* m = ($Object*)methodID;
	if ($instanceOf($Method, m)) {
		$Method* method = $cast($Method, m);
		invoke(false, ($Method*)methodID, obj, args);
		return;
	}
	if ($instanceOf($Constructor, m)) {
		$Constructor* constructor = $cast($Constructor, m);
		initInst(constructor, obj, args);
		return;
	}
JNI_END_VOID

JNI_ENTRY(jobject, jni_CallObjectMethodV(JNIEnv* env, jobject obj, jmethodID methodID, va_list args))
	$Method* method = ($Method*)methodID;
	$Value res = invoke(false, method, obj, args);
	Object* ret = of(res, method);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JNI_END(nullptr)

#define DEFINE_CALL_METHODV(ResultType, Result, Tag, DefaultReturnValue) \
JNI_ENTRY(ResultType, jni_Call##Result##MethodV(JNIEnv* env, jobject obj, jmethodID methodID, va_list args)) \
	$Value res = invoke(false, ($Method*)methodID, obj, args); \
	return (ResultType)res.Tag##Value();\
JNI_END(DefaultReturnValue)

DEFINE_CALL_METHODV(jboolean, Boolean, boolean, JNI_FALSE)
DEFINE_CALL_METHODV(jbyte, Byte, byte, 0)
DEFINE_CALL_METHODV(jchar, Char, char, 0)
DEFINE_CALL_METHODV(jshort, Short, short, 0)
DEFINE_CALL_METHODV(jint, Int, int, 0)
DEFINE_CALL_METHODV(jlong, Long, long, 0)
DEFINE_CALL_METHODV(jfloat, Float, float, 0)
DEFINE_CALL_METHODV(jdouble, Double, double, 0)

JNI_ENTRY(void, jni_CallVoidMethodA(JNIEnv* env, jobject obj, jmethodID methodID, const jvalue* args))
	Object* m = (Object*)methodID;
	if ($instanceOf($Method, m)) {
		$Method* method = $cast($Method, m);
		invoke(false, ($Method*)methodID, obj, args);
		return;
	}
	if ($instanceOf($Constructor, m)) {
		$Constructor* constructor = $cast($Constructor, m);
		initInst(constructor, obj, args);
	}
JNI_END_VOID

JNI_ENTRY(jobject, jni_CallObjectMethodA(JNIEnv* env, jobject obj, jmethodID methodID, const jvalue* args))
	$Method* method = ($Method*)methodID;
	$Value res = invoke(false, method, obj, args);
	Object* ret = of(res, method);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JNI_END(nullptr)

#define DEFINE_CALL_METHODA(ResultType, Result, Tag, DefaultReturnValue) \
JNI_ENTRY(ResultType, jni_Call##Result##MethodA(JNIEnv* env, jobject obj, jmethodID methodID, const jvalue* args)) \
	$Value res = invoke(false, ($Method*)methodID, obj, args); \
	return (ResultType)res.Tag##Value();\
JNI_END(DefaultReturnValue)

DEFINE_CALL_METHODA(jboolean, Boolean, boolean, JNI_FALSE)
DEFINE_CALL_METHODA(jbyte, Byte, byte, 0)
DEFINE_CALL_METHODA(jchar, Char, char, 0)
DEFINE_CALL_METHODA(jshort, Short, short, 0)
DEFINE_CALL_METHODA(jint, Int, int, 0)
DEFINE_CALL_METHODA(jlong, Long, long, 0)
DEFINE_CALL_METHODA(jfloat, Float, float, 0)
DEFINE_CALL_METHODA(jdouble, Double, double, 0)

JNI_ENTRY(void, jni_CallNonvirtualVoidMethod(JNIEnv* env, jobject obj, jclass cls, jmethodID methodID, ...))
	va_list args;
	va_start(args, methodID);
	invoke(true, ($Method*)methodID, obj, args);
	va_end(args);
JNI_END_VOID

JNI_ENTRY(jobject, jni_CallNonvirtualObjectMethod(JNIEnv* env, jobject obj, jclass cls, jmethodID methodID, ...)) \
	va_list args;
	va_start(args, methodID);
	$Method* method = ($Method*)methodID;
	$Value res = invoke(true, method, obj, args);
	va_end(args);
	Object* ret = of(res, method);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JNI_END(nullptr)

#define DEFINE_CALL_NONVIRTUAL_METHOD(ResultType, Result, Tag, DefaultReturnValue) \
JNI_ENTRY(ResultType, jni_CallNonvirtual##Result##Method(JNIEnv* env, jobject obj, jclass cls, jmethodID methodID, ...)) \
	va_list args; \
	va_start(args, methodID); \
	$Value res = invoke(true, ($Method*)methodID, obj, args); \
	va_end(args); \
	return (ResultType)res.Tag##Value();\
JNI_END(DefaultReturnValue)

DEFINE_CALL_NONVIRTUAL_METHOD(jboolean, Boolean, boolean, JNI_FALSE)
DEFINE_CALL_NONVIRTUAL_METHOD(jbyte, Byte, byte, 0)
DEFINE_CALL_NONVIRTUAL_METHOD(jchar, Char, char, 0)
DEFINE_CALL_NONVIRTUAL_METHOD(jshort, Short, short, 0)
DEFINE_CALL_NONVIRTUAL_METHOD(jint, Int, int, 0)
DEFINE_CALL_NONVIRTUAL_METHOD(jlong, Long, long, 0)
DEFINE_CALL_NONVIRTUAL_METHOD(jfloat, Float, float, 0)
DEFINE_CALL_NONVIRTUAL_METHOD(jdouble, Double, double, 0)

JNI_ENTRY(void, jni_CallNonvirtualVoidMethodV(JNIEnv* env, jobject obj, jclass cls, jmethodID methodID, va_list args))
	invoke(true, ($Method*)methodID, obj, args);
JNI_END_VOID

JNI_ENTRY(jobject, jni_CallNonvirtualObjectMethodV(JNIEnv* env, jobject obj, jclass cls, jmethodID methodID, va_list args))
	$Method* method = ($Method*)methodID;
	$Value res = invoke(true, method, obj, args);
	Object* ret = of(res, method);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JNI_END(nullptr)

#define DEFINE_CALL_NONVIRTUAL_METHODV(ResultType, Result, Tag, DefaultReturnValue) \
JNI_ENTRY(ResultType, jni_CallNonvirtual##Result##MethodV(JNIEnv* env, jobject obj, jclass cls, jmethodID methodID, va_list args)) \
	$Value res = invoke(true, ($Method*)methodID, obj, args); \
	return (ResultType)res.Tag##Value();\
JNI_END(DefaultReturnValue)

DEFINE_CALL_NONVIRTUAL_METHODV(jboolean, Boolean, boolean, JNI_FALSE)
DEFINE_CALL_NONVIRTUAL_METHODV(jbyte, Byte, byte, 0)
DEFINE_CALL_NONVIRTUAL_METHODV(jchar, Char, char, 0)
DEFINE_CALL_NONVIRTUAL_METHODV(jshort, Short, short, 0)
DEFINE_CALL_NONVIRTUAL_METHODV(jint, Int, int, 0)
DEFINE_CALL_NONVIRTUAL_METHODV(jlong, Long, long, 0)
DEFINE_CALL_NONVIRTUAL_METHODV(jfloat, Float, float, 0)
DEFINE_CALL_NONVIRTUAL_METHODV(jdouble, Double, double, 0)

JNI_ENTRY(void, jni_CallNonvirtualVoidMethodA(JNIEnv* env, jobject obj, jclass cls, jmethodID methodID, const jvalue* args))
	invoke(true, ($Method*)methodID, obj, args);
JNI_END_VOID

JNI_ENTRY(jobject, jni_CallNonvirtualObjectMethodA(JNIEnv* env, jobject obj, jclass cls, jmethodID methodID, const jvalue* args))
	$Method* method = ($Method*)methodID;
	$Value res = invoke(true, method, obj, args);
	Object* ret = of(res, method);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JNI_END(nullptr)

#define DEFINE_CALL_NONVIRTUAL_METHODA(ResultType, Result, Tag, DefaultReturnValue) \
JNI_ENTRY(ResultType, jni_CallNonvirtual##Result##MethodA(JNIEnv* env, jobject obj, jclass cls, jmethodID methodID, const jvalue* args)) \
	$Value res = invoke(true, ($Method*)methodID, obj, args); \
	return (ResultType)res.Tag##Value();\
JNI_END(DefaultReturnValue)

DEFINE_CALL_NONVIRTUAL_METHODA(jboolean, Boolean, boolean, JNI_FALSE)
DEFINE_CALL_NONVIRTUAL_METHODA(jbyte, Byte, byte, 0)
DEFINE_CALL_NONVIRTUAL_METHODA(jchar, Char, char, 0)
DEFINE_CALL_NONVIRTUAL_METHODA(jshort, Short, short, 0)
DEFINE_CALL_NONVIRTUAL_METHODA(jint, Int, int, 0)
DEFINE_CALL_NONVIRTUAL_METHODA(jlong, Long, long, 0)
DEFINE_CALL_NONVIRTUAL_METHODA(jfloat, Float, float, 0)
DEFINE_CALL_NONVIRTUAL_METHODA(jdouble, Double, double, 0)

JNI_ENTRY(void, jni_CallStaticVoidMethod(JNIEnv* env, jclass cls, jmethodID methodID, ...))
	va_list args;
	va_start(args, methodID); \
	invoke(true, ($Method*)methodID, nullptr, args);
	va_end(args);
JNI_END_VOID

JNI_ENTRY(jobject, jni_CallStaticObjectMethod(JNIEnv* env, jclass cls, jmethodID methodID, ...))
	va_list args;
	va_start(args, methodID);
	$Method* method = ($Method*)methodID;
	$Value res = invoke(true, method, nullptr, args);
	va_end(args);
	Object* ret = of(res, method);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JNI_END(nullptr)

#define DEFINE_CALL_STATIC_METHOD(ResultType, Result, Tag, DefaultReturnValue) \
JNI_ENTRY(ResultType, jni_CallStatic##Result##Method(JNIEnv* env, jclass cls, jmethodID methodID, ...)) \
	va_list args; \
	va_start(args, methodID); \
	$Value res = invoke(true, ($Method*)methodID, nullptr, args); \
	va_end(args); \
	return (ResultType)res.Tag##Value();\
JNI_END(DefaultReturnValue)

DEFINE_CALL_STATIC_METHOD(jboolean, Boolean, boolean, JNI_FALSE)
DEFINE_CALL_STATIC_METHOD(jbyte, Byte, byte, 0)
DEFINE_CALL_STATIC_METHOD(jchar, Char, char, 0)
DEFINE_CALL_STATIC_METHOD(jshort, Short, short, 0)
DEFINE_CALL_STATIC_METHOD(jint, Int, int, 0)
DEFINE_CALL_STATIC_METHOD(jlong, Long, long, 0)
DEFINE_CALL_STATIC_METHOD(jfloat, Float, float, 0)
DEFINE_CALL_STATIC_METHOD(jdouble, Double, double, 0)

JNI_ENTRY(void, jni_CallStaticVoidMethodV(JNIEnv* env, jclass cls, jmethodID methodID, va_list args))
	invoke(true, ($Method*)methodID, nullptr, args);
JNI_END_VOID

JNI_ENTRY(jobject, jni_CallStaticObjectMethodV(JNIEnv* env, jclass cls, jmethodID methodID, va_list args))
	$Method* method = ($Method*)methodID;
	$Value res = invoke(true, method, nullptr, args);
	Object* ret = of(res, method);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JNI_END(nullptr)

#define DEFINE_CALL_STATIC_METHODV(ResultType, Result, Tag, DefaultReturnValue) \
JNI_ENTRY(ResultType, jni_CallStatic##Result##MethodV(JNIEnv* env, jclass cls, jmethodID methodID, va_list args)) \
	$Value res = invoke(true, ($Method*)methodID, nullptr, args); \
	return (ResultType)res.Tag##Value();\
JNI_END(DefaultReturnValue)

DEFINE_CALL_STATIC_METHODV(jboolean, Boolean, boolean, JNI_FALSE)
DEFINE_CALL_STATIC_METHODV(jbyte, Byte, byte, 0)
DEFINE_CALL_STATIC_METHODV(jchar, Char, char, 0)
DEFINE_CALL_STATIC_METHODV(jshort, Short, short, 0)
DEFINE_CALL_STATIC_METHODV(jint, Int, int, 0)
DEFINE_CALL_STATIC_METHODV(jlong, Long, long, 0)
DEFINE_CALL_STATIC_METHODV(jfloat, Float, float, 0)
DEFINE_CALL_STATIC_METHODV(jdouble, Double, double, 0)

JNI_ENTRY(void, jni_CallStaticVoidMethodA(JNIEnv* env, jclass cls, jmethodID methodID, const jvalue* args))
	invoke(true, ($Method*)methodID, nullptr, args);
JNI_END_VOID

JNI_ENTRY(jobject, jni_CallStaticObjectMethodA(JNIEnv* env, jclass cls, jmethodID methodID, const jvalue* args))
	$Method* method = ($Method*)methodID;
	$Value res = invoke(true, method, nullptr, args);
	Object* ret = of(res, method);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JNI_END(nullptr)

#define DEFINE_CALL_STATIC_METHODA(ResultType, Result, Tag, DefaultReturnValue) \
JNI_ENTRY(ResultType, jni_CallStatic##Result##MethodA(JNIEnv* env, jclass cls, jmethodID methodID, const jvalue* args)) \
	$Value res = invoke(true, ($Method*)methodID, nullptr, args); \
	return (ResultType)res.Tag##Value();\
JNI_END(DefaultReturnValue)

DEFINE_CALL_STATIC_METHODA(jboolean, Boolean, boolean, JNI_FALSE)
DEFINE_CALL_STATIC_METHODA(jbyte, Byte, byte, 0)
DEFINE_CALL_STATIC_METHODA(jchar, Char, char, 0)
DEFINE_CALL_STATIC_METHODA(jshort, Short, short, 0)
DEFINE_CALL_STATIC_METHODA(jint, Int, int, 0)
DEFINE_CALL_STATIC_METHODA(jlong, Long, long, 0)
DEFINE_CALL_STATIC_METHODA(jfloat, Float, float, 0)
DEFINE_CALL_STATIC_METHODA(jdouble, Double, double, 0)

// access field
JNI_ENTRY(jfieldID, jni_GetFieldID(JNIEnv* env, jclass clazz, const char* name, const char* sig))
	Class* cls = $fcast(Class, clazz);
	$nc(cls)->ensureClassInitialized();
	$Field* field = cls->refField($$str(name));
	$nc(field)->override$ = true; // TODO
	return (jfieldID)field;
JNI_END(nullptr)

JNI_ENTRY(jobject, jni_GetObjectField(JNIEnv* env, jobject obj, jfieldID fieldID))
	$var(Object, obj2, resolveRef(obj));
	$Field* field = $fcast($Field, fieldID);
	jobject ret = (jobject)Unsafe::theUnsafe->getObject($nc(obj2), $nc(field)->offsetof);
	ObjectManager::newLocalRef(ret);
	return ret;
JNI_END(nullptr)

#define DEFINE_GET_FIELD(Return, Fieldname, Result, DefaultReturnValue) \
JNI_ENTRY(Return, jni_Get##Result##Field(JNIEnv* env, jobject obj, jfieldID fieldID)) \
	$var(Object, obj2, resolveRef(obj)); \
	$Field* field = $fcast($Field, fieldID); \
	Return ret = Unsafe::theUnsafe->get##Result($nc(obj2), $nc(field)->offsetof); \
	return ret; \
JNI_END(DefaultReturnValue)

DEFINE_GET_FIELD(jboolean, bool, Boolean, JNI_FALSE)
DEFINE_GET_FIELD(jbyte, byte, Byte, 0)
DEFINE_GET_FIELD(jchar, char, Char, 0)
DEFINE_GET_FIELD(jshort, short, Short, 0)
DEFINE_GET_FIELD(jint, int, Int, 0)
DEFINE_GET_FIELD(jlong, long, Long, 0)
DEFINE_GET_FIELD(jfloat, float, Float, 0)
DEFINE_GET_FIELD(jdouble, double, Double, 0)

JNI_ENTRY(void, jni_SetObjectField(JNIEnv* env, jobject obj, jfieldID fieldID, jobject value))
	$var(Object, obj2, resolveRef(obj));
	$Field* field = $fcast($Field, fieldID);
	Unsafe::theUnsafe->putObject($nc(obj2), $nc(field)->offsetof, value);
JNI_END_VOID

#define DEFINE_SET_FIELD(Argument, Result, FieldType) \
JNI_ENTRY(void, jni_Set##Result##Field(JNIEnv* env, jobject obj, jfieldID fieldID, Argument value)) \
	$var(Object, obj2, resolveRef(obj)); \
	$Field* field = $fcast($Field, fieldID); \
	Unsafe::theUnsafe->put##Result($nc(obj2), $nc(field)->offsetof, (FieldType)value); \
JNI_END_VOID

DEFINE_SET_FIELD(jboolean, Boolean, bool)
DEFINE_SET_FIELD(jbyte, Byte, int8_t)
DEFINE_SET_FIELD(jchar, Char, char16_t)
DEFINE_SET_FIELD(jshort, Short, int16_t)
DEFINE_SET_FIELD(jint, Int, int32_t)
DEFINE_SET_FIELD(jlong, Long, int64_t)
DEFINE_SET_FIELD(jfloat, Float, float)
DEFINE_SET_FIELD(jdouble, Double, double)

JNI_ENTRY(jobject, jni_ToReflectedField(JNIEnv* env, jclass cls, jfieldID fieldID, jboolean isStatic))
	return (jobject)fieldID;
JNI_END(nullptr)

// access static field
JNI_ENTRY(jfieldID, jni_GetStaticFieldID(JNIEnv* env, jclass clazz, const char* name, const char* sig))
	Class* cls = $fcast(Class, clazz);
	$nc(cls)->ensureClassInitialized();
	$Field* field = cls->refField($$str(name));
	$nc(field)->override$ = true; // TODO
	return (jfieldID)field;
JNI_END(nullptr)

JNI_ENTRY(jobject, jni_GetStaticObjectField(JNIEnv* env, jclass clazz, jfieldID fieldID))
	$Field* field = $fcast($Field, fieldID);
	jobject ret = (jobject)Unsafe::theUnsafe->getObject(nullptr, $nc(field)->offsetof);
	// since static object, need not to newLocalRef
	return ret;
JNI_END(nullptr)

#define DEFINE_GET_STATIC_FIELD(Return, Result, DefaultReturnValue) \
JNI_ENTRY(Return, jni_GetStatic##Result##Field(JNIEnv* env, jclass clazz, jfieldID fieldID)) \
	$Field* field = $fcast($Field, fieldID); \
	Return ret = (Return)Unsafe::theUnsafe->get##Result(nullptr, $nc(field)->offsetof); \
	return ret; \
JNI_END(DefaultReturnValue)

DEFINE_GET_STATIC_FIELD(jboolean, Boolean, JNI_FALSE)
DEFINE_GET_STATIC_FIELD(jbyte, Byte, 0)
DEFINE_GET_STATIC_FIELD(jchar, Char, 0)
DEFINE_GET_STATIC_FIELD(jshort, Short, 0)
DEFINE_GET_STATIC_FIELD(jint, Int, 0)
DEFINE_GET_STATIC_FIELD(jlong, Long, 0)
DEFINE_GET_STATIC_FIELD(jfloat, Float, 0)
DEFINE_GET_STATIC_FIELD(jdouble, Double, 0)

JNI_ENTRY(void, jni_SetStaticObjectField(JNIEnv* env, jclass clazz, jfieldID fieldID, jobject value))
	$var(Object, obj2, resolveRef(value));
	$Field* field = $fcast($Field, fieldID);
	Unsafe::theUnsafe->putObject(nullptr, field->offsetof, obj2);
JNI_END_VOID

#define DEFINE_SET_STATIC_FIELD(Argument, Result, FieldType) \
JNI_ENTRY(void, jni_SetStatic##Result##Field(JNIEnv* env, jclass clazz, jfieldID fieldID, Argument value)) \
	$Field* field = $fcast($Field, fieldID); \
	Unsafe::theUnsafe->put##Result(nullptr, field->offsetof, (FieldType)value); \
JNI_END_VOID

DEFINE_SET_STATIC_FIELD(jboolean, Boolean, bool)
DEFINE_SET_STATIC_FIELD(jbyte, Byte, int8_t)
DEFINE_SET_STATIC_FIELD(jchar, Char, char16_t)
DEFINE_SET_STATIC_FIELD(jshort, Short, int16_t)
DEFINE_SET_STATIC_FIELD(jint, Int, int32_t)
DEFINE_SET_STATIC_FIELD(jlong, Long, int64_t)
DEFINE_SET_STATIC_FIELD(jfloat, Float, float)
DEFINE_SET_STATIC_FIELD(jdouble, Double, double)

// String
JNI_ENTRY(jstring, jni_NewString(JNIEnv* env, const jchar* unicodeChars, jsize len))
	String* ret = String::valueOf((char16_t*)unicodeChars, len);
	ObjectManager::newLocalRef(ret);
	return (jstring)ret;
JNI_END(nullptr)

JNI_ENTRY(jsize, jni_GetStringLength(JNIEnv* env, jstring string))
	$var(Object, obj2, resolveRef(string));
	String* s = (String*)(void*)obj2;
	return (jsize)$nc(s)->length();
JNI_END(0)

JNI_ENTRY(const jchar*, jni_GetStringChars(JNIEnv* env, jstring string, jboolean* isCopy))
	$var(Object, obj2, resolveRef(string));
	String* s = (String*)(void*)obj2;
	int32_t length = $nc(s)->length();
	jchar* ret = (jchar*)$allocRaw((length + 1) * sizeof(jchar));
	for (int32_t i = 0; i < length; i++) {
		ret[i] = s->charAt(i);
	}
	ret[length] = (jchar)0;
	if (isCopy != NULL) {
		*isCopy = JNI_TRUE;
	}
	return ret;
JNI_END(nullptr)

JNI_ENTRY(void, jni_ReleaseStringChars(JNIEnv* env, jstring str, const jchar* chars))
	if (chars != nullptr) {
		$freeRaw((jchar*)chars);
	}
JNI_END_VOID

JNI_ENTRY(jstring, jni_NewStringUTF(JNIEnv* env, const char* bytes))
	String* utf = String::valueOf(bytes);
	ObjectManager::newLocalRef(utf);
	return (jstring)utf;
JNI_END(nullptr)

JNI_ENTRY(jsize, jni_GetStringUTFLength(JNIEnv* env, jstring string))
	$var(Object, obj2, resolveRef(string));
	String* utf = (String*)(void*)obj2;
	int32_t length = utf->utf8Size();
	return length;
JNI_END(0)

JNI_ENTRY(const char*, jni_GetStringUTFChars(JNIEnv* env, jstring string, jboolean* isCopy))
	$var(Object, obj2, resolveRef(string));
	String* utf = (String*)(void*)obj2;
	$var($bytes, bytes, utf->utf8Bytes());
	char* s = (char*)$allocRaw(bytes->length);
	bytes->getRegion(0, bytes->length, (int8_t*)s);
	if (isCopy != NULL) {
		*isCopy = JNI_TRUE;
	}
	return s;
JNI_END(nullptr)

JNI_ENTRY(void, jni_ReleaseStringUTFChars(JNIEnv* env, jstring str, const char* chars))
	if (chars != nullptr) {
		$freeRaw((char*)chars);
	}
JNI_END_VOID

JNI_ENTRY(jsize, jni_GetArrayLength(JNIEnv* env, jarray array))
	$var(Object, obj2, resolveRef(array));
	BaseArray* baseArray = (BaseArray*)$nc(obj2);
	return baseArray->length;
JNI_END(0)

// ObjectArray
JNI_ENTRY(jobjectArray, jni_NewObjectArray(JNIEnv* env, jsize length, jclass elementClass, jobject initialElement))
	$var(Object, obj2, resolveRef(initialElement));
	Class* elementClazz = (Class*)elementClass;
	ObjectArray* oa = (ObjectArray*)ObjectManager::newArray(elementClazz, length);
	ObjectManager::newLocalRef(oa);
	if (initialElement != nullptr) {
		oa->fill(0, (int32_t)length, obj2);
	}
	return (jobjectArray)oa;
JNI_END(nullptr)

JNI_ENTRY(jobject, jni_GetObjectArrayElement(JNIEnv* env, jobjectArray array, jsize index))
	$var(Object, obj2, resolveRef(array));
	ObjectArray* oa = (ObjectArray*)obj2;
	Object0* obj = $nc(oa)->get(index);
	Class* arrayClass = oa->getClass();
	Class* componentType = arrayClass->getComponentType();
	Object* ret;
	if (componentType->isInterface()) {
		ret = componentType->cast(obj);
	} else {
		ret = obj;
	}
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JNI_END(nullptr)

JNI_ENTRY(void, jni_SetObjectArrayElement(JNIEnv* env, jobjectArray array, jsize index, jobject value))
	$var(Object, obj2, resolveRef(array));
	ObjectArray* oa = (ObjectArray*)obj2;
	$nc(oa)->set((int32_t)index, value);
JNI_END_VOID

#define DEFINE_NEW_ARARRAY(Return, Result, ArrayClass) \
JNI_ENTRY(Return, jni_New##Result##Array(JNIEnv* env, jsize len)) \
	ArrayClass* ret = $new<ArrayClass>((int32_t)len); \
	ObjectManager::newLocalRef(ret); \
	return (Return)ret;\
JNI_END(nullptr)

DEFINE_NEW_ARARRAY(jbooleanArray, Boolean, $booleans)
DEFINE_NEW_ARARRAY(jbyteArray, Byte, $bytes)
DEFINE_NEW_ARARRAY(jshortArray, Short, $shorts)
DEFINE_NEW_ARARRAY(jcharArray, Char, $chars)
DEFINE_NEW_ARARRAY(jintArray, 	Int, $ints)
DEFINE_NEW_ARARRAY(jlongArray, Long, $longs)
DEFINE_NEW_ARARRAY(jfloatArray, Float, $floats)
DEFINE_NEW_ARARRAY(jdoubleArray, Double, $doubles)

#define DEFINE_GET_ARRAY_ELEMENTS(ElementType, Result, ArrayClass) \
JNI_ENTRY(ElementType*, jni_Get##Result##ArrayElements(JNIEnv* env, ElementType##Array array, jboolean* isCopy)) \
	if (isCopy != nullptr) { \
		*isCopy = JNI_FALSE; \
	} \
	$var(Object, obj2, resolveRef(array)); \
	ArrayClass* arr = (ArrayClass*)obj2; \
	ElementType* ret = (ElementType*)$nc(arr)->begin(); \
	return ret; \
JNI_END(nullptr)

DEFINE_GET_ARRAY_ELEMENTS(jboolean, Boolean, $booleans)
DEFINE_GET_ARRAY_ELEMENTS(jbyte, Byte, $bytes)
DEFINE_GET_ARRAY_ELEMENTS(jshort, Short, $shorts)
DEFINE_GET_ARRAY_ELEMENTS(jchar, Char, $chars)
DEFINE_GET_ARRAY_ELEMENTS(jint, Int, $ints)
DEFINE_GET_ARRAY_ELEMENTS(jlong, Long, $longs)
DEFINE_GET_ARRAY_ELEMENTS(jfloat, Float, $floats)
DEFINE_GET_ARRAY_ELEMENTS(jdouble, Double, $doubles)

#define DEFINE_RELEASE_ARRAY_ELEMENTS(ElementType, Result);\
JNI_ENTRY(void, jni_Release##Result##ArrayElements(JNIEnv* env, ElementType##Array array, ElementType* buf, jint mode)) \
JNI_END_VOID

DEFINE_RELEASE_ARRAY_ELEMENTS(jboolean, Boolean)
DEFINE_RELEASE_ARRAY_ELEMENTS(jbyte, Byte)
DEFINE_RELEASE_ARRAY_ELEMENTS(jshort, Short)
DEFINE_RELEASE_ARRAY_ELEMENTS(jchar, Char)
DEFINE_RELEASE_ARRAY_ELEMENTS(jint, Int)
DEFINE_RELEASE_ARRAY_ELEMENTS(jlong, Long)
DEFINE_RELEASE_ARRAY_ELEMENTS(jfloat, Float)
DEFINE_RELEASE_ARRAY_ELEMENTS(jdouble, Double)

static void checkBounds(jsize start, jsize copyLen, jsize arrayLen) {
	if (copyLen < 0) {
		$var(String, message, String::valueOf({$cstr("Length "), $$str((int64_t)copyLen), $cstr(" is negative") }));
		$throwNew(ArrayIndexOutOfBoundsException, message);
	} else if (start < 0 || (start > arrayLen - copyLen)) {
		$var(String, message, String::valueOf({ $cstr("Array region "), $$str((int64_t)copyLen), $cstr(" out of bounds for length "), $$str((int64_t)arrayLen) }));
		$throwNew(ArrayIndexOutOfBoundsException, message);
	}
}

#define DEFINE_GET_ARARRAY_REGION(ElementType,Result, Tag); \
JNI_ENTRY(void, jni_Get##Result##ArrayRegion(JNIEnv* env, ElementType##Array array, jsize start, jsize len, ElementType* buf)) \
	$var(Object, obj2, resolveRef(array)); \
	Result##Array* arr = (Result##Array*)(obj2); \
	checkBounds(start, len, $nc(arr)->length); \
	if (len > 0) { \
		arr->getRegion(start, len, (Tag*)buf); \
	} \
JNI_END_VOID

DEFINE_GET_ARARRAY_REGION(jboolean, Boolean, bool)
DEFINE_GET_ARARRAY_REGION(jbyte, Byte, int8_t)
DEFINE_GET_ARARRAY_REGION(jshort, Short, int16_t)
DEFINE_GET_ARARRAY_REGION(jchar, Char, char16_t)
DEFINE_GET_ARARRAY_REGION(jint, Int, int32_t)
DEFINE_GET_ARARRAY_REGION(jlong, Long, int64_t)
DEFINE_GET_ARARRAY_REGION(jfloat, Float, float)
DEFINE_GET_ARARRAY_REGION(jdouble, Double, double)

#define DEFINE_SET_ARARRAY_REGION(ElementType,Result, Tag); \
JNI_ENTRY(void, \
jni_Set##Result##ArrayRegion(JNIEnv* env, ElementType##Array array, jsize start, jsize len, const ElementType* buf)) \
	$var(Object, obj2, resolveRef(array)); \
	Result##Array* arr = (Result##Array*)(obj2); \
	checkBounds(start, len, $nc(arr)->length); \
	if (len > 0) { \
		arr->setRegion(start, len, (Tag*)buf); \
	} \
JNI_END_VOID

DEFINE_SET_ARARRAY_REGION(jboolean, Boolean, bool)
DEFINE_SET_ARARRAY_REGION(jbyte, Byte, int8_t)
DEFINE_SET_ARARRAY_REGION(jshort, Short, int16_t)
DEFINE_SET_ARARRAY_REGION(jchar, Char, char16_t)
DEFINE_SET_ARARRAY_REGION(jint, Int, int32_t)
DEFINE_SET_ARARRAY_REGION(jlong, Long, int64_t)
DEFINE_SET_ARARRAY_REGION(jfloat, Float, float)
DEFINE_SET_ARARRAY_REGION(jdouble, Double, double)

bool stringEquals(const char* s1, const char* s2) {
	if (s1 == nullptr) {
		return s2 == nullptr;
	}
	if (s2 == nullptr) {
		return false;
	}
	return strcmp(s1, s2) == 0;
}

JNI_ENTRY(jint, jni_RegisterNatives(JNIEnv* env, jclass clazz, const JNINativeMethod* methods, jint nMethods))
	Class* cls = (Class*)clazz;
	if (cls->classInfo != nullptr) {
		for (jint i = 0; i < nMethods; i++) {
			const JNINativeMethod& jnm = methods[i];
			MethodInfo* methodInfo = cls->classInfo->methods;
			while (methodInfo != nullptr) {
				if (methodInfo->isEnd()) {
					break;
				}
				if (stringEquals(methodInfo->name, jnm.name) && stringEquals(methodInfo->getSignature(), jnm.signature)) {
					methodInfo->nativeAddress = jnm.fnPtr;
					break;
				}
				methodInfo++;
			}
		}
	}
	return 0;
JNI_END(0)

JNI_ENTRY(jint, jni_UnregisterNatives(JNIEnv* env, jclass clazz))
	Class* cls = (Class*)clazz;
	if (cls->classInfo != nullptr) {
		MethodInfo* methodInfo = cls->classInfo->methods;
		while (methodInfo != nullptr) {
			if (methodInfo->isEnd()) {
				break;
			}
			if (methodInfo->nativeAddress != nullptr) {
				methodInfo->nativeAddress = nullptr;
				break;
			}
			methodInfo++;
		}
	}
	return 0;
JNI_END(0)

// Monitor
JNI_ENTRY(jint, jni_MonitorEnter(JNIEnv* env, jobject jobj))
	$var(Object, obj2, resolveRef(jobj));
	Object0* obj0 = $toObject0(obj2);
	$nc(obj0)->lock();
	return JNI_OK;
JNI_END(JNI_ERR)

JNI_ENTRY(jint, jni_MonitorExit(JNIEnv* env, jobject jobj))
	$var(Object, obj2, resolveRef(jobj));
	Object0* obj0 = $toObject0(obj2);
	$nc(obj0)->unlock();
	return JNI_OK;
JNI_END(JNI_ERR)

// Extensions
JNI_ENTRY(void, jni_GetStringRegion(JNIEnv* env, jstring string, jsize start, jsize len, jchar* buf))
	$var(Object, obj2, resolveRef(string));
	String* s = (String*)(void*)obj2;
	$nc(s);
	if (start < 0 || len < 0 || start > s->length() - len) {
		$throwNew(StringIndexOutOfBoundsException);
	}
	$var($chars, chars, $new<$chars>(len + 1));
	s->getChars(start, start + len, chars, 0);
	chars->getRegion(0, len, (char16_t*)buf);
	buf[len] = 0;
JNI_END_VOID

JNI_ENTRY(void, jni_GetStringUTFRegion(JNIEnv* env, jstring string, jsize start, jsize len, char* buf))
	$var(Object, obj2, resolveRef(string));
	String* s = (String*)(void*)obj2;
	$nc(s);
	if (start < 0 || len < 0 || start > s->length() - len) {
		$throwNew(StringIndexOutOfBoundsException);
	}
	$var($bytes, bytes, s->getBytes($cstr("UTF-8")));
	bytes->getRegion(start, len, (int8_t*)buf);
	buf[len] = 0;
JNI_END_VOID

JNI_ENTRY(void*, jni_GetPrimitiveArrayCritical(JNIEnv* env, jarray array, jboolean* isCopy))
	$var(Object, obj2, resolveRef(array));
	BaseArray* baseArray = (BaseArray*)obj2;
	if (isCopy != nullptr) {
		*isCopy = JNI_FALSE;
	}
	return baseArray->getData();
JNI_END(nullptr)

JNI_ENTRY(void, jni_ReleasePrimitiveArrayCritical(JNIEnv* env, jarray array, void* carray, jint mode))
	// nothing to do
JNI_END_VOID

JNI_ENTRY(const jchar*, jni_GetStringCritical(JNIEnv* env, jstring string, jboolean* isCopy))
	$var(Object, obj2, resolveRef(string));
	String* s = (String*)(void*)obj2;
	int32_t length = $nc(s)->length();
	jchar* ret = (jchar*)$allocRaw((length + 1) * sizeof(jchar));
	for (int32_t i = 0; i < length; i++) {
		ret[i] = s->charAt(i);
	}
	ret[length] = (jchar)0;
	if (isCopy != NULL) {
		*isCopy = JNI_TRUE;
	}
	return ret;
JNI_END(nullptr)

JNI_ENTRY(void, jni_ReleaseStringCritical(JNIEnv* env, jstring str, const jchar* chars))
	if (chars != nullptr) {
		$freeRaw((jchar*)chars);
	}
JNI_END_VOID

JNI_ENTRY(jweak, jni_NewWeakGlobalRef(JNIEnv* env, jobject ref))
	$var(Object, obj2, resolveRef(ref));
	Object* weak = ObjectManager::newWeakGlobalRef(obj2);
	return (jweak)weak;
JNI_END(nullptr)

JNI_ENTRY(void, jni_DeleteWeakGlobalRef(JNIEnv* env, jweak ref))
	ObjectManager::deleteWeakGlobalRef(ref);
JNI_END_VOID

JNI_ENTRY(jboolean, jni_ExceptionCheck(JNIEnv* env))
	if (ObjectManager::hasPendingException()) {
		return JNI_TRUE;
	}
	return JNI_FALSE;
JNI_END(JNI_FALSE)

JNI_ENTRY(jobject, jni_NewDirectByteBuffer(JNIEnv* env, void* address, jlong capacity))
	DirectByteBuffer* dbb = $new(DirectByteBuffer, (int64_t)address, (int32_t)capacity);
	ObjectManager::newLocalRef(dbb);
	return (jobject)dbb;
JNI_END(nullptr)

JNI_ENTRY(void*, jni_GetDirectBufferAddress(JNIEnv* env, jobject buf))
	$var(Object, obj2, resolveRef(buf));
	if (!$instanceOf(DirectByteBuffer, obj2)) {
		return nullptr;
	}
	DirectByteBuffer* dbb = $cast(DirectByteBuffer, obj2);
	return (void*)(intptr_t)(dbb->address());
JNI_END(nullptr)

JNI_ENTRY(jlong, jni_GetDirectBufferCapacity(JNIEnv* env, jobject buf))
	$var(Object, obj2, resolveRef(buf));
	if (!$instanceOf(DirectByteBuffer, obj2)) {
		return -1;
	}
	DirectByteBuffer* dbb = $cast(DirectByteBuffer, obj2);
	return (jlong)dbb->capacity();
JNI_END(-1)

JNI_ENTRY(jint, jni_GetVersion(JNIEnv* env))
	return JNI_VERSION_10;
JNI_END(JNI_VERSION_10)

JNI_ENTRY(jint, jni_GetJavaVM(JNIEnv* env, JavaVM** vm))
	*vm = (JavaVM*)(&javaVM);
	return JNI_OK;
JNI_END(JNI_ERR)

JNI_ENTRY(jobject, jni_GetModule(JNIEnv* env, jclass clazz))
	Class* cls = (Class*)clazz;
	Module* m = cls->getModule();
	// since module is ref by class, need not newLocalRef
	return (jobject)m;
JNI_END(nullptr)

struct JNINativeInterface_ jni_NativeInterface = {
	nullptr,
	nullptr,
	nullptr,

	nullptr,

	jni_GetVersion,

	jni_DefineClass,
	jni_FindClass,

	jni_FromReflectedMethod,
	jni_FromReflectedField,

	jni_ToReflectedMethod,

	jni_GetSuperclass,
	jni_IsAssignableFrom,

	jni_ToReflectedField,

	jni_Throw,
	jni_ThrowNew,
	jni_ExceptionOccurred,
	jni_ExceptionDescribe,
	jni_ExceptionClear,
	jni_FatalError,

	jni_PushLocalFrame,
	jni_PopLocalFrame,

	jni_NewGlobalRef,
	jni_DeleteGlobalRef,
	jni_DeleteLocalRef,
	jni_IsSameObject,

	jni_NewLocalRef,
	jni_EnsureLocalCapacity,

	jni_AllocObject,
	jni_NewObject,
	jni_NewObjectV,
	jni_NewObjectA,

	jni_GetObjectClass,
	jni_IsInstanceOf,

	jni_GetMethodID,

	jni_CallObjectMethod,
	jni_CallObjectMethodV,
	jni_CallObjectMethodA,
	jni_CallBooleanMethod,
	jni_CallBooleanMethodV,
	jni_CallBooleanMethodA,
	jni_CallByteMethod,
	jni_CallByteMethodV,
	jni_CallByteMethodA,
	jni_CallCharMethod,
	jni_CallCharMethodV,
	jni_CallCharMethodA,
	jni_CallShortMethod,
	jni_CallShortMethodV,
	jni_CallShortMethodA,
	jni_CallIntMethod,
	jni_CallIntMethodV,
	jni_CallIntMethodA,
	jni_CallLongMethod,
	jni_CallLongMethodV,
	jni_CallLongMethodA,
	jni_CallFloatMethod,
	jni_CallFloatMethodV,
	jni_CallFloatMethodA,
	jni_CallDoubleMethod,
	jni_CallDoubleMethodV,
	jni_CallDoubleMethodA,
	jni_CallVoidMethod,
	jni_CallVoidMethodV,
	jni_CallVoidMethodA,

	jni_CallNonvirtualObjectMethod,
	jni_CallNonvirtualObjectMethodV,
	jni_CallNonvirtualObjectMethodA,
	jni_CallNonvirtualBooleanMethod,
	jni_CallNonvirtualBooleanMethodV,
	jni_CallNonvirtualBooleanMethodA,
	jni_CallNonvirtualByteMethod,
	jni_CallNonvirtualByteMethodV,
	jni_CallNonvirtualByteMethodA,
	jni_CallNonvirtualCharMethod,
	jni_CallNonvirtualCharMethodV,
	jni_CallNonvirtualCharMethodA,
	jni_CallNonvirtualShortMethod,
	jni_CallNonvirtualShortMethodV,
	jni_CallNonvirtualShortMethodA,
	jni_CallNonvirtualIntMethod,
	jni_CallNonvirtualIntMethodV,
	jni_CallNonvirtualIntMethodA,
	jni_CallNonvirtualLongMethod,
	jni_CallNonvirtualLongMethodV,
	jni_CallNonvirtualLongMethodA,
	jni_CallNonvirtualFloatMethod,
	jni_CallNonvirtualFloatMethodV,
	jni_CallNonvirtualFloatMethodA,
	jni_CallNonvirtualDoubleMethod,
	jni_CallNonvirtualDoubleMethodV,
	jni_CallNonvirtualDoubleMethodA,
	jni_CallNonvirtualVoidMethod,
	jni_CallNonvirtualVoidMethodV,
	jni_CallNonvirtualVoidMethodA,

	jni_GetFieldID,

	jni_GetObjectField,
	jni_GetBooleanField,
	jni_GetByteField,
	jni_GetCharField,
	jni_GetShortField,
	jni_GetIntField,
	jni_GetLongField,
	jni_GetFloatField,
	jni_GetDoubleField,

	jni_SetObjectField,
	jni_SetBooleanField,
	jni_SetByteField,
	jni_SetCharField,
	jni_SetShortField,
	jni_SetIntField,
	jni_SetLongField,
	jni_SetFloatField,
	jni_SetDoubleField,

	jni_GetStaticMethodID,

	jni_CallStaticObjectMethod,
	jni_CallStaticObjectMethodV,
	jni_CallStaticObjectMethodA,
	jni_CallStaticBooleanMethod,
	jni_CallStaticBooleanMethodV,
	jni_CallStaticBooleanMethodA,
	jni_CallStaticByteMethod,
	jni_CallStaticByteMethodV,
	jni_CallStaticByteMethodA,
	jni_CallStaticCharMethod,
	jni_CallStaticCharMethodV,
	jni_CallStaticCharMethodA,
	jni_CallStaticShortMethod,
	jni_CallStaticShortMethodV,
	jni_CallStaticShortMethodA,
	jni_CallStaticIntMethod,
	jni_CallStaticIntMethodV,
	jni_CallStaticIntMethodA,
	jni_CallStaticLongMethod,
	jni_CallStaticLongMethodV,
	jni_CallStaticLongMethodA,
	jni_CallStaticFloatMethod,
	jni_CallStaticFloatMethodV,
	jni_CallStaticFloatMethodA,
	jni_CallStaticDoubleMethod,
	jni_CallStaticDoubleMethodV,
	jni_CallStaticDoubleMethodA,
	jni_CallStaticVoidMethod,
	jni_CallStaticVoidMethodV,
	jni_CallStaticVoidMethodA,

	jni_GetStaticFieldID,

	jni_GetStaticObjectField,
	jni_GetStaticBooleanField,
	jni_GetStaticByteField,
	jni_GetStaticCharField,
	jni_GetStaticShortField,
	jni_GetStaticIntField,
	jni_GetStaticLongField,
	jni_GetStaticFloatField,
	jni_GetStaticDoubleField,

	jni_SetStaticObjectField,
	jni_SetStaticBooleanField,
	jni_SetStaticByteField,
	jni_SetStaticCharField,
	jni_SetStaticShortField,
	jni_SetStaticIntField,
	jni_SetStaticLongField,
	jni_SetStaticFloatField,
	jni_SetStaticDoubleField,

	jni_NewString,
	jni_GetStringLength,
	jni_GetStringChars,
	jni_ReleaseStringChars,

	jni_NewStringUTF,
	jni_GetStringUTFLength,
	jni_GetStringUTFChars,
	jni_ReleaseStringUTFChars,

	jni_GetArrayLength,

	jni_NewObjectArray,
	jni_GetObjectArrayElement,
	jni_SetObjectArrayElement,

	jni_NewBooleanArray,
	jni_NewByteArray,
	jni_NewCharArray,
	jni_NewShortArray,
	jni_NewIntArray,
	jni_NewLongArray,
	jni_NewFloatArray,
	jni_NewDoubleArray,

	jni_GetBooleanArrayElements,
	jni_GetByteArrayElements,
	jni_GetCharArrayElements,
	jni_GetShortArrayElements,
	jni_GetIntArrayElements,
	jni_GetLongArrayElements,
	jni_GetFloatArrayElements,
	jni_GetDoubleArrayElements,

	jni_ReleaseBooleanArrayElements,
	jni_ReleaseByteArrayElements,
	jni_ReleaseCharArrayElements,
	jni_ReleaseShortArrayElements,
	jni_ReleaseIntArrayElements,
	jni_ReleaseLongArrayElements,
	jni_ReleaseFloatArrayElements,
	jni_ReleaseDoubleArrayElements,

	jni_GetBooleanArrayRegion,
	jni_GetByteArrayRegion,
	jni_GetCharArrayRegion,
	jni_GetShortArrayRegion,
	jni_GetIntArrayRegion,
	jni_GetLongArrayRegion,
	jni_GetFloatArrayRegion,
	jni_GetDoubleArrayRegion,

	jni_SetBooleanArrayRegion,
	jni_SetByteArrayRegion,
	jni_SetCharArrayRegion,
	jni_SetShortArrayRegion,
	jni_SetIntArrayRegion,
	jni_SetLongArrayRegion,
	jni_SetFloatArrayRegion,
	jni_SetDoubleArrayRegion,

	jni_RegisterNatives,
	jni_UnregisterNatives,

	jni_MonitorEnter,
	jni_MonitorExit,

	jni_GetJavaVM,

	jni_GetStringRegion,
	jni_GetStringUTFRegion,

	jni_GetPrimitiveArrayCritical,
	jni_ReleasePrimitiveArrayCritical,

	jni_GetStringCritical,
	jni_ReleaseStringCritical,

	jni_NewWeakGlobalRef,
	jni_DeleteWeakGlobalRef,

	jni_ExceptionCheck,

	jni_NewDirectByteBuffer,
	jni_GetDirectBufferAddress,
	jni_GetDirectBufferCapacity,

	// New 1_6 features

	jni_GetObjectRefType,

	// Module features

	jni_GetModule
};


struct JNINativeInterface_* getJniNativeInterface() {
	return &jni_NativeInterface;
}

extern "C" {

JNIEXPORT jint JNICALL JNI_GetDefaultJavaVMInitArgs(void* args_) {
	JDK1_1InitArgs* args = (JDK1_1InitArgs*)args_;
	args->version = JNI_VERSION_1_2;
	args->javaStackSize = (jint)(ThreadStackSize * K);
	return JNI_OK;
}

JNIEXPORT jint JNICALL JNI_CreateJavaVM(JavaVM** vm, void** penv, void* args) {
	if (vmCreated.exchange(true)) {
		return JNI_EEXIST;
	}
	if (Machine::isInited()) {
		java$base::init();
		System::init();
	}
	// TODO
	JavaThread* thread = JavaThread::sureCurrentThread();
	*vm = (JavaVM*)(&javaVM);
	*(JNIEnv**)penv = thread->getJNIEnv();

	fflush(stdout);
	fflush(stderr);
	return JNI_OK;
}

JNIEXPORT jint JNICALL JNI_GetCreatedJavaVMs(JavaVM** vm_buf, jsize bufLen, jsize* numVMs) {
	if (Machine::isInited()) {
		if (vm_buf != nullptr && bufLen > 0 && numVMs != nullptr) {
			*vm_buf = (JavaVM*)(&javaVM);
			*numVMs = 1;
		} else if (numVMs != nullptr) {
			*numVMs = 0;
		}
	}
	return JNI_OK;
}

jint JNICALL jni_DestroyJavaVM(JavaVM* vm) {
	if (!vmCreated) {
		return JNI_ERR;
	}
	System::deinit();
	vmCreated = false;
	return JNI_OK;
}

static jint attachCurrentThread(JavaVM* vm, void** penv, void* _args, bool daemon) {
	JavaVMAttachArgs* args = (JavaVMAttachArgs*) _args;

	JavaThread* current = JavaThread::getCurrentThread();
	if (current != nullptr) {
		*(JNIEnv**)penv = current->getJNIEnv();
		return JNI_OK;
	}

	JavaThread* thread = new JavaThread();

	thread->setThreadState(_thread_in_vm);
	thread->setStackBaseAndSize();
	thread->initCurrentThread();

	if (!OSThread::createAttached(thread)) {
		thread->destroy();
		return JNI_ERR;
	}

	//// Create thread group and name info from attach arguments
	ThreadGroup* group = nullptr;
	char* threadName = nullptr;
	if (args != nullptr && Platform::isSupportedVersion(args->version)) {
		group = (ThreadGroup*)args->group;
		threadName = args->name; // may be nullptr
	}
	if (group == nullptr) {
		group = Machine::getMainThreadGroup();
	}

	$var(::java::lang::Thread, threadObject, $alloc<::java::lang::Thread>());
	threadObject->eetop = (int64_t)thread;
	threadObject->priority = $Thread::NORM_PRIORITY;
	if (threadName != nullptr) {
		threadObject->init$(group, $$str(threadName));
	} else {
		threadObject->init$(group);
	}
	if (daemon) {
		threadObject->daemon = true;
	}
	group->add(threadObject);
	thread->setThreadObject(threadObject);

	thread->setThreadStatus(JavaThread::Status::RUNNABLE);

	*(JNIEnv**)penv = thread->getJNIEnv();
	thread->setThreadState(_thread_in_native);
	return JNI_OK;
}

jint JNICALL jni_AttachCurrentThread(JavaVM* vm, void** penv, void* _args) {
	if (!Machine::isInited()) {
		return JNI_ERR;
	}
	return attachCurrentThread(vm, penv, _args, false);
}

jint JNICALL jni_DetachCurrentThread(JavaVM* vm) {
	if (!Machine::isInited()) {
		return JNI_ERR;
	}
	JavaThread* current = JavaThread::getCurrentThread();
	if (current == nullptr) {
		return JNI_OK;
	}
	current->setThreadState(_thread_in_vm);
	current->exit(true);
	//current->destroy();
	return JNI_OK;
}

jint JNICALL jni_GetEnv(JavaVM* vm, void** penv, jint version) {
	if (!Machine::isInited()) {
		if (penv != nullptr) {
			*penv = nullptr;
		}
		return JNI_EDETACHED;
	}
	JavaThread* jt = JavaThread::getCurrentThread();
	if (jt == nullptr) {
		*penv = nullptr;
		return JNI_EDETACHED;
	}
	if (!Platform::isSupportedVersion(version)) {
		*penv = nullptr;
		return JNI_EVERSION;
	}
	*penv = jt->getJNIEnv();
	return JNI_OK;
}

jint JNICALL jni_AttachCurrentThreadAsDaemon(JavaVM* vm, void** penv, void* _args) {
	if (!Machine::isInited()) {
		return JNI_ERR;
	}
	jint ret = attachCurrentThread(vm, penv, _args, true);
	return ret;
}

} // End extern "C"

const struct JNIInvokeInterface_ jni_InvokeInterface = {
	nullptr,
	nullptr,
	nullptr,

	jni_DestroyJavaVM,
	jni_AttachCurrentThread,
	jni_DetachCurrentThread,
	jni_GetEnv,
	jni_AttachCurrentThreadAsDaemon
};