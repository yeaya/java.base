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

	int64_t methodIndex;
#ifdef _WIN64 // refer windows x64 calling convention
	methodIndex = _java_lang_ByteCodeObject_readr10();
#else
	__asm__ __volatile__("movq %%r10, %0" : "=r"(methodIndex));
#endif
	VfptrInfo* vfptrInfo = getVfptrInfo(THIS);
	Method* method = $fcast<Method>(vfptrInfo->forwardMethods->get((int32_t)methodIndex));

	$Value ret;
	try {
		ret = method->invokev(THIS, nullptr);
	} catch (InvocationTargetException& e) {
		$throw(e->target);
	}