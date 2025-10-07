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

#include "StackWalk.h"

#include <java/lang/ClassLoader.h>
#include <java/lang/Class.h>
#include <java/lang/String.h>
#include <java/lang/StackFrameInfo.h>
#include <java/lang/StackWalker.h>
#include <java/lang/Thread.h>
#include <java/lang/Machine.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Short.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Float.h>
#include <java/lang/Double.h>
#include <java/lang/Character.h>

#include <java/lang/InternalError.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/ClassNotFoundException.h>

#include <java/lang/StackStreamFactory$AbstractStackWalker.h>
#include <java/lang/StackStreamFactory.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/invoke/MethodHandle.h>

#include <jcpp.h>
#include <java/lang/SpinLock.h>

#include "OS.h"

using namespace ::java::lang;
using namespace ::java::lang::invoke;
using namespace ::java::lang::reflect;

#ifdef assert
#undef assert
#endif
#define assert(cond, msg)
#define ShowHiddenFrames false
#define TEST_NativeFrameStream

class AddressFunctionNameNode {
public:
	address addr;
	char* functionName;
	AddressFunctionNameNode* left;
	AddressFunctionNameNode* right;
};

static AddressFunctionNameNode** AddressFunctionNameCacheRoots = nullptr;
static int32_t AddressFunctionNameCacheRootsCount = 0;
static SpinLock AddressFunctionNameCacheRootsLook;

AddressFunctionNameNode* getOrCreateAddressFunctionNameCacheRoot(address addr) {
	int32_t hashCode = (int32_t)(int64_t)addr / 31;
	int32_t index = hashCode & (AddressFunctionNameCacheRootsCount - 1);
	AddressFunctionNameNode* node = AddressFunctionNameCacheRoots[index];
	if (node == nullptr) {
		LockGuard guard(AddressFunctionNameCacheRootsLook);
		node = AddressFunctionNameCacheRoots[index];
		if (node == nullptr) {
			node = $allocRawStatic<AddressFunctionNameNode>();
			AddressFunctionNameCacheRoots[index] = node;
		}
	}
	return node;
}

char* findAddressFunctionNameFromCache(address addr) {
	AddressFunctionNameNode* node = getOrCreateAddressFunctionNameCacheRoot(addr);
	while (node != nullptr) {
		char* functionName = node->functionName;
		if (functionName != nullptr) {
			int64_t ret = node->addr - addr;
			if (ret > 0) {
				node = node->left;
			} else if (ret < 0) {
				node = node->right;
			} else {
				return functionName;
			}
		} else {
			return nullptr;
		}
	}
	return nullptr;
}

void addAddressFunctionNameToCache(address addr, char* functionName) {
	AddressFunctionNameNode* node = getOrCreateAddressFunctionNameCacheRoot(addr);
	LockGuard guard(AddressFunctionNameCacheRootsLook);
	while (node != nullptr) {
		if (node->addr != nullptr) {
			int64_t ret = node->addr - addr;
			if (ret > 0) {
				if (node->left == nullptr) {
					node->left = $allocRawStatic<AddressFunctionNameNode>();
				}
				node = node->left;
			} else if (ret < 0) {
				if (node->right == nullptr) {
					node->right = $allocRawStatic<AddressFunctionNameNode>();
				}
				node = node->right;
			} else {
				return;
			}
		} else {
			int64_t size = strlen(functionName) + 1;
			char* fn = $allocRawStatic<char>(size);
			strncpy(fn, functionName, size);
			node->addr = addr;
			node->functionName = fn;
			return;
		}
	}
}

bool addressToFunctionName(address addr, char* buf, int32_t buflen) {
	const char* funcionName = findAddressFunctionNameFromCache(addr);
	if (funcionName != nullptr) {
		strncpy(buf, funcionName, buflen);
		return true;
	}
	bool ret = OS::addressToFunctionName(addr, buf, buflen);
	if (ret) {
		addAddressFunctionNameToCache(addr, buf);
	}
	return ret;
}

StackFrameInfo* createStackFrameInfo(Class* clazz, int32_t methodId, StackWalker* walker) {
	$var(Method, method, clazz->getDeclaredMethod(methodId));
	if (method == nullptr) {
		return nullptr;
	}
	$var(StackFrameInfo, stackFrameInfo, $new<StackFrameInfo>(walker));
	$set(stackFrameInfo, memberName, $new<MemberName>(method, false));
	return stackFrameInfo;
}

StackFrameInfo* createStackFrameInfo(Class* clazz, Method* method, StackWalker* walker) {
	if (method == nullptr) {
		return nullptr;
	}
	$var(StackFrameInfo, stackFrameInfo, $new<StackFrameInfo>(walker));
	$set(stackFrameInfo, memberName, $new<MemberName>(method, false));
	return stackFrameInfo;
}

int32_t parseParameterCount(const char* parameterTypes) {
	if (parameterTypes[0] == '\0') {
		return 0;
	}
	if (strcmp(parameterTypes, "void") == 0) {
		return 0;
	}
	int32_t parameterCount = 1;

	const char* p = parameterTypes;
	int inTemplate = 0;
	while (true) {
		char c = *p;
		if (c == '\0') {
			break;
		}
		if (c == ',') {
			if (inTemplate == 0) {
				parameterCount++;
			}
		} else if (c == '<') {
			inTemplate++;
		} else if (c == '>') {
			inTemplate--;
		}

		p++;
	}
	return parameterCount;
}

void parseParameterType(const char* parameterTypes, int32_t& offset, char* type, int32_t maxTypeLen) {
	int inTemplate = 0;
	if (parameterTypes[offset] == ' ') {
		offset++;
	}
	if (strncmp(parameterTypes + offset, "class ", 6) == 0) {
		offset += 6;
	}
	int32_t len = 0;
	type[len] = '\0';
	maxTypeLen--;
	while (true) {
		char c = parameterTypes[offset];
		if (c == '\0') {
			break;
		}
		if (c == '*') {
			offset++;
			// skip remained chars of this param
			while (true) {
				c = parameterTypes[offset];
				if (c == '\0' || c == ',') {
					break;
				}
				offset++;
			}
			continue;
		}
		if (c == ',') {
			// try skip space, ex: java::lang::Array<java::lang::String, 1>
			if (parameterTypes[offset + 1] == ' ') {
				offset++;
			}
			if (inTemplate == 0) {
				offset++;
				break;
			}
		} else if (c == '<') {
			inTemplate++;
			// try skip prefix 'class '
			if (strncmp(parameterTypes + offset + 1, "class ", 6) == 0) {
				offset += 6;
			}
		} else if (c == '>') {
			inTemplate--;
		}
		if (len < maxTypeLen) {
			if (c == ':') {
				offset++;
				c = parameterTypes[offset];
				if (c == '\0') {
					break;
				}
				c = '.';
			}

			type[len] = c;
			len++;
			type[len] = '\0';
		}
		offset++;
	}
	if (len > 0 && type[len - 1] == ' ') {
		len--;
		type[len] = '\0';
	}
}

// amd64_linux, x86_64_windows
bool parameterTypeEquals(Class* ptype, const char* type2) {
	if (ptype->isPrimitive()) {
		if (ptype == Boolean::TYPE) {
			return strcmp(type2, "bool") == 0;
		}
		if (ptype == Byte::TYPE) {
			return strcmp(type2, "signed char") == 0;
		}
		if (ptype == Short::TYPE) {
			return strcmp(type2, "short") == 0;
		}
		if (ptype == Integer::TYPE) {
			return strcmp(type2, "int") == 0;
		}
		if (ptype == Long::TYPE) {
#ifdef WIN32
			return strcmp(type2, "__int64") == 0;
#else
			// linux_x86_64 long
			// macos_arrach64 long long
			return strcmp(type2, "long") == 0 || strcmp(type2, "long long") == 0;
#endif
		}
		if (ptype == Float::TYPE) {
			return strcmp(type2, "float") == 0;
		}
		if (ptype == Double::TYPE) {
			return strcmp(type2, "double") == 0;
		}
		if (ptype == Character::TYPE) {
			return strcmp(type2, "char16_t") == 0;
		}
		return false;
	}
	if (ptype->isArray()) {
		int32_t dim = ptype->arrayDimension();
		Class* elementType = ptype->elementType();
		if (dim == 1) {
			if (elementType->isPrimitive()) {
				if (elementType == Boolean::TYPE) {
					return strcmp(type2, "java.lang.BooleanArray") == 0;
				}
				if (elementType == Byte::TYPE) {
					return strcmp(type2, "java.lang.ByteArray") == 0;
				}
				if (elementType == Short::TYPE) {
					return strcmp(type2, "java.lang.ShortArray") == 0;
				}
				if (elementType == Integer::TYPE) {
					return strcmp(type2, "java.lang.IntArray") == 0;
				}
				if (elementType == Long::TYPE) {
					return strcmp(type2, "java.lang.LongArray") == 0;
				}
				if (elementType == Float::TYPE) {
					return strcmp(type2, "java.lang.FloatArray") == 0;
				}
				if (elementType == Double::TYPE) {
					return strcmp(type2, "java.lang.DoubleArray") == 0;
				}
				if (elementType == Character::TYPE) {
					return strcmp(type2, "java.lang.CharArray") == 0;
				}
				return false;
			}
			if (elementType == $Object::class$) {
				return strcmp(type2, "java.lang.ObjectArray") == 0;
			}
		}
		//char buf[256];
		//$ref(elementType->getName())->utf8(buf, sizeof(buf));
		char buf2[300];
		snprintf(buf2, sizeof(buf2), "java.lang.Array<%s,%d>", $ref(elementType->getName())->c_str(), dim);
		return strcmp(type2, buf2) == 0;
	}
	$var(String, type1, ptype->getName());
	if (type1->equals(type2)) {
		return true;
	}
	if (strcmp(type2, "void") == 0) {
		return ptype == $Object::class$;
	}
	return false;
}

#ifdef TEST_NativeFrameStream
void testTEST_NativeFrameStreamParameter(const char* parameterTypes, int32_t& offset, Class* targetType) {
	char typeBuf[128];
	int32_t offset2 = offset;
	parseParameterType(parameterTypes, offset, typeBuf, sizeof(typeBuf));
	if (!parameterTypeEquals(targetType, typeBuf)) {
		parseParameterType(parameterTypes, offset2, typeBuf, sizeof(typeBuf));
		parameterTypeEquals(targetType, typeBuf);
		printf("parameterTypeEquals fail: %s %d\n", parameterTypes, offset);
		exit(1);
	}
}
#endif

Method* getMethodFromCppMethodFullNameAndParameters(const char* classNameChars, const char* methodName_, const char* parameterTypes) {
	// printf("className: %s\n", classNameChars);
	// printf("methodName: %s\n", methodName_);
	// printf("param: %s\n", parameterTypes);
#ifdef TEST_NativeFrameStream
	if (strcmp(methodName_, "TEST_NativeFrameStream_METHOD") == 0) {
		int32_t parameterCount2 = parseParameterCount(parameterTypes);
		if (parameterCount2 != 21) {
			printf("parameterCount2: %d\n", parameterCount2);
			exit(1);
		}
		int32_t offset = 0;
		// char typeBuf[128];
		// parseParameterType(parameterTypes, offset, typeBuf, sizeof(typeBuf));

		testTEST_NativeFrameStreamParameter(parameterTypes, offset, Boolean::TYPE);
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, Byte::TYPE);
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, Short::TYPE);
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, Integer::TYPE);
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, Long::TYPE);
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, ::java::lang::Float::TYPE);
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, ::java::lang::Double::TYPE);
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, ::java::lang::Character::TYPE);

		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($booleans));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($bytes));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($shorts));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($ints));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($longs));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($floats));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($doubles));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($chars));

		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($ObjectArray));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($ClassArray));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($StringArray));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($Array<int32_t, 2>));
		testTEST_NativeFrameStreamParameter(parameterTypes, offset, $getClass($Array<::java::lang::Boolean, 2>));
	}
#endif
	$var(String, className, String::valueOf(classNameChars));
	// if (className->equals("Interpreter")) {
	//	 return nullptr;
	// }

	Class* clazz = nullptr;
	try {
		clazz = Machine::forName0(className, false, $Thread::currentThread()->contextClassLoader, nullptr);
	} catch (ClassNotFoundException&) {
		$catch();
	}

	if (clazz != nullptr) {
		int32_t parameterCount = parseParameterCount(parameterTypes);
		$var($Array<Method>, methods, clazz->privateGetDeclaredMethods(false));
		for (int32_t i = 0; i < methods->length; i++) {
			Method* method = $fcast<Method>(methods->get(i));
			$var(String, methodName2, method->getName());
			if (!methodName2->equals(methodName_)) {
				continue;
			}
			$var($ClassArray, ptypes, method->getSharedParameterTypes());
			if (ptypes->length != parameterCount) {
				continue;
			}
			bool parameterTypeMatch = true;
			int offset = 0;
			for (int32_t i = 0; i < ptypes->length; i++) {
				Class* ptype = $fcast<Class>(ptypes->get(i));
				char typeBuf[128];
				int32_t offsetback = offset;
				parseParameterType(parameterTypes, offset, typeBuf, sizeof(typeBuf));
				if (!parameterTypeEquals(ptype, typeBuf)) {
					// parseParameterType(parameterTypes, offsetback, typeBuf, sizeof(typeBuf));
					// parameterTypeEquals(ptype, typeBuf);
					parameterTypeMatch = false;
					break;
				}
			}
			if (parameterTypeMatch) {
				return method;
			}
		}
	}
	return nullptr;
}

Method* getMethodFromCppMethodFullNameAndParameters(char* cppMethodFullNameAndParameters) {
	char classNameChars[512];
	int32_t srcIndex = 0;
	int32_t dstIndex = 0;
	int32_t methodIndex = 0;
	for (; true; srcIndex++) {
		char c = cppMethodFullNameAndParameters[srcIndex];
		if (c == 0 || c == '(') {
			break;
		} else if (c == ':') {
			srcIndex++;
			classNameChars[dstIndex] = '.';
			dstIndex++;
			methodIndex = dstIndex;
		} else {
			classNameChars[dstIndex] = c;
			dstIndex++;
		}
	}

	if (methodIndex == 0) {
		return nullptr;
	}
	classNameChars[dstIndex] = 0;
	classNameChars[methodIndex - 1] = 0;
	char* parameterTypes = cppMethodFullNameAndParameters + srcIndex + 1;
	char* p = strstr(parameterTypes, ")");
	if (p != nullptr) {
		*p = '\0';
	}

	return getMethodFromCppMethodFullNameAndParameters(classNameChars, classNameChars + methodIndex, parameterTypes);
}

void BaseFrameStream::setupMagic($ObjectArray* frames) {
	frames->set(MAGIC_POS, nullptr);
	anchor = addressValue();
	assert(check_magic(frames), "invalid magic");
}

bool BaseFrameStream::checkMagic($ObjectArray* frames) {
	$Object0* m1 = frames->get(MAGIC_POS);
	int64_t m2 = anchor;
	if (m1 == nullptr && m2 == addressValue())  return true;
	return false;
}

bool BaseFrameStream::cleanupMagic($ObjectArray* frames) {
	bool ok = checkMagic(frames);
	frames->set(MAGIC_POS, ($Object*)nullptr);
	anchor = 0;
	return ok;
}

class StackIterator {
public:
	StackIterator() : stack(nullptr), stackDepth(0), index(0) {
	}

	void init(address* stack, int32_t stackDepth) {
		this->stack = stack;
		this->stackDepth = stackDepth;
		this->stack[0] = nullptr;
		this->index = 0;
	}

	bool hasNext() {
		if (index < stackDepth) {
			return true;
		}
		return false;
	}

	address next() {
		return stack[index++];
	}
private:
	address* stack;
	int32_t stackDepth;
	int32_t index;
};

class NativeFrameStream : public BaseFrameStream {
	address stack[1015];
	StackIterator stackIterator;
	::java::lang::StackWalker* walker = nullptr;
	int64_t mode;
	int32_t index = 0;
	Method* method$ = nullptr;
public:
	NativeFrameStream($Thread* thread, int64_t mode, ::java::lang::StackWalker* walker)
		: BaseFrameStream(thread), mode(mode), walker(walker) {
		init();
	}

#ifdef TEST_NativeFrameStream
	void TEST_NativeFrameStream_METHOD(
		bool b = false,
		int8_t i8 = 0,
		int16_t i16 = 0,
		int32_t i32 = 0,
		int64_t i64 = 0,
		float f = 0,
		double d = 0,
		char16_t c = 'c',
		$booleans* = nullptr,
		$bytes* = nullptr,
		$shorts* = nullptr,
		$ints* = nullptr,
		$longs* = nullptr,
		$floats* = nullptr,
		$doubles* = nullptr,
		$chars* = nullptr,
		$ObjectArray* = nullptr,
		$ClassArray* = nullptr,
		$StringArray* = nullptr,
		$Array<int32_t, 2>* = nullptr,
		$Array<::java::lang::Boolean, 2>* = nullptr) {
		int depth = OS::getBackTrace(stack, $lengthOf(stack), 1);
		stackIterator.init(stack, depth);
	}
#endif

	void init() {
#ifdef TEST_NativeFrameStream
		TEST_NativeFrameStream_METHOD();
#else
		int depth = OS::getBackTrace(stack, $lengthOf(stack), 1);
		stackIterator.init(stack, depth);
#endif
		next();
	}

	virtual void next();
	virtual bool end();
	virtual Method* method() {
		return method$;
	}
	virtual void fillFrame(int32_t index, $ObjectArray* frames);
};

bool isCallerSensitive(Method* method) {
	if (method->isCallerSensitive()) {
		return true;
	}
	$var(String, methodName, method->getName());
	if (methodName->equals("invoke")) {
		if (MethodHandle::class$->isAssignableFrom(method->getDeclaringClass())) {
			return true;
		}
	}
	return false;
}

void parseFunctionName(const char* fn, char* className, int classNameBufLen, char* methodName, int methodNameBufLen, char* parameters, int parametersBufLen) {
	className[0] = '\0';
	methodName[0] = '\0';
	parameters[0] = '\0';
	const char* paramPtr = strstr(fn, "(");
	// is c function
	if (paramPtr == nullptr) {
		strncpy(methodName, fn, methodNameBufLen - 1);
	} else {
		paramPtr++;
		const char* paramEndPtr = strstr(paramPtr, ")");
		if (paramEndPtr != nullptr) {
			size_t parametersLen = paramEndPtr - paramPtr;
			if (parametersLen > parametersBufLen - 1) {
				parametersLen = parametersBufLen - 1;
			}
			memcpy(parameters, paramPtr, parametersLen);
			parameters[parametersLen] = '\0';

			const char* methodPtr = paramPtr - 1;
			while (methodPtr > fn) {
				if (*methodPtr == ':') {
					break;
				}
				methodPtr--;
			}

			// has class name
			if (methodPtr - 1 > fn) {
				methodPtr++;
				size_t classNameLen = methodPtr - 2 - fn;
				if (classNameLen > classNameBufLen - 1) {
					classNameLen = classNameBufLen - 1;
				}
				memcpy(className, fn, classNameLen);
				className[classNameLen] = '\0';

				size_t methodNameLen = paramPtr - 1 - methodPtr;
				if (methodNameLen > methodNameBufLen - 1) {
					methodNameLen = methodNameBufLen - 1;
				}
				memcpy(methodName, methodPtr, methodNameLen);
				methodName[methodNameLen] = '\0';
			} else {
				size_t methodNameLen = paramPtr - 1 - fn;
				if (methodNameLen > methodNameBufLen - 1) {
					methodNameLen = methodNameBufLen - 1;
				}
				memcpy(methodName, fn, methodNameLen);
				methodName[methodNameLen] = '\0';
			}
		}
	}
}

void NativeFrameStream::next() {
	method$ = nullptr;
	char buf[1024];
	while (stackIterator.hasNext()) {
		address addr = stackIterator.next();
		if (addr == nullptr) {
			continue;
		}
		bool ret = addressToFunctionName(addr, buf, sizeof(buf));
		if (!ret) {
			continue;
		}
		// printf("NativeFrameStream::next() %s\n", buf);

		method$ = getMethodFromCppMethodFullNameAndParameters(buf);

		if (method$ != nullptr) {
			// printf("NativeFrameStream::next() %s found\n", buf);
			break;
		}
		// printf("NativeFrameStream::next() %s not ound\n", buf);
	}
}

bool NativeFrameStream::end() {
	return method$ == nullptr;
}

void NativeFrameStream::fillFrame(int32_t index, $ObjectArray* frames) {
	if (StackWalk::needMethodInfo(mode)) {
		$var(StackFrameInfo, stackFrameInfo, createStackFrameInfo(method$->clazz, method$, walker));
		frames->set(index, stackFrameInfo);
	} else {
		// char mname[128];
		// char name[128];
		// printf("fillFrame %s@%s\n", method$->name->c_utf8(mname, sizeof(mname)), method$->clazz->name->c_utf8(name, sizeof(name)));
		frames->set(index, method$->clazz);
	}
}

BaseFrameStream* BaseFrameStream::fromCurrent($Thread* thread, int64_t magic, $ObjectArray* frames) {
	//$Object0* m1 = frames->get(MAGIC_POS);
	//if (m1 != $of(thread)) {
	//	return nullptr;
	//}
	if (magic == 0L) {
		return nullptr;
	}
	BaseFrameStream* stream = (BaseFrameStream*)(intptr_t)magic;
	if (!stream->isValid(thread, frames)) {
		return nullptr;
	}
	return stream;
}

bool isHidden(Method* method, bool skip_hidden_frames, bool getCallerClass, bool firstFrame) {
	if (getCallerClass && firstFrame) {
		return false;
	}
	if (skip_hidden_frames) {
		if (method->isHidden()) {
			return true;
		}
		if (Machine::isLambdaMethod(method->name)) {
			return true;
		}
		$var(String, className, method->clazz->getName());
		if (Machine::isLambdaClass(className)) {
			return true;
		}
	}
	return false;
}

int StackWalk::fillInFrames(int64_t mode, BaseFrameStream& stream, int32_t maxFrames, int32_t startIndex, $ObjectArray* frames, int32_t& endIndex) {
	int decodedFrames = 0;
	bool firstFrame = true;
	for (; !stream.end(); stream.next()) {
		Method* method = stream.method();
		if (method == nullptr) {
			continue;
		}
		if (!ShowHiddenFrames && (skipHiddenFrames(mode) || getCallerClass(mode))) {
			if (isHidden(method, skipHiddenFrames(mode), getCallerClass(mode), firstFrame)) {
				continue;
			}
		}
		int32_t index = endIndex++;
		stream.fillFrame(index, frames);
		firstFrame = false;
		if (++decodedFrames >= maxFrames) {
			stream.next();
			break;
		}
	}
	return decodedFrames;
}

void StackWalk::init() {
	AddressFunctionNameCacheRootsCount = 2024;
	AddressFunctionNameCacheRoots = $allocRawStatic<AddressFunctionNameNode*>(AddressFunctionNameCacheRootsCount);
}

$Object* StackWalk::walk(::java::lang::StackStreamFactory$AbstractStackWalker* walker, int64_t mode, int32_t skipFrames, int32_t frameCount, int32_t startIndex, $ObjectArray* frames) {
	if (frames == nullptr) {
		$throwNew(NullPointerException, "frames is nullptr"_s);
	}
	int32_t limit = startIndex + frameCount;
	if (frames->length < limit) {
		$throwNew(IllegalArgumentException, "not enough space in buffers"_s);
	}
	NativeFrameStream stream($Thread::currentThread(), mode, walker->walker);
	return fetchFirstBatch(stream, walker, mode, skipFrames, frameCount, startIndex, frames);
}

$Object* StackWalk::fetchFirstBatch(BaseFrameStream& stream,
	::java::lang::StackStreamFactory$AbstractStackWalker* walker,
	int64_t mode, int32_t skipFrames, int32_t frameCount,
	int32_t startIndex, $ObjectArray* frames) {

	{
		while (!stream.end()) {
			Class* ik = stream.method()->getDeclaringClass();
			if (ik != ::java::lang::StackWalker::class$ &&
				ik != ::java::lang::StackStreamFactory$AbstractStackWalker::class$ && ik->getSuperclass() != ::java::lang::StackStreamFactory$AbstractStackWalker::class$) {
				break;
			}
			stream.next();
		}

		// from the stack frame at depth == skip_frames.
		for (int n = 0; n < skipFrames && !stream.end(); stream.next(), n++) {
		}
	}

	int endIndex = startIndex;
	int numFrames = 0;
	if (!stream.end()) {
		numFrames = fillInFrames(mode, stream, frameCount, startIndex, frames, endIndex);
		if (numFrames < 1) {
			$throwNew(InternalError, "stack walk: decode failed"_s);
		}
	}

	stream.setupMagic(frames);

	$var($Object, result, walker->doStackWalk(stream.addressValue(), skipFrames, frameCount, startIndex, startIndex + numFrames));
	bool ok = stream.cleanupMagic(frames);
	if (!ok) {
		$throwNew(InternalError, "doStackWalk: corrupted buffers on exit"_s);
	}

	return result;
}

int32_t StackWalk::fetchNextBatch(Object$* stackStream, int64_t mode, int64_t magic, int32_t frameCount, int32_t startIndex, $ObjectArray* frames) {
	if (frames == nullptr) {
		$throwNew(NullPointerException, "frames is nullptr"_s);
	}
	int32_t limit = startIndex + frameCount;
	if (frames->length < limit) {
		$throwNew(IllegalArgumentException, "not enough space in buffers"_s);
	}

	$Thread* jt = $Thread::currentThread();
	BaseFrameStream* existing_stream = BaseFrameStream::fromCurrent(jt, magic, frames);
	if (existing_stream == nullptr) {
		$throwNew(InternalError, "fetchNextBatch: corrupted buffers"_s);
	}

	if (frames == nullptr) {
		$throwNew(NullPointerException, "frames is nullptr"_s);
	}

	int endIndex = startIndex;
	if (frameCount <= 0) {
		return endIndex; // No operation.
	}

	int count = frameCount + startIndex;
	assert(frames->length() >= count, "not enough space in buffers");

	BaseFrameStream& stream = (*existing_stream);
	if (!stream.end()) {
		if (!stream.end()) {
			int n = fillInFrames(mode, stream, frameCount, startIndex, frames, endIndex);
			if (n < 1) {
				$throwNew(InternalError, "fetchNextBatch: later decode failed"_s);
			}
			return endIndex;
		}
	}
	return endIndex;
}

::java::lang::Class* StackWalk::getClassByName(const char* className_) {
	if (strlen(className_) == 0) {
		return nullptr;
	}
	$var(String, className, String::valueOf(className_));
	Class* clazz = nullptr;
	try {
		clazz = Machine::forName0(className, false, $Thread::currentThread()->contextClassLoader, nullptr);
	} catch (ClassNotFoundException&) {
		$catch();
	}
	return clazz;
}

void toJavaFlatName(const char* cppFullClassName, char* flatName, int flatNameBufLen) {
	int32_t srcIndex = 0;
	int32_t dstIndex = 0;
	int32_t methodIndex = 0;
	for (; dstIndex < flatNameBufLen - 1; srcIndex++) {
		char c = cppFullClassName[srcIndex];
		if (c == '\0') {
			break;
		} else if (c == ':') {
			srcIndex++;
			flatName[dstIndex] = '.';
			dstIndex++;
			methodIndex = dstIndex;
		} else {
			flatName[dstIndex] = c;
			dstIndex++;
		}
	}
	flatName[dstIndex] = '\0';
}

$ClassArray* StackWalk::getClassContext() {
	return nullptr;
}

::java::lang::Class* StackWalk::getCallerClass() {
	// Getting the class of the caller frame.
	//
	// The call stack at this point looks something like this:
	//
	// [0] [ @CallerSensitive public sun.reflect.Reflection.getCallerClass ]
	// [1] [ @CallerSensitive API.method                                   ]
	// [.] [ (skipped intermediate frames)                                 ]
	// [n] [ caller                                                        ]

	address stack[128];
	int depth = OS::getBackTrace(stack, $lengthOf(stack), 1); // 1: skip StackWalk::getCallerClass
	StackIterator stackIterator;
	stackIterator.init(stack, depth);
	char cppClassName[256];
	char cppMethodName[256];
	char parameterTypes[512];
	char buf[1024];
	while (stackIterator.hasNext()) {
		address addr = stackIterator.next();
		if (addr == nullptr) {
			continue;
		}
		bool ret = addressToFunctionName(addr, buf, sizeof(buf));
		if (!ret) {
			continue;
		}

		parseFunctionName(buf, cppClassName, sizeof(cppClassName), cppMethodName, sizeof(cppMethodName), parameterTypes, sizeof(parameterTypes));

		// skip internal method
		if (cppClassName[0] == 'j') {
			if (strcmp(cppClassName, "java::lang::Class") == 0) {
				if (strcmp(cppMethodName, "ensureClassInitialized") == 0 || strcmp(cppMethodName, "ensureBaseClassInitialized") == 0) {
					continue;
				}
			}
			if (strcmp(cppClassName, "jdk::internal::reflect::NativeMethodAccessorImpl") == 0
				|| strcmp(cppClassName, "jdk::internal::reflect::DelegatingMethodAccessorImpl") == 0
				|| strcmp(cppClassName, "java::lang::interpreter::Interpreter") == 0
				) {
				continue;
			}
		}

		toJavaFlatName(cppClassName, buf, sizeof(buf));
		Class* clazz = getClassByName(buf);
		if (clazz != nullptr) {
			bool isCallerSensitive = false;
			if (clazz->classInfo != nullptr && clazz->classInfo->methods != nullptr) {
				::java::lang::MethodInfo* methodInfo = clazz->classInfo->methods;
				while (true) {
					if (methodInfo->name == nullptr) {
						break;
					}
					if (strcmp(methodInfo->name, cppMethodName) == 0) {
						if (methodInfo->annotations != nullptr) {
							::java::lang::CompoundAttribute* annotation = methodInfo->annotations;
							for (; annotation != nullptr && !annotation->isEnd(); annotation++) {
								if (annotation->descriptor != nullptr && strcmp(annotation->descriptor, "Ljdk/internal/reflect/CallerSensitive;") == 0) {
									isCallerSensitive = true;
									break;
								}
							}
						}
						break;
					}
					methodInfo++;
				}
			}
			if (isCallerSensitive) {
				continue;
			}
			return clazz;
		}
	}
	return nullptr;
}

void StackWalk::printStackTrace() {
	address stack[256];
	int depth = OS::getBackTrace(stack, $lengthOf(stack), 1);
	// printf("getBackTrace depth: %d\n", depth);
	StackIterator stackIterator;
	stackIterator.init(stack, depth);

	// for (int i = 0; i < depth; i++) {
	//	 printf("getBackTrace %ld\n", (long)stack[i]);
	// }
	char buf[1024];
	int index = 0;
	while (stackIterator.hasNext()) {
		address addr = stackIterator.next();
		if (addr == nullptr) {
			// printf("%d nullptr\n", index);
			continue;
		}
		// printf("%d\n", index);
		bool ret = addressToFunctionName(addr, buf, sizeof(buf));
		if (!ret) {
			continue;
		}
		printf("%-4d%s\n", index, buf);
		index++;
	}
}

#define MAX_THROWABLE_STACK_DEPTH 128

// thread_local bool fillInStackTraceing = false;
void StackWalk::fillInStackTrace(Throwable* throwable) {
	address stack[MAX_THROWABLE_STACK_DEPTH];
	if (throwable != nullptr) {
		throwable->depth = OS::getBackTrace(stack, $lengthOf(stack), 2);
		$set(throwable, stack$, ($longs*)ObjectManager::newArrayOrNull(Long::TYPE, throwable->depth));
		if (throwable->stack$ != nullptr) {
			throwable->stack$->setRegion(0, throwable->depth, (int64_t*)stack);
		} else {
			throwable->depth = 0;
		}
	}
}

void changeArrayLength($Array<StackTraceElement>* elements, int32_t value) {
	((int32_t&)(const int32_t&)elements->length) += value;
}

void StackWalk::initStackTraceElements($Array<StackTraceElement>* elements, Throwable* x) {
	if (x->stack$ == nullptr) {
		return;
	}
	char cppClassName[512];
	char cppMethodName[512];
	char parameterTypes[512];
	int32_t elementsIndex = 0;
	bool skipAfterMain = false;
	int32_t depth = Math::min(x->depth, x->stack$->length);
	int64_t* stack = x->stack$->begin();
	for (int32_t i = 0; i < depth; i++) {
		address addr = (address)stack[i];
		if (addr == nullptr) {
			changeArrayLength(elements, -1);
			continue;
		}
		try {
			char buf[1024];
			bool ret = addressToFunctionName(addr, buf, sizeof(buf));
			if (!ret) {
				changeArrayLength(elements, -1);
				continue;
			}
			// printf("%s\n", buf);

			if (strstr(buf, "$new<") != nullptr) {
				changeArrayLength(elements, -1);
				continue;
			}
			parseFunctionName(buf, cppClassName, sizeof(cppClassName), cppMethodName, sizeof(cppMethodName), parameterTypes, sizeof(parameterTypes));

			if (skipAfterMain) {
				changeArrayLength(elements, -1);
				continue;
			}
			if (strcmp(cppClassName, "") == 0 && strcmp(cppMethodName, "main") == 0) {
				skipAfterMain = true;
			}
			// printf("NativeFrameStream::next() %s\n", buf);
			$var(String, className, $str(cppClassName));
			$assign(className, className->replace($cstr("::"), $cstr(".")));
			$var(String, methodName, $str(cppMethodName));
			$var(StackTraceElement, ste, $new<StackTraceElement>(className, methodName, $cstr(""), -1));
			Class* clazz = Object::class$;
			try {
				clazz = Machine::forName0(className, false, $Thread::currentThread()->contextClassLoader, nullptr);
			} catch (ClassNotFoundException&) {
				$catch();
			}
			$set(ste, declaringClassObject, clazz);
			elements->set(elementsIndex++, ste);
		} catch (...) {
			changeArrayLength(elements, -1);
			continue;
		}
	}
	x->depth = elements->length;
}