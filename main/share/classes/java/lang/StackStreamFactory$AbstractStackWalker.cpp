#include <java/lang/StackStreamFactory$AbstractStackWalker.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/StackStreamFactory$1.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>
#include <java/lang/StackStreamFactory$WalkerState.h>
#include <java/lang/StackStreamFactory.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

#include "StackWalk.h"

#undef MAX_VALUE
#undef NEW
#undef SHOW_HIDDEN_FRAMES
#undef SHOW_REFLECT_FRAMES

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackStreamFactory = ::java::lang::StackStreamFactory;
using $StackStreamFactory$1 = ::java::lang::StackStreamFactory$1;
using $StackStreamFactory$FrameBuffer = ::java::lang::StackStreamFactory$FrameBuffer;
using $StackStreamFactory$WalkerState = ::java::lang::StackStreamFactory$WalkerState;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;

namespace java {
	namespace lang {

$FieldInfo _StackStreamFactory$AbstractStackWalker_FieldInfo_[] = {
	{"walker", "Ljava/lang/StackWalker;", nullptr, $PROTECTED | $FINAL, $field(StackStreamFactory$AbstractStackWalker, walker)},
	{"thread", "Ljava/lang/Thread;", nullptr, $PROTECTED | $FINAL, $field(StackStreamFactory$AbstractStackWalker, thread)},
	{"maxDepth", "I", nullptr, $PROTECTED | $FINAL, $field(StackStreamFactory$AbstractStackWalker, maxDepth)},
	{"mode", "J", nullptr, $PROTECTED | $FINAL, $field(StackStreamFactory$AbstractStackWalker, mode)},
	{"depth", "I", nullptr, $PROTECTED, $field(StackStreamFactory$AbstractStackWalker, depth)},
	{"frameBuffer", "Ljava/lang/StackStreamFactory$FrameBuffer;", "Ljava/lang/StackStreamFactory$FrameBuffer<+TT;>;", $PROTECTED, $field(StackStreamFactory$AbstractStackWalker, frameBuffer)},
	{"anchor", "J", nullptr, $PROTECTED, $field(StackStreamFactory$AbstractStackWalker, anchor)},
	{}
};

$MethodInfo _StackStreamFactory$AbstractStackWalker_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StackWalker;I)V", nullptr, $PROTECTED, $method(StackStreamFactory$AbstractStackWalker, init$, void, $StackWalker*, int32_t)},
	{"<init>", "(Ljava/lang/StackWalker;II)V", nullptr, $PROTECTED, $method(StackStreamFactory$AbstractStackWalker, init$, void, $StackWalker*, int32_t, int32_t)},
	{"batchSize", "(I)I", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(StackStreamFactory$AbstractStackWalker, batchSize, int32_t, int32_t)},
	{"beginStackWalk", "()Ljava/lang/Object;", "()TR;", $PRIVATE, $method(StackStreamFactory$AbstractStackWalker, beginStackWalk, $Object*)},
	{"callStackWalk", "(JIII[Ljava/lang/Object;)Ljava/lang/Object;", "(JIII[TT;)TR;", $PRIVATE | $NATIVE, $method(StackStreamFactory$AbstractStackWalker, callStackWalk, $Object*, int64_t, int32_t, int32_t, int32_t, $ObjectArray*)},
	{"checkState", "(Ljava/lang/StackStreamFactory$WalkerState;)V", nullptr, $FINAL, $method(StackStreamFactory$AbstractStackWalker, checkState, void, $StackStreamFactory$WalkerState*)},
	{"close", "()V", nullptr, $PRIVATE, $method(StackStreamFactory$AbstractStackWalker, close, void)},
	{"consumeFrames", "()Ljava/lang/Object;", "()TR;", $PROTECTED | $ABSTRACT, $virtualMethod(StackStreamFactory$AbstractStackWalker, consumeFrames, $Object*)},
	{"doStackWalk", "(JIIII)Ljava/lang/Object;", nullptr, $PRIVATE, $method(StackStreamFactory$AbstractStackWalker, doStackWalk, $Object*, int64_t, int32_t, int32_t, int32_t, int32_t)},
	{"fetchStackFrames", "(I)I", nullptr, $PRIVATE, $method(StackStreamFactory$AbstractStackWalker, fetchStackFrames, int32_t, int32_t)},
	{"fetchStackFrames", "(JJII[Ljava/lang/Object;)I", "(JJII[TT;)I", $PRIVATE | $NATIVE, $method(StackStreamFactory$AbstractStackWalker, fetchStackFrames, int32_t, int64_t, int64_t, int32_t, int32_t, $ObjectArray*)},
	{"getNextBatch", "()I", nullptr, $PRIVATE, $method(StackStreamFactory$AbstractStackWalker, getNextBatch, int32_t)},
	{"getNextBatchSize", "()I", nullptr, $PROTECTED, $virtualMethod(StackStreamFactory$AbstractStackWalker, getNextBatchSize, int32_t)},
	{"hasNext", "()Z", nullptr, $FINAL, $method(StackStreamFactory$AbstractStackWalker, hasNext, bool)},
	{"initFrameBuffer", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(StackStreamFactory$AbstractStackWalker, initFrameBuffer, void)},
	{"nextFrame", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $FINAL, $method(StackStreamFactory$AbstractStackWalker, nextFrame, $Class*)},
	{"peekFrame", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $FINAL, $method(StackStreamFactory$AbstractStackWalker, peekFrame, $Class*)},
	{"skipReflectionFrames", "()Z", nullptr, $PRIVATE, $method(StackStreamFactory$AbstractStackWalker, skipReflectionFrames, bool)},
	{"toStackWalkMode", "(Ljava/lang/StackWalker;I)I", nullptr, $PRIVATE, $method(StackStreamFactory$AbstractStackWalker, toStackWalkMode, int32_t, $StackWalker*, int32_t)},
	{"walk", "()Ljava/lang/Object;", "()TR;", $FINAL, $method(StackStreamFactory$AbstractStackWalker, walk, $Object*)},
	{}
};

#define _METHOD_INDEX_callStackWalk 4
#define _METHOD_INDEX_fetchStackFrames 10

$InnerClassInfo _StackStreamFactory$AbstractStackWalker_InnerClassesInfo_[] = {
	{"java.lang.StackStreamFactory$AbstractStackWalker", "java.lang.StackStreamFactory", "AbstractStackWalker", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StackStreamFactory$AbstractStackWalker_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.StackStreamFactory$AbstractStackWalker",
	"java.lang.Object",
	nullptr,
	_StackStreamFactory$AbstractStackWalker_FieldInfo_,
	_StackStreamFactory$AbstractStackWalker_MethodInfo_,
	"<R:Ljava/lang/Object;T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_StackStreamFactory$AbstractStackWalker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackStreamFactory"
};

$Object* allocate$StackStreamFactory$AbstractStackWalker($Class* clazz) {
	return $of($alloc(StackStreamFactory$AbstractStackWalker));
}

void StackStreamFactory$AbstractStackWalker::init$($StackWalker* walker, int32_t mode) {
	StackStreamFactory$AbstractStackWalker::init$(walker, mode, $Integer::MAX_VALUE);
}

void StackStreamFactory$AbstractStackWalker::init$($StackWalker* walker, int32_t mode, int32_t maxDepth) {
	$set(this, thread, $Thread::currentThread());
	this->mode = toStackWalkMode(walker, mode);
	$set(this, walker, walker);
	this->maxDepth = maxDepth;
	this->depth = 0;
}

int32_t StackStreamFactory$AbstractStackWalker::toStackWalkMode($StackWalker* walker, int32_t mode) {
	int32_t newMode = mode;
	$init($StackWalker$Option);
	if ($nc(walker)->hasOption($StackWalker$Option::SHOW_HIDDEN_FRAMES) && ((int32_t)(mode & (uint32_t)2)) != 2) {
		newMode |= 32;
	}
	if ($nc(walker)->hasLocalsOperandsOption()) {
		newMode |= 256;
	}
	return newMode;
}

int32_t StackStreamFactory$AbstractStackWalker::getNextBatchSize() {
	$useLocalCurrentObjectStackCache();
	int32_t lastBatchSize = this->depth == 0 ? 0 : $nc(this->frameBuffer)->curBatchFrameCount();
	int32_t nextBatchSize = batchSize(lastBatchSize);
	$init($StackStreamFactory);
	if ($StackStreamFactory::isDebug) {
		$nc($System::err)->println($$str({"last batch size = "_s, $$str(lastBatchSize), " next batch size = "_s, $$str(nextBatchSize)}));
	}
	return nextBatchSize >= 8 ? nextBatchSize : 8;
}

void StackStreamFactory$AbstractStackWalker::checkState($StackStreamFactory$WalkerState* state) {
	$useLocalCurrentObjectStackCache();
	if (this->thread != $Thread::currentThread()) {
		$var($String, var$0, $$str({"Invalid thread walking this stack stream: "_s, $($($Thread::currentThread())->getName()), " "_s}));
		$throwNew($IllegalStateException, $$concat(var$0, $($nc(this->thread)->getName())));
	}
	$init($StackStreamFactory$1);
	switch ($nc($StackStreamFactory$1::$SwitchMap$java$lang$StackStreamFactory$WalkerState)->get($nc((state))->ordinal())) {
	case 1:
		{
			if (this->anchor != 0) {
				$throwNew($IllegalStateException, "This stack stream is being reused."_s);
			}
			break;
		}
	case 2:
		{
			if (this->anchor == 0 || this->anchor == (int64_t)-1) {
				$throwNew($IllegalStateException, "This stack stream is not valid for walking."_s);
			}
			break;
		}
	case 3:
		{
			if (this->anchor != (int64_t)-1) {
				$throwNew($IllegalStateException, "This stack stream is not closed."_s);
			}
		}
	}
}

void StackStreamFactory$AbstractStackWalker::close() {
	this->anchor = -1;
}

$Object* StackStreamFactory$AbstractStackWalker::walk() {
	$useLocalCurrentObjectStackCache();
	$init($StackStreamFactory$WalkerState);
	checkState($StackStreamFactory$WalkerState::NEW);
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, beginStackWalk());
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool StackStreamFactory$AbstractStackWalker::skipReflectionFrames() {
	$init($StackWalker$Option);
	bool var$0 = !$nc(this->walker)->hasOption($StackWalker$Option::SHOW_REFLECT_FRAMES);
	return var$0 && !$nc(this->walker)->hasOption($StackWalker$Option::SHOW_HIDDEN_FRAMES);
}

$Class* StackStreamFactory$AbstractStackWalker::peekFrame() {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->frameBuffer)->isActive() && this->depth < this->maxDepth) {
		if ($nc(this->frameBuffer)->isEmpty()) {
			getNextBatch();
		} else {
			$Class* c = $nc(this->frameBuffer)->get();
			bool var$0 = skipReflectionFrames();
			if (var$0 && $StackStreamFactory::isReflectionFrame(c)) {
				$init($StackStreamFactory);
				if ($StackStreamFactory::isDebug) {
					$nc($System::err)->println($$str({"  skip: frame "_s, $$str($nc(this->frameBuffer)->getIndex()), " "_s, c}));
				}
				$nc(this->frameBuffer)->next();
				++this->depth;
				continue;
			} else {
				return c;
			}
		}
	}
	return nullptr;
}

$Object* StackStreamFactory$AbstractStackWalker::doStackWalk(int64_t anchor, int32_t skipFrames, int32_t batchSize, int32_t bufStartIndex, int32_t bufEndIndex) {
	$useLocalCurrentObjectStackCache();
	$init($StackStreamFactory$WalkerState);
	checkState($StackStreamFactory$WalkerState::NEW);
	$nc(this->frameBuffer)->check(skipFrames);
	$init($StackStreamFactory);
	if ($StackStreamFactory::isDebug) {
		$nc($System::err)->format("doStackWalk: skip %d start %d end %d%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(skipFrames))),
			$($of($Integer::valueOf(bufStartIndex))),
			$($of($Integer::valueOf(bufEndIndex)))
		}));
	}
	this->anchor = anchor;
	$nc(this->frameBuffer)->setBatch(this->depth, bufStartIndex, bufEndIndex);
	return $of(consumeFrames());
}

int32_t StackStreamFactory$AbstractStackWalker::getNextBatch() {
	int32_t nextBatchSize = $Math::min(this->maxDepth - this->depth, getNextBatchSize());
	if (!$nc(this->frameBuffer)->isActive() || nextBatchSize <= 0) {
		$init($StackStreamFactory);
		if ($StackStreamFactory::isDebug) {
			$nc($System::out)->format("  more stack walk done%n"_s, $$new($ObjectArray, 0));
		}
		$nc(this->frameBuffer)->freeze();
		return 0;
	}
	return fetchStackFrames(nextBatchSize);
}

$Class* StackStreamFactory$AbstractStackWalker::nextFrame() {
	if (!hasNext()) {
		return nullptr;
	}
	$Class* c = $nc(this->frameBuffer)->next();
	++this->depth;
	return c;
}

bool StackStreamFactory$AbstractStackWalker::hasNext() {
	return peekFrame() != nullptr;
}

$Object* StackStreamFactory$AbstractStackWalker::beginStackWalk() {
	initFrameBuffer();
	int64_t var$0 = this->mode;
	int32_t var$1 = $nc(this->frameBuffer)->curBatchFrameCount();
	int32_t var$2 = $nc(this->frameBuffer)->startIndex();
	return $of(callStackWalk(var$0, 0, var$1, var$2, $($nc(this->frameBuffer)->frames())));
}

int32_t StackStreamFactory$AbstractStackWalker::fetchStackFrames(int32_t batchSize) {
	$useLocalCurrentObjectStackCache();
	int32_t startIndex = $nc(this->frameBuffer)->startIndex();
	$nc(this->frameBuffer)->resize(startIndex, batchSize);
	int32_t endIndex = fetchStackFrames(this->mode, this->anchor, batchSize, startIndex, $($nc(this->frameBuffer)->frames()));
	$init($StackStreamFactory);
	if ($StackStreamFactory::isDebug) {
		$nc($System::out)->format("  more stack walk requesting %d got %d to %d frames%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(batchSize))),
			$($of($Integer::valueOf($nc(this->frameBuffer)->startIndex()))),
			$($of($Integer::valueOf(endIndex)))
		}));
	}
	int32_t numFrames = endIndex - startIndex;
	if (numFrames == 0) {
		$nc(this->frameBuffer)->freeze();
	} else {
		$nc(this->frameBuffer)->setBatch(this->depth, startIndex, endIndex);
	}
	return numFrames;
}

$Object* StackStreamFactory$AbstractStackWalker::callStackWalk(int64_t mode, int32_t skipframes, int32_t batchSize, int32_t startIndex, $ObjectArray* frames) {
	return ::StackWalk::walk(this, mode, skipframes, batchSize, startIndex, frames);
}

int32_t StackStreamFactory$AbstractStackWalker::fetchStackFrames(int64_t mode, int64_t anchor, int32_t batchSize, int32_t startIndex, $ObjectArray* frames) {
	return ::StackWalk::fetchNextBatch(this, mode, anchor, batchSize, startIndex, frames);
}

StackStreamFactory$AbstractStackWalker::StackStreamFactory$AbstractStackWalker() {
}

$Class* StackStreamFactory$AbstractStackWalker::load$($String* name, bool initialize) {
	$loadClass(StackStreamFactory$AbstractStackWalker, name, initialize, &_StackStreamFactory$AbstractStackWalker_ClassInfo_, allocate$StackStreamFactory$AbstractStackWalker);
	return class$;
}

$Class* StackStreamFactory$AbstractStackWalker::class$ = nullptr;

	} // lang
} // java