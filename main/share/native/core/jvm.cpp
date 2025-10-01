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
#include "Arguments.h"
#include "interfaceSupport.h"
#include "OS.h"
#include "JavaThread.h"

#include <java/lang/ClassLoader.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/UnsatisfiedLinkError.h>
#include <java/lang/Machine.h>
#include <java/lang/Thread.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/StackFrameInfo.h>
#include <java/lang/StackStreamFactory$AbstractStackWalker.h>
#include <java/lang/Module.h>
#include <java/lang/Package.h>
#include <java/lang/StackWalker.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/ObjectManagerInternal.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/invoke/MethodHandleNatives$Constants.h>
#include <java/security/ProtectionDomain.h>
#include <jdk/internal/reflect/Reflection.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <jdk/internal/reflect/MethodAccessorImpl.h>
#include <jdk/internal/reflect/ConstructorAccessorImpl.h>
#include <jdk/internal/loader/ClassLoaders.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jcpp.h>

#include "Platform.h"
#include "StackWalk.h"

#include <errno.h>
#include <mutex>

using ::java::lang::Object;
using ::java::lang::Object0;
using ::java::lang::ObjectManager;
using ::java::lang::ObjectManagerInternal;
using ::java::lang::String;
using ::java::lang::Class;
using ::java::lang::ClassLoader;
using ::java::lang::System;
using ::java::lang::Throwable;
using ::java::lang::BaseArray;
using ::java::lang::CloneNotSupportedException;
using ::java::lang::ClassNotFoundException;
using ::java::lang::UnsatisfiedLinkError;
using ::java::lang::Machine;
using ::java::lang::StackTraceElement;
using ::java::lang::StackFrameInfo;
using ::java::lang::StackStreamFactory$AbstractStackWalker;
using ::java::lang::Module;
using ::java::lang::Package;
using ::java::lang::StackWalker;
using ::java::lang::StackWalker$Option;
using ::java::lang::module::ModuleDescriptor;
using $Thread = ::java::lang::Thread;
using ::java::lang::ref::PhantomReference;
using ::java::lang::reflect::Array;
using $Method = ::java::lang::reflect::Method;
using $Field = ::java::lang::reflect::Field;
using ::java::lang::reflect::Constructor;
using ::java::lang::IllegalArgumentException;
using ::java::security::ProtectionDomain;
using ::jdk::internal::reflect::Reflection;
using ::jdk::internal::reflect::ConstantPool;
using ::jdk::internal::reflect::MethodAccessorImpl;
using ::jdk::internal::reflect::ConstructorAccessorImpl;
using ::jdk::internal::loader::ClassLoaders;
using ::jdk::internal::loader::BuiltinClassLoader;

JVM_LEAF(jlong, JVM_CurrentTimeMillis(JNIEnv* env, jclass ignored))
	return OS::getTimeMillis();
JVM_LEAF_END

JVM_LEAF(jlong, JVM_NanoTime())
	return OS::getTimeNanos();
JVM_LEAF_END

const jlong MAX_DIFF_SECS = 0x0100000000L; // 2^32
const jlong MIN_DIFF_SECS = -MAX_DIFF_SECS; // -2^32

JVM_LEAF(jlong, JVM_GetNanoTimeAdjustment(JNIEnv* env, jclass ignored, jlong offsetSecs))
	jlong seconds;
	jlong nanos;
	OS::getTimeSystemUTC(seconds, nanos);
	jlong diff = seconds - offsetSecs;
	if (diff >= MAX_DIFF_SECS || diff <= MIN_DIFF_SECS) {
		return -1;
	}
	return diff * NANOSECS_PER_SEC + nanos;
JVM_LEAF_END

JVM_ENTRY(void, JVM_ArrayCopy(JNIEnv* env, jclass ignored, jobject src, jint src_pos,
		jobject dst, jint dst_pos, jint length))
	System::arraycopy(src, src_pos, dst, dst_pos, length);
JVM_END_VOID

JVM_ENTRY(jobjectArray, JVM_GetProperties(JNIEnv* env))
	int ndx = 0;
	int fixedCount = 2;
	SystemProperty* p = Arguments::getSystemProperties();
	int count = Arguments::countList(p);
	$var($ObjectArray, properties, $new<$ObjectArray>((count + fixedCount) * 2));
	while (p != NULL) {
		const char * key = p->getKey();
		if (strcmp(key, "sun.nio.MaxDirectMemorySize") != 0) {
			const char* value = p->getValue();
			$var(String, keyStr, String::valueOf(key));
			$var(String, valueStr, String::valueOf(value));
			properties->set(ndx * 2, keyStr);
			properties->set(ndx * 2 + 1, valueStr);
			ndx++;
		}
		p = p->getNext();
	}
	ObjectManager::newLocalRef(properties);
	return (jobjectArray)properties;
JVM_END(nullptr)

JVM_ENTRY(jstring, JVM_GetTemporaryDirectory(JNIEnv* env))
	char buf[2000];
	const char* temp_dir = OS::getTempDirectory(buf, sizeof(buf));
	$String* s = $String::valueOf(temp_dir);
	ObjectManager::newLocalRef(s);
	return (jstring)s;
JVM_END(nullptr)

JVM_ENTRY(void, JVM_BeforeHalt())
	// NOTHING
JVM_END_VOID

JVM_ENTRY(void, JVM_Halt(jint code))
	if (code == 0) {
		System::deinit();
	}
	OS::exit(code);
JVM_END_VOID

JVM_ENTRY(void, JVM_GC(void))
	System::gc();
JVM_END_VOID

JVM_LEAF(jlong, JVM_MaxObjectInspectionAge(void))
	return 0;
JVM_LEAF_END

JVM_LEAF(jlong, JVM_TotalMemory(void))
	return ::java::lang::ObjectManagerInternal::totalMemory();
JVM_LEAF_END

JVM_LEAF(jlong, JVM_FreeMemory(void))
	return ::java::lang::ObjectManagerInternal::freeMemory();
JVM_LEAF_END

JVM_LEAF(jlong, JVM_MaxMemory(void))
	return ::java::lang::ObjectManagerInternal::maxMemory();
JVM_LEAF_END

JVM_LEAF(jint, JVM_ActiveProcessorCount(void))
	return OS::getActiveProcessorCount();
JVM_LEAF_END

JVM_LEAF(jboolean, JVM_IsUseContainerSupport(void))
#ifdef LINUX
	// TODO
#endif
	return JNI_FALSE;
JVM_LEAF_END

JVM_ENTRY(void, JVM_FillInStackTrace(JNIEnv* env, jobject receiver))
	Throwable* t = (Throwable*)receiver;
	$nullcheck(t)->fillInStackTrace();
JVM_END_VOID

JVM_ENTRY(jstring, JVM_GetExtendedNPEMessage(JNIEnv* env, jthrowable throwable))
	return nullptr;
JVM_END(nullptr)

JVM_ENTRY(void, JVM_InitStackTraceElementArray(JNIEnv* env, jobjectArray elements, jobject throwable))
	StackTraceElement::initStackTraceElements(($Array<::java::lang::StackTraceElement>*)elements, (Throwable*)throwable);
JVM_END_VOID

JVM_ENTRY(void, JVM_InitStackTraceElement(JNIEnv* env, jobject element, jobject stackFrameInfo))
	StackTraceElement::initStackTraceElement((StackTraceElement*)element, (StackFrameInfo*)stackFrameInfo);
JVM_END_VOID

JVM_ENTRY(jobject, JVM_CallStackWalk(JNIEnv* env, jobject stackStream, jlong mode,
									 jint skipframes, jint frameCount, jint startIndex,
									 jobjectArray frames))
	Object* ret = StackWalk::walk((StackStreamFactory$AbstractStackWalker*)stackStream, mode, skipframes, frameCount, startIndex, ($ObjectArray*)frames);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JVM_END(nullptr)

JVM_ENTRY(jint, JVM_MoreStackWalk(JNIEnv* env, jobject stackStream, jlong mode, jlong anchor,
		jint frameCount, jint startIndex, jobjectArray frames))
	return StackWalk::fetchNextBatch(stackStream, mode, anchor, frameCount, startIndex, ($ObjectArray*)frames);
JVM_END(0)

JVM_LEAF(jint, JVM_IHashCode(JNIEnv* env, jobject obj))
	return (jint)(intptr_t)($Object0::toObject0(obj));
JVM_LEAF_END

JVM_ENTRY(void, JVM_MonitorWait(JNIEnv* env, jobject obj, jlong ms))
	Object0* obj0 = $toObject0(obj);
	$nullcheck(obj0)->wait(ms);
JVM_END_VOID

JVM_ENTRY(void, JVM_MonitorNotify(JNIEnv* env, jobject obj))
	Object0* obj0 = $toObject0(obj);
	$nullcheck(obj0)->notify();
JVM_END_VOID

JVM_ENTRY(void, JVM_MonitorNotifyAll(JNIEnv* env, jobject obj))
	Object0* obj0 = $toObject0(obj);
	$nullcheck(obj0)->notifyAll();
JVM_END_VOID

JVM_ENTRY(jobject, JVM_Clone(JNIEnv* env, jobject obj))
	Object0* obj0 = $toObject0(obj);
	Class* clazz = $nullcheck(obj0)->getClass();
	if (clazz->isCloneable()) {
		Object* cloneObj = obj0->clone();
		ObjectManager::newLocalRef(cloneObj);
		return (jobject)cloneObj;
	} else {
		$throwNew(CloneNotSupportedException, $ref(clazz->getName()));
	}
JVM_END(nullptr)

JVM_LEAF(char*, JVM_NativePath(char* path))
	return OS::toNativePath(path);
JVM_LEAF_END

JVM_ENTRY(jclass, JVM_GetCallerClass(JNIEnv* env))
	Class* clazz = Reflection::getCallerClass();
	ObjectManager::newLocalRef(clazz);
	return (jclass)clazz;
JVM_END(nullptr)

JVM_ENTRY(jclass, JVM_FindPrimitiveClass(JNIEnv* env, const char* utf))
	$$nullcheck(utf);
	Class* clazz = Machine::getPrimitiveClass($$str(utf));
	ObjectManager::newLocalRef(clazz);
	return (jclass)clazz;
JVM_END(nullptr)

JVM_ENTRY(jclass, JVM_FindClassFromBootLoader(JNIEnv* env, const char* name))
	$$nullcheck(name);
	Class* clazz = Machine::findBootstrapClass(nullptr, $$str(name));
	ObjectManager::newLocalRef(clazz);
	return (jclass)clazz;
JVM_END(nullptr)

JVM_ENTRY(jclass, JVM_FindClassFromCaller(JNIEnv* env, const char* name, jboolean init, jobject loader, jclass caller))
	ClassLoader* classloader = (ClassLoader*)loader;
	Class* clazz = classloader->findClass($$str(name));
	if (init) {
		$nullcheck(clazz)->initialize();
	}
	ObjectManager::newLocalRef(clazz);
	return (jclass)clazz;
JVM_END(nullptr)

JVM_ENTRY(jclass, JVM_FindClassFromClass(JNIEnv* env, const char *name, jboolean init, jclass from))
	Class* fromClass = (Class*)from;
	ClassLoader* classloader = $nullcheck(fromClass)->getClassLoader();
	Class* clazz = classloader->findClass($$str(name));
	if (init) {
		$nullcheck(clazz)->initialize();
	}
	ObjectManager::newLocalRef(clazz);
	return (jclass)clazz;
JVM_END(nullptr)

JVM_ENTRY(jclass, JVM_DefineClass(JNIEnv* env, const char *name, jobject loader, const jbyte *buf, jsize len, jobject pd))
	$var($bytes, bytes, $new<$bytes>(len));
	bytes->setRegion(0, len, (int8_t*)buf);
	Class* clazz = Machine::defineClass1((ClassLoader*)loader, $$str(name), bytes, 0, len, (ProtectionDomain*)pd, nullptr);
	ObjectManager::newLocalRef(clazz);
	return (jclass)clazz;
JVM_END(nullptr)

JVM_ENTRY(jclass, JVM_LookupDefineClass(JNIEnv* env, jclass lookup, const char *name, const jbyte *buf, jsize len, jobject pd, jboolean initialize, int flags, jobject classData))
	Class* lookupClass = (Class*)lookup;
	$var($bytes, bytes, $new<$bytes>(len));
	bytes->setRegion(0, len, (int8_t*)buf);
	ClassLoader* classLoader = $nullcheck(lookupClass)->getClassLoader();
	Class* clazz = Machine::defineClass0(classLoader, lookupClass, $$str(name), bytes, 0, len, (ProtectionDomain*)pd, initialize, flags, classData);
	ObjectManager::newLocalRef(clazz);
	return (jclass)clazz;
JVM_END(nullptr)

JVM_ENTRY(jclass, JVM_DefineClassWithSource(JNIEnv* env, const char *name, jobject loader, const jbyte *buf, jsize len, jobject pd, const char *source))
	$var($bytes, bytes, $new<$bytes>(len));
	bytes->setRegion(0, len, (int8_t*)buf);
	Class* clazz = Machine::defineClass1((ClassLoader*)loader, $$str(name), bytes, 0, len, (ProtectionDomain*)pd, $$str(source));
	ObjectManager::newLocalRef(clazz);
	return (jclass)clazz;
JVM_END(nullptr)

JVM_ENTRY(jclass, JVM_FindLoadedClass(JNIEnv* env, jobject loader, jstring name))
	ClassLoader* classloader = (ClassLoader*)loader;
	$var(String, name2, $nullcheck((String*)name)->replace('/', '.'));
	Class* clazz = classloader->findLoadedClass(name2);
	ObjectManager::newLocalRef(clazz);
	return (jclass)clazz;
JVM_END(nullptr)

JVM_ENTRY(void, JVM_DefineModule(JNIEnv* env, jobject module, jboolean isOpen, jstring version, jstring location, jobjectArray packages))
// TODO
JVM_END_VOID

JVM_ENTRY(void, JVM_SetBootLoaderUnnamedModule(JNIEnv* env, jobject module))
	Module* module2 = $cast<Module>(module);
	if (module2 == nullptr) {
		$throwNew(IllegalArgumentException, "module is not an instance of type java.lang.Module"_s);
	}
	if (module2->getName() != nullptr) {
		$throwNew(IllegalArgumentException, "boot loader's unnamed module's java.lang.Module has a name"_s);
	}
	ClassLoader* classloader = (ClassLoader*)module2->getClassLoader();
	if (classloader != NULL) {
		$throwNew(IllegalArgumentException, "Class loader must be the boot class loader"_s);
	}
	$set(ClassLoaders::bootLoader(), unnamedModule, module2);
JVM_END_VOID

JVM_ENTRY(void, JVM_AddModuleExports(JNIEnv* env, jobject fromModule, jstring package, jobject toModule))
// TODO
JVM_END_VOID

JVM_ENTRY(void, JVM_AddModuleExportsToAllUnnamed(JNIEnv* env, jobject fromModule, jstring package))
// TODO
JVM_END_VOID

JVM_ENTRY(void, JVM_AddModuleExportsToAll(JNIEnv* env, jobject from_module, jstring package))
// TODO
JVM_END_VOID

JVM_ENTRY (void, JVM_AddReadsModule(JNIEnv* env, jobject from_module, jobject source_module))
// TODO
JVM_END_VOID

JVM_ENTRY(void, JVM_DefineArchivedModules(JNIEnv* env, jobject platform_loader, jobject system_loader))
// TODO
JVM_END_VOID

JVM_ENTRY(jstring, JVM_InitClassName(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	$var(String, name, $nullcheck(clazz)->getName());
	ObjectManager::newLocalRef(name);
	return (jstring)name;
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_GetClassInterfaces(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	$var($ObjectArray, interfaces, $nullcheck(clazz)->getInterfaces());
	ObjectManager::newLocalRef(interfaces);
	return (jobjectArray)interfaces;
JVM_END(nullptr)

JVM_ENTRY(jboolean, JVM_IsInterface(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	bool ret = $nullcheck(clazz)->isInterface();
	return ret ? JNI_TRUE : JNI_FALSE;
JVM_END(JNI_FALSE)

JVM_ENTRY(jboolean, JVM_IsHiddenClass(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	if ($nullcheck(clazz)->isPrimitive()) {
		return JNI_FALSE;
	}
	bool ret = $nullcheck(clazz)->isHidden();
	return ret ? JNI_TRUE : JNI_FALSE;
JVM_END(JNI_FALSE)

JVM_ENTRY(jobjectArray, JVM_GetClassSigners(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	if ($nullcheck(clazz)->isPrimitive()) {
		return nullptr;
	}
	$var($ObjectArray, signers, clazz->getSigners());
	if (signers == nullptr) {
		return nullptr;
	}
	$var($ObjectArray, signersClone, ($ObjectArray*)signers->clone());
	ObjectManager::newLocalRef(signersClone);
	return (jobjectArray)signersClone;
JVM_END(nullptr)

JVM_ENTRY(void, JVM_SetClassSigners(JNIEnv* env, jclass cls, jobjectArray signers))
	Class* clazz = (Class*)cls;
	if (!$nullcheck(clazz)->isPrimitive()) {
		return clazz->setSigners(($ObjectArray*)signers);
	}
JVM_END_VOID

JVM_ENTRY(jobject, JVM_GetProtectionDomain(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)$nullcheck(cls);
	if (clazz->isPrimitive()) {
		return nullptr;
	}
	Object$* ret = clazz->getProtectionDomain();
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JVM_END(nullptr)

JVM_ENTRY(jobject, JVM_GetInheritedAccessControlContext(JNIEnv* env, jclass cls))
	JavaThread* jt = JavaThread::toJavaThread(env);
	$Thread* t = $nullcheck(jt)->getThreadObject();
	Object$* ret = $nullcheck(t)->inheritedAccessControlContext;
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JVM_END(nullptr)

JVM_ENTRY(jobject, JVM_GetStackAccessControlContext(JNIEnv* env, jclass cls))
	// disable this feature
	return nullptr;
JVM_END(nullptr)

JVM_ENTRY(jboolean, JVM_IsArrayClass(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	bool ret = $nullcheck(clazz)->isArray();
	return ret ? JNI_TRUE : JNI_FALSE;
JVM_END(JNI_FALSE)

JVM_ENTRY(jboolean, JVM_IsPrimitiveClass(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	bool ret = $nullcheck(clazz)->isPrimitive();
	return ret ? JNI_TRUE : JNI_FALSE;
JVM_END(JNI_FALSE)

JVM_ENTRY(jint, JVM_GetClassModifiers(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	return $nullcheck(clazz)->getModifiers();
JVM_END(0)

// Inner class
JVM_ENTRY(jobjectArray, JVM_GetDeclaredClasses(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	if ($nullcheck(clazz)->isPrimitive()) {
		$var($ObjectArray, classes, $new<$ObjectArray>(0));
		ObjectManager::newLocalRef(classes);
		return (jobjectArray)classes;
	}
	$var($Array<Class>, classes, clazz->getDeclaredClasses());
	ObjectManager::newLocalRef(classes);
	return (jobjectArray)classes;
JVM_END(nullptr)

JVM_ENTRY(jclass, JVM_GetDeclaringClass(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	if ($nullcheck(clazz)->isPrimitive()) {
		return nullptr;
	}
	Class* declaringClass = clazz->getDeclaringClass();
	ObjectManager::newLocalRef(declaringClass);
	return (jclass)declaringClass;
JVM_END(nullptr)

JVM_ENTRY(jstring, JVM_GetSimpleBinaryName(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	if ($nullcheck(clazz)->isPrimitive()) {
		return nullptr;
	}
	$var(String, name, clazz->getSimpleBinaryName());
	ObjectManager::newLocalRef(name);
	return (jstring)name;
JVM_END(nullptr)

JVM_ENTRY(jstring, JVM_GetClassSignature(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	if ($nullcheck(clazz)->isPrimitive()) {
		return nullptr;
	}
	$var(String, signature, clazz->getGenericSignature0());
	ObjectManager::newLocalRef(signature);
	return (jstring)signature;
JVM_END(nullptr)

JVM_ENTRY(jbyteArray, JVM_GetClassAnnotations(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	if ($nullcheck(clazz)->isPrimitive()) {
		return nullptr;
	}
	$var($bytes, annotations, clazz->getRawAnnotations());
	ObjectManager::newLocalRef(annotations);
	return (jbyteArray)annotations;
JVM_END(nullptr)

JVM_ENTRY(jbyteArray, JVM_GetClassTypeAnnotations(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	if ($nullcheck(clazz)->isPrimitive()) {
		return nullptr;
	}
	$var($bytes, typeAnnotations, clazz->getRawTypeAnnotations());
	ObjectManager::newLocalRef(typeAnnotations);
	return (jbyteArray)typeAnnotations;
JVM_END(nullptr)

JVM_ENTRY(jbyteArray, JVM_GetMethodTypeAnnotations(JNIEnv* env, jobject method))
	$Method* m = ($Method*)method;
	$var($bytes, typeAnnotations, $nullcheck(m)->getTypeAnnotationBytes());
	ObjectManager::newLocalRef(typeAnnotations);
	return (jbyteArray)typeAnnotations;
JVM_END(nullptr)

JVM_ENTRY(jbyteArray, JVM_GetFieldTypeAnnotations(JNIEnv* env, jobject field))
	$Field* f = ($Field*)field;
	$var($bytes, typeAnnotations, $nullcheck(f)->getTypeAnnotationBytes0());
	ObjectManager::newLocalRef(typeAnnotations);
	return (jbyteArray)typeAnnotations;
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_GetMethodParameters(JNIEnv* env, jobject method))
	$Method* m = ($Method*)method;
	$var($ClassArray, parameterTypes, $nullcheck(m)->getParameterTypes());
	ObjectManager::newLocalRef(parameterTypes);
	return (jobjectArray)parameterTypes;
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_GetClassDeclaredFields(JNIEnv* env, jclass cls, jboolean publicOnly))
	Class* clazz = (Class*)cls;
	$nullcheck(clazz);
	if (clazz->isPrimitive() || clazz->isArray()) {
		$var($ObjectArray, fields, $new<$ObjectArray>(0));
		ObjectManager::newLocalRef(fields);
		return (jobjectArray)fields;
	}
	$var($Array<$Field>, fields, clazz->privateGetDeclaredFields(publicOnly));
	$assign(fields, Class::copyFields(fields));
	ObjectManager::newLocalRef(fields);
	return (jobjectArray)fields;
JVM_END(nullptr)

JVM_ENTRY(jboolean, JVM_IsRecord(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	return $nullcheck(clazz)->isRecord() ? JNI_TRUE : JNI_FALSE;
JVM_END(JNI_FALSE)

JVM_ENTRY(jobjectArray, JVM_GetRecordComponents(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	$var($ObjectArray, rc, clazz->getRecordComponents());
	ObjectManager::newLocalRef(rc);
	return (jobjectArray)rc;
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_GetClassDeclaredMethods(JNIEnv* env, jclass cls, jboolean publicOnly))
	Class* clazz = (Class*)cls;
	$nullcheck(clazz);
	if (clazz->isPrimitive() || clazz->isArray()) {
		$var($ObjectArray, methods, $new<$ObjectArray>(0));
		ObjectManager::newLocalRef(methods);
		return (jobjectArray)methods;
	}
	$var($Array<$Method>, methods, clazz->privateGetDeclaredMethods(publicOnly));
	$assign(methods, Class::copyMethods(methods));
	ObjectManager::newLocalRef(methods);
	return (jobjectArray)methods;
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_GetClassDeclaredConstructors(JNIEnv* env, jclass cls, jboolean publicOnly))
	Class* clazz = (Class*)cls;
	$nullcheck(clazz);
	if (clazz->isPrimitive() || clazz->isArray()) {
		$var($ObjectArray, methods, $new<$ObjectArray>(0));
		ObjectManager::newLocalRef(methods);
		return (jobjectArray)methods;
	}
	$var($Array<Constructor>, constructors, clazz->privateGetDeclaredConstructors(publicOnly));
	$assign(constructors, Class::copyConstructors(constructors));
	ObjectManager::newLocalRef(constructors);
	return (jobjectArray)constructors;
JVM_END(nullptr)

JVM_ENTRY(jint, JVM_GetClassAccessFlags(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	return $nullcheck(clazz)->getModifiers();
JVM_END(0)

JVM_ENTRY(jboolean, JVM_AreNestMates(JNIEnv* env, jclass current, jclass member))
	Class* currentClass = (Class*)current;
	Class* memberClass = (Class*)member;
	bool ret = $nullcheck(currentClass)->isNestmateOf(memberClass);
	return ret ? JNI_TRUE : JNI_FALSE;
JVM_END(JNI_FALSE)

JVM_ENTRY(jclass, JVM_GetNestHost(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	Class* nestHost = $nullcheck(clazz)->getNestHost();
	ObjectManager::newLocalRef(nestHost);
	return (jclass)nestHost;
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_GetNestMembers(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	$var($Array<Class>, nestMembers, $nullcheck(clazz)->getNestMembers());
	ObjectManager::newLocalRef(nestMembers);
	return (jobjectArray)nestMembers;
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_GetPermittedSubclasses(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	$var($Array<Class>, classes, $nullcheck(clazz)->getPermittedSubclasses());
	ObjectManager::newLocalRef(classes);
	return (jobjectArray)classes;
JVM_END(nullptr)

JVM_ENTRY(jobject, JVM_GetClassConstantPool(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	$var(ConstantPool, cp, $nullcheck(clazz)->getConstantPool());
	ObjectManager::newLocalRef(cp);
	return (jobjectArray)cp;
JVM_END(nullptr)

JVM_ENTRY(jint, JVM_ConstantPoolGetSize(JNIEnv* env, jobject obj, jobject unused))
	ConstantPool* cp = (ConstantPool*)obj;
	return $nullcheck(cp)->getSize();
JVM_END(0)

JVM_ENTRY(jclass, JVM_ConstantPoolGetClassAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(nullptr)

JVM_ENTRY(jclass, JVM_ConstantPoolGetClassAtIfLoaded(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(nullptr)

JVM_ENTRY(jobject, JVM_ConstantPoolGetMethodAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(nullptr)

JVM_ENTRY(jobject, JVM_ConstantPoolGetMethodAtIfLoaded(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(nullptr)

JVM_ENTRY(jobject, JVM_ConstantPoolGetFieldAt(JNIEnv* env, jobject obj, jobject unusedl, jint index))
// TODO
JVM_END(nullptr)

JVM_ENTRY(jobject, JVM_ConstantPoolGetFieldAtIfLoaded(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_ConstantPoolGetMemberRefInfoAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(nullptr)

JVM_ENTRY(jint, JVM_ConstantPoolGetClassRefIndexAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(0)

JVM_ENTRY(jint, JVM_ConstantPoolGetNameAndTypeRefIndexAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(0)

JVM_ENTRY(jobjectArray, JVM_ConstantPoolGetNameAndTypeRefInfoAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(nullptr)

JVM_ENTRY(jint, JVM_ConstantPoolGetIntAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(0)

JVM_ENTRY(jlong, JVM_ConstantPoolGetLongAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(0)

JVM_ENTRY(jfloat, JVM_ConstantPoolGetFloatAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(0)

JVM_ENTRY(jdouble, JVM_ConstantPoolGetDoubleAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(0)

JVM_ENTRY(jstring, JVM_ConstantPoolGetStringAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(nullptr)

JVM_ENTRY(jstring, JVM_ConstantPoolGetUTF8At(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(nullptr)

JVM_ENTRY(jbyte, JVM_ConstantPoolGetTagAt(JNIEnv* env, jobject obj, jobject unused, jint index))
// TODO
JVM_END(0)

JVM_ENTRY(jboolean, JVM_DesiredAssertionStatus(JNIEnv* env, jclass unused, jclass cls))
	// disable this feature
	return false;
JVM_END(JNI_FALSE)

JVM_ENTRY(jobject, JVM_AssertionStatusDirectives(JNIEnv* env, jclass unused))
	// disable this feature
	return nullptr;
JVM_END(nullptr)

JVM_ENTRY(const char*, JVM_GetClassNameUTF(JNIEnv* env, jclass cls))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(void, JVM_GetClassCPTypes(JNIEnv* env, jclass cls, unsigned char *types))
// disable this feature
JVM_END_VOID

JVM_ENTRY(jint, JVM_GetClassCPEntriesCount(JNIEnv* env, jclass cls))
// disable this feature
JVM_END(0)

JVM_ENTRY(jint, JVM_GetClassFieldsCount(JNIEnv* env, jclass cls))
// disable this feature
JVM_END(0)

JVM_ENTRY(jint, JVM_GetClassMethodsCount(JNIEnv* env, jclass cls))
// disable this feature
JVM_END(0)

JVM_ENTRY(void, JVM_GetMethodIxExceptionIndexes(JNIEnv* env, jclass cls, jint method_index, unsigned short *exceptions))
// disable this feature
JVM_END_VOID

JVM_ENTRY(jint, JVM_GetMethodIxExceptionsCount(JNIEnv* env, jclass cls, jint method_index))
// disable this feature
JVM_END(0)

JVM_ENTRY(void, JVM_GetMethodIxByteCode(JNIEnv* env, jclass cls, jint method_index, unsigned char *code))
// disable this feature
JVM_END_VOID

JVM_ENTRY(jint, JVM_GetMethodIxByteCodeLength(JNIEnv* env, jclass cls, jint method_index))
// disable this feature
JVM_END(0)

JVM_ENTRY(void, JVM_GetMethodIxExceptionTableEntry(JNIEnv* env, jclass cls, jint method_index, jint entry_index, JVM_ExceptionTableEntryType *entry))
// disable this feature
JVM_END_VOID

JVM_ENTRY(jint, JVM_GetMethodIxExceptionTableLength(JNIEnv* env, jclass cls, int method_index))
// disable this feature
JVM_END(0)

JVM_ENTRY(jint, JVM_GetMethodIxModifiers(JNIEnv* env, jclass cls, int method_index))
// disable this feature
JVM_END(0)

JVM_ENTRY(jint, JVM_GetFieldIxModifiers(JNIEnv* env, jclass cls, int field_index))
// disable this feature
JVM_END(0)

JVM_ENTRY(jint, JVM_GetMethodIxLocalsCount(JNIEnv* env, jclass cls, int method_index))
// disable this feature
JVM_END(0)

JVM_ENTRY(jint, JVM_GetMethodIxArgsSize(JNIEnv* env, jclass cls, int method_index))
// disable this feature
JVM_END(0)

JVM_ENTRY(jint, JVM_GetMethodIxMaxStack(JNIEnv* env, jclass cls, int method_index))
// disable this feature
JVM_END(0)

JVM_ENTRY(jboolean, JVM_IsConstructorIx(JNIEnv* env, jclass cls, int method_index))
// disable this feature
JVM_END(JNI_FALSE)

JVM_ENTRY(jboolean, JVM_IsVMGeneratedMethodIx(JNIEnv* env, jclass cls, int method_index))
// disable this feature
JVM_END(JNI_FALSE)

JVM_ENTRY(const char*, JVM_GetMethodIxNameUTF(JNIEnv* env, jclass cls, jint method_index))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(const char*, JVM_GetMethodIxSignatureUTF(JNIEnv* env, jclass cls, jint method_index))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(const char*, JVM_GetCPFieldNameUTF(JNIEnv* env, jclass cls, jint cp_index))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(const char*, JVM_GetCPMethodNameUTF(JNIEnv* env, jclass cls, jint cp_index))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(const char*, JVM_GetCPMethodSignatureUTF(JNIEnv* env, jclass cls, jint cp_index))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(const char*, JVM_GetCPFieldSignatureUTF(JNIEnv* env, jclass cls, jint cp_index))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(const char*, JVM_GetCPClassNameUTF(JNIEnv* env, jclass cls, jint cp_index))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(const char*, JVM_GetCPFieldClassNameUTF(JNIEnv* env, jclass cls, jint cp_index))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(const char*, JVM_GetCPMethodClassNameUTF(JNIEnv* env, jclass cls, jint cp_index))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(jint, JVM_GetCPFieldModifiers(JNIEnv* env, jclass cls, int cp_index, jclass called_cls))
// disable this feature
JVM_END(0)

JVM_ENTRY(jint, JVM_GetCPMethodModifiers(JNIEnv* env, jclass cls, int cp_index, jclass called_cls))
// disable this feature
JVM_END(0)

// Misc
JVM_LEAF(void, JVM_ReleaseUTF(const char *utf))
	if (utf != nullptr) {
		free((char*)utf);
	}
JVM_LEAF_END

JVM_ENTRY(jboolean, JVM_IsSameClassPackage(JNIEnv* env, jclass class1, jclass class2))
	Class* clazz1 = (Class*)class1;
	Class* clazz2 = (Class*)class2;
	$var(String, packageName1, $nullcheck(clazz1)->getPackageName());
	$var(String, packageName2, $nullcheck(clazz2)->getPackageName());
	bool ret = $equals(packageName1, packageName2);
	return ret ? JNI_TRUE : JNI_FALSE;
JVM_END(JNI_FALSE)

extern "C" {

int jio_vsnprintf(char *str, size_t count, const char* format, va_list args) {
	if ((intptr_t)count <= 0) {
		return -1;
	}
	int result = OS::vsnprintf(str, count, format, args);
	if (result > 0 && (size_t)result >= count) {
		return -1;
	}
	return result;
}

int jio_vfprintf(FILE* f, const char *fmt, va_list args) {
	return vfprintf(f, fmt, args);
}

JNIEXPORT int jio_printf(const char *fmt, ...) {
	int len;
	va_list args;
	va_start(args, fmt);
	len = jio_vfprintf(stdout, fmt, args);
	va_end(args);
	return len;
}

} // Extern C

JVM_ENTRY(void, JVM_StartThread(JNIEnv* env, jobject jthread))
	JavaThread::JVM_StartThread(($Thread*)jthread);
JVM_END_VOID

JVM_ENTRY(void, JVM_StopThread(JNIEnv* env, jobject jthread, jobject throwable))
	JavaThread::JVM_StopThread(($Thread*)jthread, (Throwable*)throwable);
JVM_END_VOID

JVM_ENTRY(jboolean, JVM_IsThreadAlive(JNIEnv* env, jobject jthread))
	$Thread* thread = ($Thread*)jthread;
	return $nullcheck(thread)->isAlive();
JVM_END(JNI_FALSE)

JVM_ENTRY(void, JVM_SuspendThread(JNIEnv* env, jobject jthread))
	JavaThread::JVM_SuspendThread(($Thread*)jthread);
JVM_END_VOID

JVM_ENTRY(void, JVM_ResumeThread(JNIEnv* env, jobject jthread))
	JavaThread::JVM_ResumeThread(($Thread*)jthread);
JVM_END_VOID

JVM_ENTRY(void, JVM_SetThreadPriority(JNIEnv* env, jobject jthread, jint prio))
	JavaThread::JVM_SetThreadPriority(($Thread*)jthread, prio);
JVM_END_VOID

JVM_ENTRY(void, JVM_Yield(JNIEnv* env, jclass threadClass))
	OS::yield();
JVM_END_VOID

JVM_ENTRY(void, JVM_Sleep(JNIEnv* env, jclass threadClass, jlong millis))
	JavaThread::JVM_Sleep(millis);
JVM_END_VOID

JVM_ENTRY(jobject, JVM_CurrentThread(JNIEnv* env, jclass threadClass))
	JavaThread* current = JavaThread::sureCurrentThread();
	$Thread* threadObject = current->getThreadObject();
	ObjectManager::newLocalRef(threadObject);
	return (jobject)threadObject;
JVM_END(nullptr)

JVM_ENTRY(void, JVM_Interrupt(JNIEnv* env, jobject jthread))
	$Thread* threadObject = ($Thread*)jthread;
	JavaThread::JVM_Interrupt(threadObject);
JVM_END_VOID

JVM_ENTRY(jboolean, JVM_HoldsLock(JNIEnv* env, jclass threadClass, jobject obj))
	return Platform::JVM_HoldsLock(($Object*)obj);
JVM_END(JNI_FALSE)


JVM_ENTRY(void, JVM_DumpAllStacks(JNIEnv* env, jclass))
	// NOTHING TODO
JVM_END_VOID

JVM_ENTRY(void, JVM_SetNativeThreadName(JNIEnv* env, jobject jthread, jstring name))
	JavaThread* current = JavaThread::sureCurrentThread();
	if (current->getThreadObject() == ($Thread*)jthread) {
		OS::setNativeThreadName((String*)name);
	}
JVM_END_VOID

JVM_ENTRY(jobjectArray, JVM_GetClassContext(JNIEnv* env))
	$var($ClassArray, ca, StackWalk::getClassContext());
	ObjectManager::newLocalRef(ca);
	return (jobjectArray)ca;
JVM_END(nullptr)

// java.lang.Package 
JVM_ENTRY(jstring, JVM_GetSystemPackage(JNIEnv* env, jstring name))
	$var(Package, package, ClassLoaders::bootLoader()->getDefinedPackage((String*)name));
	if (package != nullptr) {
		$var(String, pn, package->getName());
		ObjectManager::newLocalRef(pn);
		return (jstring)pn;
	}
	return nullptr;
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_GetSystemPackages(JNIEnv* env))
	$var($Array<Package>, packages, ClassLoaders::bootLoader()->getPackages());
	$var($StringArray, sa, $new<$StringArray>(packages->length));
	for (int32_t i = 0; i < packages->length; i++) {
		Package* package = (Package*)packages->get(i);
		sa->set(i, package->getName());
	}
	ObjectManager::newLocalRef(sa);
	return (jobjectArray)sa;
JVM_END(nullptr)

// java.lang.ref.Reference
JVM_ENTRY(jobject, JVM_GetAndClearReferencePendingList(JNIEnv* env))
// NOTHING
JVM_END(nullptr)

JVM_ENTRY(jboolean, JVM_HasReferencePendingList(JNIEnv* env))
// NOTHING
JVM_END(JNI_FALSE)

JVM_ENTRY(void, JVM_WaitForReferencePendingList(JNIEnv* env))
// NOTHING
JVM_END_VOID

JVM_ENTRY(jboolean, JVM_ReferenceRefersTo(JNIEnv* env, jobject ref, jobject o))
// NOTHING
JVM_END(JNI_FALSE)

JVM_ENTRY(void, JVM_ReferenceClear(JNIEnv* env, jobject ref))
// NOTHING
JVM_END_VOID

JVM_ENTRY(jboolean, JVM_PhantomReferenceRefersTo(JNIEnv* env, jobject ref, jobject o))
	PhantomReference* pRef = (PhantomReference*)ref;
	bool ret = $nullcheck(pRef)->refersTo(o);
	return ret ? JNI_TRUE : JNI_FALSE;
JVM_END(JNI_FALSE)

// ObjectInputStream
JVM_ENTRY(jobject, JVM_LatestUserDefinedLoader(JNIEnv* env))
	// TODO need double check
	$var(Throwable, x, $new(Throwable));
	$var($Array<::java::lang::StackTraceElement>, stacks, x->getOurStackTrace());
	if (stacks != nullptr) {
		for (int32_t i = 0; i < stacks->length; i++) {
			StackTraceElement* ste = $cast<StackTraceElement>(stacks->get(i));
			Class* clazz = nullptr;
			try {
				clazz = Machine::forName0(ste->declaringClass, false, $Thread::currentThread()->contextClassLoader, nullptr);
			} catch (ClassNotFoundException&) {
				$catch();
			}
			if (clazz == nullptr) {
				continue;
			}
			if (clazz == MethodAccessorImpl::class$ || clazz == ConstructorAccessorImpl::class$) {
				continue;
			}
			$var($String, name, clazz->getName());
			ClassLoader* loader = clazz->getClassLoader();
			if (loader != nullptr && loader != ClassLoader::getPlatformClassLoader()) {
				ObjectManager::newLocalRef(loader);
				return (jobject)loader;
			}
		}
	}
	return nullptr;
JVM_END(nullptr)

// Array
static inline void checkArray(jobject arr, bool type_array_only) {
	$nullcheck(arr);
	BaseArray* array = (BaseArray*)arr;
	Class* clazz = $of(array)->getClass();
	if (!clazz->isArray()) {
		$throwNew(IllegalArgumentException, "Argument is not an array"_s);
	} else if (type_array_only) {
		Class* componentType = clazz->componentType$;
		if (!componentType->isPrimitive()) {
			$throwNew(IllegalArgumentException, "Argument is not an array of primitive type"_s);
		}
	}
}

JVM_ENTRY(jint, JVM_GetArrayLength(JNIEnv* env, jobject arr))
	checkArray(arr, false);
	BaseArray* ba = (BaseArray*)arr;
	return (jint)ba->length;
JVM_END(0)

JVM_ENTRY(jobject, JVM_GetArrayElement(JNIEnv* env, jobject arr, jint index))
	checkArray(arr, false);
	BaseArray* ba = (BaseArray*)arr;
	Object* ret = ba->box(index);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JVM_END(nullptr)

jvalue jvaluezero;
JVM_ENTRY(jvalue, JVM_GetPrimitiveArrayElement(JNIEnv* env, jobject arr, jint index, jint wCode))
	checkArray(arr, true);
	BaseArray* ba = (BaseArray*)arr;
	$Value ret = ba->getValue(index);
	jvalue value;
	value.j = ret.u.i64;
	return value;
JVM_END(jvaluezero)

JVM_ENTRY(void, JVM_SetArrayElement(JNIEnv* env, jobject arr, jint index, jobject val))
	checkArray(arr, false);
	BaseArray* ba = (BaseArray*)arr;
	ba->unbox((int32_t)index, val);
JVM_END_VOID

JVM_ENTRY(void, JVM_SetPrimitiveArrayElement(JNIEnv* env, jobject arr, jint index, jvalue v, unsigned char vCode))
	checkArray(arr, true);
	BaseArray* ba = (BaseArray*)arr;
	$Value value((int64_t)v.j);
	ba->setValue((int32_t)index, value);
JVM_END_VOID

JVM_ENTRY(jobject, JVM_NewArray(JNIEnv* env, jclass eltClass, jint length))
	Class* eltClazz = (Class*)eltClass;
	BaseArray* array = ObjectManager::newArray(eltClazz, length);
	ObjectManager::newLocalRef(array);
	return (jobject)array;
JVM_END(nullptr)

JVM_ENTRY(jobject, JVM_NewMultiArray(JNIEnv* env, jclass eltClass, jintArray dim))
	checkArray(dim, true);
	Class* eltClazz = (Class*)eltClass;
	$ints* dimensions = ($ints*)dim;
	BaseArray* array = ObjectManager::newMultiArray(eltClazz, dimensions);
	ObjectManager::newLocalRef(array);
	return (jobject)array;
JVM_END(nullptr)

// Library
JVM_ENTRY(void*, JVM_LoadLibrary(const char* name))
	char ebuf[1024];
	void* ret = OS::loadLibrary(name, ebuf, sizeof(ebuf));
	if (ret == nullptr) {
		char msg[1024];
		jio_snprintf(msg, sizeof(msg), "%s: %s", name, ebuf);
		$throwNew(UnsatisfiedLinkError, $$str(msg));
	}
	return ret;
JVM_END(nullptr)

JVM_LEAF(void, JVM_UnloadLibrary(void* handle))
	OS::unloadLibrary(handle);
JVM_LEAF_END

JVM_LEAF(void*, JVM_FindLibraryEntry(void* handle, const char* name))
	void* entry = Machine::findLibraryEntry(handle, name, false);
	return entry;
JVM_LEAF_END

JVM_LEAF(jboolean, JVM_IsSupportedJNIVersion(jint version))
	return Platform::isSupportedVersion(version) ? JNI_TRUE : JNI_FALSE;
JVM_LEAF_END

// String
JVM_ENTRY(jstring, JVM_InternString(JNIEnv* env, jstring str))
	if (str == nullptr) {
		return nullptr;
	}
	String* s = (String*)str;
	s = s->intern();
	ObjectManager::newLocalRef(s);
	return (jstring)s;
JVM_END(nullptr)

// Raw monitor
JVM_ENTRY(void*, JVM_RawMonitorCreate(void))
	//return new SpinLock();
	Object0* obj = $new<Object0>();
	ObjectManager::newGlobalRef(obj);
	return obj;
JVM_END(nullptr)

JVM_ENTRY(void, JVM_RawMonitorDestroy(void* mon))
	//SpinLock* lock = (SpinLock*)mon;
	//delete lock;
	ObjectManager::deleteGlobalRef(mon);
JVM_END_VOID

JVM_ENTRY(jint, JVM_RawMonitorEnter(void* mon))
	//SpinLock* lock = (SpinLock*)mon;
	//lock->lock();
	Object0* obj = (Object0*)mon;
	$nullcheck(obj)->lock();
	return 0;
JVM_END(0)

JVM_ENTRY(void, JVM_RawMonitorExit(void* mon))
	//SpinLock* lock = (SpinLock*)mon;
	//lock->unlock();
	Object0* obj = (Object0*)mon;
	$nullcheck(obj)->unlock();
JVM_END_VOID

// Method
JVM_ENTRY(jobject, JVM_InvokeMethod(JNIEnv* env, jobject method, jobject obj, jobjectArray args0))
	$Method* m = ($Method*)method;
	$ObjectArray* args = ($ObjectArray*)args0;
	Object* ret = $nullcheck(m)->invoke(obj, args);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JVM_END(nullptr)

JVM_ENTRY(jobject, JVM_NewInstanceFromConstructor(JNIEnv* env, jobject c, jobjectArray args0))
	Constructor* ctor = (Constructor*)c;
	$ObjectArray* args = ($ObjectArray*)args0;
	Object* ret = $nullcheck(ctor)->newInstance(args);
	ObjectManager::newLocalRef(ret);
	return (jobject)ret;
JVM_END(nullptr)

JVM_LEAF(jboolean, JVM_SupportsCX8())
// disable this feature
return false;
JVM_LEAF_END

JVM_ENTRY(void, JVM_InitializeFromArchive(JNIEnv* env, jclass cls))
// disable this feature
JVM_END_VOID

JVM_ENTRY(void, JVM_RegisterLambdaProxyClassForArchiving(JNIEnv* env,
														jclass caller,
														jstring interfaceMethodName,
														jobject factoryType,
														jobject interfaceMethodType,
														jobject implementationMember,
														jobject dynamicMethodType,
														jclass lambdaProxyClass))
	// disable this feature
JVM_END_VOID

JVM_ENTRY(jclass, JVM_LookupLambdaProxyClassFromArchive(JNIEnv* env,
														jclass caller,
														jstring interfaceMethodName,
														jobject factoryType,
														jobject interfaceMethodType,
														jobject implementationMember,
														jobject dynamicMethodType))
	// disable this feature
JVM_END(nullptr)

JVM_ENTRY(jboolean, JVM_IsCDSDumpingEnabled(JNIEnv* env))
	// disable this feature
	return false;
JVM_END(JNI_FALSE)

JVM_ENTRY(jboolean, JVM_IsSharingEnabled(JNIEnv* env))
	// disable this feature
	return false;
JVM_END(JNI_FALSE)

JVM_ENTRY(jlong, JVM_GetRandomSeedForDumping())
	// disable this feature
	return 0;
JVM_END(0)

JVM_ENTRY(jboolean, JVM_IsDumpingClassList(JNIEnv* env))
	// disable this feature
JVM_END(JNI_FALSE)

JVM_ENTRY(void, JVM_LogLambdaFormInvoker(JNIEnv* env, jstring line))
	// disable this feature
JVM_END_VOID

JVM_ENTRY(void, JVM_DumpClassListToFile(JNIEnv* env, jstring listFileName))
	// disable this feature
JVM_END_VOID

JVM_ENTRY(void, JVM_DumpDynamicArchive(JNIEnv* env, jstring archiveName))
	// disable this feature
JVM_END_VOID

JVM_ENTRY(jobjectArray, JVM_GetAllThreads(JNIEnv* env, jclass dummy))
	$var($Array<$Thread>, threads, Platform::JVM_GetAllThreads());
	ObjectManager::newLocalRef(threads);
	return (jobjectArray)threads;
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_DumpThreads(JNIEnv* env, jclass threadClass, jobjectArray threads))
	$var($ObjectArray, oa, Platform::JVM_DumpThreads(($Array<$Thread>*)threads));
	ObjectManager::newLocalRef(oa);
	return (jobjectArray)oa;
JVM_END(nullptr)

JVM_ENTRY(void*, JVM_GetManagement(jint version))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(jobject, JVM_InitAgentProperties(JNIEnv* env, jobject properties))
// disable this feature
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_GetEnclosingMethodInfo(JNIEnv* env, jclass cls))
	Class* clazz = (Class*)cls;
	if ($nullcheck(clazz)->isPrimitive()) {
		return nullptr;
	}
	$var($ObjectArray, oa, clazz->getEnclosingMethod0());
	ObjectManager::newLocalRef(oa);
	return (jobjectArray)oa;
JVM_END(nullptr)

JVM_ENTRY(jobjectArray, JVM_GetVmArguments(JNIEnv* env))
	$var($ObjectArray, oa, $new<$ObjectArray>(0));
	ObjectManager::newLocalRef(oa);
	return (jobjectArray)oa;
JVM_END(nullptr)

JVM_ENTRY(jint, JVM_FindSignal(const char *name))
	return OS::getSignalNumber(name);
JVM_END(0)

extern "C" {
	JNIEXPORT void JNICALL JVM_RegisterJDKInternalMiscScopedMemoryAccessMethods(JNIEnv* env, jclass scopedMemoryAccessClass) {
	}

	JNIEXPORT void JNICALL Java_jdk_internal_misc_ScopedMemoryAccess_registerNatives(JNIEnv* env, jclass scopedMemoryAccessClass) {
		JVM_RegisterJDKInternalMiscScopedMemoryAccessMethods(env, scopedMemoryAccessClass);
	}

	JNIEXPORT void JNICALL Java_jdk_internal_misc_ScopedMemoryAccess_closeScope0(JNIEnv* env, jobject receiver, jobject deopt, jobject exception) {
		// TODO
	}
}