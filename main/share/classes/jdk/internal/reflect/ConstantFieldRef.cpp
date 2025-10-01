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

#include <jdk/internal/reflect/ConstantFieldRef.h>

#include <jdk/internal/reflect/ConstantPool.h>
#include <jdk/internal/reflect/ConstantClass.h>
#include <jdk/internal/reflect/ConstantNameAndType.h>
#include <jcpp.h>

namespace jdk {
	namespace internal {
		namespace reflect {

ConstantFieldRef::ConstantFieldRef() {
}

void ConstantFieldRef::init$(int32_t index, int32_t classIndex, int32_t nameAndTypeIndex) {
	ConstantBase::init$(Tag_FieldRef, index);
	this->classIndex = classIndex;
	this->nameAndTypeIndex = nameAndTypeIndex;
}

void ConstantFieldRef::init(ConstantPool* cp) {
	$var(ConstantClass, clazz, cp->getClass(classIndex));
	$nullcheck(clazz);
	$var(ConstantNameAndType, nameAndType, cp->getNameAndType(nameAndTypeIndex));
	$nullcheck(nameAndType);
	$set(this, clazz, cp->getUTF8(clazz->utf8Index));
	$set(this, name, cp->getUTF8(nameAndType->nameIndex));
	$set(this, descriptor, cp->getUTF8(nameAndType->descriptorIndex));
}

		}
	}
}