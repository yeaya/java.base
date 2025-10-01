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

#include <java/lang/CallerHelper.h>
#include <java/io/ObjectStreamField.h>
#include <jcpp.h>

namespace java {
	namespace lang {

#define MAX_CALLER_STACK_SIZE 32

thread_local Class* callerStack[MAX_CALLER_STACK_SIZE];
thread_local int32_t callerStackEndIndex = 0;

WillCallCallerSensitive::WillCallCallerSensitive(Class* clazz) {
	int32_t index = callerStackEndIndex;
	if (index < MAX_CALLER_STACK_SIZE) {
		callerStack[index] = clazz;
	}
	callerStackEndIndex = index + 1;
}

WillCallCallerSensitive::~WillCallCallerSensitive() {
	callerStackEndIndex--;
}

Class* CallerHelper::getCallerClass() {
	if (callerStackEndIndex > 0 && callerStackEndIndex <= MAX_CALLER_STACK_SIZE) {
		return callerStack[callerStackEndIndex - 1];
	}
	return nullptr;
}

	} // lang
} // java