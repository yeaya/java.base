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

#ifndef _StackWalk_h_
#define _StackWalk_h_

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StackWalker;
		class StackStreamFactory$AbstractStackWalker;
		class Thread;
		class MethodStackItem;
		class StackTraceElement;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class AbstractStackWalker;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class BaseFrameStream {
private:
	enum {
		MAGIC_POS = 0
	};

	::java::lang::Thread* thread;
	int64_t anchor;
public:
	BaseFrameStream(::java::lang::Thread* thread) : thread(thread), anchor(0) {}

	virtual void next() = 0;
	virtual bool end() = 0;
	virtual ::java::lang::reflect::Method* method() = 0;

	virtual void fillFrame(int32_t index, $ObjectArray* frameArray) = 0;

	void setupMagic($ObjectArray* frameArray);
	bool checkMagic($ObjectArray* frameArray);
	bool cleanupMagic($ObjectArray* frameArray);

	bool isValid(::java::lang::Thread* thread, $ObjectArray* frameArray) {
		return (this->thread == thread && checkMagic(frameArray));
	}

	int64_t addressValue() {
		return (int64_t)(this);
	}

	static BaseFrameStream* fromCurrent(::java::lang::Thread* thread, int64_t magic, $ObjectArray* frameArray);
};

class StackWalk {
public:
	enum {
		STACKWALK_FILL_CLASS_REFS_ONLY = 0x2,
		STACKWALK_GET_CALLER_CLASS = 0x04,
		STACKWALK_SHOW_HIDDEN_FRAMES = 0x20,
		STACKWALK_FILL_LIVE_STACK_FRAMES = 0x100
	};

	static inline bool getCallerClass(int64_t mode) {
		return (mode & STACKWALK_GET_CALLER_CLASS) != 0;
	}
	static inline bool skipHiddenFrames(int64_t mode) {
		return (mode & STACKWALK_SHOW_HIDDEN_FRAMES) == 0;
	}
	static inline bool liveFrameInfo(int64_t mode) {
		return (mode & STACKWALK_FILL_LIVE_STACK_FRAMES) != 0;
	}

	static inline bool needMethodInfo(int64_t mode) {
		return (mode & STACKWALK_FILL_CLASS_REFS_ONLY) == 0;
	}
	static inline bool useFrameArray(int64_t mode) {
		return (mode & STACKWALK_FILL_CLASS_REFS_ONLY) == 0;
	}
	static void init();
	static ::java::lang::Object* walk(::java::lang::StackStreamFactory$AbstractStackWalker* walker, int64_t mode, int32_t skipframes, int32_t frameCount, int32_t startIndex, $ObjectArray* frames);

	static int fillInFrames(int64_t mode, BaseFrameStream& stream,
		int32_t max_nframes, int32_t start_index,
		$ObjectArray* frameArray,
		int32_t& end_index);

	static ::java::lang::Object* fetchFirstBatch(BaseFrameStream& stream,
		::java::lang::StackStreamFactory$AbstractStackWalker* walker,
		int64_t mode, int32_t skipFrames, int32_t frameCount,
		int32_t startIndex, $ObjectArray* framesArray);

	static int32_t fetchNextBatch(Object$* stackStream, int64_t mode, int64_t magic,
		int32_t frameCount, int32_t startIndex,
		$ObjectArray* framesArray);

	static $ClassArray* getClassContext();
	static ::java::lang::Class* getCallerClass();
	static ::java::lang::Class* getClassByName(const char* className);
	static void printStackTrace();
	static void fillInStackTrace(::java::lang::Throwable* throwable);
	static void initStackTraceElements($Array<::java::lang::StackTraceElement>* elements, ::java::lang::Throwable* x);
};

#endif // _StackWalk_h_