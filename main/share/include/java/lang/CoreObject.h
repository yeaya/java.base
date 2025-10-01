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

#ifndef _java_lang_CoreObject_h_
#define _java_lang_CoreObject_h_

#include <java/lang/def.h>
#include <new>

namespace java {
    namespace lang {

class $import CoreObject {
public:
    CoreObject() {}
    CoreObject(CoreObject const&) = delete;
    CoreObject& operator=(CoreObject const&) = delete;
    virtual ~CoreObject() {}
    virtual void destroy();
    void* operator new(::std::size_t size);
    void* operator new(::std::size_t size, const ::std::nothrow_t&) throw();
    void* operator new[](::std::size_t size) throw();
    void* operator new[](::std::size_t size, const ::std::nothrow_t&) throw();
    void operator delete(void* p);
    void operator delete[](void* p);
};

    } // lang
} // java

#endif // _java_lang_CoreObject_h_