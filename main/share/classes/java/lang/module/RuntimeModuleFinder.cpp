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

#include <java/lang/module/RuntimeModuleFinder.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/Class$AnnotationData.h>
#include <java/lang/Class$ReflectionData.h>
#include <java/lang/Double.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runtime$Version.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/ResourceEntry.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/module/ModuleReference.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/Map.h>
#include <java/util/Map$Entry.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/stream/Stream.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jdk/internal/module/ModuleReferences.h>
#include <sun/net/www/ParseUtil.h>
#include <jcpp.h>

using $ModuleReferenceArray = $Array<::java::lang::module::ModuleReference>;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $Optional = ::java::util::Optional;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $AbstractMap = ::java::util::AbstractMap;

using namespace ::java::lang;
using namespace ::java::lang::reflect;
using namespace ::java::util;
using namespace ::jdk::internal::module;

namespace java {
	namespace lang {
		namespace module {

::java::lang::FieldInfo _RuntimeModuleFinder_FieldInfo_[] = {
	{"mrefs", "Ljava/util/Set;", nullptr, 16, $field(RuntimeModuleFinder, mrefs)},
	{"nameToModule", "Ljava/util/Map;", nullptr, 16, $field(RuntimeModuleFinder, nameToModule)},
	{}
};

::java::lang::ClassInfo _RuntimeModuleFinder_ClassInfo_ = {
	$PUBLIC,
	"java.lang.module.RuntimeModuleFinder",
	"java.lang.module.ModuleFinder",
	nullptr,
	_RuntimeModuleFinder_FieldInfo_,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr
};

Object* allocate$RuntimeModuleFinder(::java::lang::Class* clazz) {
	return $fcast<Object0>($alloc(RuntimeModuleFinder));
}

void RuntimeModuleFinder::init$() {
	$set(this, mrefs, $new<HashSet>());
	$set(this, nameToModule, static_cast<AbstractMap*>($new<$ConcurrentHashMap>()));
}

void RuntimeModuleFinder::init$($Set* mrefs, $Map* nameToModule) {
	$set(this, mrefs, $Set::copyOf(mrefs));
	$set(this, nameToModule, $Map::copyOf(nameToModule));
}

$Optional* RuntimeModuleFinder::find($String* name) {
	$nullcheck(name);
	return $Optional::ofNullable($cast<$ModuleReference>($ref($nc(this->nameToModule)->get(name))));
}

$Set* RuntimeModuleFinder::findAll() {
	return this->mrefs;
}

void RuntimeModuleFinder::add($String* name, ::java::lang::module::ModuleReference* mref) {
	mrefs->add(mref);
	nameToModule->put(name, mref);
}

RuntimeModuleFinder::RuntimeModuleFinder() {
}

Class* RuntimeModuleFinder::class$ = nullptr;

Class* RuntimeModuleFinder::load$(String* name, bool initialize) {
	$loadClass(RuntimeModuleFinder, name, initialize, &_RuntimeModuleFinder_ClassInfo_, allocate$RuntimeModuleFinder);
	return class$;
}

		} // module
	} // lang
} // java