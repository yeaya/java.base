#include <java/lang/StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/LiveStackFrameInfo.h>
#include <java/lang/StackStreamFactory$AbstractStackWalker.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>
#include <java/lang/StackStreamFactory$LiveStackInfoTraverser.h>
#include <java/lang/StackStreamFactory.h>
#include <java/lang/StackWalker.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef START_POS

using $LiveStackFrameInfoArray = $Array<::java::lang::LiveStackFrameInfo>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LiveStackFrameInfo = ::java::lang::LiveStackFrameInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackFrameInfo = ::java::lang::StackFrameInfo;
using $StackStreamFactory = ::java::lang::StackStreamFactory;
using $StackStreamFactory$AbstractStackWalker = ::java::lang::StackStreamFactory$AbstractStackWalker;
using $StackStreamFactory$FrameBuffer = ::java::lang::StackStreamFactory$FrameBuffer;
using $StackStreamFactory$LiveStackInfoTraverser = ::java::lang::StackStreamFactory$LiveStackInfoTraverser;
using $StackWalker = ::java::lang::StackWalker;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace lang {

$FieldInfo _StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_FieldInfo_[] = {
	{"this$0", "Ljava/lang/StackStreamFactory$LiveStackInfoTraverser;", nullptr, $FINAL | $SYNTHETIC, $field(StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer, $assertionsDisabled)},
	{"stackFrames", "[Ljava/lang/LiveStackFrameInfo;", nullptr, $PRIVATE, $field(StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer, stackFrames)},
	{}
};

$MethodInfo _StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StackStreamFactory$LiveStackInfoTraverser;I)V", nullptr, 0, $method(static_cast<void(StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::*)($StackStreamFactory$LiveStackInfoTraverser*,int32_t)>(&StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::init$))},
	{"at", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $FINAL},
	{"frames", "()[Ljava/lang/LiveStackFrameInfo;", nullptr, 0},
	{"nextStackFrame", "()Ljava/lang/LiveStackFrameInfo;", nullptr, 0},
	{"resize", "(II)V", nullptr, 0},
	{}
};

$InnerClassInfo _StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_InnerClassesInfo_[] = {
	{"java.lang.StackStreamFactory$LiveStackInfoTraverser", "java.lang.StackStreamFactory", "LiveStackInfoTraverser", $STATIC | $FINAL},
	{"java.lang.StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer", "java.lang.StackStreamFactory$LiveStackInfoTraverser", "LiveStackFrameBuffer", $FINAL},
	{"java.lang.StackStreamFactory$FrameBuffer", "java.lang.StackStreamFactory", "FrameBuffer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer",
	"java.lang.StackStreamFactory$FrameBuffer",
	nullptr,
	_StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_FieldInfo_,
	_StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_MethodInfo_,
	"Ljava/lang/StackStreamFactory$FrameBuffer<Ljava/lang/LiveStackFrameInfo;>;",
	nullptr,
	_StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackStreamFactory"
};

$Object* allocate$StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer($Class* clazz) {
	return $of($alloc(StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer));
}

bool StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::$assertionsDisabled = false;

void StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::init$($StackStreamFactory$LiveStackInfoTraverser* this$0, int32_t initialBatchSize) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$StackStreamFactory$FrameBuffer::init$(initialBatchSize);
	$set(this, stackFrames, $new($LiveStackFrameInfoArray, initialBatchSize));
	for (int32_t i = $StackStreamFactory$FrameBuffer::START_POS; i < initialBatchSize; ++i) {
		$nc(this->stackFrames)->set(i, $$new($LiveStackFrameInfo, this$0->walker));
	}
}

$ObjectArray* StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::frames() {
	return this->stackFrames;
}

void StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::resize(int32_t startIndex, int32_t elements) {
	$useLocalCurrentObjectStackCache();
	if (!isActive()) {
		$throwNew($IllegalStateException, "inactive frame buffer can\'t be resized"_s);
	}
	if (!StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::$assertionsDisabled && !(startIndex == $StackStreamFactory$FrameBuffer::START_POS)) {
		$throwNew($AssertionError, $of($$str({"bad start index "_s, $$str(startIndex), " expected "_s, $$str($StackStreamFactory$FrameBuffer::START_POS)})));
	}
	int32_t size = startIndex + elements;
	if ($nc(this->stackFrames)->length < size) {
		$var($LiveStackFrameInfoArray, newFrames, $new($LiveStackFrameInfoArray, size));
		$System::arraycopy(this->stackFrames, 0, newFrames, 0, startIndex);
		$set(this, stackFrames, newFrames);
	}
	for (int32_t i = this->startIndex(); i < size; ++i) {
		$nc(this->stackFrames)->set(i, $$new($LiveStackFrameInfo, this->this$0->walker));
	}
	this->currentBatchSize = size;
}

$Object* StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::nextStackFrame() {
	$useLocalCurrentObjectStackCache();
	if (isEmpty()) {
		$throwNew($NoSuchElementException, $$str({"origin="_s, $$str(this->origin), " fence="_s, $$str(this->fence)}));
	}
	$var($LiveStackFrameInfo, frame, $nc(this->stackFrames)->get(this->origin));
	++this->origin;
	return $of(frame);
}

$Class* StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::at(int32_t index) {
	return $nc($nc(this->stackFrames)->get(index))->declaringClass();
}

void clinit$StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer($Class* class$) {
	$load($StackStreamFactory);
	StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::$assertionsDisabled = !$StackStreamFactory::class$->desiredAssertionStatus();
}

StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer() {
}

$Class* StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::load$($String* name, bool initialize) {
	$loadClass(StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer, name, initialize, &_StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer_ClassInfo_, clinit$StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer, allocate$StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer);
	return class$;
}

$Class* StackStreamFactory$LiveStackInfoTraverser$LiveStackFrameBuffer::class$ = nullptr;

	} // lang
} // java