#include <java/lang/StackStreamFactory$CallerClassFinder$ClassBuffer.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackStreamFactory$CallerClassFinder.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>
#include <java/lang/StackStreamFactory.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef START_POS

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackStreamFactory = ::java::lang::StackStreamFactory;
using $StackStreamFactory$CallerClassFinder = ::java::lang::StackStreamFactory$CallerClassFinder;
using $StackStreamFactory$FrameBuffer = ::java::lang::StackStreamFactory$FrameBuffer;

namespace java {
	namespace lang {

$FieldInfo _StackStreamFactory$CallerClassFinder$ClassBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StackStreamFactory$CallerClassFinder$ClassBuffer, $assertionsDisabled)},
	{"classes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", 0, $field(StackStreamFactory$CallerClassFinder$ClassBuffer, classes)},
	{}
};

$MethodInfo _StackStreamFactory$CallerClassFinder$ClassBuffer_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(StackStreamFactory$CallerClassFinder$ClassBuffer::*)(int32_t)>(&StackStreamFactory$CallerClassFinder$ClassBuffer::init$))},
	{"at", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $FINAL},
	{"frames", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", 0},
	{"resize", "(II)V", nullptr, 0},
	{}
};

$InnerClassInfo _StackStreamFactory$CallerClassFinder$ClassBuffer_InnerClassesInfo_[] = {
	{"java.lang.StackStreamFactory$CallerClassFinder", "java.lang.StackStreamFactory", "CallerClassFinder", $STATIC | $FINAL},
	{"java.lang.StackStreamFactory$CallerClassFinder$ClassBuffer", "java.lang.StackStreamFactory$CallerClassFinder", "ClassBuffer", $STATIC | $FINAL},
	{"java.lang.StackStreamFactory$FrameBuffer", "java.lang.StackStreamFactory", "FrameBuffer", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StackStreamFactory$CallerClassFinder$ClassBuffer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StackStreamFactory$CallerClassFinder$ClassBuffer",
	"java.lang.StackStreamFactory$FrameBuffer",
	nullptr,
	_StackStreamFactory$CallerClassFinder$ClassBuffer_FieldInfo_,
	_StackStreamFactory$CallerClassFinder$ClassBuffer_MethodInfo_,
	"Ljava/lang/StackStreamFactory$FrameBuffer<Ljava/lang/Class<*>;>;",
	nullptr,
	_StackStreamFactory$CallerClassFinder$ClassBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackStreamFactory"
};

$Object* allocate$StackStreamFactory$CallerClassFinder$ClassBuffer($Class* clazz) {
	return $of($alloc(StackStreamFactory$CallerClassFinder$ClassBuffer));
}

bool StackStreamFactory$CallerClassFinder$ClassBuffer::$assertionsDisabled = false;

void StackStreamFactory$CallerClassFinder$ClassBuffer::init$(int32_t batchSize) {
	$StackStreamFactory$FrameBuffer::init$(batchSize);
	$set(this, classes, $new($ClassArray, batchSize));
}

$ObjectArray* StackStreamFactory$CallerClassFinder$ClassBuffer::frames() {
	return this->classes;
}

$Class* StackStreamFactory$CallerClassFinder$ClassBuffer::at(int32_t index) {
	return $nc(this->classes)->get(index);
}

void StackStreamFactory$CallerClassFinder$ClassBuffer::resize(int32_t startIndex, int32_t elements) {
	if (!isActive()) {
		$throwNew($IllegalStateException, "inactive frame buffer can\'t be resized"_s);
	}
	if (!StackStreamFactory$CallerClassFinder$ClassBuffer::$assertionsDisabled && !(startIndex == $StackStreamFactory$FrameBuffer::START_POS)) {
		$throwNew($AssertionError, $of($$str({"bad start index "_s, $$str(startIndex), " expected "_s, $$str($StackStreamFactory$FrameBuffer::START_POS)})));
	}
	int32_t size = startIndex + elements;
	if ($nc(this->classes)->length < size) {
		$var($ClassArray, prev, this->classes);
		$set(this, classes, $new($ClassArray, size));
		$System::arraycopy(prev, 0, this->classes, 0, startIndex);
	}
	this->currentBatchSize = size;
}

void clinit$StackStreamFactory$CallerClassFinder$ClassBuffer($Class* class$) {
	$load($StackStreamFactory);
	StackStreamFactory$CallerClassFinder$ClassBuffer::$assertionsDisabled = !$StackStreamFactory::class$->desiredAssertionStatus();
}

StackStreamFactory$CallerClassFinder$ClassBuffer::StackStreamFactory$CallerClassFinder$ClassBuffer() {
}

$Class* StackStreamFactory$CallerClassFinder$ClassBuffer::load$($String* name, bool initialize) {
	$loadClass(StackStreamFactory$CallerClassFinder$ClassBuffer, name, initialize, &_StackStreamFactory$CallerClassFinder$ClassBuffer_ClassInfo_, clinit$StackStreamFactory$CallerClassFinder$ClassBuffer, allocate$StackStreamFactory$CallerClassFinder$ClassBuffer);
	return class$;
}

$Class* StackStreamFactory$CallerClassFinder$ClassBuffer::class$ = nullptr;

	} // lang
} // java