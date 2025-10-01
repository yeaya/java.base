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

#ifndef _core_OSThread_h_
#define _core_OSThread_h_

#include <java/lang/CoreObject.h>
#include "coreDef.h"

class JavaThread;

class OSThread : public ::java::lang::CoreObject {
public:
	enum State {
		CREATED,
		INITIALIZED,
		RUNNABLE
	};

	OSThread();
	~OSThread();

	static bool create(JavaThread* thread, int64_t reqStackSize);
	static bool createAttached(JavaThread* thread);
	static void free(OSThread* osThread);
	void start();
	void run(JavaThread* thread);
	void setInterrupted(bool flag);

#include OS_HEADER(OSThread)

private:
	void init0();
	void deinit0();
	void start0();
	void setState(State state) {
		this->state = state;
	}
	State getState() {
		return state;
	}
	void setThreadId(int64_t id) {
		threadId = id;
	}
	int64_t threadId;
	volatile State state;
};

#endif // _core_OSThread_h_