#include <java/lang/StackStreamFactory$CallerClassFinder.h>

#include <java/lang/IllegalCallerException.h>
#include <java/lang/StackStreamFactory$AbstractStackWalker.h>
#include <java/lang/StackStreamFactory$CallerClassFinder$ClassBuffer.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>
#include <java/lang/StackStreamFactory$WalkerState.h>
#include <java/lang/StackStreamFactory.h>
#include <java/lang/StackWalker.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef OPEN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalCallerException = ::java::lang::IllegalCallerException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackStreamFactory = ::java::lang::StackStreamFactory;
using $StackStreamFactory$AbstractStackWalker = ::java::lang::StackStreamFactory$AbstractStackWalker;
using $StackStreamFactory$CallerClassFinder$ClassBuffer = ::java::lang::StackStreamFactory$CallerClassFinder$ClassBuffer;
using $StackStreamFactory$FrameBuffer = ::java::lang::StackStreamFactory$FrameBuffer;
using $StackStreamFactory$WalkerState = ::java::lang::StackStreamFactory$WalkerState;
using $StackWalker = ::java::lang::StackWalker;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {

$FieldInfo _StackStreamFactory$CallerClassFinder_FieldInfo_[] = {
	{"caller", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(StackStreamFactory$CallerClassFinder, caller)},
	{}
};

$MethodInfo _StackStreamFactory$CallerClassFinder_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StackWalker;)V", nullptr, 0, $method(StackStreamFactory$CallerClassFinder, init$, void, $StackWalker*)},
	{"batchSize", "(I)I", nullptr, $PROTECTED, $virtualMethod(StackStreamFactory$CallerClassFinder, batchSize, int32_t, int32_t)},
	{"consumeFrames", "()Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(StackStreamFactory$CallerClassFinder, consumeFrames, $Object*)},
	{"findCaller", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $method(StackStreamFactory$CallerClassFinder, findCaller, $Class*)},
	{"getNextBatchSize", "()I", nullptr, $PROTECTED, $virtualMethod(StackStreamFactory$CallerClassFinder, getNextBatchSize, int32_t)},
	{"initFrameBuffer", "()V", nullptr, $PROTECTED, $virtualMethod(StackStreamFactory$CallerClassFinder, initFrameBuffer, void)},
	{}
};

$InnerClassInfo _StackStreamFactory$CallerClassFinder_InnerClassesInfo_[] = {
	{"java.lang.StackStreamFactory$CallerClassFinder", "java.lang.StackStreamFactory", "CallerClassFinder", $STATIC | $FINAL},
	{"java.lang.StackStreamFactory$AbstractStackWalker", "java.lang.StackStreamFactory", "AbstractStackWalker", $STATIC | $ABSTRACT},
	{"java.lang.StackStreamFactory$CallerClassFinder$ClassBuffer", "java.lang.StackStreamFactory$CallerClassFinder", "ClassBuffer", $STATIC | $FINAL},
	{}
};

$ClassInfo _StackStreamFactory$CallerClassFinder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StackStreamFactory$CallerClassFinder",
	"java.lang.StackStreamFactory$AbstractStackWalker",
	nullptr,
	_StackStreamFactory$CallerClassFinder_FieldInfo_,
	_StackStreamFactory$CallerClassFinder_MethodInfo_,
	"Ljava/lang/StackStreamFactory$AbstractStackWalker<Ljava/lang/Integer;Ljava/lang/Class<*>;>;",
	nullptr,
	_StackStreamFactory$CallerClassFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackStreamFactory"
};

$Object* allocate$StackStreamFactory$CallerClassFinder($Class* clazz) {
	return $of($alloc(StackStreamFactory$CallerClassFinder));
}

void StackStreamFactory$CallerClassFinder::init$($StackWalker* walker) {
	$StackStreamFactory$AbstractStackWalker::init$(walker, 2 | 4);
}

$Class* StackStreamFactory$CallerClassFinder::findCaller() {
	walk();
	return this->caller;
}

$Object* StackStreamFactory$CallerClassFinder::consumeFrames() {
	$init($StackStreamFactory$WalkerState);
	checkState($StackStreamFactory$WalkerState::OPEN);
	int32_t n = 0;
	$var($ClassArray, frames, $new($ClassArray, 2));
	while (n < 2 && ($set(this, caller, nextFrame())) != nullptr) {
		if ($StackStreamFactory::isMethodHandleFrame(this->caller)) {
			continue;
		}
		if ($StackStreamFactory::isReflectionFrame(this->caller)) {
			continue;
		}
		frames->set(n++, this->caller);
	}
	if (frames->get(1) == nullptr) {
		$throwNew($IllegalCallerException, "no caller frame"_s);
	}
	return $of($Integer::valueOf(n));
}

void StackStreamFactory$CallerClassFinder::initFrameBuffer() {
	$set(this, frameBuffer, $new($StackStreamFactory$CallerClassFinder$ClassBuffer, getNextBatchSize()));
}

int32_t StackStreamFactory$CallerClassFinder::batchSize(int32_t lastBatchFrameCount) {
	return 8;
}

int32_t StackStreamFactory$CallerClassFinder::getNextBatchSize() {
	return 8;
}

void clinit$StackStreamFactory$CallerClassFinder($Class* class$) {
	{
		$init($StackStreamFactory);
		$nc($StackStreamFactory::stackWalkImplClasses)->add(StackStreamFactory$CallerClassFinder::class$);
	}
}

StackStreamFactory$CallerClassFinder::StackStreamFactory$CallerClassFinder() {
}

$Class* StackStreamFactory$CallerClassFinder::load$($String* name, bool initialize) {
	$loadClass(StackStreamFactory$CallerClassFinder, name, initialize, &_StackStreamFactory$CallerClassFinder_ClassInfo_, clinit$StackStreamFactory$CallerClassFinder, allocate$StackStreamFactory$CallerClassFinder);
	return class$;
}

$Class* StackStreamFactory$CallerClassFinder::class$ = nullptr;

	} // lang
} // java