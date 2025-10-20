#include <java/lang/StackStreamFactory$StackFrameTraverser.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackFrameInfo.h>
#include <java/lang/StackStreamFactory$AbstractStackWalker.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>
#include <java/lang/StackStreamFactory$StackFrameTraverser$StackFrameBuffer.h>
#include <java/lang/StackStreamFactory$WalkerState.h>
#include <java/lang/StackStreamFactory.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

#undef CHARACTERISTICS
#undef OPEN

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackFrameInfo = ::java::lang::StackFrameInfo;
using $StackStreamFactory = ::java::lang::StackStreamFactory;
using $StackStreamFactory$AbstractStackWalker = ::java::lang::StackStreamFactory$AbstractStackWalker;
using $StackStreamFactory$FrameBuffer = ::java::lang::StackStreamFactory$FrameBuffer;
using $StackStreamFactory$StackFrameTraverser$StackFrameBuffer = ::java::lang::StackStreamFactory$StackFrameTraverser$StackFrameBuffer;
using $StackStreamFactory$WalkerState = ::java::lang::StackStreamFactory$WalkerState;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace java {
	namespace lang {

$FieldInfo _StackStreamFactory$StackFrameTraverser_FieldInfo_[] = {
	{"CHARACTERISTICS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StackStreamFactory$StackFrameTraverser, CHARACTERISTICS)},
	{"function", "Ljava/util/function/Function;", "Ljava/util/function/Function<-Ljava/util/stream/Stream<Ljava/lang/StackWalker$StackFrame;>;+TT;>;", $FINAL, $field(StackStreamFactory$StackFrameTraverser, function)},
	{}
};

$MethodInfo _StackStreamFactory$StackFrameTraverser_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/StackWalker;Ljava/util/function/Function;)V", "(Ljava/lang/StackWalker;Ljava/util/function/Function<-Ljava/util/stream/Stream<Ljava/lang/StackWalker$StackFrame;>;+TT;>;)V", 0, $method(static_cast<void(StackStreamFactory$StackFrameTraverser::*)($StackWalker*,$Function*)>(&StackStreamFactory$StackFrameTraverser::init$))},
	{"<init>", "(Ljava/lang/StackWalker;Ljava/util/function/Function;I)V", "(Ljava/lang/StackWalker;Ljava/util/function/Function<-Ljava/util/stream/Stream<Ljava/lang/StackWalker$StackFrame;>;+TT;>;I)V", 0, $method(static_cast<void(StackStreamFactory$StackFrameTraverser::*)($StackWalker*,$Function*,int32_t)>(&StackStreamFactory$StackFrameTraverser::init$))},
	{"batchSize", "(I)I", nullptr, $PROTECTED},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"consumeFrames", "()Ljava/lang/Object;", "()TT;", $PROTECTED},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/StackWalker$StackFrame;>;)V", $PUBLIC},
	{"initFrameBuffer", "()V", nullptr, $PROTECTED},
	{"nextStackFrame", "()Ljava/lang/StackWalker$StackFrame;", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/lang/StackWalker$StackFrame;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/lang/StackWalker$StackFrame;>;", $PUBLIC},
	{}
};

$InnerClassInfo _StackStreamFactory$StackFrameTraverser_InnerClassesInfo_[] = {
	{"java.lang.StackStreamFactory$StackFrameTraverser", "java.lang.StackStreamFactory", "StackFrameTraverser", $STATIC},
	{"java.lang.StackStreamFactory$AbstractStackWalker", "java.lang.StackStreamFactory", "AbstractStackWalker", $STATIC | $ABSTRACT},
	{"java.lang.StackStreamFactory$StackFrameTraverser$StackFrameBuffer", "java.lang.StackStreamFactory$StackFrameTraverser", "StackFrameBuffer", $FINAL},
	{"java.lang.StackWalker$StackFrame", "java.lang.StackWalker", "StackFrame", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StackStreamFactory$StackFrameTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.StackStreamFactory$StackFrameTraverser",
	"java.lang.StackStreamFactory$AbstractStackWalker",
	"java.util.Spliterator",
	_StackStreamFactory$StackFrameTraverser_FieldInfo_,
	_StackStreamFactory$StackFrameTraverser_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/StackStreamFactory$AbstractStackWalker<TT;Ljava/lang/StackFrameInfo;>;Ljava/util/Spliterator<Ljava/lang/StackWalker$StackFrame;>;",
	nullptr,
	_StackStreamFactory$StackFrameTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackStreamFactory"
};

$Object* allocate$StackStreamFactory$StackFrameTraverser($Class* clazz) {
	return $of($alloc(StackStreamFactory$StackFrameTraverser));
}

int32_t StackStreamFactory$StackFrameTraverser::hashCode() {
	 return this->$StackStreamFactory$AbstractStackWalker::hashCode();
}

bool StackStreamFactory$StackFrameTraverser::equals(Object$* obj) {
	 return this->$StackStreamFactory$AbstractStackWalker::equals(obj);
}

$Object* StackStreamFactory$StackFrameTraverser::clone() {
	 return this->$StackStreamFactory$AbstractStackWalker::clone();
}

$String* StackStreamFactory$StackFrameTraverser::toString() {
	 return this->$StackStreamFactory$AbstractStackWalker::toString();
}

void StackStreamFactory$StackFrameTraverser::finalize() {
	this->$StackStreamFactory$AbstractStackWalker::finalize();
}

void StackStreamFactory$StackFrameTraverser::init$($StackWalker* walker, $Function* function) {
	StackStreamFactory$StackFrameTraverser::init$(walker, function, 0);
}

void StackStreamFactory$StackFrameTraverser::init$($StackWalker* walker, $Function* function, int32_t mode) {
	$StackStreamFactory$AbstractStackWalker::init$(walker, mode);
	$set(this, function, function);
}

$StackWalker$StackFrame* StackStreamFactory$StackFrameTraverser::nextStackFrame() {
	if (!hasNext()) {
		return nullptr;
	}
	$var($StackFrameInfo, frame, $cast($StackFrameInfo, $nc(this->frameBuffer)->nextStackFrame()));
	++this->depth;
	return frame;
}

$Object* StackStreamFactory$StackFrameTraverser::consumeFrames() {
	$init($StackStreamFactory$WalkerState);
	checkState($StackStreamFactory$WalkerState::OPEN);
	$var($Stream, stream, $StreamSupport::stream(this, false));
	if (this->function != nullptr) {
		return $of($nc(this->function)->apply(stream));
	} else {
		$throwNew($UnsupportedOperationException);
	}
}

void StackStreamFactory$StackFrameTraverser::initFrameBuffer() {
	$set(this, frameBuffer, $new($StackStreamFactory$StackFrameTraverser$StackFrameBuffer, this, getNextBatchSize()));
}

int32_t StackStreamFactory$StackFrameTraverser::batchSize(int32_t lastBatchFrameCount) {
	if (lastBatchFrameCount == 0) {
		int32_t initialBatchSize = $Math::max($nc(this->walker)->estimateDepth(), 8);
		return $Math::min(initialBatchSize, 256);
	} else if (lastBatchFrameCount > 32) {
		return lastBatchFrameCount;
	} else {
		return $Math::min(lastBatchFrameCount * 2, 32);
	}
}

$Spliterator* StackStreamFactory$StackFrameTraverser::trySplit() {
	return nullptr;
}

int64_t StackStreamFactory$StackFrameTraverser::estimateSize() {
	return this->maxDepth;
}

int32_t StackStreamFactory$StackFrameTraverser::characteristics() {
	return StackStreamFactory$StackFrameTraverser::CHARACTERISTICS;
}

void StackStreamFactory$StackFrameTraverser::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$init($StackStreamFactory$WalkerState);
	checkState($StackStreamFactory$WalkerState::OPEN);
	for (int32_t n = 0; n < this->maxDepth; ++n) {
		$var($StackWalker$StackFrame, frame, nextStackFrame());
		if (frame == nullptr) {
			break;
		}
		$nc(action)->accept(frame);
	}
}

bool StackStreamFactory$StackFrameTraverser::tryAdvance($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	$init($StackStreamFactory$WalkerState);
	checkState($StackStreamFactory$WalkerState::OPEN);
	int32_t index = $nc(this->frameBuffer)->getIndex();
	if (hasNext()) {
		$var($StackWalker$StackFrame, frame, nextStackFrame());
		$nc(action)->accept(frame);
		$init($StackStreamFactory);
		if ($StackStreamFactory::isDebug) {
			$init($System);
			$nc($System::err)->println($$str({"tryAdvance: "_s, $$str(index), " "_s, frame}));
		}
		return true;
	}
	$init($StackStreamFactory);
	if ($StackStreamFactory::isDebug) {
		$init($System);
		$nc($System::err)->println($$str({"tryAdvance: "_s, $$str(index), " NO element"_s}));
	}
	return false;
}

void clinit$StackStreamFactory$StackFrameTraverser($Class* class$) {
	{
		$init($StackStreamFactory);
		$nc($StackStreamFactory::stackWalkImplClasses)->add(StackStreamFactory$StackFrameTraverser::class$);
	}
}

StackStreamFactory$StackFrameTraverser::StackStreamFactory$StackFrameTraverser() {
}

$Class* StackStreamFactory$StackFrameTraverser::load$($String* name, bool initialize) {
	$loadClass(StackStreamFactory$StackFrameTraverser, name, initialize, &_StackStreamFactory$StackFrameTraverser_ClassInfo_, clinit$StackStreamFactory$StackFrameTraverser, allocate$StackStreamFactory$StackFrameTraverser);
	return class$;
}

$Class* StackStreamFactory$StackFrameTraverser::class$ = nullptr;

	} // lang
} // java