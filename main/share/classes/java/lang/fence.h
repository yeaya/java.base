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

#ifndef _java_lang_fence_h_
#define _java_lang_fence_h_
//$$

#include <atomic>

// fence   LoadStore  
//         StoreStore 
//         LoadLoad   
//         StoreLoad
//
// release LoadStore  
//         StoreStore
//
// acquire LoadLoad   
//         LoadStore

#define $loadload() ::std::atomic_thread_fence(::std::memory_order_acquire)
#define $storestore() ::std::atomic_thread_fence(::std::memory_order_release)
#define $loadstore() ::std::atomic_thread_fence(::std::memory_order_release)
#define $storeload() ::std::atomic_thread_fence(::std::memory_order_seq_cst)
#define $acquire() ::std::atomic_thread_fence(::std::memory_order_acquire)
#define $release() ::std::atomic_thread_fence(::std::memory_order_release)
#define $fence() ::std::atomic_thread_fence(::std::memory_order_seq_cst)
#define $loadfence() ::std::atomic_thread_fence(::std::memory_order_acquire)
#define $storefence() ::std::atomic_thread_fence(::std::memory_order_release)

#endif // _java_lang_fence_h_