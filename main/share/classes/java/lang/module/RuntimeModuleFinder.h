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

#ifndef _java_lang_module_RuntimeModuleFinder_h_
#define _java_lang_module_RuntimeModuleFinder_h_

#include <java/lang/module/ModuleFinder.h>

namespace java {
    namespace lang {
        namespace module {
            class ModuleReference;
        }
    }
}
namespace java {
    namespace util {
        class Map;
        class Map$Entry;
        class Optional;
        class Set;
    }
}

namespace java {
    namespace lang {
        namespace module {

class RuntimeModuleFinder : public ::java::lang::module::ModuleFinder {
    $class(RuntimeModuleFinder, $NO_CLASS_INIT, ::java::lang::module::ModuleFinder)
public:
    RuntimeModuleFinder();
    void init$();
    void init$(::java::util::Set* mrefs, ::java::util::Map* nameToModule);
    virtual ::java::util::Optional* find(::java::lang::String* name) override;
    virtual ::java::util::Set* findAll() override;
    void add($String* name, ::java::lang::module::ModuleReference* mref);
    ::java::util::Set* mrefs = nullptr;
    ::java::util::Map* nameToModule = nullptr;
};

        } // module
    } // lang
} // java

#endif // _java_lang_module_RuntimeModuleFinder_h_