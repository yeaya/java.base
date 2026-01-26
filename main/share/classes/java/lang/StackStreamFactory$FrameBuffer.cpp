#include <java/lang/StackStreamFactory$FrameBuffer.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/StackStreamFactory.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef START_POS

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackStreamFactory = ::java::lang::StackStreamFactory;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {

$FieldInfo _StackStreamFactory$FrameBuffer_FieldInfo_[] = {
	{"START_POS", "I", nullptr, $STATIC | $FINAL, $constField(StackStreamFactory$FrameBuffer, START_POS)},
	{"currentBatchSize", "I", nullptr, 0, $field(StackStreamFactory$FrameBuffer, currentBatchSize)},
	{"origin", "I", nullptr, 0, $field(StackStreamFactory$FrameBuffer, origin)},
	{"fence", "I", nullptr, 0, $field(StackStreamFactory$FrameBuffer, fence)},
	{}
};

$MethodInfo _StackStreamFactory$FrameBuffer_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(StackStreamFactory$FrameBuffer, init$, void, int32_t)},
	{"at", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $ABSTRACT, $virtualMethod(StackStreamFactory$FrameBuffer, at, $Class*, int32_t)},
	{"check", "(I)V", nullptr, $FINAL, $method(StackStreamFactory$FrameBuffer, check, void, int32_t)},
	{"curBatchFrameCount", "()I", nullptr, $FINAL, $method(StackStreamFactory$FrameBuffer, curBatchFrameCount, int32_t)},
	{"frames", "()[Ljava/lang/Object;", "()[TF;", $ABSTRACT, $virtualMethod(StackStreamFactory$FrameBuffer, frames, $ObjectArray*)},
	{"freeze", "()V", nullptr, $FINAL, $method(StackStreamFactory$FrameBuffer, freeze, void)},
	{"get", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $FINAL, $method(StackStreamFactory$FrameBuffer, get, $Class*)},
	{"getIndex", "()I", nullptr, $FINAL, $method(StackStreamFactory$FrameBuffer, getIndex, int32_t)},
	{"isActive", "()Z", nullptr, $FINAL, $method(StackStreamFactory$FrameBuffer, isActive, bool)},
	{"isEmpty", "()Z", nullptr, $FINAL, $method(StackStreamFactory$FrameBuffer, isEmpty, bool)},
	{"next", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $FINAL, $method(StackStreamFactory$FrameBuffer, next, $Class*)},
	{"nextStackFrame", "()Ljava/lang/Object;", "()TF;", 0, $virtualMethod(StackStreamFactory$FrameBuffer, nextStackFrame, $Object*)},
	{"resize", "(II)V", nullptr, $ABSTRACT, $virtualMethod(StackStreamFactory$FrameBuffer, resize, void, int32_t, int32_t)},
	{"setBatch", "(III)V", nullptr, $FINAL, $method(StackStreamFactory$FrameBuffer, setBatch, void, int32_t, int32_t, int32_t)},
	{"startIndex", "()I", nullptr, 0, $virtualMethod(StackStreamFactory$FrameBuffer, startIndex, int32_t)},
	{}
};

$InnerClassInfo _StackStreamFactory$FrameBuffer_InnerClassesInfo_[] = {
	{"java.lang.StackStreamFactory$FrameBuffer", "java.lang.StackStreamFactory", "FrameBuffer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StackStreamFactory$FrameBuffer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.StackStreamFactory$FrameBuffer",
	"java.lang.Object",
	nullptr,
	_StackStreamFactory$FrameBuffer_FieldInfo_,
	_StackStreamFactory$FrameBuffer_MethodInfo_,
	"<F:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_StackStreamFactory$FrameBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackStreamFactory"
};

$Object* allocate$StackStreamFactory$FrameBuffer($Class* clazz) {
	return $of($alloc(StackStreamFactory$FrameBuffer));
}

void StackStreamFactory$FrameBuffer::init$(int32_t initialBatchSize) {
	$useLocalCurrentObjectStackCache();
	if (initialBatchSize < 8) {
		$throwNew($IllegalArgumentException, $$str({$$str(initialBatchSize), " < minimum batch size: "_s, $$str(8)}));
	}
	this->origin = StackStreamFactory$FrameBuffer::START_POS;
	this->fence = 0;
	this->currentBatchSize = initialBatchSize;
}

int32_t StackStreamFactory$FrameBuffer::startIndex() {
	return StackStreamFactory$FrameBuffer::START_POS;
}

$Object* StackStreamFactory$FrameBuffer::nextStackFrame() {
	$throwNew($InternalError, "should not reach here"_s);
	$shouldNotReachHere();
}

int32_t StackStreamFactory$FrameBuffer::curBatchFrameCount() {
	return this->currentBatchSize - StackStreamFactory$FrameBuffer::START_POS;
}

bool StackStreamFactory$FrameBuffer::isEmpty() {
	return this->origin >= this->fence || (this->origin == StackStreamFactory$FrameBuffer::START_POS && this->fence == 0);
}

void StackStreamFactory$FrameBuffer::freeze() {
	this->origin = 0;
	this->fence = 0;
}

bool StackStreamFactory$FrameBuffer::isActive() {
	return this->origin > 0 && (this->fence == 0 || this->origin < this->fence || this->fence == this->currentBatchSize);
}

$Class* StackStreamFactory$FrameBuffer::next() {
	$useLocalCurrentObjectStackCache();
	if (isEmpty()) {
		$throwNew($NoSuchElementException, $$str({"origin="_s, $$str(this->origin), " fence="_s, $$str(this->fence)}));
	}
	$Class* c = at(this->origin);
	++this->origin;
	$init($StackStreamFactory);
	if ($StackStreamFactory::isDebug) {
		int32_t index = this->origin - 1;
		$nc($System::out)->format("  next frame at %d: %s (origin %d fence %d)%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(index))),
			$($of($Objects::toString(c))),
			$($of($Integer::valueOf(index))),
			$($of($Integer::valueOf(this->fence)))
		}));
	}
	return c;
}

$Class* StackStreamFactory$FrameBuffer::get() {
	$useLocalCurrentObjectStackCache();
	if (isEmpty()) {
		$throwNew($NoSuchElementException, $$str({"origin="_s, $$str(this->origin), " fence="_s, $$str(this->fence)}));
	}
	return at(this->origin);
}

int32_t StackStreamFactory$FrameBuffer::getIndex() {
	return this->origin;
}

void StackStreamFactory$FrameBuffer::setBatch(int32_t depth, int32_t startIndex, int32_t endIndex) {
	$useLocalCurrentObjectStackCache();
	if (startIndex <= 0 || endIndex <= 0) {
		$throwNew($IllegalArgumentException, $$str({"startIndex="_s, $$str(startIndex), " endIndex="_s, $$str(endIndex)}));
	}
	this->origin = startIndex;
	this->fence = endIndex;
	if (depth == 0 && this->fence > 0) {
		for (int32_t i = StackStreamFactory$FrameBuffer::START_POS; i < this->fence; ++i) {
			$Class* c = at(i);
			$init($StackStreamFactory);
			if ($StackStreamFactory::isDebug) {
				$nc($System::err)->format("  frame %d: %s%n"_s, $$new($ObjectArray, {
					$($of($Integer::valueOf(i))),
					$of(c)
				}));
			}
			if ($StackStreamFactory::filterStackWalkImpl(c)) {
				++this->origin;
			} else {
				break;
			}
		}
	}
}

void StackStreamFactory$FrameBuffer::check(int32_t skipFrames) {
	$useLocalCurrentObjectStackCache();
	int32_t index = skipFrames + StackStreamFactory$FrameBuffer::START_POS;
	if (this->origin != index) {
		$throwNew($IllegalStateException, $$str({"origin "_s, $$str(this->origin), " != "_s, $$str(index)}));
	}
}

StackStreamFactory$FrameBuffer::StackStreamFactory$FrameBuffer() {
}

$Class* StackStreamFactory$FrameBuffer::load$($String* name, bool initialize) {
	$loadClass(StackStreamFactory$FrameBuffer, name, initialize, &_StackStreamFactory$FrameBuffer_ClassInfo_, allocate$StackStreamFactory$FrameBuffer);
	return class$;
}

$Class* StackStreamFactory$FrameBuffer::class$ = nullptr;

	} // lang
} // java