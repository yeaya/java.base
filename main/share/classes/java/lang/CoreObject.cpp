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

#include <java/lang/CoreObject.h>
#include <jcpp.h>

#include <cstddef>

namespace java {
	namespace lang {

void CoreObject::destroy() {
	delete this;
}

void* CoreObject::operator new(::std::size_t size) {
	return ::java::lang::ObjectManager::allocRawOrExit(size);
}

void* CoreObject::operator new(::std::size_t size, const ::std::nothrow_t&) throw() {
	return ::java::lang::ObjectManager::allocRawOrNull(size);
}

void* CoreObject::operator new[](::std::size_t size) throw() {
	return ::java::lang::ObjectManager::allocRawOrExit(sizeof(CoreObject*) * size);
}

void* CoreObject::operator new[](::std::size_t size, const ::std::nothrow_t&) throw() {
	return ::java::lang::ObjectManager::allocRawOrNull(sizeof(CoreObject*) * size);
}

void CoreObject::operator delete(void* p) {
	::java::lang::ObjectManager::freeRaw(p);
}

void CoreObject::operator delete[](void* p) {
	::java::lang::ObjectManager::freeRaw(p);
}

	} // lang
} // java