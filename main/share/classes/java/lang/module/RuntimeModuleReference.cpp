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

#include <java/lang/module/RuntimeModuleReference.h>

#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/ByteArray.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/Class$AnnotationData.h>
#include <java/lang/Class$ReflectionData.h>
#include <java/lang/Double.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Void.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleReader.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/util/Objects.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleHashes$HashSupplier.h>
#include <jdk/internal/module/ModulePatcher.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jdk/internal/module/ModuleTarget.h>
#include <jcpp.h>

using namespace ::java::lang;
using namespace ::java::lang::reflect;
using namespace ::java::io;
using namespace ::java::net;
using namespace ::java::util;
using namespace ::jdk::internal::module;

namespace java {
	namespace lang {
		namespace module {

::java::lang::FieldInfo _RuntimeModuleReference_FieldInfo_[] = {
	{"location", "Ljava/net/URI;", nullptr, 18, $field(RuntimeModuleReference, location)},
	{"readerSupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<Ljava/lang/module/ModuleReader;>;", 18, $field(RuntimeModuleReference, readerSupplier)},
	{"patcher", "Ljdk/internal/module/ModulePatcher;", nullptr, 18, $field(RuntimeModuleReference, patcher)},
	{"target", "Ljdk/internal/module/ModuleTarget;", nullptr, 18, $field(RuntimeModuleReference, target)},
	{"recordedHashes", "Ljdk/internal/module/ModuleHashes;", nullptr, 18, $field(RuntimeModuleReference, recordedHashes$)},
	{"hasher", "Ljdk/internal/module/ModuleHashes$HashSupplier;", nullptr, 18, $field(RuntimeModuleReference, hasher$)},
	{"moduleResolution", "Ljdk/internal/module/ModuleResolution;", nullptr, 18, $field(RuntimeModuleReference, moduleResolution$)},
	{"cachedHash", "[B", nullptr, 2, $field(RuntimeModuleReference, cachedHash)},
	{"moduleReader", "Ljava/lang/module/ModuleReader;", nullptr, 18, $field(RuntimeModuleReference, moduleReader)},
	{"hash", "I", nullptr, 2, $field(RuntimeModuleReference, hash)},
	{}
};

::java::lang::MethodInfo _RuntimeModuleReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/module/ModuleDescriptor;Ljava/net/URI;Ljava/lang/module/ModuleReader;)V", nullptr, 1, $method(RuntimeModuleReference, init$, void, ModuleDescriptor*, URI*, ModuleReader*)},
	{"open", "()Ljava/lang/module/ModuleReader;", nullptr, 1},
	{"isPatched", "()Z", nullptr, 1},
	{"moduleTarget", "()Ljdk/internal/module/ModuleTarget;", nullptr, 1},
	{"recordedHashes", "()Ljdk/internal/module/ModuleHashes;", nullptr, 1},
	{"hasher", "()Ljdk/internal/module/ModuleHashes$HashSupplier;", nullptr, 0},
	{"moduleResolution", "()Ljdk/internal/module/ModuleResolution;", nullptr, 1},
	{"computeHash", "(Ljava/lang/String;)[B", nullptr, 1},
	{"hashCode", "()I", nullptr, 1},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, 1},
	{"toString", "()Ljava/lang/String;", nullptr, 1},
	{}
};

::java::lang::ClassInfo _RuntimeModuleReference_ClassInfo_ = {
	$PUBLIC,
	"java.lang.module.RuntimeModuleReference",
	"jdk.internal.module.ModuleReferenceImpl",
	nullptr,
	_RuntimeModuleReference_FieldInfo_,
	_RuntimeModuleReference_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr
};

Object* allocate$RuntimeModuleReference(::java::lang::Class* clazz) {
	return $fcast<Object0>($alloc(RuntimeModuleReference));
}

void RuntimeModuleReference::init$(ModuleDescriptor* descriptor, URI* location, ::java::lang::module::ModuleReader* moduleReader) {
	ModuleReference::init$(descriptor, $cast<URI>(Objects::requireNonNull(location)));
	$set(this, moduleReader, moduleReader);
}

ModuleReader* RuntimeModuleReference::open() {
	return this->moduleReader;
}

bool RuntimeModuleReference::isPatched() {
	return (this->patcher != nullptr);
}

ModuleTarget* RuntimeModuleReference::moduleTarget() {
	return this->target;
}

ModuleHashes* RuntimeModuleReference::recordedHashes() {
	return this->recordedHashes$;
}

ModuleHashes$HashSupplier* RuntimeModuleReference::hasher() {
	return this->hasher$;
}

ModuleResolution* RuntimeModuleReference::moduleResolution() {
	return this->moduleResolution$;
}

$bytes* RuntimeModuleReference::computeHash(String* algorithm) {
	$var($bytes, result, this->cachedHash);
	if (result != nullptr) {
		return result;
	}
	if (this->hasher$ == nullptr) {
		return nullptr;
	}
	$set(this, cachedHash, $ref($assign(result, $nullcheck(this->hasher$)->generate(algorithm))));
	return result;
}

int32_t RuntimeModuleReference::hashCode() {
	int32_t hc = this->hash;
	if (hc == 0) {
		$var(ModuleDescriptor, desc, descriptor());
		hc = $nullcheck(desc)->hashCode();
		hc = 43 * hc + Objects::hashCode(this->location);
		hc = 43 * hc + Objects::hashCode(this->patcher);
		if (hc == 0) {
			hc = (-1);
		}
		this->hash = hc;
	}
	return hc;
}

bool RuntimeModuleReference::equals(Object$* ob$OBJ) {
	Object* ob = (Object*)ob$OBJ;
	if (!($instanceOf<RuntimeModuleReference>(ob))) {
		return false;
	}
	$var(RuntimeModuleReference, that, $cast<RuntimeModuleReference>(ob));
	$var(Object, var$3, $nullcheck(this)->descriptor());
	bool var$2 = Objects::equals(var$3, $nullcheck(that)->descriptor());
	bool var$1 = var$2 && Objects::equals(this->location, $nullcheck(that)->location);
	return var$1 && Objects::equals(this->patcher, $nullcheck(that)->patcher);
}

String* RuntimeModuleReference::toString() {
	$var(ModuleDescriptor, desc, descriptor());
	$var(StringBuilder, sb, $new<StringBuilder>());
	sb->append($cstr("[module "));
	sb->append($nullcheck(desc)->name());
	sb->append($cstr(", location="));
	sb->append(this->location);
	if (isPatched()) {
		sb->append($cstr(" (patched)"));
	}
	sb->append($cstr("]"));
	return sb->toString();
}

RuntimeModuleReference::RuntimeModuleReference() {}

Class* RuntimeModuleReference::class$ = nullptr;

Class* RuntimeModuleReference::load$(String* name, bool initialize) {
	$loadClass(RuntimeModuleReference, name, initialize, &_RuntimeModuleReference_ClassInfo_, allocate$RuntimeModuleReference);
	return class$;
}

		} // module
	} // internal
} // jdk