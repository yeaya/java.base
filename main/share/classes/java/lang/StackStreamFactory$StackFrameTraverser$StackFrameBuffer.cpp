#include <java/lang/StackStreamFactory$StackFrameTraverser$StackFrameBuffer.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/StackFrameInfo.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>
#include <java/lang/StackStreamFactory$StackFrameTraverser.h>
#include <java/lang/StackStreamFactory.h>
#include <java/lang/StackWalker.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef START_POS

using $StackFrameInfoArray = $Array<::java::lang::StackFrameInfo>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackFrameInfo = ::java::lang::StackFrameInfo;
using $StackStreamFactory = ::java::lang::StackStreamFactory;
using $StackStreamFactory$FrameBuffer = ::java::lang::StackStreamFactory$FrameBuffer;
using $StackStreamFactory$StackFrameTraverser = ::java::lang::StackStreamFactory$StackFrameTraverser;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace lang {

$FieldInfo _StackStreamFactory$StackFrameTraverser$StackFrameBuffer_FieldInfo_[] = {
	{"this$0", "Ljava/lang/StackStreamFactory$StackFrameTraverser;", nullptr, $FINAL | $SYNTHETIC, $field(StackStreamFactory$StackFrameTraverser$StackFrameBuffer, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StackStreamFactory$StackFrameTraverser$StackFrameBuffer, $assertionsDisabled)},
	{"stackFrames", "[Ljava/lang/StackFrameInfo;", nullptr, $PRIVATE, $field(StackStreamFactory$StackFrameTraverser$StackFrameBuffer, stackFrames)},
	{}
};

$MethodInfo _StackStreamFactory$StackFrameTraverser$StackFrameBuffer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StackStreamFactory$StackFrameTraverser;I)V", nullptr, 0, $method(StackStreamFactory$StackFrameTraverser$StackFrameBuffer, init$, void, $StackStreamFactory$StackFrameTraverser*, int32_t)},
	{"at", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $FINAL, $virtualMethod(StackStreamFactory$StackFrameTraverser$StackFrameBuffer, at, $Class*, int32_t)},
	{"frames", "()[Ljava/lang/StackFrameInfo;", nullptr, 0, $virtualMethod(StackStreamFactory$StackFrameTraverser$StackFrameBuffer, frames, $ObjectArray*)},
	{"nextStackFrame", "()Ljava/lang/StackFrameInfo;", nullptr, 0, $virtualMethod(StackStreamFactory$StackFrameTraverser$StackFrameBuffer, nextStackFrame, $Object*)},
	{"resize", "(II)V", nullptr, 0, $virtualMethod(StackStreamFactory$StackFrameTraverser$StackFrameBuffer, resize, void, int32_t, int32_t)},
	{}
};

$InnerClassInfo _StackStreamFactory$StackFrameTraverser$StackFrameBuffer_InnerClassesInfo_[] = {
	{"java.lang.StackStreamFactory$StackFrameTraverser", "java.lang.StackStreamFactory", "StackFrameTraverser", $STATIC},
	{"java.lang.StackStreamFactory$StackFrameTraverser$StackFrameBuffer", "java.lang.StackStreamFactory$StackFrameTraverser", "StackFrameBuffer", $FINAL},
	{"java.lang.StackStreamFactory$FrameBuffer", "java.lang.StackStreamFactory", "FrameBuffer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StackStreamFactory$StackFrameTraverser$StackFrameBuffer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StackStreamFactory$StackFrameTraverser$StackFrameBuffer",
	"java.lang.StackStreamFactory$FrameBuffer",
	nullptr,
	_StackStreamFactory$StackFrameTraverser$StackFrameBuffer_FieldInfo_,
	_StackStreamFactory$StackFrameTraverser$StackFrameBuffer_MethodInfo_,
	"Ljava/lang/StackStreamFactory$FrameBuffer<Ljava/lang/StackFrameInfo;>;",
	nullptr,
	_StackStreamFactory$StackFrameTraverser$StackFrameBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackStreamFactory"
};

$Object* allocate$StackStreamFactory$StackFrameTraverser$StackFrameBuffer($Class* clazz) {
	return $of($alloc(StackStreamFactory$StackFrameTraverser$StackFrameBuffer));
}

bool StackStreamFactory$StackFrameTraverser$StackFrameBuffer::$assertionsDisabled = false;

void StackStreamFactory$StackFrameTraverser$StackFrameBuffer::init$($StackStreamFactory$StackFrameTraverser* this$0, int32_t initialBatchSize) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$StackStreamFactory$FrameBuffer::init$(initialBatchSize);
	$set(this, stackFrames, $new($StackFrameInfoArray, initialBatchSize));
	for (int32_t i = $StackStreamFactory$FrameBuffer::START_POS; i < initialBatchSize; ++i) {
		$nc(this->stackFrames)->set(i, $$new($StackFrameInfo, this$0->walker));
	}
}

$ObjectArray* StackStreamFactory$StackFrameTraverser$StackFrameBuffer::frames() {
	return this->stackFrames;
}

void StackStreamFactory$StackFrameTraverser$StackFrameBuffer::resize(int32_t startIndex, int32_t elements) {
	$useLocalCurrentObjectStackCache();
	if (!isActive()) {
		$throwNew($IllegalStateException, "inactive frame buffer can\'t be resized"_s);
	}
	if (!StackStreamFactory$StackFrameTraverser$StackFrameBuffer::$assertionsDisabled && !(startIndex == $StackStreamFactory$FrameBuffer::START_POS)) {
		$throwNew($AssertionError, $of($$str({"bad start index "_s, $$str(startIndex), " expected "_s, $$str($StackStreamFactory$FrameBuffer::START_POS)})));
	}
	int32_t size = startIndex + elements;
	if ($nc(this->stackFrames)->length < size) {
		$var($StackFrameInfoArray, newFrames, $new($StackFrameInfoArray, size));
		$System::arraycopy(this->stackFrames, 0, newFrames, 0, startIndex);
		$set(this, stackFrames, newFrames);
	}
	for (int32_t i = startIndex; i < size; ++i) {
		$nc(this->stackFrames)->set(i, $$new($StackFrameInfo, this->this$0->walker));
	}
	this->currentBatchSize = size;
}

$Object* StackStreamFactory$StackFrameTraverser$StackFrameBuffer::nextStackFrame() {
	$useLocalCurrentObjectStackCache();
	if (isEmpty()) {
		$throwNew($NoSuchElementException, $$str({"origin="_s, $$str(this->origin), " fence="_s, $$str(this->fence)}));
	}
	$var($StackFrameInfo, frame, $nc(this->stackFrames)->get(this->origin));
	++this->origin;
	return $of(frame);
}

$Class* StackStreamFactory$StackFrameTraverser$StackFrameBuffer::at(int32_t index) {
	return $nc($nc(this->stackFrames)->get(index))->declaringClass();
}

void clinit$StackStreamFactory$StackFrameTraverser$StackFrameBuffer($Class* class$) {
	$load($StackStreamFactory);
	StackStreamFactory$StackFrameTraverser$StackFrameBuffer::$assertionsDisabled = !$StackStreamFactory::class$->desiredAssertionStatus();
}

StackStreamFactory$StackFrameTraverser$StackFrameBuffer::StackStreamFactory$StackFrameTraverser$StackFrameBuffer() {
}

$Class* StackStreamFactory$StackFrameTraverser$StackFrameBuffer::load$($String* name, bool initialize) {
	$loadClass(StackStreamFactory$StackFrameTraverser$StackFrameBuffer, name, initialize, &_StackStreamFactory$StackFrameTraverser$StackFrameBuffer_ClassInfo_, clinit$StackStreamFactory$StackFrameTraverser$StackFrameBuffer, allocate$StackStreamFactory$StackFrameTraverser$StackFrameBuffer);
	return class$;
}

$Class* StackStreamFactory$StackFrameTraverser$StackFrameBuffer::class$ = nullptr;

	} // lang
} // java