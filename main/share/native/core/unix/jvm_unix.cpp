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

#include "JavaThread.h"
#include "interfaceSupport.h"

JVM_ENTRY(void*, JVM_RegisterSignal(jint sig, void* handler))
	void* newHandler = handler == (void*)2 ? OS::getUserHandler()
		: handler;
	switch (sig) {
		// used by the VM
	case SIGFPE:
	case SIGILL:
	case SIGSEGV:

	#if defined(__APPLE__)
		// On Darwin, memory access errors commonly results in SIGBUS instead of SIGSEGV
	case SIGBUS:
	#endif

	case BREAK_SIGNAL:
		return (void*)-1;

	case SHUTDOWN1_SIGNAL:
	case SHUTDOWN2_SIGNAL:
	case SHUTDOWN3_SIGNAL:
		if (OS::Unix::isIgnoredSig(sig)) {
			return (void*)1;
		}
	}

	void* oldHandler = OS::signal(sig, newHandler);
	if (oldHandler == OS::getUserHandler()) {
		return (void*)2;
	} else {
		return oldHandler;
	}
JVM_END(nullptr)

JVM_ENTRY(jboolean, JVM_RaiseSignal(jint sig))
	if ((sig == SHUTDOWN1_SIGNAL || sig == SHUTDOWN2_SIGNAL || sig == SHUTDOWN3_SIGNAL) && OS::Unix::isIgnoredSig(sig)) {
		return JNI_FALSE;
	}
	OS::raiseSignal(sig);
	return JNI_TRUE;
JVM_END(JNI_FALSE)