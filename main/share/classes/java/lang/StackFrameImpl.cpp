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

#include <java/lang/StackFrameImpl.h>

#include <java/lang/Byte.h>
#include <java/lang/Short.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Float.h>
#include <java/lang/Double.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/String.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/invoke/MethodType.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using namespace ::java::lang;
using namespace ::java::io;

namespace java {
	namespace lang {

::java::lang::ClassInfo _StackFrameImpl_ClassInfo_ = {
	$PUBLIC,
	"java.lang.StackFrameImpl",
	"java.lang.Object",
	"java.lang.StackWalker$StackFrame"
};

Class* StackFrameImpl::class$ = nullptr;

StackFrameImpl::StackFrameImpl() {
}

void StackFrameImpl::init$() {
	Object::init$();
}

::java::lang::String* StackFrameImpl::getClassName() {
	return className;
}

::java::lang::String* StackFrameImpl::getMethodName() {
	return methodName;
}

::java::lang::Class* StackFrameImpl::getDeclaringClass() {
	return declaringClass;
}

::java::lang::invoke::MethodType* StackFrameImpl::getMethodType() {
	return methodType;
}

::java::lang::String* StackFrameImpl::getDescriptor() {
	return descriptor;
}

int32_t StackFrameImpl::getByteCodeIndex() {
	return byteCodeIndex;
}

::java::lang::String* StackFrameImpl::getFileName() {
	return fileName;
}

int32_t StackFrameImpl::getLineNumber() {
	return lineNumber;
}

bool StackFrameImpl::isNativeMethod() {
	return nativeMethod;
}

::java::lang::StackTraceElement* StackFrameImpl::toStackTraceElement() {
	return stackTraceElement;
}

Class* StackFrameImpl::load$(String* name, bool initialize) {
	$loadClass(StackFrameImpl, name, initialize, &_StackFrameImpl_ClassInfo_, nullptr, nullptr);
	return class$;
}

	} // lang
} // java