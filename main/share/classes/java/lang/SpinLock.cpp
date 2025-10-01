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

#include <java/lang/SpinLock.h>
#include <thread>

namespace java {
	namespace lang {

void SpinLock::lock() {
	int value = 0;
	if (lockValue.compare_exchange_strong(value, 1)) {
		return;
	}
	int count = 0;
	int yieldCount = 0;
	while (true) {
		while (lockValue.load() != 0) {
			count++;
			if (count % 10000 == 0) {
				if (yieldCount > 0 && yieldCount % 5 == 0) {
					//OS::nanoSleep(1);
				} else {
					//OS::yield();
					std::this_thread::yield();
					yieldCount++;
				}
			} else {
				//OS::spinPause();
			}
		}
		value = 0;
		if (lockValue.compare_exchange_strong(value, 1)) {
			return;
		}
	}
}

void SpinLock::unlock() {
	lockValue.store(0);
}

	} // lang
} // java