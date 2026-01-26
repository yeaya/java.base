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

#include <java/lang/module/RuntimeModuleReader.h>

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
#include <java/lang/Library.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ModuleReferences.h>
#include <sun/net/www/ParseUtil.h>
#include <jcpp.h>
#include <java/lang/Machine.h>

using namespace ::java::lang;
using namespace ::java::lang::reflect;
using namespace ::java::io;
using namespace ::java::nio;
using namespace ::java::nio::file;
using namespace ::java::net;
using namespace ::java::util;
using namespace ::java::util::stream;
using namespace ::jdk::internal::module;

namespace java {
	namespace lang {
		namespace module {

::java::lang::FieldInfo _RuntimeModuleReader_FieldInfo_[] = {
	{"module", "Ljava/lang/String;", nullptr, 18, $field(RuntimeModuleReader, module)},
	{}
};

::java::lang::MethodInfo _RuntimeModuleReader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(RuntimeModuleReader, init$, void, $String*)},
	{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/net/URI;>;", 1025, nullptr, "java.io.IOException"},
	{"list", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/lang/String;>;", 1025, nullptr, "java.io.IOException"},
	{"open", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/io/InputStream;>;", 1, nullptr, "java.io.IOException"},
	{"read", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/nio/ByteBuffer;>;", 1, nullptr, "java.io.IOException"},
	{"release", "(Ljava/nio/ByteBuffer;)V", nullptr, 1},
	{}
};

::java::lang::ClassInfo _RuntimeModuleReader_ClassInfo_ = {
	$PUBLIC,
	"java.lang.module.RuntimeModuleReader",
	"java.lang.Object", //"jdk.internal.module.ModuleReferences$SafeCloseModuleReader",
	"java.lang.module.ModuleReader",
	_RuntimeModuleReader_FieldInfo_,
	_RuntimeModuleReader_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr
};

Object* allocate$RuntimeModuleReader(::java::lang::Class* clazz) {
	return $fcast<Object0>($alloc(RuntimeModuleReader));
}

Object$* invokeSpecial$RuntimeModuleReader(::java::lang::reflect::Executable* exec, Object$* instance, ObjectArray* args) {
	return nullptr;
}

Object$* invoke$RuntimeModuleReader(Method* method_, Object$* this$, ObjectArray* args) {
	return nullptr;
}

Class* RuntimeModuleReader::class$ = nullptr;

void RuntimeModuleReader::init$(String* module) {
	$set(this, module, module);
}

Optional* RuntimeModuleReader::find(String* name) {
   $var($bytes, bytes, readBytes(name));
	if (bytes != nullptr) {
		 $var(String, uris, String::valueOf({ $cstr("jrt:/"), module, $cstr("/"), name }));
		 return Optional::of($ref(URI::create(uris)));
	} else {
		return Optional::empty();
	}
}

typedef int8_t* (*GetResourceFunction)(int32_t& length);

Optional* RuntimeModuleReader::open(String* name) {
	$var($bytes, bytes, readBytes(name));
	if (bytes != nullptr) {
		$var(ByteArrayInputStream, bis, $new<ByteArrayInputStream>(bytes));
		return Optional::of(bis);
	}
	return Optional::empty();
}

::java::util::Optional* RuntimeModuleReader::read(::java::lang::String* name) {
   $var($bytes, bytes, readBytes(name));
	if (bytes != nullptr) {
		$var(ByteBuffer, bb, ByteBuffer::wrap(bytes));
		return Optional::of(bb);
	}
	return Optional::empty();
}

$bytes* RuntimeModuleReader::readBytes(::java::lang::String* name) {
	if (library != nullptr && library->getResource != nullptr) {
		return library->getResource(name);
	}
	return nullptr;
}

void RuntimeModuleReader::release(::java::nio::ByteBuffer* bb) {

}

Stream* RuntimeModuleReader::list() {
	return nullptr;
}

RuntimeModuleReader::RuntimeModuleReader() {}

Class* RuntimeModuleReader::load$(String* name, bool initialize) {
	$loadClass(RuntimeModuleReader, name, initialize, &_RuntimeModuleReader_ClassInfo_, allocate$RuntimeModuleReader);
	return class$;
}

		} // module
	} // lang
} // java

