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

SystemProperty* Arguments::systemProperties = nullptr;
SystemProperty* Arguments::bootLibraryPath = nullptr;
SystemProperty* Arguments::javaLibraryPath = nullptr;
SystemProperty* Arguments::javaHome = nullptr;
SystemProperty* Arguments::javaClassPath = nullptr;

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

void Arguments::initSystemProperties() {
	addToList(systemProperties, new SystemProperty("java.vm.specification.name", "Java Virtual Machine Specification", false));

	bootLibraryPath = new SystemProperty("sun.boot.library.path", nullptr, true);
	javaLibraryPath = new SystemProperty("java.library.path", nullptr, true);
	javaHome = new SystemProperty("java.home", nullptr, true);
	javaClassPath = new SystemProperty("java.class.path", "", true);

	addToList(systemProperties, bootLibraryPath);
	addToList(systemProperties, javaLibraryPath);
	addToList(systemProperties, javaHome);
	addToList(systemProperties, javaClassPath);
}

void Arguments::initVersionSpecificProperties() {
	const char* spec_vendor = "Jcpp";
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

void Arguments::addToList(SystemProperty*& list, SystemProperty* element) {
	if (list == nullptr) {
		list = element;
	} else {
		SystemProperty* p = list;
		while (p->getNext() != nullptr) {
			p = p->getNext();
		}
		p->setNext(element);
	}
}