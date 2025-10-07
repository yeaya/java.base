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

#include <jcpp.h>
#include <string.h>

#include <java/lang/interpreter/ByteCodeObject.h>
#include <java/lang/Logger.h>

#include "Platform.h"

using namespace ::java::lang;
using namespace ::java::lang::ref;
using namespace ::java::lang::reflect;
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
	//int32_t bufferSize = clazz->getSize();
	Object$* buffer = ObjectManager::alloc(clazz, clazz->size);
	//$var(BYTE_CODE_OBJECT, newObj, new(buffer) BYTE_CODE_OBJECT());
	ByteCodeObject* newObj = new(buffer) ByteCodeObject();
	bcClass->assembleVfTab(newObj);
	return $fcast<Object0>(newObj);
}

void initInstance$ByteCodeClass(Constructor* c, Object0* inst, $Value* argv) {
	ByteCodeClass* bcClass = (ByteCodeClass*)c->clazz;
	$var(ByteCodeClassData, byteCodeClassData, bcClass->getByteCodeClassData(false));
	ByteCodeMethod* bcMethod = $fcast<ByteCodeMethod>(byteCodeClassData->byteCodeMethods->get(c->slot));
	$var(Interpreter, interpreter, $new<Interpreter>(bcClass));
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
	/*
	$var(Constructor, c, $cast<Constructor>(exec));
	if (c != nullptr) {
		ByteCodeClass* bcClass = (ByteCodeClass*)c->clazz;
		$var(ByteCodeMethod, bcMethod, bcClass->byteCodeMethods->get(c->slot));
		$var(Interpreter, interpreter, $new<Interpreter>(bcClass));
		return interpreter->interpret(bcMethod, inst, nullptr, c->parameterTypes, args);
	} else {
		// TODO
		return nullptr;
	}
*/
	// TODO
	return $of();
}

//_Object* new$ByteCodeClass(Constructor* c, ObjectArray* args) {
//	ByteCodeClass* bcClass = (ByteCodeClass*)c->clazz;
//	$var(_Object, sObj, allocate$ByteCodeClass(bcClass));
////	auto m = bcClass->methods.at(c->slot);
//	$var(ByteCodeMethod, bcMethod, bcClass->byteCodeMethods->get(c->slot));
//	$var(Interpreter, interpreter, $new<Interpreter>(bcClass));
//	interpreter->interpret(bcMethod, sObj, c->clazz, c->parameterTypes, args);
//	return sObj;
//}

$Value invoke$ByteCodeClass(Method* method, Object$* instance, $Value* argv) {
	ByteCodeClass* bcClass = (ByteCodeClass*)method->clazz;
	if (method->isStatic()) {
		bcClass->ensureClassInitialized();
	}
	Object* inst = (Object*)instance;

	// TODO
	if (inst != nullptr) {
		Object* obj0 = $toObject0(inst);
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
//	method_info& m = bcClass->methods.at(method_->slot);
	$var(ByteCodeClassData, byteCodeClassData, bcClass->getByteCodeClassData(false));
	ByteCodeMethod* bcMethod = $fcast<ByteCodeMethod>(byteCodeClassData->byteCodeMethods->get(method->slot));
	$var(Interpreter, interpreter, $new<Interpreter>(bcClass));
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
		if (!byteCodeMethod->is_static()) {
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
	memset(&this->classInfo0, 0, sizeof(classInfo0));
	$set(this, classInfoStore, $new<ArrayList>());
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
	$var($bytes, ba, $new<$bytes>(sizeof(FieldInfo) * (count + 1)));
	this->classInfoStore->add(ba);
	return (FieldInfo*)ba->begin();
}

MethodInfo* ByteCodeClassData::makeMethodInfosForClassInfo(int32_t count) {
	$var($bytes, ba, $new<$bytes>(sizeof(MethodInfo) * (count + 1)));
	this->classInfoStore->add(ba);
	return (MethodInfo*)ba->begin();
}

InnerClassInfo* ByteCodeClassData::makeInnerClassInfosForClassInfo(int32_t count) {
	$var($bytes, ba, $new<$bytes>(sizeof(InnerClassInfo) * (count + 1)));
	this->classInfoStore->add(ba);
	return (InnerClassInfo*)ba->begin();
}

EnclosingMethodInfo* ByteCodeClassData::makeEnclosingMethodInfoForClassInfo() {
	$var($bytes, ba, $new<$bytes>(sizeof(EnclosingMethodInfo)));
	this->classInfoStore->add(ba);
	return (EnclosingMethodInfo*)ba->begin();
}

CompoundAttribute* ByteCodeClassData::makeCompoundAttributesForClassInfo(int32_t count) {
	$var($bytes, ba, $new<$bytes>(sizeof(CompoundAttribute) * (count + 1)));
	this->classInfoStore->add(ba);
	return (CompoundAttribute*)ba->begin();
}

CompoundAttribute* ByteCodeClassData::makeCompoundAttributeForClassInfo() {
	$var($bytes, ba, $new<$bytes>(sizeof(CompoundAttribute)));
	this->classInfoStore->add(ba);
	return (CompoundAttribute*)ba->begin();
}

TypeAnnotation* ByteCodeClassData::makeAnnotationsForClassInfo(int32_t count) {
	$var($bytes, ba, $new<$bytes>(sizeof(TypeAnnotation) * (count + 1)));
	this->classInfoStore->add(ba);
	return (TypeAnnotation*)ba->begin();
}

NamedAttribute* ByteCodeClassData::makeNamedAttributesForClassInfo(int32_t count) {
	$var($bytes, ba, $new<$bytes>(sizeof(NamedAttribute) * (count + 1)));
	this->classInfoStore->add(ba);
	return (NamedAttribute*)ba->begin();
}

Attribute* ByteCodeClassData::makeAttributesForClassInfo(int32_t count) {
	$var($bytes, ba, $new<$bytes>(sizeof(Attribute) * (count + 1)));
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
		$set(this, staticFieldBuffer, $new<$bytes>(staticFieldBufferSize));
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
	initVfTab();
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
			$assign(bccd, $new<ByteCodeClassData>());
			$set(this, byteCodeClassData, $new<SoftReference>(bccd));
			if (genClassInfo) {
				bccd->classInfoStore = classInfoStore;
				bccd->parse(bytes, &classInfo0);
			} else {
				bccd->parse(bytes, nullptr);
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
			$set(byteCodeClassData, methodCacheMap, $new<HashMap>());
		//	$set(this, methodCaches, $new<SoftReference>(methodCacheMap));
		}
		$assign(methodCacheMap, byteCodeClassData->methodCacheMap);

	//	if (fieldAndMethodCache == nullptr) {
	//		$set(this, fieldAndMethodCache, $new<HashMap>());
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
			}
			$var(String, name, getName());
			if (name->equals($ref(className->replace('/', '.')))) {
				$var(ByteCodeClassData, byteCodeClassData, getByteCodeClassData(false));
				for (int32_t i = 0; i < byteCodeClassData->byteCodeMethods->size(); i++) {
					ByteCodeMethod* byteCodeMethod = $fcast<ByteCodeMethod>(byteCodeClassData->byteCodeMethods->get(i));
					if (byteCodeMethod->name->equals(methodName) && byteCodeMethod->descriptor->equals(descriptor)) {
						$assign(methodCache, $new<MethodCache>());
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
					$assign(methodCache, $new<MethodCache>());
					$set(methodCache, method, constructor);
					methodCacheMap->put(key, methodCache);

					//fieldAndMethodCache->set(methodIndex, constructor);
					//obj = $fcast<Object>(constructor);
				} else {
					$var(Method, method0, clazz0->getMethodEx(methodName, descriptor));
					if (!method0->override$) {
						method0->override$ = true;
					}
					$assign(methodCache, $new<MethodCache>());
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
				$set(methodCache, argsTypes, $new<$Array<Class>>(list->size() - 1));
				for (int32_t i = 0; i < list->size() - 1; i++) {
					$var(String, type, $fcast<String>(list->get(i)));
					$var(Class, clazz, loadClass(type));
					methodCache->argsTypes->set(i, clazz);
				}
				$var(String, returnType, $fcast<String>(list->get(list->size() - 1)));
				$set(methodCache, realReturnType, loadClass(returnType));
				methodCache->init();
			} else {
				$throwNew(NoSuchMethodException, $ref(String::valueOf({ name, $cstr(":"), $$str(methodIndex) })));
			}
		}
	}

	return methodCache;
}

void ByteCodeClass::ensureClassInitialized() {
	if (!inited) {
		inited = true;
		initialize();
		$var(ByteCodeClassData, byteCodeClassData, getByteCodeClassData(false));
		if (byteCodeClassData->clinitIndex >= 0) {
			$var(ByteCodeMethod, bcMethod, $fcast<ByteCodeMethod>(byteCodeClassData->byteCodeMethods->get(byteCodeClassData->clinitIndex)));
			$var(Interpreter, interpreter, $new<Interpreter>(this));
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
	$var($Array<Class>, classes, this->getPrimaryBaseClasses());
	$set(this, vfptrs, $new<$ObjectArray>(classes->length));
	for (int32_t i = 0; i < classes->length; i++) {
		$var(Class, clazz, classes->get(i));
		$var(VfptrInfo, vfptrInfo, $new<VfptrInfo>());
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
		$var(String, dimStr, $cstr("["));
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

::java::util::ArrayList* ByteCodeClass::parseMethodDescriptor(String* descriptor) {
	int32_t index = 0;
	$var(::java::util::ArrayList, result, $new<::java::util::ArrayList>());
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
	int16_t attributes_count = is->readShort();
	for (int16_t attribute_index = 0; attribute_index < attributes_count; ++attribute_index) {
		int16_t nameIndex = is->readShort();
		int32_t attribute_length = is->readInt();
		$var(String, s, nullptr);
		if (nameIndex > 0) {
			$assign(s, constantPool->getUTF8(nameIndex));
		}

		if ($nc(s)->equals("ConstantValue")) {
			// TODO: sometimes this info must be silently ignored

			if (attribute_length != 2) {
				$throwNew(RuntimeException, $$concat("ConstantValue length must be 2, not ", $$str(attribute_length)));
			}

			int16_t constantvalue_index = is->readShort();
			int8_t tag = constantPool->getTag(constantvalue_index);

		//	check_cp_range(attribute->constantvalue_index, table.size());
			//auto const &variant = table[attribute->constantvalue_index];
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
			for (size_t i = 0; i < attribute_length; ++i) {
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
			for (size_t i = 0; i < attribute_length; ++i) {
				is->readByte();
			}
		}
	}
}

void ByteCodeClassData::parseMethodAttributes(DataInputStream* is, MethodInfo* methodInfo, ByteCodeMethod* byteCodeMethod) {
	uint16_t attributes_count = is->readShort();
	for (size_t attribute_index = 0; attribute_index < attributes_count; ++attribute_index) {
		int16_t nameIndex = is->readShort();
		int32_t attribute_length = is->readInt();

		$var(String, s, constantPool->getUTF8(nameIndex));

		if (s->equals("Code")) {
			byteCodeMethod->max_stack = is->readShort();//eat_u2();
			byteCodeMethod->max_locals = is->readShort();//eat_u2();
			uint32_t code_length = is->readInt();
		//	byteCodeMethod->code.resize(code_length);
			$set(byteCodeMethod, code, is->readNBytes(code_length));
		//	memcpy(reinterpret_cast<char *>(byteCodeMethod->code.data()), bytes->begin(), code_length);
			//	in.read(reinterpret_cast<char *>(attribute->code.data()), code_length);

			uint16_t exception_table_length = is->readShort();//eat_u2();
			byteCodeMethod->exception_table.reserve(exception_table_length);
			for (int i = 0; i < exception_table_length; ++i) {
				ExceptionTableEntry entry{};
				entry.start_pc = is->readShort();//eat_u2();
				entry.end_pc = is->readShort();//eat_u2();
				entry.handler_pc = is->readShort();//eat_u2();
				entry.catch_type = is->readShort();//eat_u2();
				byteCodeMethod->exception_table.push_back(entry);
			}
			this->parseMethodCodeAttributes(is, methodInfo);
		} else if (s->equals("StackMapTable")) {
//			info = new StackMapTable_attribute();
			// I think/hope this is only used for verification
			for (size_t i = 0; i < attribute_length; ++i) {
				//eat_u1();
				is->readByte();
			}
		//}
		// TODO
		//else if (s->equals("Exceptions")) {
		//	Exceptions_attribute* attribute = new Exceptions_attribute;
		//	u2 number_of_exceptions = is->readShort();//eat_u2();
		//	attribute->exception_index_table.reserve(number_of_exceptions);
		//	for (size_t i = 0; i < number_of_exceptions; ++i) {
		//		attribute->exception_index_table.push_back(
		//			(CONSTANT_Class_info*)check_cp_range_and_type(is->readShort(),//eat_u2(),
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
		//	u1 parameters_count = is->readByte();// eat_u1();
		//	attribute->parameters.reserve(parameters_count);
		//	for (size_t i = 0; i < parameters_count; ++i) {
		//		MethodParameter parameter{};
		//		parameter.name_index = is->readShort();//eat_u2(); // 0 or eat_cp_index()
		//		parameter.access_flags = is->readShort();//eat_u2();
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
			for (size_t i = 0; i < attribute_length; ++i) {
				is->readByte();
			}
			continue;
		}
	}
}

void ByteCodeClassData::parseMethodCodeAttributes(DataInputStream* is, MethodInfo* methodInfo) {
	uint16_t attributes_count = is->readShort();
	for (size_t attribute_index = 0; attribute_index < attributes_count; ++attribute_index) {
		int16_t nameIndex = is->readShort();
		int32_t attribute_length = is->readInt();
		$var(String, s, constantPool->getUTF8(nameIndex));

		if (s->equals("StackMapTable")) {
		//	info = new StackMapTable_attribute();
			// I think/hope this is only used for verification
			for (size_t i = 0; i < attribute_length; ++i) {
				is->readByte();
			}
		//} else if (s->equals("LineNumberTable")) {
		//	LineNumberTable_attribute* attribute = new LineNumberTable_attribute;
		//	u2 line_number_table_length = is->readShort();//eat_u2();
		//	attribute->line_number_table.reserve(line_number_table_length);
		//	for (size_t i = 0; i < line_number_table_length; ++i) {
		//		LineNumberTableEntry entry{};
		//		entry.start_pc = is->readShort();//eat_u2();
		//		entry.line_number = is->readShort();//eat_u2();
		//		attribute->line_number_table.push_back(entry);
		//	}
		//	info = attribute;
		} else if (s->equals("AnnotationDefault")) {
			Attribute attr(0, nullptr);
			this->parseAttribute(is, &attr);
			continue;
		} else {
			for (size_t i = 0; i < attribute_length; ++i) {
				is->readByte();
			}
			continue;
		}
	}
}

void ByteCodeClassData::parseClassAttributes(DataInputStream* is, ClassInfo* classInfo) {
	uint16_t attributes_count = is->readShort();
	for (size_t attribute_index = 0; attribute_index < attributes_count; ++attribute_index) {
		int16_t nameIndex = is->readShort();
		int32_t attribute_length = is->readInt();

		$var(String, s, constantPool->getUTF8(nameIndex));

		if (s->equals("Signature")) {
			int16_t utf8Index = is->readShort();
			if (classInfo != nullptr && utf8Index > 0) {
				$var(String, signature, constantPool->getUTF8(utf8Index));
				classInfo->signature = this->makeCharPtrForClassInfo(signature);
			}
		//}
		// TODO
		//else if (s->equals("SourceFile")) {
		//	SourceFile_attribute* attribute = new SourceFile_attribute;
		//	attribute->sourcefile_index = (CONSTANT_Utf8_info*)check_cp_range_and_type(is->readShort(),//eat_u2(),
		//		CONSTANT_Utf8_info_type);
		//	info = attribute;
		//}
		// TODO
		//else if (s->equals("SourceDebugExtension")) {
		//	SourceDebugExtension_attribute* attribute = new SourceDebugExtension_attribute;
		//	_assign(attribute->debug_extension, is->readString(attribute_length));// eat_utf8_string(attribute_length));
		//	info = attribute;
		//}
		// TODO
		//else if (s->equals("Deprecated")) {
		//	info = new Deprecated_attribute;
		//}
		//else if (s->equals("BootstrapMethods")) {
		//	BootstrapMethods_attribute* attribute = new BootstrapMethods_attribute;
		//	u2 num_bootstrap_methods = is->readShort();//eat_u2();
		//	attribute->bootstrap_methods.reserve(num_bootstrap_methods);
		//	//if (highest_parsed_bootstrap_method_attr_index >= num_bootstrap_methods) {
		//	//	throw ParseError("Constant pool had an invalid bootstrap method attribute index");
		//	//}
		//	for (size_t i = 0; i < num_bootstrap_methods; ++i) {
		//		BootstrapMethod method;
		//		method.bootstrap_method$ref = (CONSTANT_MethodHandle_info*)check_cp_range_and_type(
		//			is->readShort(),//eat_u2(), 
		//			CONSTANT_MethodHandle_info_type);
		//		u2 num_bootstrap_arguments = is->readShort();//eat_u2();
		//		method.bootstrap_arguments.reserve(num_bootstrap_arguments);
		//		for (size_t j = 0; j < num_bootstrap_arguments; ++j) {
		//			u2 index = is->readShort();//eat_u2();
		//		//	check_cp_range(index, table.size());
		//			// TODO check loadable
		//			method.bootstrap_arguments.push_back(index);
		//		}
		//		attribute->bootstrap_methods.push_back(std::move(method));
		//	}
		//	info = attribute;
		//}
		//else if (s->equals("ModuleMainClass")) {
		//	ModuleMainClass_attribute* attribute = new ModuleMainClass_attribute;
		//	attribute->main_class_index = is->readShort();//eat_u2();
		//	info = attribute;
		} else if (s->equals("InnerClasses")) {
			int16_t number_of_classes = is->readShort();
			InnerClassInfo* innerClass = nullptr;
			if (classInfo != nullptr) {
				classInfo->innerClasses = this->makeInnerClassInfosForClassInfo(number_of_classes);
				innerClass = classInfo->innerClasses;
			}
			for (size_t i = 0; i < number_of_classes; ++i) {
				uint16_t inner_class_info_index = is->readShort();
				uint16_t outer_class_info_index = is->readShort();
				uint16_t inner_name_index = is->readShort();
				uint16_t inner_class_access_flags = is->readShort();
				if (innerClass != nullptr) {
					$var(ConstantClass, innerConstClass, nullptr);
					if (inner_class_info_index > 0) {
						$assign(innerConstClass, constantPool->getClass(inner_class_info_index));
					}
					if (innerConstClass != nullptr) {
						innerClass->innerClass = this->makeCharPtrForClassInfo($ref(innerConstClass->utf8->replace('/', '.')));
					} else {
						innerClass->innerClass = nullptr;
					}

					$var(ConstantClass, outerConstClass, nullptr);
					if (outer_class_info_index > 0) {
						$assign(outerConstClass, constantPool->getClass(outer_class_info_index));
					}
					if (outerConstClass != nullptr) {
						innerClass->outerClass = this->makeCharPtrForClassInfo($ref(outerConstClass->utf8->replace('/', '.')));
					} else {
						innerClass->outerClass = nullptr;
					}

					$var(String, innerName, nullptr);
					if (inner_name_index > 0) {
						$assign(innerName, constantPool->getUTF8(inner_name_index));
					}
					if (innerName != nullptr) {
						innerClass->innerName = this->makeCharPtrForClassInfo(innerName);
					} else {
						innerClass->innerName = nullptr;
					}

					innerClass->innerClassAccessFlags = inner_class_access_flags;

					innerClass++;
				}
			}
		} else if (s->equals("EnclosingMethod")) {
			int16_t class_index = is->readShort();
			int16_t method_index = is->readShort();
			if (classInfo != nullptr) {
				$var(ConstantClass, constClass, nullptr);
				if (class_index > 0) {
					$assign(constClass, constantPool->getClass(class_index));
				}
				$var(ConstantNameAndType, constNameAndType, nullptr);
				if (method_index > 0) {
					$assign(constNameAndType, constantPool->getNameAndType(method_index));
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
			int16_t num_annotations = is->readShort();
			CompoundAttribute* annotation = nullptr;
			if (classInfo != nullptr) {
				classInfo->annotations = this->makeCompoundAttributesForClassInfo(num_annotations);
				annotation = classInfo->annotations;
			}
			for (int32_t i = 0; i < num_annotations; i++) {
				parseCompoundAttribute(is, annotation);
				if (annotation != nullptr) {
					annotation++;
				}
			}
		} else if (s->equals("NestMembers")) {
			for (size_t i = 0; i < attribute_length; ++i) {
				is->readByte();
			}
		} else if (s->equals("NestHost")) {
			for (size_t i = 0; i < attribute_length; ++i) {
				is->readByte();
			}
		} else {
			for (size_t i = 0; i < attribute_length; ++i) {
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
				attribute->value = this->makeCharPtrForClassInfo($cstr("true"));
			} else {
				attribute->value = this->makeCharPtrForClassInfo($cstr("false"));
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
			$var(String, v, String::valueOf({ descriptor, $cstr(" "), name }));
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
	$var($bytes, bytes, $new<$bytes>(len));
	bytes->setArray(0, b, off, len);
	$set(bcClass, bytes, bytes);
	return bcClass;
}

void ByteCodeClassData::init$() {
	$set(this, byteCodeMethods, $new<ArrayList>());
}

int32_t getCategory(String* type) {
	if (type->equals("long") || type->equals("double")) {
		return 2;
	} else if (type->equals("void")) {
		return 0;
	}
	return 1;
}

void ByteCodeClassData::parse($bytes* b, ClassInfo* classInfo) {
	$var(ByteArrayInputStream, bais, $new<ByteArrayInputStream>(b));
	$var(DataInputStream, is, $new<DataInputStream>(bais));
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
		$var($StringArray, interfaces, $new<$StringArray>(interfaces_count));
		$var(StringBuilder, sb, $new<StringBuilder>());
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
			$var(ByteCodeMethod, bcMethod, $new<ByteCodeMethod>());
		//	method_info method_info{};
		//	method_info.clazz = bcClass;
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
			bcMethod->parameter_count = sa->length - 1;
			bcMethod->stack_slots_for_parameters = bcMethod->is_static() ? 0 : 1;
			for (int32_t i = 0; i < bcMethod->parameter_count; i++) {
				bcMethod->stack_slots_for_parameters += getCategory(sa->get(i));
			}
			bcMethod->return_category = getCategory(sa->get(bcMethod->parameter_count));

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

VfptrInfo::VfptrInfo() {
}

		} // interpreter
	} // lang
} // java