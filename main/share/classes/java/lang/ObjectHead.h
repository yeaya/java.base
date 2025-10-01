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

#ifndef _java_lang_ObjectHead_h_
#define _java_lang_ObjectHead_h_

#include <java/lang/Object.h>

//#define OBJECT_DEBUG
#ifndef OBJECT_DEBUG
	#ifdef _DEBUG
		//#define OBJECT_DEBUG
	#endif
#endif

//#define ENABLE_OBJECT_REF_COUNT

namespace java {
	namespace lang {

/*
	default(0): thread local object, only used in current thread only
	global: global object
*/

// MAIN FLAG
#define OBJECT_FLAG_GLOBAL (1)

// REF TYPE
#define OBJECT_FLAG_REF_TYPE_MASK 0xE
enum REF_TYPE {
	OBJECT_REF_TYPE_DEFAULT = 0,
	OBJECT_REF_TYPE_GLOBAL = (1 << 1), // used for JNI NewGlobalRef
	OBJECT_REF_TYPE_FINAL = (2 << 1),
	OBJECT_REF_TYPE_SOFT = (3 << 1),
	OBJECT_REF_TYPE_WEAK = (4 << 1),
	OBJECT_REF_TYPE_PHANTOM = (5 << 1)
};

// OPT FLAG
#define OBJECT_FLAG_STATIC (1 << 4)
#define OBJECT_FLAG_CONST (1 << 6) // const must combine with OBJECT_FLAG_GLOBAL
#define OBJECT_FLAG_MONITOR (1 << 7) // monitor object
#define OBJECT_FLAG_REF_PENDING (1 << 9)
#define OBJECT_FLAG_HAS_FINALIZE (1 << 10)
#define OBJECT_FLAG_HAS_FINALIZE_PENDING (1 << 11)
//#define OBJECT_FLAG_WAIT_TO_FREE (1 << 12)
#define OBJECT_FLAG_USED (1 << 13)
#define OBJECT_FLAG_INLINE (1 << 14)
#define OBJECT_FLAG_GLOBAL_REF (1 << 15) // used for JNI NewGlobalRef or NewWeakGlobalRef

//#define $USE_ATOMIC_FLAG // why? $USE_ATOMIC_FLAG is faster
//#ifdef $USE_ATOMIC_FLAG // runCases 275 169555ms
	//#define FlagsType ::std::atomic<int16_t>
	//#define hasFlagAtomic(x) ((flagsAtomic.load() & (x)) != 0)
	//#define setFlagAtomic(x) \
	//	while (true) { \
	//		int16_t oldFlags = flagsAtomic.load(); \
	//		if (flagsAtomic.compare_exchange_weak(oldFlags, oldFlags | (x))) { \
	//			break; \
	//		} \
	//	}
	//#define clearFlagAtomic(x) \
	//	while (true) { \
	//		int16_t oldFlags = flagsAtomic.load(); \
	//		if (flagsAtomic.compare_exchange_weak(oldFlags, oldFlags & ~(x))) { \
	//			break; \
	//		} \
	//	}
	//#define maskFlagAtomic(x) (flagsAtomic.load() & (x))
//#else // runCases 275 190829ms
	//#define FlagsType int16_t
	#define hasFlag(x) ((flags & (x)) != 0)
	#define setFlag(x) flags |= (x)
	#define clearFlag(x) flags &= ~(x)
	#define maskFlag(x) (flags & (x))
//#endif

#define OBJECT_HEAD_FLAG uint16_t
#define isGlobal0(flags) ((flags & (OBJECT_FLAG_GLOBAL)) != 0)
#define isRef0(flags) ((flags & (OBJECT_FLAG_REF_TYPE_MASK)) != 0)
#define isHasFinalize0(flags) ((flags & (OBJECT_FLAG_HAS_FINALIZE)) != 0)

// ObjectHead
class ObjectHead {
public:
	inline bool hasFlagAtomic(uint16_t x) {
		return ((flagsAtomic.load() & (x)) != 0);
	}
	inline void setFlagAtomic(uint16_t x) {
		uint16_t oldFlags = flagsAtomic.load(std::memory_order_relaxed);
		while (true) {
			if (flagsAtomic.compare_exchange_weak(oldFlags, oldFlags | (x), std::memory_order_release, std::memory_order_relaxed)) {
				break;
			}
		}
	}
	inline void clearFlagAtomic(uint16_t x) {
		uint16_t oldFlags = flagsAtomic.load(std::memory_order_relaxed);
		while (true) {
			if (flagsAtomic.compare_exchange_weak(oldFlags, oldFlags & ~(x), std::memory_order_release, std::memory_order_relaxed)) {
				break;
			}
		}
	}
	inline uint16_t maskFlagAtomic(uint16_t x) {
		return (flagsAtomic.load() & (x));
	}
	inline uint16_t getFlags() {
		return maskFlagAtomic(-1);
	}
	inline bool isGlobal() {
		return hasFlag(OBJECT_FLAG_GLOBAL);
	}
	inline void setGlobal() {
		setFlag(OBJECT_FLAG_GLOBAL);
	}

	inline bool isInline() {
		return hasFlag(OBJECT_FLAG_INLINE);
	}
	inline void setInline() {
		setFlag(OBJECT_FLAG_INLINE);
	}

	inline bool isStatic() {
		return hasFlag(OBJECT_FLAG_STATIC);
	}
	inline void setStatic() {
		setFlag(OBJECT_FLAG_STATIC);
	}

	inline bool isConst() {
		return hasFlag(OBJECT_FLAG_CONST);
	}
	inline void setConst() {
		setFlag(OBJECT_FLAG_CONST);
	}
	inline void setConstGlobal() {
		setFlag(OBJECT_FLAG_CONST | OBJECT_FLAG_GLOBAL);
	}

	inline bool isMonitor() {
		return hasFlagAtomic(OBJECT_FLAG_MONITOR);
	}
	inline void setMonitor() {
		setFlagAtomic(OBJECT_FLAG_MONITOR);
	}
	inline void clearMonitor() {
		clearFlagAtomic(OBJECT_FLAG_MONITOR);
	}

	inline bool isGlobalRef() {
		return hasFlagAtomic(OBJECT_FLAG_GLOBAL_REF);
	}
	inline void setGlobalRef() {
		setFlagAtomic(OBJECT_FLAG_GLOBAL_REF);
	}
	inline void clearGlobalRef() {
		clearFlagAtomic(OBJECT_FLAG_GLOBAL_REF);
	}

	inline bool isUsed() {
		return hasFlagAtomic(OBJECT_FLAG_USED);
	}
	inline void setUsed() {
		setFlagAtomic(OBJECT_FLAG_USED);
	}
	inline void clearUsed() {
		clearFlagAtomic(OBJECT_FLAG_USED);
	}

	inline bool isRef() {
		return hasFlag(OBJECT_FLAG_REF_TYPE_MASK);
	}
	inline int32_t getRefType() {
		return maskFlag(OBJECT_FLAG_REF_TYPE_MASK);
	}
	inline void setRefType(int32_t refType) {
		setFlag((refType & OBJECT_FLAG_REF_TYPE_MASK));
	}

	inline bool isRefPending() {
		return hasFlagAtomic(OBJECT_FLAG_REF_PENDING);
	}
	inline void setRefPending() {
		setFlagAtomic(OBJECT_FLAG_REF_PENDING);
	}
	inline void clearRefPending() {
		clearFlagAtomic(OBJECT_FLAG_REF_PENDING);
	}
	inline bool isHasFinalize() {
		return hasFlag(OBJECT_FLAG_HAS_FINALIZE);
	}
	inline void setHasFinalize() {
		setFlag(OBJECT_FLAG_HAS_FINALIZE);
	}
	inline void clearHasFinalize() {
		clearFlagAtomic(OBJECT_FLAG_HAS_FINALIZE);
	}
	inline bool isHasFinalizePending() {
		return hasFlagAtomic(OBJECT_FLAG_HAS_FINALIZE_PENDING);
	}
	inline void setHasFinalizePending() {
		setFlagAtomic(OBJECT_FLAG_HAS_FINALIZE_PENDING);
	}
	inline void clearHasFinalizePending() {
		clearFlagAtomic(OBJECT_FLAG_HAS_FINALIZE_PENDING);
	}
#ifdef ENABLE_OBJECT_REF_COUNT
	inline int32_t fetchAddLocalRefCount() {
		return refCount.local++;
	}
	inline int32_t fetchAddLocalRefCount(int32_t count) {
		return refCount.local += count;
	}
	inline int32_t fetchSubLocalRefCount() {
		return refCount.local--;
	}
	inline int32_t getLocalRefCount() {
		return refCount.local;
	}

	inline int32_t fetchAddGlobalRefCount() {
		return refCount.global++;
	}
	inline int32_t fetchAddGlobalRefCount(int32_t count) {
			return refCount.global += count;
		}
	inline int32_t fetchSubGlobalRefCount() {
		return refCount.global--;
	}
	inline int32_t getGlobalRefCount() {
		return refCount.global;
	}
#endif
	inline bool isReach(int8_t liveCode) {
		return this->reachCode == liveCode;
	}
	inline void setReach(int8_t liveCode) {
		this->reachCode = liveCode;
	}

	inline bool isLive(int8_t liveCode) {
		return this->liveCode == liveCode;
	}
	inline void setLive(int8_t liveCode) {
		this->liveCode = liveCode;
		this->reachCode = liveCode;
	}

#ifdef OBJECT_DEBUG
	void* unused; // avoid obj be clear in memorymanager
	//int64_t newTime;
	Object* obj;
	ObjectHead* ownerOH;
	int16_t ownerOHFlags;
	int16_t mask;
	int16_t ttl;
	int8_t markGobalLiveCode;
	int8_t newLiveCodeLocal;
	int8_t newLiveCodeGlobal;
	int8_t freeLiveCodeLocal;
	int8_t freeLiveCodeGlobal;
	int64_t opt;
	int64_t id;
	inline bool isDebug() {
		return mask != 0;
	}
	int64_t scanIndex;
	char* debug;
#endif
	union {
		uint16_t flags;
		::std::atomic<uint16_t> flagsAtomic;
	};
	//std::atomic<int8_t> liveCode;
	//std::atomic<int8_t> reachCode;
	int8_t liveCode;
	int8_t reachCode;
#ifdef ENABLE_OBJECT_REF_COUNT
	union {
		int32_t local;
		::std::atomic<int32_t> global;
	} refCount;
#endif
	ObjectHead* next;
	//::std::atomic<ObjectHead*> next;

	Class* clazz;
	intptr_t objectMonitor;
};

inline ::java::lang::ObjectHead* toOh(const ::java::lang::Object0* obj0) {
	return (::java::lang::ObjectHead*)((int8_t*)obj0 - sizeof(::java::lang::ObjectHead));
}

inline Object0* fromOh(ObjectHead* oh) {
	return (Object0*)((int8_t*)oh + sizeof(ObjectHead));
}

	} // lang
} // java

#endif // _java_lang_ObjectHead_h_