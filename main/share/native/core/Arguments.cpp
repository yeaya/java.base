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

#include "Arguments.h"

#include <string.h>
#include <jcpp.h>
#include "jni.h"

SystemProperty* Arguments::systemProperties = nullptr;
SystemProperty* Arguments::bootLibraryPath = nullptr;
SystemProperty* Arguments::javaLibraryPath = nullptr;
SystemProperty* Arguments::javaHome = nullptr;
SystemProperty* Arguments::javaClassPath = nullptr;
SystemProperty* Arguments::javaBasePath = nullptr;
SystemProperty* Arguments::executionFilePath = nullptr;
int64_t Arguments::Xms = 0;
int64_t Arguments::Xmx = 0;
int64_t Arguments::Xss = 0;

// refer java.c
extern "C" jlong jcpp_parse_size(const char* s);
// refer jio.c
extern "C" int jio_snprintf(char* str, size_t count, const char* fmt, ...);

static bool matchOption(const JavaVMOption* option, const char* name, const char** tail) {
	size_t len = strlen(name);
	if (strncmp(option->optionString, name, len) == 0) {
		*tail = option->optionString + len;
		return true;
	} else {
		return false;
	}
}

bool SystemProperty::setValue(const char* value) {
	if (this->value != nullptr) {
		$freeRaw(this->value);
	}
	this->value = $allocRaw<char>(strlen(value) + 1);
	if (this->value != nullptr) {
		strcpy(this->value, value);
	} else {
		return false;
	}
	return true;
}

SystemProperty::~SystemProperty() {
	if (value != nullptr) {
		$freeRaw(value);
		value = nullptr;
	}
}

SystemProperty::SystemProperty(const char* key, const char* value, bool writeable, bool internal) {
	if (key == nullptr) {
		this->key = nullptr;
	} else {
		this->key = $allocRaw<char>(strlen(key) + 1);
		strcpy(this->key, key);
	}
	if (value == nullptr) {
		this->value = nullptr;
	} else {
		this->value = $allocRaw<char>(strlen(value) + 1);
		strcpy(this->value, value);
	}
	next = nullptr;
	this->internal = internal;
	this->writeable = writeable;
}

SystemProperty* SystemProperty::find(const char* key) {
	if (key == nullptr) {
		return nullptr;
	}
	SystemProperty* p = this;
	while (p != nullptr) {
		if (strcmp(p->getKey(), key) == 0) {
			return p;
		}
		p = p->getNext();
	}
	return nullptr;
}

void Arguments::initSystemProperties() {
	if (systemProperties != nullptr) {
		return;
	}
	systemProperties = new SystemProperty("java.vm.specification.name", "Java Virtual Machine Specification", false);

	bootLibraryPath = new SystemProperty("sun.boot.library.path", nullptr, true);
	javaLibraryPath = new SystemProperty("java.library.path", nullptr, true);
	javaHome = new SystemProperty("java.home", nullptr, true);
	javaClassPath = new SystemProperty("java.class.path", "", true);

	addToList(systemProperties, bootLibraryPath);
	addToList(systemProperties, javaLibraryPath);
	addToList(systemProperties, javaHome);
	addToList(systemProperties, javaClassPath);

	javaBasePath = new SystemProperty("java.base.path", "", true);
	executionFilePath = new SystemProperty("execution.path", "", true);
}

void processDefineOption(JavaVMOption* option, SystemProperty* systemProperties) {
	const char* prop = option->optionString + 2;
	const char* eq = strchr(prop, '=');
	if (eq != nullptr) {
		size_t keylen = eq - prop;
		char* key = $allocRaw<char>(keylen + 1);
		strncpy(key, prop, keylen);
		key[keylen] = '\0';
		const char* value = eq + 1;
		SystemProperty* p = systemProperties->find(key);
		if (p != nullptr) {
			p->setValue(value);
		} else {
			Arguments::addToList(systemProperties, new SystemProperty(key, value, true));
		}
		$freeRaw(key);
	}
}

void Arguments::setXIfAbsent(char const* x) {
	if (Xms == 0 && strncmp(x, "-Xms", 4) == 0) {
		Xms = jcpp_parse_size(x + 4);
	} else if (Xmx == 0 && strncmp(x, "-Xmx", 4) == 0) {
		Xmx = jcpp_parse_size(x + 4);
	} else if (Xss == 0 && strncmp(x, "-Xss", 4) == 0) {
		Xss = jcpp_parse_size(x + 4);
	}
}

void createNumberedModuleProperty(const char* propBaseName, const char* propValue, SystemProperty* systemProperties) {
	const int max_digits = 10;
	const int extra_symbols_count = 3; // includes '.', '=', '\0'
	size_t propertyNameMaxLen = strlen(propBaseName) + max_digits + extra_symbols_count;
	char* propertyName = $allocRaw<char>(propertyNameMaxLen);
	int index = 0;
	while (true) {
		jio_snprintf(propertyName, propertyNameMaxLen, "%s.%d", propBaseName, index);
		SystemProperty* sp = systemProperties->find(propertyName);
		if (sp != nullptr) {
			if (strcmp(sp->getValue(), propValue) == 0) {
				break;
			} else {
				index++;
				continue;
			}
		} else {
			Arguments::addToList(systemProperties, new SystemProperty(propertyName, propValue, false));
			break;
		}
	}
	$freeRaw(propertyName);
}

void processAddOption(JavaVMOption* option, SystemProperty* systemProperties) {
	const char* optionValue = nullptr;
	if (matchOption(option, "--add-reads=", &optionValue)) {
		createNumberedModuleProperty("jdk.module.addreads", optionValue, systemProperties);
	} else if (matchOption(option, "--add-exports=", &optionValue)) {
		createNumberedModuleProperty("jdk.module.addexports", optionValue, systemProperties);
	} else if (matchOption(option, "--add-opens=", &optionValue)) {
		createNumberedModuleProperty("jdk.module.addopens", optionValue, systemProperties);
	} else if (matchOption(option, "--add-modules=", &optionValue)) {
		createNumberedModuleProperty("jdk.module.addmods", optionValue, systemProperties);
	}
}

void Arguments::parseJvmInitArguments(JavaVMInitArgs* jvmInitArgs) {
	initSystemProperties();
	for (int i = 0; i < jvmInitArgs->nOptions; i++) {
		JavaVMOption* option = &jvmInitArgs->options[i];
		if (option->optionString != nullptr) {
			if (strncmp(option->optionString, "-D", 2) == 0) {
				processDefineOption(option, systemProperties);
			} else if (strncmp(option->optionString, "-X", 2) == 0) {
				setXIfAbsent(option->optionString);
			} else if (strncmp(option->optionString, "--add-", 6) == 0) {
				processAddOption(option, systemProperties);
			}
		}
	}
}

void Arguments::initVersionSpecificProperties() {
	const char* spec_vendor = "libjdk";
	const char* spec_version = "17";
	addToList(systemProperties, new SystemProperty("java.vm.specification.vendor", spec_vendor, false));
	addToList(systemProperties, new SystemProperty("java.vm.specification.version", spec_version, false));
}

int Arguments::countList(SystemProperty* list) {
	int count = 0;
	SystemProperty* p = list;
	while (p != nullptr) {
		count++;
		p = p->getNext();
	}
	return count;
}

void Arguments::addToList(SystemProperty* list, SystemProperty* element) {
	SystemProperty* p = list;
	while (p->getNext() != nullptr) {
		p = p->getNext();
	}
	p->setNext(element);
}