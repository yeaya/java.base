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

#include <java/lang/interpreter/ByteCodeClass.h>

#include <java/lang/Class.h>
#include <java/lang/Machine.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Void.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Class$ReflectionData.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/interpreter/ByteCodeInterpreter.h>
#include <java/lang/RuntimeException.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <jdk/internal/reflect/ConstantBase.h>
#include <jdk/internal/reflect/ConstantClass.h>
#include <jdk/internal/reflect/ConstantDouble.h>
#include <jdk/internal/reflect/ConstantDynamic.h>
#include <jdk/internal/reflect/ConstantFieldRef.h>
#include <jdk/internal/reflect/ConstantFloat.h>
#include <jdk/internal/reflect/ConstantInt.h>
#include <jdk/internal/reflect/ConstantInterfaceMethodRef.h>
#include <jdk/internal/reflect/ConstantInvokeDynamic.h>
#include <jdk/internal/reflect/ConstantLong.h>
#include <jdk/internal/reflect/ConstantMethodHandle.h>
#include <jdk/internal/reflect/ConstantMethodRef.h>
#include <jdk/internal/reflect/ConstantMethodType.h>
#include <jdk/internal/reflect/ConstantModule.h>
#include <jdk/internal/reflect/ConstantNameAndType.h>
#include <jdk/internal/reflect/ConstantPackage.h>
#include <jdk/internal/reflect/ConstantString.h>
#include <jdk/internal/reflect/ConstantUTF8.h>
#include <jdk/internal/misc/Unsafe.h>
#include <java/io/DataInputStream.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>

#include <jcpp.h>
#include <string.h>

#include <java/lang/interpreter/ByteCodeObject.h>
#include <java/lang/Logger.h>

#include "Platform.h"

using namespace ::java::lang;
using namespace ::java::lang::ref;
using namespace ::java::lang::reflect;
using namespace ::java::lang::invoke;
using namespace ::java::io;
using namespace ::java::util;
using namespace ::jdk::internal::reflect;
using namespace ::jdk::internal::misc;

namespace java {
	namespace lang {
		namespace interpreter {

Object* allocate$ByteCodeClass(Class* clazz) {
	ByteCodeClass* bcClass = (ByteCodeClass*)clazz;
	bcClass->ensureClassInitialized();
	Object$* buffer = ObjectManager::alloc(clazz, clazz->size);
	$var(ByteCodeObject, newObj, new(buffer) ByteCodeObject());
	bcClass->assembleVfTab(newObj);
	return $fcast<Object0>(newObj);
}

void initInstance$ByteCodeClass(Constructor* c, Object0* inst, $Value* argv) {
	ByteCodeClass* bcClass = (ByteCodeClass*)c->clazz;
	$var(ByteCodeClassData, byteCodeClassData, bcClass->getByteCodeClassData(false));
	ByteCodeMethod* bcMethod = $fcast<ByteCodeMethod>(byteCodeClassData->byteCodeMethods->get(c->slot));
	$var(ByteCodeInterpreter, interpreter, $new(ByteCodeInterpreter, bcClass));
	interpreter->interpret(bcMethod, inst, nullptr, c->parameterTypes, argv);
}

$Value invokeSpecial$ByteCodeClass(Method* method, Object$* instance, $Value* argv) {
	Object* inst = (Object*)instance;
	// for Throwable base object throw
	if (method == nullptr) {
		if (Throwable::class$->isInstance(instance)) {
			$throw($fcast<Throwable>(instance));
		}
		$throwNew(NullPointerException);
	}
	ByteCodeClass* bcClass = (ByteCodeClass*)method->clazz;
	if (method->isStatic()) {
		bcClass->ensureClassInitialized();
	}
	$var(ByteCodeClassData, byteCodeClassData, bcClass->getByteCodeClassData(false));
	ByteCodeMethod* bcMethod = $fcast<ByteCodeMethod>(byteCodeClassData->byteCodeMethods->get(method->slot));
	$var(ByteCodeInterpreter, interpreter, $new(ByteCodeInterpreter, bcClass));
	return (interpreter->interpret(bcMethod, inst, method->returnType, method->parameterTypes, argv));
	return $of();
}

$Value invoke$ByteCodeClass(Method* method, Object$* instance, $Value* argv) {
	ByteCodeClass* bcClass = (ByteCodeClass*)method->clazz;
	if (method->isStatic()) {
		bcClass->ensureClassInitialized();
	}
	Object* inst = (Object*)instance;

	// TODO
	if (inst != nullptr) {
		Object0* obj0 = $toObject0(inst);
		Class* clazz = obj0->getClass();
		if (bcClass != clazz) {
			$var(String, name, method->getName());
			$Array<Class>* parameterTypes = method->getSharedParameterTypes();
			$var(Method, method0, clazz->getMethodEx(name, parameterTypes));
			if (method0 != nullptr && method0->clazz != bcClass) {
				return method0->invokev(obj0, argv);
			}
		}
	}
	$var(ByteCodeClassData, byteCodeClassData, bcClass->getByteCodeClassData(false));
	ByteCodeMethod* bcMethod = $fcast<ByteCodeMethod>(byteCodeClassData->byteCodeMethods->get(method->slot));
	$var(ByteCodeInterpreter, interpreter, $new(ByteCodeInterpreter, bcClass));
	return (interpreter->interpret(bcMethod, inst, method->returnType, method->parameterTypes, argv));
}

int32_t calcCategory0(Class* type) {
	if (type == nullptr) {
		return 0;
	}
	if (type->isArray()) {
		return 1;
	}
	if (type == Void::TYPE) {
		return 0;
	}
	if (!type->isPrimitive()) {
		return 1;
	}
	if (type == Long::TYPE || type == Double::TYPE) {
		return 2;
	}
	return 1;
}

bool MethodCache::hasThisArg() {
	bool ret = false;
	if (method->getClass() == Method::class$) {
		if (!$fcast<Method>(method)->isStatic()) {
			ret = true;
		}
	} else if (method->getClass() == Constructor::class$) {
		ret = true;
	} else {
		ByteCodeMethod* byteCodeMethod = $fcast<ByteCodeMethod>(method);
		if (!byteCodeMethod->isStatic()) {
			ret = true;
		}
	}
	return ret;
}

void MethodCache::init() {
	realReturnCategory = calcCategory0(realReturnType);
	if (hasThisArg()) {
		stackSlotsForArgs += 1;
	}
	if (argsTypes != nullptr) {
		for (int32_t i = 0; i < argsTypes->length; i++) {
			Class* argType = (Class*)argsTypes->get(i);
			stackSlotsForArgs += calcCategory0(argType);
		}
	}
}

FieldInfo _ByteCodeClass_FieldInfo_[] = {
	{"classInfoStore", "Ljava/util/ArrayList;", nullptr, 2, $field(ByteCodeClass, classInfoStore)},
	{"vfptrs", "[Ljava/lang/Object;", nullptr, 2, $field(ByteCodeClass, vfptrs)},
	{"byteCodeClassData", "Ljava/lang/ref/SoftReference;", nullptr, 2, $field(ByteCodeClass, byteCodeClassData)},
	{"staticFieldBuffer", "[B", nullptr, 2, $field(ByteCodeClass, staticFieldBuffer)},
	{"bytes", "[B", nullptr, 2, $field(ByteCodeClass, bytes)},
	{}
};

ClassInfo _ByteCodeClass_ClassInfo_ = {
	$PUBLIC,
	"java.lang.interpreter.ByteCodeClass",
	"java.lang.Class",
	nullptr,
	_ByteCodeClass_FieldInfo_
};

int32_t ByteCodeClass::lastClassIndex = 0;

Class* ByteCodeClass::class$ = nullptr;
Class* ByteCodeClass::load$(String* name, bool initialize) {
	int32_t mark = $getMark(ByteCodeClass);
	// TODO merge real class mark, calc size
	Class::loadClass(name, initialize, &class$, sizeof(ByteCodeClass), mark, &_ByteCodeClass_ClassInfo_, nullptr, nullptr, nullptr, nullptr, nullptr);
	return class$;
}

ByteCodeClass::ByteCodeClass()
	: Class() {
	classIndex = lastClassIndex++;
}

void ByteCodeClass::init$() {
	Class::init$(nullptr, nullptr);
	byteCodeClass = true;
	memset(&this->classInfo0, 0, sizeof(classInfo0));
	$set(this, classInfoStore, $new(ArrayList));
}

const char* ByteCodeClassData::makeCharPtrForClassInfo(String* str) {
	if (str != nullptr) {
		$var($bytes, ba, str->utf8Bytes());
		this->classInfoStore->add(ba);
		return (const char*)ba->begin();
	} else {
		return nullptr;
	}
}

FieldInfo* ByteCodeClassData::makeFieldInfosForClassInfo(int32_t count) {
	$var($bytes, ba, $new($bytes, sizeof(FieldInfo) * (count + 1)));
	this->classInfoStore->add(ba);
	return (FieldInfo*)ba->begin();
}

MethodInfo* ByteCodeClassData::makeMethodInfosForClassInfo(int32_t count) {
	$var($bytes, ba, $new($bytes, sizeof(MethodInfo) * (count + 1)));
	this->classInfoStore->add(ba);
	return (MethodInfo*)ba->begin();
}

InnerClassInfo* ByteCodeClassData::makeInnerClassInfosForClassInfo(int32_t count) {
	$var($bytes, ba, $new($bytes, sizeof(InnerClassInfo) * (count + 1)));
	this->classInfoStore->add(ba);
	return (InnerClassInfo*)ba->begin();
}

EnclosingMethodInfo* ByteCodeClassData::makeEnclosingMethodInfoForClassInfo() {
	$var($bytes, ba, $new($bytes, sizeof(EnclosingMethodInfo)));
	this->classInfoStore->add(ba);
	return (EnclosingMethodInfo*)ba->begin();
}

CompoundAttribute* ByteCodeClassData::makeCompoundAttributesForClassInfo(int32_t count) {
	$var($bytes, ba, $new($bytes, sizeof(CompoundAttribute) * (count + 1)));
	this->classInfoStore->add(ba);
	return (CompoundAttribute*)ba->begin();
}

CompoundAttribute* ByteCodeClassData::makeCompoundAttributeForClassInfo() {
	$var($bytes, ba, $new($bytes, sizeof(CompoundAttribute)));
	this->classInfoStore->add(ba);
	return (CompoundAttribute*)ba->begin();
}

TypeAnnotation* ByteCodeClassData::makeAnnotationsForClassInfo(int32_t count) {
	$var($bytes, ba, $new($bytes, sizeof(TypeAnnotation) * (count + 1)));
	this->classInfoStore->add(ba);
	return (TypeAnnotation*)ba->begin();
}

NamedAttribute* ByteCodeClassData::makeNamedAttributesForClassInfo(int32_t count) {
	$var($bytes, ba, $new($bytes, sizeof(NamedAttribute) * (count + 1)));
	this->classInfoStore->add(ba);
	return (NamedAttribute*)ba->begin();
}

Attribute* ByteCodeClassData::makeAttributesForClassInfo(int32_t count) {
	$var($bytes, ba, $new($bytes, sizeof(Attribute) * (count + 1)));
	this->classInfoStore->add(ba);
	return (Attribute*)ba->begin();
}

void ByteCodeClass::init(String* name, ClassLoader* loader) {
	$set(this, classLoader, loader);
	this->allocateInstanceFunction = allocate$ByteCodeClass;
	this->initInstanceFunction = initInstance$ByteCodeClass;
	this->invokeSpecialFunction = invokeSpecial$ByteCodeClass;
	this->invokeFunction = invoke$ByteCodeClass;
	$var(ByteCodeClassData, byteCodeClassData, getByteCodeClassData(true));
	this->classInfo = &classInfo0;
	if (name != nullptr) {
		$var(String, newName, name->replace('/', '.'));
		if (!newName->equals(classInfo0.name)) {
			classInfo0.name = byteCodeClassData->makeCharPtrForClassInfo(newName);
		}
		$set(this, name, newName);
	}
	byteCodeClassData->classInfoStore = nullptr;
	if (classInfo != nullptr) {
	//	if (staticObjectFieldCount > 0) {
		//	$set(this, staticObjectFieldOffsets, LongArray::create(staticObjectFieldCount));
	//	}
		int32_t staticFieldCount = 0;
		int32_t fieldCount = 0;
		FieldInfo* field = classInfo->fields;
		for (; field != nullptr; field++) {
			if (field->name == nullptr) {
				break;
			}
			fieldCount++;
			if ((field->modifiers & Modifier::STATIC) != 0) {
				staticFieldCount++;
			}
		}
		int32_t staticFieldBufferSize = staticFieldCount * 8;
		$set(this, staticFieldBuffer, $new($bytes, staticFieldBufferSize));
		int64_t staticFieldBase = (int64_t)staticFieldBuffer->begin();
		int32_t staticFieldIndex = 0;
	//	int32_t staticObjectFieldIndex = 0;
		field = classInfo->fields;
		for (int i = 0; i < fieldCount; ++i, field++, staticFieldIndex++) {
			if ((field->modifiers & Modifier::STATIC) != 0) {
				field->offset = staticFieldBase + staticFieldIndex * 8; // 8 : max size for int64_t or double or OBJECT*
			//	if (Machine::getPrimitiveClass($cstr(field->descriptor)) == nullptr) {
		//			staticObjectFieldOffsets->set(staticObjectFieldIndex, field->offset);
			//	}
			}
		}
	}
	//byteCodeClassData->classInfo = nullptr;
	//calcSizeOfAndFieldOffset();
	//initVfTab();
}

Class* ByteCodeClass::loadClass(String* name) {
	$var(String, name0, name->replace('/', '.'));
	if (name0->equals(this->name)) {
		return this;
	}
	return Class::forName0(name0, true, nullptr, nullptr);
}

ByteCodeClassData* ByteCodeClass::getByteCodeClassData(bool genClassInfo) {
	$var(ByteCodeClassData, bccd, nullptr);
	$synchronized(this) {
		if (byteCodeClassData != nullptr) {
			$assign(bccd, $fcast<ByteCodeClassData>(byteCodeClassData->get()));		
		}
		if (bccd == nullptr) {
			$assign(bccd, $new(ByteCodeClassData));
			$set(this, byteCodeClassData, $new(SoftReference, bccd));
			if (genClassInfo) {
				bccd->classInfoStore = classInfoStore;
				bccd->parse(this, bytes, &classInfo0);
			} else {
				bccd->parse(this, bytes, nullptr);
			}
		}
	}
	return bccd;
}

MethodCache* ByteCodeClass::findMethodCache(int32_t methodIndex) {
	$var(Integer, key, Integer::valueOf(methodIndex));
	$var(HashMap, methodCacheMap, nullptr);
	$var(MethodCache, methodCache, nullptr);
	$var(ByteCodeClassData, byteCodeClassData, getByteCodeClassData(false));
	$synchronized(this) {
		//if (methodCaches != nullptr) {
		//	$assign(methodCacheMap, $fcast<HashMap>($loadVolatile(methodCaches)->get()));		
	//	}
		if (byteCodeClassData->methodCacheMap == nullptr) {
			$set(byteCodeClassData, methodCacheMap, $new(HashMap));
		//	$set(this, methodCaches, $new(SoftReference, methodCacheMap));
		}
		$assign(methodCacheMap, byteCodeClassData->methodCacheMap);

	//	if (fieldAndMethodCache == nullptr) {
	//		$set(this, fieldAndMethodCache, $new(HashMap));
	//	}
		$assign(methodCache, $fcast<MethodCache>(methodCacheMap->get(key)));
		if (methodCache == nullptr) {
			String* className = nullptr;
			String* methodName = nullptr;
			String* descriptor = nullptr;
			$var(::jdk::internal::reflect::ConstantPool, constantPool, getConstantPool());
			ConstantBase* base = constantPool->getBase(methodIndex);
			if (base->tagCode == ConstantBase::Tag_MethodRef) {
				ConstantMethodRef* constantMethodRef = (ConstantMethodRef*)base;
				className = constantMethodRef->clazz;
				methodName = constantMethodRef->name;
				descriptor = constantMethodRef->descriptor;
			} else if (base->tagCode == ConstantBase::Tag_InterfaceMethodRef) {
				ConstantInterfaceMethodRef* constantInterfaceMethodRef = (ConstantInterfaceMethodRef*)base;
				className = constantInterfaceMethodRef->clazz;
				methodName = constantInterfaceMethodRef->name;
				descriptor = constantInterfaceMethodRef->descriptor;
			} else {
				$throwNew(RuntimeException, $ref(String::valueOf({ "Invalid method index: "_s, $$str(methodIndex) })));
			}
			$var(String, name, getName());
			if (name->equals($ref(className->replace('/', '.')))) {
				$var(ByteCodeClassData, byteCodeClassData, getByteCodeClassData(false));
				for (int32_t i = 0; i < byteCodeClassData->byteCodeMethods->size(); i++) {
					ByteCodeMethod* byteCodeMethod = $fcast<ByteCodeMethod>(byteCodeClassData->byteCodeMethods->get(i));
					if (byteCodeMethod->name->equals(methodName) && byteCodeMethod->descriptor->equals(descriptor)) {
						$assign(methodCache, $new(MethodCache));
						$set(methodCache, method, byteCodeMethod);
						methodCacheMap->put(key, methodCache);
						break;
					}
				}
			}
			if (methodCache == nullptr) {
				$var(Class, clazz0, loadClass(className));
				if (methodName->equals("<init>")) {
					$var(Constructor, constructor, clazz0->getDeclaredConstructor(descriptor));
					if (!constructor->override$) {
						constructor->override$ = true;
					}
					$assign(methodCache, $new(MethodCache));
					$set(methodCache, method, constructor);
					methodCacheMap->put(key, methodCache);

					//fieldAndMethodCache->set(methodIndex, constructor);
					//obj = $fcast<Object>(constructor);
				} else {
					$var(Method, method0, clazz0->getMethodEx(methodName, descriptor));
					if (!method0->override$) {
						method0->override$ = true;
					}
					$assign(methodCache, $new(MethodCache));
					$set(methodCache, method, method0);
					methodCacheMap->put(key, methodCache);

		/*			fieldAndMethodCache->set(methodIndex, method0);
					obj = $fcast<Object>(method0);*/
				}
			}

			// init methodcache
			if (methodCache != nullptr) {
		//		$set(methodCache, realDescriptor, descriptor);
				$var(ArrayList, list, this->parseMethodDescriptor(descriptor));
				$set(methodCache, argsTypes, $new($ClassArray, list->size() - 1));
				for (int32_t i = 0; i < list->size() - 1; i++) {
					$var(String, type, $fcast<String>(list->get(i)));
					$var(Class, clazz, loadClass(type));
					methodCache->argsTypes->set(i, clazz);
				}
				$var(String, returnType, $fcast<String>(list->get(list->size() - 1)));
				$set(methodCache, realReturnType, loadClass(returnType));
				methodCache->init();
			} else {
				$throwNew(NoSuchMethodException, $ref(String::valueOf({ name, ":"_s, $$str(methodIndex) })));
			}
		}
	}

	return methodCache;
}

ByteCodeMethod* ByteCodeClass::findByteCodeMethod($String* name, $String* descriptor) {
	$var(ByteCodeClassData, byteCodeClassData, getByteCodeClassData(false));
	for (int32_t i = 0; i < byteCodeClassData->byteCodeMethods->size(); i++) {
		$var(ByteCodeMethod, byteCodeMethod, $fcast<ByteCodeMethod>(byteCodeClassData->byteCodeMethods->get(i)));
		if (byteCodeMethod->name->equals(name) && byteCodeMethod->descriptor->equals(descriptor)) {
			return byteCodeMethod;
		}
	}
	return nullptr;
}

void ByteCodeClass::ensureClassInitialized() {
	if (!inited) {
		inited = true;
		initialize();
		$var(ByteCodeClassData, byteCodeClassData, getByteCodeClassData(false));
		if (byteCodeClassData->clinitIndex >= 0) {
			$var(ByteCodeMethod, bcMethod, $fcast<ByteCodeMethod>(byteCodeClassData->byteCodeMethods->get(byteCodeClassData->clinitIndex)));
			$var(ByteCodeInterpreter, interpreter, $new(ByteCodeInterpreter, this));
			interpreter->interpret(bcMethod, nullptr, nullptr, nullptr, nullptr);
		}
	}
}

::jdk::internal::reflect::ConstantPool* ByteCodeClass::getConstantPool0() {
	$var(ByteCodeClassData, byteCodeClassData, getByteCodeClassData(false));
	classInfo->visit(byteCodeClassData->constantPool);
	return byteCodeClassData->constantPool;
}

bool VfptrInfo::methodEquals(Method* m0, Method* m1) {
	if (m0->name->equals(m1->name)// && m0->returnType == m1->returnType
			&& m0->parameterTypes->length == m1->parameterTypes->length) {
		for (int32_t i = 0; i < m0->parameterTypes->length; i++) {
			if (m0->parameterTypes->get(i) != m1->parameterTypes->get(i)) {
				return false;
			}
		}
		return true;
	}
	return false;
}

void ByteCodeClass::initMethods() {
}

void VfptrInfo::init() {
	ByteCodeObject::initVfptrInfo(this);
}

void ByteCodeClass::initVfTab() {
	$var($ClassArray, classes, this->getPrimaryBaseClasses());
	$set(this, vfptrs, $new($ObjectArray, classes->length));
	for (int32_t i = 0; i < classes->length; i++) {
		$var(Class, clazz, classes->get(i));
		$var(VfptrInfo, vfptrInfo, $new(VfptrInfo));
		vfptrs->set(i, vfptrInfo);
		
		$set(vfptrInfo, clazz, this);
		int32_t offset = this->getBaseClassOffset(clazz);
		vfptrInfo->offset = offset;
		if (offset == 0) {
			$set(vfptrInfo, forwardMethods, Platform::getVirtualMethods(this));
		} else {
			$set(vfptrInfo, forwardMethods, Platform::getBaseClassVirtualMethods(this, clazz));
		}
		//$set(vfptrInfo, forwardMethodOffsets, IntArray::create(vfptrInfo->forwardMethods->length));
		vfptrInfo->init();
	}
}

void ByteCodeClass::assembleVfTab(Object* obj) {
	if (vfptrs == nullptr) {
		$synchronized(this) {
			if (vfptrs == nullptr) {
				initVfTab();
			}
		}
	}
	for (int32_t i = 0; i < vfptrs->length; i++) {
		VfptrInfo* vfptrInfo = (VfptrInfo*)vfptrs->get(i);
		Platform::assembleVfTab(obj, vfptrInfo->offset, vfptrInfo->vfTableData);
		/*
		int32_t offset = vfptrInfo->offset;
		int8_t* addr = (int8_t*)obj;
		addr += offset;
		void** pVtab = (void**)(addr);
	//	int64_t* vtab = vfptrInfo->vfTab->begin() + 1; // index 0: is pointer of vfptrInfo
		void** vtab = Platform::getVirtualFunctionTable(vfptrInfo->vfTableData);
		*pVtab = vtab;
		*/
	}
}

String* makeArrayType(String* type, int32_t arrayDim) {
	if (arrayDim > 0) {
		$var(String, dimStr, "["_s);
		$assign(dimStr, dimStr->repeat(arrayDim));
		return dimStr->concat(type);
	}
	return type;
}

String* makePrimitiveType(char16_t c, const char* primitiveType, int32_t arrayDim) {
	if (arrayDim > 0) {
		$var(String, type, String::valueOf(c));
		return makeArrayType(type, arrayDim);
	} else {
		return String::valueOf(primitiveType);
	}
}

ArrayList* ByteCodeClass::parseMethodDescriptor(String* descriptor) {
	int32_t index = 0;
	$var(ArrayList, result, $new(ArrayList));
	if (descriptor->charAt(0) != '(') {
	}
	index++;
	int32_t arrayDimensions = 0;
	while (index < descriptor->length()) {
		char16_t c = descriptor->charAt(index);
		switch (c) {
		case '[': {
			arrayDimensions++;
			index++;
			continue;
		}
		case 'L': {
			++index; // skip 'L'
			int32_t begin = descriptor->indexOf(';', index);
			if (begin > 0) {
				$var(String, type, descriptor->substring(index, begin));
				$assign(type, makeArrayType(type, arrayDimensions));
				arrayDimensions = 0;
				$assign(type, type->replace('/', '.'));
				result->add(type);
				index = begin + 1;
			} else {
				// todo
			}
			continue;
		}
		case 'D': {
			++index;
			$var(String, type, makePrimitiveType(c, "double", arrayDimensions));
			arrayDimensions = 0;
			result->add(type);
			continue;
		}
		case 'J': {
			++index;
			$var(String, type, makePrimitiveType(c, "long", arrayDimensions));
			arrayDimensions = 0;
			result->add(type);
			continue;
		}
		case 'B': {
			++index;
			$var(String, type, makePrimitiveType(c, "byte", arrayDimensions));
			arrayDimensions = 0;
			result->add(type);
			continue;
		}
		case 'C': {
			++index;
			$var(String, type, makePrimitiveType(c, "char", arrayDimensions));
			arrayDimensions = 0;
			result->add(type);
			continue;
		}
		case 'F': {
			++index;
			$var(String, type, makePrimitiveType(c, "float", arrayDimensions));
			arrayDimensions = 0;
			result->add(type);
			continue;
		}
		case 'I': {
			++index;
			$var(String, type, makePrimitiveType(c, "int", arrayDimensions));
			arrayDimensions = 0;
			result->add(type);
			continue;
		}
		case 'S': {
			++index;
			$var(String, type, makePrimitiveType(c, "short", arrayDimensions));
			arrayDimensions = 0;
			result->add(type);
			continue;
		}
		case 'Z': {
			++index;
			$var(String, type, makePrimitiveType(c, "boolean", arrayDimensions));
			arrayDimensions = 0;
			result->add(type);
			continue;
		}
		case 'V': {
			++index;
			$var(String, type, makePrimitiveType(c, "void", arrayDimensions));
			arrayDimensions = 0;
			result->add(type);
			continue;
		}
		case ')': {
			++index;
			continue;
		}
		case '\0': {
			$throwNew(RuntimeException, "Unexpected end of descriptor"_s);
		}
		default: {
			$throwNew(RuntimeException, "Unexpected character"_s);
		}
		}
	}
	return result;
}

void ByteCodeClassData::parseFieldAttributes(DataInputStream* is, FieldInfo* fieldInfo) {
	int16_t attributesCount = is->readShort();
	for (int16_t attributeIndex = 0; attributeIndex < attributesCount; ++attributeIndex) {
		uint16_t nameIndex = is->readShort();
		int32_t attributeLength = is->readInt();
		$var(String, s, nullptr);
		if (nameIndex > 0) {
			$assign(s, constantPool->getUTF8(nameIndex));
		}

		if ($nc(s)->equals("ConstantValue")) {
			// TODO: sometimes this info must be silently ignored
			if (attributeLength != 2) {
				$throwNew(RuntimeException, $$concat("ConstantValue length must be 2, not ", $$str(attributeLength)));
			}
			uint16_t constantvalueIndex = is->readShort();
			int8_t tag = constantPool->getTag(constantvalueIndex);

		//	check_cp_range(attribute->constantvalueIndex, table.size());
			//auto const &variant = table[attribute->constantvalueIndex];
			//if (variant->type == CONSTANT_Integer_info_type
			//	|| variant->type == CONSTANT_Float_info_type
			//	|| variant->type == CONSTANT_Long_info_type
			//	|| variant->type == CONSTANT_Double_info_type
			//	|| variant->type == CONSTANT_String_info_type) {
			//}
			//else {
			//	throw ParseError("Unexpected type for constant pool entry of ConstantValue");
			//}
			//info = attribute;
		} else if (s->equals("StackMapTable")) {
			for (int32_t i = 0; i < attributeLength; ++i) {
				is->readByte();
			}
		} else if (s->equals("Signature")) {
			int16_t utf8Index = is->readShort();
			if (fieldInfo != nullptr && utf8Index > 0) {
				$var(String, signature, constantPool->getUTF8(utf8Index));
				fieldInfo->signature = this->makeCharPtrForClassInfo(signature);
			}
		} else if (s->equals("Deprecated")) {
//			info = new Deprecated_attribute;
		} else if (s->equals("RuntimeVisibleAnnotations")) {
			int16_t num_annotations = is->readShort();
			CompoundAttribute* annotation = nullptr;
			if (fieldInfo != nullptr) {
				fieldInfo->annotations = this->makeCompoundAttributesForClassInfo(num_annotations);
				annotation = fieldInfo->annotations;
			}
			for (int32_t i = 0; i < num_annotations; i++) {
				parseCompoundAttribute(is, annotation);
				if (annotation != nullptr) {
					annotation++;
				}
			}
		} else {
			for (int32_t i = 0; i < attributeLength; ++i) {
				is->readByte();
			}
		}
	}
}

void ByteCodeClassData::parseMethodAttributes(DataInputStream* is, MethodInfo* methodInfo, ByteCodeMethod* byteCodeMethod) {
	uint16_t attributesCount = is->readShort();
	for (int32_t attributeIndex = 0; attributeIndex < attributesCount; ++attributeIndex) {
		uint16_t nameIndex = is->readShort();
		int32_t attributeLength = is->readInt();
		$var(String, s, constantPool->getUTF8(nameIndex));
		if (s->equals("Code")) {
			byteCodeMethod->maxStack = is->readShort();
			byteCodeMethod->maxLocals = is->readShort();
			uint32_t codeLength = is->readInt();
			$set(byteCodeMethod, code, is->readNBytes(codeLength));
			uint16_t exceptionTableLength = is->readShort();
			byteCodeMethod->exceptionTable.reserve(exceptionTableLength);
			for (int i = 0; i < exceptionTableLength; ++i) {
				ExceptionTableEntry entry{};
				entry.startPc = is->readShort();
				entry.endPc = is->readShort();
				entry.handlerPc = is->readShort();
				entry.catchType = is->readShort();
				byteCodeMethod->exceptionTable.push_back(entry);
			}
			this->parseMethodCodeAttributes(is, methodInfo, byteCodeMethod);
		} else if (s->equals("StackMapTable")) {
			for (int32_t i = 0; i < attributeLength; ++i) {
				is->readByte();
			}
		//}
		// TODO
		//else if (s->equals("Exceptions")) {
		//	Exceptions_attribute* attribute = new Exceptions_attribute;
		//	u2 number_of_exceptions = is->readShort();
		//	attribute->exception_index_table.reserve(number_of_exceptions);
		//	for (int32_t i = 0; i < number_of_exceptions; ++i) {
		//		attribute->exception_index_table.push_back(
		//			(CONSTANT_Class_info*)check_cp_range_and_type(is->readShort(),
		//				CONSTANT_Class_info_type));
		//	}
		//	info = attribute;
		} else if (s->equals("Signature")) {
			int16_t utf8Index = is->readShort();
			if (methodInfo != nullptr && utf8Index > 0) {
				$var(String, signature, constantPool->getUTF8(utf8Index));
				methodInfo->signature = this->makeCharPtrForClassInfo(signature);
			}
		} else if (s->equals("Deprecated")) {
//			info = new Deprecated_attribute;
		//} else if (s->equals("MethodParameters")) {
		//	MethodParameters_attribute* attribute = new MethodParameters_attribute;
		//	u1 parameters_count = is->readByte();// 
		//	attribute->parameters.reserve(parameters_count);
		//	for (int32_t i = 0; i < parameters_count; ++i) {
		//		MethodParameter parameter{};
		//		parameter.name_index = is->readShort(); //
		//		parameter.access_flags = is->readShort();
		//		attribute->parameters.push_back(parameter);
		//	}
		////	info = attribute;
		} else if (s->equals("RuntimeVisibleAnnotations")) {
			int16_t num_annotations = is->readShort();
			CompoundAttribute* annotation = nullptr;
			if (methodInfo != nullptr) {
				methodInfo->annotations = this->makeCompoundAttributesForClassInfo(num_annotations);
				annotation = methodInfo->annotations;
			}
			for (int32_t i = 0; i < num_annotations; i++) {
				parseCompoundAttribute(is, annotation);
				if (annotation != nullptr) {
					annotation++;
				}
			}
		} else {
			for (int32_t i = 0; i < attributeLength; ++i) {
				is->readByte();
			}
			continue;
		}
	}
}

void ByteCodeClassData::parseMethodCodeAttributes(DataInputStream* is, MethodInfo* methodInfo, ByteCodeMethod* byteCodeMethod) {
	uint16_t attributesCount = is->readShort();
	for (int32_t attributeIndex = 0; attributeIndex < attributesCount; ++attributeIndex) {
		uint16_t nameIndex = is->readShort();
		int32_t attributeLength = is->readInt();
		$var(String, s, constantPool->getUTF8(nameIndex));
		if (s->equals("StackMapTable")) {
			for (int32_t i = 0; i < attributeLength; ++i) {
				is->readByte();
			}
		} else if (s->equals("LineNumberTable")) {
			uint16_t lineNumberTableLength = is->readShort();
			for (int32_t i = 0; i < lineNumberTableLength; ++i) {
				LineNumberTableEntry entry{};
				entry.startPc = is->readShort();
				entry.lineNumber = is->readShort();
				byteCodeMethod->lineNumberTable.push_back(entry);
			}
		} else if (s->equals("AnnotationDefault")) {
			Attribute attr(0, nullptr);
			this->parseAttribute(is, &attr);
			continue;
		} else {
			for (int32_t i = 0; i < attributeLength; ++i) {
				is->readByte();
			}
			continue;
		}
	}
}

void ByteCodeClassData::parseClassAttributes(DataInputStream* is, ClassInfo* classInfo) {
	uint16_t attributesCount = is->readShort();
	for (int32_t attributeIndex = 0; attributeIndex < attributesCount; ++attributeIndex) {
		uint16_t nameIndex = is->readShort();
		int32_t attributeLength = is->readInt();
		$var(String, s, constantPool->getUTF8(nameIndex));
		if (s->equals("Signature")) {
			uint16_t utf8Index = is->readShort();
			if (classInfo != nullptr && utf8Index > 0) {
				$var(String, signature, constantPool->getUTF8(utf8Index));
				classInfo->signature = this->makeCharPtrForClassInfo(signature);
			}
		} else if (s->equals("SourceFile")) {
			uint16_t utf8Index = is->readShort();
			$var(String, sourceFile, constantPool->getUTF8(utf8Index));
			if (sourceFile != nullptr) {
				$set(this, sourceFile, sourceFile);
			}
		} else if (s->equals("BootstrapMethods")) {
			uint16_t numBootstrapMethods = is->readShort();
			$set(this, bootstrapMethods, $new($Array<BootstrapMethod>, numBootstrapMethods));
			for (int32_t i = 0; i < numBootstrapMethods; ++i) {
				$var(BootstrapMethod, bootstrapMethod, $new(BootstrapMethod));
				bootstrapMethods->set(i, bootstrapMethod);
				int16_t bootstrap_method_ref = is->readShort();
				ConstantMethodHandle* methodHandle = constantPool->getMethodHandle(bootstrap_method_ref);
				$set(bootstrapMethod, methodHandle, methodHandle);
				int16_t numBootstrapArguments = is->readShort();
				$set(bootstrapMethod, bootstrapArguments, $new($Array<Object>, numBootstrapArguments));
				for (int32_t j = 0; j < numBootstrapArguments; ++j) {
					int16_t bootstrapArgument = is->readShort();
					ConstantBase* arg = constantPool->getBase(bootstrapArgument);
					if (arg != nullptr) {
						// TODO process bootstrap argument
					}
					bootstrapMethod->bootstrapArguments->set(j, arg);
				}
			}
		} else if (s->equals("ModuleMainClass")) {
			this->mainClassIndex = is->readShort();
		} else if (s->equals("InnerClasses")) {
			uint16_t number_of_classes = is->readShort();
			InnerClassInfo* innerClass = nullptr;
			if (classInfo != nullptr) {
				classInfo->innerClasses = this->makeInnerClassInfosForClassInfo(number_of_classes);
				innerClass = classInfo->innerClasses;
			}
			for (int32_t i = 0; i < number_of_classes; ++i) {
				uint16_t innerClassInfoIndex = is->readShort();
				uint16_t outerClassInfoIndex = is->readShort();
				uint16_t innerNameIndex = is->readShort();
				uint16_t innerClassAccessFlags = is->readShort();
				if (innerClass != nullptr) {
					$var(ConstantClass, innerConstClass, nullptr);
					if (innerClassInfoIndex > 0) {
						$assign(innerConstClass, constantPool->getClass(innerClassInfoIndex));
					}
					if (innerConstClass != nullptr) {
						innerClass->innerClass = this->makeCharPtrForClassInfo($ref(innerConstClass->utf8->replace('/', '.')));
					} else {
						innerClass->innerClass = nullptr;
					}
					$var(ConstantClass, outerConstClass, nullptr);
					if (outerClassInfoIndex > 0) {
						$assign(outerConstClass, constantPool->getClass(outerClassInfoIndex));
					}
					if (outerConstClass != nullptr) {
						innerClass->outerClass = this->makeCharPtrForClassInfo($ref(outerConstClass->utf8->replace('/', '.')));
					} else {
						innerClass->outerClass = nullptr;
					}

					$var(String, innerName, nullptr);
					if (innerNameIndex > 0) {
						$assign(innerName, constantPool->getUTF8(innerNameIndex));
					}
					if (innerName != nullptr) {
						innerClass->innerName = this->makeCharPtrForClassInfo(innerName);
					} else {
						innerClass->innerName = nullptr;
					}

					innerClass->innerClassAccessFlags = innerClassAccessFlags;
					innerClass++;
				}
			}
		} else if (s->equals("EnclosingMethod")) {
			uint16_t classIndex = is->readShort();
			uint16_t methodIndex = is->readShort();
			if (classInfo != nullptr) {
				$var(ConstantClass, constClass, nullptr);
				if (classIndex > 0) {
					$assign(constClass, constantPool->getClass(classIndex));
				}
				$var(ConstantNameAndType, constNameAndType, nullptr);
				if (methodIndex > 0) {
					$assign(constNameAndType, constantPool->getNameAndType(methodIndex));
				}
				classInfo->enclosingMethod = this->makeEnclosingMethodInfoForClassInfo();
				if (constClass != nullptr) {
					classInfo->enclosingMethod->enclClass = this->makeCharPtrForClassInfo($ref(constClass->utf8->replace('/', '.')));
				} else {
					classInfo->enclosingMethod->enclClass = nullptr;
				}
				if (constNameAndType != nullptr) {
					classInfo->enclosingMethod->name = this->makeCharPtrForClassInfo(constNameAndType->name);
					classInfo->enclosingMethod->descriptor = this->makeCharPtrForClassInfo(constNameAndType->descriptor);
				} else {
					classInfo->enclosingMethod->name = nullptr;
					classInfo->enclosingMethod->descriptor = nullptr;
				}
			}
		} else if (s->equals("RuntimeVisibleAnnotations")) {
			uint16_t numAnnotations = is->readShort();
			CompoundAttribute* annotation = nullptr;
			if (classInfo != nullptr) {
				classInfo->annotations = this->makeCompoundAttributesForClassInfo(numAnnotations);
				annotation = classInfo->annotations;
			}
			for (int32_t i = 0; i < numAnnotations; i++) {
				parseCompoundAttribute(is, annotation);
				if (annotation != nullptr) {
					annotation++;
				}
			}
		} else if (s->equals("NestMembers")) {
			for (int32_t i = 0; i < attributeLength; ++i) {
				is->readByte();
			}
		} else if (s->equals("NestHost")) {
			for (int32_t i = 0; i < attributeLength; ++i) {
				is->readByte();
			}
		} else {
			for (int32_t i = 0; i < attributeLength; ++i) {
				is->readByte();
			}
			continue;
		}
	}
}

void ByteCodeClassData::parseCompoundAttribute(::java::io::DataInputStream* is, CompoundAttribute* compoundAttribute) {
	int16_t descriptorIndex = is->readShort();
	int16_t num = is->readShort();
	NamedAttribute* namedAttribute = nullptr;
	if (compoundAttribute != nullptr) {
		if (descriptorIndex > 0) {
			compoundAttribute->descriptor = this->makeCharPtrForClassInfo($ref(constantPool->getUTF8(descriptorIndex)));
		}
		compoundAttribute->attributes = this->makeNamedAttributesForClassInfo(num);
		namedAttribute = compoundAttribute->attributes;
	}
	for (int16_t i = 0; i < num; i++) {
		parseNamedAttribute(is, namedAttribute);
		if (namedAttribute != nullptr) {
			namedAttribute++;
		}
	}
}

void ByteCodeClassData::parseNamedAttribute(::java::io::DataInputStream* is, NamedAttribute* namedAttribute) {
	int16_t nameIndex = is->readShort();
	if (namedAttribute != nullptr) {
		if (nameIndex > 0) {
			namedAttribute->name = this->makeCharPtrForClassInfo($ref(constantPool->getUTF8(nameIndex)));
		}
	}
	parseAttribute(is, namedAttribute);
}

void ByteCodeClassData::parseAttribute(::java::io::DataInputStream* is, Attribute* attribute) {
	int8_t tag = is->readByte();
	if (attribute != nullptr) {
		attribute->typeTag = tag;
	}
	switch (tag) {
	case 's': {
		int16_t strIndex = is->readShort();
		if (attribute != nullptr && strIndex > 0) {
			attribute->value = this->makeCharPtrForClassInfo($ref(constantPool->getUTF8(strIndex)));
		}
		break;
	}
	case 'B': 
	case 'S':
	case 'I': {
		int16_t constIndex = is->readShort();
		if (attribute != nullptr && constIndex > 0) {
			int32_t v = constantPool->getInt(constIndex);
			attribute->value = this->makeCharPtrForClassInfo($$str(v));
		}
		break;
	}
	case 'C': {
		int16_t constIndex = is->readShort();
		if (attribute != nullptr && constIndex > 0) {
			int32_t v = constantPool->getInt(constIndex);
			attribute->value = this->makeCharPtrForClassInfo($$str((char16_t)v));
		}
		break;
	}
	case 'Z': {
		int16_t constIndex = is->readShort();
		if (attribute != nullptr && constIndex > 0) {
			int32_t v = constantPool->getInt(constIndex);
			if (v == 1) {
				attribute->value = this->makeCharPtrForClassInfo("true"_s);
			} else {
				attribute->value = this->makeCharPtrForClassInfo("false"_s);
			}
		}
		break;
	}
	case 'J': {
		int16_t constIndex = is->readShort();
		if (attribute != nullptr && constIndex > 0) {
			int64_t v = constantPool->getLong(constIndex);
			attribute->value = this->makeCharPtrForClassInfo($$str(v));
		}
		break;
	}
	case 'F': {
		int16_t constIndex = is->readShort();
		if (attribute != nullptr && constIndex > 0) {
			float v = constantPool->getFloat(constIndex);
			attribute->value = this->makeCharPtrForClassInfo($$str(v));
		}
		break;
	}
	case 'D': {
		int16_t constIndex = is->readShort();
		if (attribute != nullptr && constIndex > 0) {
			double v = constantPool->getDouble(constIndex);
			attribute->value = this->makeCharPtrForClassInfo($$str(v));
		}
		break;
	}
	case 'e': {
		int16_t descriptorIndex = is->readShort();
		int16_t nameIndex = is->readShort();
		if (attribute != nullptr) {
			$var(String, descriptor, nullptr);
			if (descriptorIndex > 0) {
				$assign(descriptor, constantPool->getUTF8(descriptorIndex));
			}
			$var(String, name, nullptr);
			if (nameIndex > 0) {
				$assign(name, constantPool->getUTF8(nameIndex));
			}
			$var(String, v, String::valueOf({ descriptor, " "_s, name }));
			attribute->value = this->makeCharPtrForClassInfo($$str(v));
		}
		break;
	}
	case 'c': {
		int16_t descriptorIndex = is->readShort();
		if (attribute != nullptr && descriptorIndex > 0) {
			$var(String, descriptor, constantPool->getUTF8(descriptorIndex));
			attribute->value = this->makeCharPtrForClassInfo(descriptor);
		}
	}
	case '@': {
		CompoundAttribute* compoundAttribute = nullptr;
		if (attribute != nullptr) {
			compoundAttribute = makeCompoundAttributeForClassInfo();
			attribute->value = compoundAttribute;
		}
		this->parseCompoundAttribute(is, compoundAttribute);
		break;
	}
	case '[': {
		int16_t num = is->readShort();
		Attribute* attr = nullptr;
		if (attribute != nullptr) {
			Attribute* attributes = this->makeAttributesForClassInfo(num);
			attribute->value = attributes;
			attr = attributes;
		}
		for (int16_t i = 0; i < num; i++) {
			parseAttribute(is, attr);
			if (attr != nullptr) {
				attr++;
			}
		}
		break;
	}
	}
}

ByteCodeClass* ByteCodeClass::create($bytes* b, int32_t off, int32_t len) {
	ByteCodeClass* bcClass = $allocStatic<ByteCodeClass>();
	bcClass->init$();
	$var($bytes, bytes, $new($bytes, len));
	bytes->setArray(0, b, off, len);
	$set(bcClass, bytes, bytes);
	return bcClass;
}

void ByteCodeClassData::init$() {
	$set(this, byteCodeMethods, $new(ArrayList));
}

int32_t getCategory(String* type) {
	if (type->equals("long") || type->equals("double")) {
		return 2;
	} else if (type->equals("void")) {
		return 0;
	}
	return 1;
}

void ByteCodeClassData::parse(ByteCodeClass* clazz, $bytes* b, ClassInfo* classInfo) {
	$var(ByteArrayInputStream, bais, $new(ByteArrayInputStream, b));
	$var(DataInputStream, is, $new(DataInputStream, bais));
	int32_t magic = is->readInt();
	if (magic != 0xCAFEBABE) {
		$throwNew(RuntimeException, $$concat("expected 0xCAFEBABE, not ", $$str(magic)));
	}

	uint16_t minor_version = is->readShort();
	uint16_t major_version = is->readShort();

	if (major_version < 45 || major_version > 60) {
		$throwNew(RuntimeException, $$concat("invalid major version: ", $$str(major_version)));
	}
	if (major_version >= 56 && minor_version != 0 && minor_version != 65535) {
		$throwNew(RuntimeException, $$concat("invalid minor version: ", $$str(minor_version)));
	}

	$set(this, constantPool, ::jdk::internal::reflect::ConstantPool::decode(is));

	int16_t flags = is->readShort();
	int16_t thisClassIndex = is->readShort();
	int16_t superClassIndex = is->readShort();
	if (classInfo != nullptr) {
		classInfo->flags = flags;
		$var(ConstantClass, constantClass, nullptr);
		if (thisClassIndex > 0) {
			$assign(constantClass, constantPool->getClass(thisClassIndex));
		}
		classInfo->name = this->makeCharPtrForClassInfo($ref(constantClass->utf8->replace('/', '.')));

		if (superClassIndex == 0) {
			classInfo->superClass = nullptr;
		} else {
			$var(ConstantClass, superClass, constantPool->getClass(superClassIndex));
			if (superClass->utf8->equals("java/lang/Enum")) {
				classInfo->flags |= Modifier::ENUM;
			}
			classInfo->superClass = this->makeCharPtrForClassInfo($ref(superClass->utf8->replace('/', '.')));
		}
	}

	int16_t interfaces_count = is->readShort();
	if (interfaces_count > 0) {
		$var($StringArray, interfaces, $new($StringArray, interfaces_count));
		$var(StringBuilder, sb, $new(StringBuilder));
		for (int16_t i = 0; i < interfaces_count; i++) {
			int16_t interfaceClassIndex = is->readShort();
			if (classInfo != nullptr) {
				$var(ConstantClass, interfaceClass, nullptr);
				if (interfaceClassIndex > 0) {
					$assign(interfaceClass, constantPool->getClass(interfaceClassIndex));
				} else {
					// TODO throw 
					continue;
				}
				if (interfaceClass->utf8->equals("java/lang/annotation/Annotation")) {
					classInfo->flags |= Modifier::ANNOTATION;
				} else if (interfaceClass->utf8->equals("java/lang/Cloneable")) {
					cloneable = true;
				}
				if (i > 0) {
					sb->append(u',');
				}
				sb->append($ref(interfaceClass->utf8->replace('/', '.')));
			}
		}
		if (classInfo != nullptr) {
			classInfo->interfaces = this->makeCharPtrForClassInfo($ref(sb->toString()));
		}
	} else {
	//	classInfo0.interfaces = nullptr;
	}

	int16_t fields_count = is->readShort();
	if (fields_count > 0) {
		FieldInfo* field = nullptr;
		if (classInfo != nullptr) {
			classInfo->fields = this->makeFieldInfosForClassInfo(fields_count);
			field = classInfo->fields;
		}
		int32_t staticFieldCount = 0;
		int32_t staticObjectFieldCount = 0;
		for (int i = 0; i < fields_count; ++i) {
			int16_t modifiers = is->readShort();
			int16_t nameUtf8Index = is->readShort();
			int16_t descriptorUtf8Index = is->readShort();
			this->parseFieldAttributes(is, field);

			if (field != nullptr) {
				field->modifiers = modifiers;
				$var(String, name, nullptr);
				if (nameUtf8Index > 0) {
					$assign(name, this->constantPool->getUTF8(nameUtf8Index));
				}
				field->name = this->makeCharPtrForClassInfo(name);
				
				$var(String, descriptor, nullptr);
				if (descriptorUtf8Index > 0) {
					$assign(descriptor, this->constantPool->getUTF8(descriptorUtf8Index));
				}
				field->descriptor = this->makeCharPtrForClassInfo(descriptor);
				field->offset = 0;
				if ((field->modifiers & Modifier::STATIC) != 0) {
					staticFieldCount++;
					if (Machine::getPrimitiveClass(descriptor) == nullptr) {
						staticObjectFieldCount++;
					}
				}
				field++;
			}
		//	field->slot = i;
		}
	}

	int16_t methods_count = is->readShort();
	if (methods_count > 0) {
		MethodInfo* methodInfo = nullptr;
		if (classInfo != nullptr) {
			classInfo->methods = this->makeMethodInfosForClassInfo(methods_count);
			methodInfo = classInfo->methods;
		}
		
		for (int16_t i = 0; i < methods_count; ++i) {
			int16_t accessFlags = is->readShort();
			int16_t nameUtf8Index = is->readShort();
			int16_t descriptorUtf8Index = is->readShort();

			$var(String, methodName, nullptr);
			if (nameUtf8Index > 0) {
				$assign(methodName, this->constantPool->getUTF8(nameUtf8Index));
			}
			$var(String, descriptor, nullptr);
			if (descriptorUtf8Index > 0) {
				$assign(descriptor, this->constantPool->getUTF8(descriptorUtf8Index));
			}
			$var(ByteCodeMethod, bcMethod, $new(ByteCodeMethod));
			bcMethod->clazz = clazz;
			bcMethod->accessFlags = accessFlags;
			$set(bcMethod, name, methodName);
			$set(bcMethod, descriptor, descriptor);
			byteCodeMethods->add(bcMethod);

			// finalize
			if (methodName->equals("finalize") && descriptor->equals("()V")) {
				overridedFinalize = true;
			}
			// skip Object final method
			if (methodName->equals("getClass") && descriptor->equals("()Ljava/lang/Class;")) {
				parseMethodAttributes(is, nullptr, bcMethod);
				continue;
			}
			if (methodName->equals("notify") && descriptor->equals("()V")) {
				parseMethodAttributes(is, nullptr, bcMethod);
				continue;
			}
			if (methodName->equals("notifyAll") && descriptor->equals("()V")) {
				parseMethodAttributes(is, nullptr, bcMethod);
				continue;
			}
			if (methodName->equals("wait") && descriptor->equals("()V")) {
				parseMethodAttributes(is, nullptr, bcMethod);
				continue;
			}
			if (methodName->equals("wait") && descriptor->equals("(J)V")) {
				parseMethodAttributes(is, nullptr, bcMethod);
				continue;
			}
			if (methodName->equals("wait") && descriptor->equals("(JI)V")) {
				parseMethodAttributes(is, nullptr, bcMethod);
				continue;
			}
			if (methodName->equals("<clinit>")) {
				this->clinitIndex = byteCodeMethods->size() - 1;
				parseMethodAttributes(is, nullptr, bcMethod);
				continue;
			}
			parseMethodAttributes(is, methodInfo, bcMethod);

			$var($StringArray, sa, Class::parseMethodDescriptor(descriptor));
			bcMethod->parameterCount = sa->length - 1;
			bcMethod->stackSlotsForParameters = bcMethod->isStatic() ? 0 : 1;
			for (int32_t i = 0; i < bcMethod->parameterCount; i++) {
				bcMethod->stackSlotsForParameters += getCategory(sa->get(i));
			}
			bcMethod->returnCategory = getCategory(sa->get(bcMethod->parameterCount));

			if (methodInfo != nullptr) {
				methodInfo->name = this->makeCharPtrForClassInfo(methodName);
				methodInfo->descriptor = this->makeCharPtrForClassInfo(descriptor);
				methodInfo->modifiers = accessFlags;
				methodInfo->slot = byteCodeMethods->size() - 1;
				methodInfo++;
			}
		}
	}
	parseClassAttributes(is, classInfo);
}

Class* ByteCodeMethod::class$ = nullptr;
Class* ByteCodeMethod::load$(String* name, bool initialize) {
	static ClassInfo _ClassInfo_ = {
		$PUBLIC,
		"java.lang.interpreter.ByteCodeMethod",
		"java.lang.Object"
	};
	$loadClass(ByteCodeMethod, name, initialize, &_ClassInfo_);
	return class$;
}

Class* VfptrInfo::class$ = nullptr;
Class* VfptrInfo::load$(String* name, bool initialize) {
	static ClassInfo _ClassInfo_ = {
		$PUBLIC,
		"java.lang.interpreter.VfptrInfo",
		"java.lang.Object"
	};
	$loadClass(VfptrInfo, name, initialize, &_ClassInfo_);
	return class$;
}

VfptrInfo::VfptrInfo() {
}

Class* BootstrapMethod::class$ = nullptr;
Class* BootstrapMethod::load$(String* name, bool initialize) {
	static ClassInfo _ClassInfo_ = {
		$PUBLIC,
		"java.lang.interpreter.BootstrapMethod",
		"java.lang.Object"
	};
	$loadClass(BootstrapMethod, name, initialize, &_ClassInfo_);
	return class$;
}

Class* ByteCodeClassData::class$ = nullptr;
Class* ByteCodeClassData::load$(String* name, bool initialize) {
	static ClassInfo _ClassInfo_ = {
		$PUBLIC,
		"java.lang.interpreter.ByteCodeClassData",
		"java.lang.Object"
	};
	$loadClass(ByteCodeClassData, name, initialize, &_ClassInfo_);
	return class$;
}

Class* MethodCache::class$ = nullptr;
Class* MethodCache::load$(String* name, bool initialize) {
	static ClassInfo _ClassInfo_ = {
		$PUBLIC,
		"java.lang.interpreter.MethodCache",
		"java.lang.Object"
	};
	$loadClass(MethodCache, name, initialize, &_ClassInfo_);
	return class$;
}

		} // interpreter
	} // lang
} // java