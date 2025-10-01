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

#ifndef _java_lang_ObjectManagerStat_h_
#define _java_lang_ObjectManagerStat_h_

#include <java/lang/Object.h>
#include <java/lang/Array.h>
#include <java/lang/Logger.h>

#include <atomic>
#include <stdio.h>
#include <inttypes.h>

namespace java {
	namespace lang {

class LocalControllerStat {
public:
	int64_t allocCount = 0;
	int64_t allocSize = 0;

	int64_t freeCount = 0;
	int64_t freeSize = 0;

	int64_t allocAllocaterCount = 0;
	int64_t freeAllocaterCount = 0;

	int64_t gcCount = 0;
	int64_t gcNs = 0;
	int64_t gcStopNs = 0;
	int64_t gcRealStopNs = 0;

	void clear() {
		allocCount = 0;
		allocSize = 0;

		freeCount = 0;
		freeSize = 0;

		allocAllocaterCount = 0;
		freeAllocaterCount = 0;

		gcCount = 0;
		gcNs = 0;
		gcStopNs = 0;
		gcRealStopNs = 0;
	}
	void add(const LocalControllerStat& stat) {
		allocCount += stat.allocCount;
		allocSize += stat.allocSize;

		freeCount += stat.freeCount;
		freeSize += stat.freeSize;

		allocAllocaterCount += stat.allocAllocaterCount;
		freeAllocaterCount += stat.freeAllocaterCount;

		gcCount += stat.gcCount;
		gcNs += stat.gcNs;
		gcStopNs += stat.gcStopNs;
		gcRealStopNs += stat.gcRealStopNs;
	}

	void print(const char* prefix) {
		log_info("%s alloc(%" PRId64 ", %" PRId64 ", %" PRId64 ") free(%" PRId64 ", %" PRId64 ", %" PRId64 ")"
			" gc(%" PRId64 ", %.3lfms stop:%.3lfms/%.3lfms)\n", prefix,
			allocCount, allocSize, allocAllocaterCount, freeCount, freeSize, freeAllocaterCount,
			gcCount, gcNs / 1000000.0, gcStopNs / 1000000.0, gcRealStopNs / 1000000.0);
	}

	void alloc(int64_t size) {
		allocCount++;
		allocSize += size;
	}

	void free(int64_t size) {
		freeCount++;
		freeSize += size;
	}
	void free(int64_t count, int64_t size) {
		freeCount += count;
		freeSize += size;
	}
	void allocAllocater() {
		allocAllocaterCount++;
	}

	void freeAllocater() {
		freeAllocaterCount++;
	}

	void gc(int64_t ns, int64_t stopNs, int64_t realStopNS) {
		gcCount++;
		gcNs += ns;
		gcStopNs += stopNs;
		gcRealStopNs += realStopNS;
	}
};

class GlobalControllerStat {
public:
	int64_t allocCount = 0;
	int64_t allocSize = 0;

	int64_t freeCount = 0;
	int64_t freeSize = 0;

	int64_t gcCount = 0;
	int64_t gcNs = 0;
	int64_t gcStopNs = 0;
	int64_t gcRealStopNs = 0;

	int64_t allocAllocaterCount = 0;
	int64_t freeAllocaterCount = 0;

	void add(const GlobalControllerStat& stat) {
		allocCount += stat.allocCount;
		allocSize += stat.allocSize;

		freeCount += stat.freeCount;
		freeSize += stat.freeSize;

		gcCount += stat.gcCount;
		gcNs += stat.gcNs;
		gcStopNs += stat.gcStopNs;
		gcRealStopNs += stat.gcRealStopNs;

		allocAllocaterCount += stat.allocAllocaterCount;
		freeAllocaterCount += stat.freeAllocaterCount;
	}

	void print() {
		log_info("alloc(%" PRId64 ", %" PRId64 ") free(%" PRId64 ", %" PRId64 ") allocater(%" PRId64 ", %" PRId64 ")"
			" gc(%" PRId64 ", %.3lfms stop:%.3lfms/%.3lfms)\n",
			allocCount, allocSize, freeCount, freeSize, allocAllocaterCount, freeAllocaterCount,
			gcCount, gcNs / 10000000.0, gcStopNs / 1000000.0, gcRealStopNs / 1000000.0);
	}

	void alloc(int64_t size) {
		allocCount++;
		allocSize += size;
	}

	void free(int64_t size) {
		freeCount++;
		freeSize += size;
	}

	void gc(int64_t ns, int64_t stopNs, int64_t realStopNs) {
		gcCount++;
		gcNs += ns;
		gcStopNs += stopNs;
		gcRealStopNs += realStopNs;
	}

	void allocAllocater() {
		allocAllocaterCount++;
	}

	void freeAllocater() {
		freeAllocaterCount++;
	}
};

	} // lang
} // java

#endif // _java_lang_ObjectManagerStat_h_