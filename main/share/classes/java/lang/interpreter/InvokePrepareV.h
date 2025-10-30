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
	int64_t xmmArgs[3];
	xmmArgs[0] = _java_lang_ByteCodeObject_readxmm1();
	xmmArgs[1] = _java_lang_ByteCodeObject_readxmm2();
	xmmArgs[2] = _java_lang_ByteCodeObject_readxmm3();
#else // ref https://www.systutorials.com/x86-64-calling-convention-by-gcc/
      __asm__ __volatile__("movq %%r10, %0" : "=r"(methodIndex));
    int64_t xmmArgs[8];// = {};
    __asm__ __volatile__("movq %%xmm0, %0" : "=r"(xmmArgs[0]));
    __asm__ __volatile__("movq %%xmm1, %0" : "=r"(xmmArgs[1]));
    __asm__ __volatile__("movq %%xmm2, %0" : "=r"(xmmArgs[2]));
    __asm__ __volatile__("movq %%xmm3, %0" : "=r"(xmmArgs[3]));
    __asm__ __volatile__("movq %%xmm4, %0" : "=r"(xmmArgs[4]));
    __asm__ __volatile__("movq %%xmm5, %0" : "=r"(xmmArgs[5]));
    __asm__ __volatile__("movq %%xmm6, %0" : "=r"(xmmArgs[6]));
    __asm__ __volatile__("movq %%xmm7, %0" : "=r"(xmmArgs[7]));
    // can not call any function before there, since it will reset xmm register, {} init will call memset in clang
#endif
	VfptrInfo* vfptrInfo = getVfptrInfo(THIS);
	Method* method = $fcast<Method>(vfptrInfo->forwardMethods->get((int32_t)methodIndex));
	$ClassArray* typeArray = method->getSharedParameterTypes();
    int32_t typesLength = typeArray->length;
    Class** types = (Class**)typeArray->begin();
    $Value argv[MAX_VAR_UNION_LENGTH] = {};

    va_list vargs;
    va_start(vargs, THIS);

    int xmmIndex = 0;
	for (int32_t index = 0; index < typesLength; index++) {
		Class* argType = types[index];
#ifdef _WIN64
		prepareArg(argType, vargs, index, argv, xmmArgs);
#else // linux
        if (argType->isPrimitive()) {
            if (argType == Integer::TYPE) {
                int32_t arg = va_arg(vargs, int32_t);
                argv[index] = arg;
            } else if (argType == Boolean::TYPE) {
                bool arg = (bool)va_arg(vargs, int32_t);
                argv[index] = arg;
            } else if (argType == Long::TYPE) {
                int64_t arg = va_arg(vargs, int64_t);
                argv[index] = arg;
            } else if (argType == Byte::TYPE) {
                int8_t arg = (int8_t)va_arg(vargs, int32_t);
                argv[index] = arg;
            } else if (argType == Short::TYPE) {
                int16_t arg = (int16_t)va_arg(vargs, int32_t);
                argv[index] = arg;
            } else if (argType == Character::TYPE) {
                char16_t arg = (char16_t)va_arg(vargs, uint32_t);
                argv[index] = arg;
            } else if (argType == Float::TYPE) {
                double argDouble = va_arg(vargs, double);
                int64_t argI64 = *(int64_t*)&argDouble;
                int32_t argI32 = (int32_t)argI64;
                float arg = *(float*)&argI32;
                if (xmmIndex < 8) {
                    int32_t i32 = (int32_t)xmmArgs[xmmIndex];
				    arg = *(float*)&i32;
                    xmmIndex++;
                }
                argv[index] = arg;
            } else if (argType == Double::TYPE) {
                double arg = (double)va_arg(vargs, double);
                if (xmmIndex < 8) {
                    int64_t i64 = xmmArgs[xmmIndex];
				    arg = *(double*)&i64;
                    xmmIndex++;
                }
                argv[index] = arg;
            }
        } else {
            Object* arg = va_arg(vargs, Object*);
            argv[index] = Class::cast0(argType, arg);
        }
#endif
	}
    va_end(vargs);

    $Value ret;
	try {
		ret = method->invokev(THIS, argv);
	} catch (InvocationTargetException& e) {
		$throw(e->target);
	}