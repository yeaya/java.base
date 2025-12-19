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

#ifndef _core_Arguments_h_
#define _core_Arguments_h_

#include <java/lang/CoreObject.h>

class JavaVMInitArgs;

class SystemProperty : public ::java::lang::CoreObject {
public:
	SystemProperty(const char* key, const char* value, bool writeable, bool internal = false);
	~SystemProperty();
	char* getValue() const { return value; }
	bool setValue(const char* value);

	const char* getKey() const { return key; }
	SystemProperty* getNext() const { return next; }
	void setNext(SystemProperty* next) { this->next = next; }
	SystemProperty* find(const char* key);

private:
	char* value;
	char* key;
	SystemProperty* next;
	bool internal;
	bool writeable;
};

class Arguments {
public:
	static SystemProperty* getSystemProperties() {
		return systemProperties;
	}
	static void initSystemProperties();
	static void parseJvmInitArguments(JavaVMInitArgs* jvmInitArgs);
	static void initVersionSpecificProperties();
	static void addToList(SystemProperty* list, SystemProperty* element);
	static int countList(SystemProperty* list);
	static void setBootLibraryPath(const char* value) { bootLibraryPath->setValue(value); }
	static void setJavaHome(const char* value) { javaHome->setValue(value); }
	static void setJavaLibraryPath(const char* value) { javaLibraryPath->setValue(value); }
	static char* getJavaHome() { return javaHome->getValue(); }
	static char* getBootLibraryPath() { return bootLibraryPath->getValue(); }
	static void setJavaBasePath(const char* value) { javaBasePath->setValue(value); }
	static char* getJavaBasePath() { return javaBasePath->getValue(); }
	static void setExecutionFilePath(const char* value) { executionFilePath->setValue(value); }
	static char* getExecutionFilePath() { return executionFilePath->getValue(); }
	static void setXIfAbsent(char const* x);
	static int64_t Xms;
	static int64_t Xmx;
	static int64_t Xss;
private:
	static SystemProperty* systemProperties;
	static SystemProperty* bootLibraryPath;
	static SystemProperty* javaLibraryPath;
	static SystemProperty* javaHome;
	static SystemProperty* javaClassPath;
	static SystemProperty* javaBasePath;
	static SystemProperty* executionFilePath;
};

#endif // _core_Arguments_h_