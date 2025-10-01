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

#ifndef _java_lang_StackFrameImpl_h_
#define _java_lang_StackFrameImpl_h_

#include <java/lang/StackWalker$StackFrame.h>

namespace java {
    namespace lang {

class $export StackFrameImpl : public ::java::lang::StackWalker$StackFrame {
	$class(StackFrameImpl, $NO_CLASS_INIT, ::java::lang::StackWalker$StackFrame)
public:
	StackFrameImpl();
	void init$();
	virtual ::java::lang::String* getClassName() override;
	virtual ::java::lang::String* getMethodName() override;
	virtual ::java::lang::Class* getDeclaringClass() override;
	virtual ::java::lang::invoke::MethodType* getMethodType()override;
	virtual ::java::lang::String* getDescriptor() override;
	virtual int32_t getByteCodeIndex() override;
	virtual ::java::lang::String* getFileName() override;
	virtual int32_t getLineNumber() override;
	virtual bool isNativeMethod() override;
	virtual ::java::lang::StackTraceElement* toStackTraceElement() override;

	::java::lang::String* className = nullptr;
	::java::lang::String* methodName = nullptr;
	::java::lang::Class* declaringClass = nullptr;
	::java::lang::invoke::MethodType* methodType = nullptr;
	::java::lang::String* descriptor = nullptr;
	int32_t byteCodeIndex = 0;
	::java::lang::String* fileName = nullptr;
	int32_t lineNumber = 0;
	bool nativeMethod = false;
	::java::lang::StackTraceElement* stackTraceElement = nullptr;
};

    } // lang
} // java

#endif // _java_lang_StackFrameImpl_h_