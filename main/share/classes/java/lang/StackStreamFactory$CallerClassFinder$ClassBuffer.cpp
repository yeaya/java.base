#include <java/lang/StackStreamFactory$CallerClassFinder$ClassBuffer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/StackStreamFactory$CallerClassFinder.h>
#include <java/lang/StackStreamFactory$FrameBuffer.h>
#include <java/lang/StackStreamFactory.h>
#include <jcpp.h>

#undef START_POS

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackStreamFactory = ::java::lang::StackStreamFactory;
using $StackStreamFactory$FrameBuffer = ::java::lang::StackStreamFactory$FrameBuffer;

namespace java {
	namespace lang {

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
	$useLocalObjectStack();
	if (!isActive()) {
		$throwNew($IllegalStateException, "inactive frame buffer can\'t be resized"_s);
	}
	if (!StackStreamFactory$CallerClassFinder$ClassBuffer::$assertionsDisabled && !(startIndex == $StackStreamFactory$FrameBuffer::START_POS)) {
		$throwNew($AssertionError, $$of($str({"bad start index "_s, $$str(startIndex), " expected "_s, $$str($StackStreamFactory$FrameBuffer::START_POS)})));
	}
	int32_t size = startIndex + elements;
	if ($nc(this->classes)->length < size) {
		$var($ClassArray, prev, this->classes);
		$set(this, classes, $new($ClassArray, size));
		$System::arraycopy(prev, 0, this->classes, 0, startIndex);
	}
	this->currentBatchSize = size;
}

void StackStreamFactory$CallerClassFinder$ClassBuffer::clinit$($Class* clazz) {
	$load($StackStreamFactory);
	StackStreamFactory$CallerClassFinder$ClassBuffer::$assertionsDisabled = !$StackStreamFactory::class$->desiredAssertionStatus();
}

StackStreamFactory$CallerClassFinder$ClassBuffer::StackStreamFactory$CallerClassFinder$ClassBuffer() {
}

$Class* StackStreamFactory$CallerClassFinder$ClassBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StackStreamFactory$CallerClassFinder$ClassBuffer, $assertionsDisabled)},
		{"classes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", 0, $field(StackStreamFactory$CallerClassFinder$ClassBuffer, classes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(StackStreamFactory$CallerClassFinder$ClassBuffer, init$, void, int32_t)},
		{"at", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $FINAL, $virtualMethod(StackStreamFactory$CallerClassFinder$ClassBuffer, at, $Class*, int32_t)},
		{"frames", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", 0, $virtualMethod(StackStreamFactory$CallerClassFinder$ClassBuffer, frames, $ObjectArray*)},
		{"resize", "(II)V", nullptr, 0, $virtualMethod(StackStreamFactory$CallerClassFinder$ClassBuffer, resize, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.StackStreamFactory$CallerClassFinder", "java.lang.StackStreamFactory", "CallerClassFinder", $STATIC | $FINAL},
		{"java.lang.StackStreamFactory$CallerClassFinder$ClassBuffer", "java.lang.StackStreamFactory$CallerClassFinder", "ClassBuffer", $STATIC | $FINAL},
		{"java.lang.StackStreamFactory$FrameBuffer", "java.lang.StackStreamFactory", "FrameBuffer", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.StackStreamFactory$CallerClassFinder$ClassBuffer",
		"java.lang.StackStreamFactory$FrameBuffer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/StackStreamFactory$FrameBuffer<Ljava/lang/Class<*>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.StackStreamFactory"
	};
	$loadClass(StackStreamFactory$CallerClassFinder$ClassBuffer, name, initialize, &classInfo$$, StackStreamFactory$CallerClassFinder$ClassBuffer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StackStreamFactory$CallerClassFinder$ClassBuffer);
	});
	return class$;
}

$Class* StackStreamFactory$CallerClassFinder$ClassBuffer::class$ = nullptr;

	} // lang
} // java