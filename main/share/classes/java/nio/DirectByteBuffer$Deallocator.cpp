#include <java/nio/DirectByteBuffer$Deallocator.h>
#include <java/lang/AssertionError.h>
#include <java/nio/Bits.h>
#include <java/nio/Buffer.h>
#include <java/nio/DirectByteBuffer.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef UNSAFE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $DirectByteBuffer = ::java::nio::DirectByteBuffer;

namespace java {
	namespace nio {

bool DirectByteBuffer$Deallocator::$assertionsDisabled = false;

void DirectByteBuffer$Deallocator::init$(int64_t address, int64_t size, int32_t capacity) {
	if (!DirectByteBuffer$Deallocator::$assertionsDisabled && !(address != 0)) {
		$throwNew($AssertionError);
	}
	this->address = address;
	this->size = size;
	this->capacity = capacity;
}

void DirectByteBuffer$Deallocator::run() {
	if (this->address == 0) {
		return;
	}
	$init($Buffer);
	$nc($Buffer::UNSAFE)->freeMemory(this->address);
	this->address = 0;
	$Bits::unreserveMemory(this->size, this->capacity);
}

void DirectByteBuffer$Deallocator::clinit$($Class* clazz) {
	$load($DirectByteBuffer);
	DirectByteBuffer$Deallocator::$assertionsDisabled = !$DirectByteBuffer::class$->desiredAssertionStatus();
}

DirectByteBuffer$Deallocator::DirectByteBuffer$Deallocator() {
}

$Class* DirectByteBuffer$Deallocator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectByteBuffer$Deallocator, $assertionsDisabled)},
		{"address", "J", nullptr, $PRIVATE, $field(DirectByteBuffer$Deallocator, address)},
		{"size", "J", nullptr, $PRIVATE, $field(DirectByteBuffer$Deallocator, size)},
		{"capacity", "I", nullptr, $PRIVATE, $field(DirectByteBuffer$Deallocator, capacity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(JJI)V", nullptr, $PRIVATE, $method(DirectByteBuffer$Deallocator, init$, void, int64_t, int64_t, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DirectByteBuffer$Deallocator, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.DirectByteBuffer$Deallocator", "java.nio.DirectByteBuffer", "Deallocator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.DirectByteBuffer$Deallocator",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.DirectByteBuffer"
	};
	$loadClass(DirectByteBuffer$Deallocator, name, initialize, &classInfo$$, DirectByteBuffer$Deallocator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DirectByteBuffer$Deallocator);
	});
	return class$;
}

$Class* DirectByteBuffer$Deallocator::class$ = nullptr;

	} // nio
} // java