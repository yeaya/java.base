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
using $Runnable = ::java::lang::Runnable;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $DirectByteBuffer = ::java::nio::DirectByteBuffer;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _DirectByteBuffer$Deallocator_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectByteBuffer$Deallocator, $assertionsDisabled)},
	{"address", "J", nullptr, $PRIVATE, $field(DirectByteBuffer$Deallocator, address)},
	{"size", "J", nullptr, $PRIVATE, $field(DirectByteBuffer$Deallocator, size)},
	{"capacity", "I", nullptr, $PRIVATE, $field(DirectByteBuffer$Deallocator, capacity)},
	{}
};

$MethodInfo _DirectByteBuffer$Deallocator_MethodInfo_[] = {
	{"<init>", "(JJI)V", nullptr, $PRIVATE, $method(static_cast<void(DirectByteBuffer$Deallocator::*)(int64_t,int64_t,int32_t)>(&DirectByteBuffer$Deallocator::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DirectByteBuffer$Deallocator_InnerClassesInfo_[] = {
	{"java.nio.DirectByteBuffer$Deallocator", "java.nio.DirectByteBuffer", "Deallocator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DirectByteBuffer$Deallocator_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectByteBuffer$Deallocator",
	"java.lang.Object",
	"java.lang.Runnable",
	_DirectByteBuffer$Deallocator_FieldInfo_,
	_DirectByteBuffer$Deallocator_MethodInfo_,
	nullptr,
	nullptr,
	_DirectByteBuffer$Deallocator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.DirectByteBuffer"
};

$Object* allocate$DirectByteBuffer$Deallocator($Class* clazz) {
	return $of($alloc(DirectByteBuffer$Deallocator));
}

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

void clinit$DirectByteBuffer$Deallocator($Class* class$) {
	$load($DirectByteBuffer);
	DirectByteBuffer$Deallocator::$assertionsDisabled = !$DirectByteBuffer::class$->desiredAssertionStatus();
}

DirectByteBuffer$Deallocator::DirectByteBuffer$Deallocator() {
}

$Class* DirectByteBuffer$Deallocator::load$($String* name, bool initialize) {
	$loadClass(DirectByteBuffer$Deallocator, name, initialize, &_DirectByteBuffer$Deallocator_ClassInfo_, clinit$DirectByteBuffer$Deallocator, allocate$DirectByteBuffer$Deallocator);
	return class$;
}

$Class* DirectByteBuffer$Deallocator::class$ = nullptr;

	} // nio
} // java