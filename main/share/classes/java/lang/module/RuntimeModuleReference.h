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

#ifndef _java_lang_module_RuntimeModuleReference_h_
#define _java_lang_module_RuntimeModuleReference_h_
//$ class java.lang.module.RuntimeModuleReference
//$ extends jdk.internal.module.ModuleReferenceImpl

#include <jdk/internal/module/ModuleReferenceImpl.h>

namespace java {
    namespace lang {
        namespace module {
            class ModuleDescriptor;
            class ModuleReader;
        }
    }
}
namespace java {
    namespace net {
        class URI;
    }
}
namespace java {
    namespace util {
        namespace function {
            class Supplier;
        }
    }
}
namespace jdk {
    namespace internal {
        namespace module {
            class ModuleHashes;
            class ModuleHashes$HashSupplier;
            class ModulePatcher;
            class ModuleResolution;
            class ModuleTarget;
        }
    }
}

namespace java {
    namespace lang {
        namespace module {

class RuntimeModuleReference : public ::jdk::internal::module::ModuleReferenceImpl {
    $class(RuntimeModuleReference, $NO_CLASS_INIT, ::jdk::internal::module::ModuleReferenceImpl)
public:
    RuntimeModuleReference();
    ::java::net::URI* location = nullptr;
    ::java::util::function::Supplier* readerSupplier = nullptr;
    ::jdk::internal::module::ModulePatcher* patcher = nullptr;
    ::jdk::internal::module::ModuleTarget* target = nullptr;
    ::jdk::internal::module::ModuleHashes* recordedHashes$ = nullptr;
    ::jdk::internal::module::ModuleHashes$HashSupplier* hasher$ = nullptr;
    ::jdk::internal::module::ModuleResolution* moduleResolution$ = nullptr;
    $bytes* cachedHash = nullptr;
    ::java::lang::module::ModuleReader* moduleReader = nullptr;
    int32_t hash = 0;
    void init$(::java::lang::module::ModuleDescriptor* descriptor, ::java::net::URI* location, ::java::lang::module::ModuleReader* moduleReader);
    virtual ::java::lang::module::ModuleReader* open() override;
    virtual bool isPatched() override;
    virtual ::jdk::internal::module::ModuleTarget* moduleTarget() override;
    virtual ::jdk::internal::module::ModuleHashes* recordedHashes() override;
    virtual ::jdk::internal::module::ModuleHashes$HashSupplier* hasher() override;
    virtual ::jdk::internal::module::ModuleResolution* moduleResolution() override;
    virtual $bytes* computeHash(::java::lang::String* algorithm) override;
    virtual int32_t hashCode() override;
    virtual bool equals(Object$* ob$OBJ) override;
    virtual ::java::lang::String* toString() override;
};

        } // module
    } // lang
} // java

#endif // _java_lang_module_RuntimeModuleReference_h_