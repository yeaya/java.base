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

#include "MacosxSemaphore.h"
#include "OS.h"
#include "debug.h"

#include <semaphore.h>
#include <mach/mach.h>

MacosxSemaphore::MacosxSemaphore(uint value) {
	kern_return_t ret = semaphore_create(mach_task_self(), &semaphore, SYNC_POLICY_FIFO, value);
	if (ret != KERN_SUCCESS) {
		const char* error = "Unknown";
		switch (ret) {
		case KERN_INVALID_ARGUMENT:
			error = "Invalid argument";
		case KERN_RESOURCE_SHORTAGE:
			error = "Resource shortage";
		default:
			break;
		}
		guarantee(false, "Failed to create semaphore: %s", error);
	}
}

MacosxSemaphore::~MacosxSemaphore() {
	semaphore_destroy(mach_task_self(), semaphore);
}

void MacosxSemaphore::signal(uint count) {
	for (uint i = 0; i < count; i++) {
		kern_return_t ret = semaphore_signal(semaphore);
	}
}

void MacosxSemaphore::wait() {
	kern_return_t ret;
	while ((ret = semaphore_wait(semaphore)) == KERN_ABORTED) {
		// retry.
	}
}

bool MacosxSemaphore::trywait() {
	return timedwait(0);
}

bool MacosxSemaphore::timedwait(int64_t millis) {
	// relative timeout
	mach_timespec_t waitspec;
	int secs = millis / MILLISEC_PER_SEC;
	int nsecs = millisToNanos(millis % MILLISEC_PER_SEC);
	waitspec.tv_sec = secs;
	waitspec.tv_nsec = nsecs;

	int64_t starttime = OS::getTimeNanos();

	kern_return_t ret = semaphore_timedwait(semaphore, waitspec);
	while (ret == KERN_ABORTED) {
		// reduce the timout and try again
		int64_t totalwait = millisToNanos(millis);
		int64_t current = OS::getTimeNanos();
		int64_t passedtime = current - starttime;

		if (passedtime >= totalwait) {
			waitspec.tv_sec = 0;
			waitspec.tv_nsec = 0;
		} else {
			int64_t waittime = totalwait - (current - starttime);
			waitspec.tv_sec = waittime / NANOSECS_PER_SEC;
			waitspec.tv_nsec = waittime % NANOSECS_PER_SEC;
		}

		ret = semaphore_timedwait(semaphore, waitspec);
	}

	return ret == KERN_SUCCESS;
}