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

#ifndef _java_lang_ClassEntry_h_
#define _java_lang_ClassEntry_h_

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Executable;
			class Method;
		}
	}
}

typedef ::java::lang::Class* (*$LoadClassFunction)(::java::lang::String* name, bool initialize);
typedef void (*$InitClassFunction)(::java::lang::Class* clazz);
typedef ::java::lang::Object* (*$AllocateInstanceFunction)(::java::lang::Class* clazz);
typedef void (*$InitInstanceFunction)(::java::lang::reflect::Constructor* constructor, ::java::lang::Object0* inst, $Value* argv);
typedef $Value (*$InvokeSpecialFunction)(::java::lang::reflect::Method* method, Object$* inst, $Value* argv);
typedef $Value (*$InvokeFunction)(::java::lang::reflect::Method* method, Object$* inst, $Value* argv);

namespace java {
	namespace lang {

class $import ClassEntry {
public:
	ClassEntry(const char* name,
		$LoadClassFunction loader,
		int32_t mark = 0)
			: name(name), loader(loader), mark(mark) {
	}
	const char* name;
	$LoadClassFunction loader;
	int32_t mark;

	bool isEnd();
};

	} // lang
} // java

#endif // _java_lang_ClassEntry_h_