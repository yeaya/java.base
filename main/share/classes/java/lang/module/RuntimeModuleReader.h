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

#ifndef _java_lang_module_RuntimeModuleReader_h_
#define _java_lang_module_RuntimeModuleReader_h_

#include <java/lang/module/ModuleReader.h>
#include <java/lang/Array.h>

namespace java {
    namespace lang {
        class ResourceEntry;
        class Library;
    }
}
namespace java {
    namespace net {
        class URI;
    }
}
namespace java {
    namespace nio {
        namespace file {
            class Path;
        }
    }
}
namespace java {
    namespace util {
        class Optional;
    }
}
namespace java {
    namespace util {
        namespace jar {
            class JarEntry;
            class JarFile;
        }
    }
}
namespace java {
    namespace util {
        namespace stream {
            class Stream;
        }
    }
}

namespace java {
    namespace lang {
        namespace module {

class RuntimeModuleReader : public ::java::lang::module::ModuleReader {
    $class(RuntimeModuleReader, $NO_CLASS_INIT, ::java::lang::module::ModuleReader)
public:
    RuntimeModuleReader();
    void init$(::java::lang::String* module);
    virtual ::java::util::Optional* find(::java::lang::String* name) override;
    virtual ::java::util::stream::Stream* list() override;
    virtual ::java::util::Optional* open(::java::lang::String* name) override;
    virtual ::java::util::Optional* read(::java::lang::String* name) override;
    virtual void release(::java::nio::ByteBuffer* bb) override;
    $bytes* readBytes(::java::lang::String* name);
    ::java::lang::String* module = nullptr;
    ::java::lang::Library* library = nullptr;
};

        } // module
    } // lang
} // java

#endif // _java_lang_module_RuntimeModuleReader_h_