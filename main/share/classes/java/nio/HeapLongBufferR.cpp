#include <java/nio/HeapLongBufferR.h>

#include <java/nio/Buffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/HeapLongBuffer.h>
#include <java/nio/LongBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_BASE_OFFSET
#undef ARRAY_INDEX_SCALE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $HeapLongBuffer = ::java::nio::HeapLongBuffer;
using $LongBuffer = ::java::nio::LongBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapLongBufferR_FieldInfo_[] = {
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapLongBufferR, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapLongBufferR, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapLongBufferR_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(HeapLongBufferR, init$, void, int32_t, int32_t, $MemorySegmentProxy*)},
	{"<init>", "([JIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(HeapLongBufferR, init$, void, $longs*, int32_t, int32_t, $MemorySegmentProxy*)},
	{"<init>", "([JIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(HeapLongBufferR, init$, void, $longs*, int32_t, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, asReadOnlyBuffer, $LongBuffer*)},
	{"compact", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, compact, $LongBuffer*)},
	{"duplicate", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, duplicate, $LongBuffer*)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, isReadOnly, bool)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, order, $ByteOrder*)},
	{"put", "(J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, put, $LongBuffer*, int64_t)},
	{"put", "(IJ)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, put, $LongBuffer*, int32_t, int64_t)},
	{"put", "([JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, put, $LongBuffer*, $longs*, int32_t, int32_t)},
	{"put", "(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, put, $LongBuffer*, $LongBuffer*)},
	{"put", "(ILjava/nio/LongBuffer;II)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, put, $LongBuffer*, int32_t, $LongBuffer*, int32_t, int32_t)},
	{"put", "(I[JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, put, $LongBuffer*, int32_t, $longs*, int32_t, int32_t)},
	{"slice", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, slice, $LongBuffer*)},
	{"slice", "(II)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapLongBufferR, slice, $LongBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _HeapLongBufferR_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapLongBufferR",
	"java.nio.HeapLongBuffer",
	nullptr,
	_HeapLongBufferR_FieldInfo_,
	_HeapLongBufferR_MethodInfo_
};

$Object* allocate$HeapLongBufferR($Class* clazz) {
	return $of($alloc(HeapLongBufferR));
}

int64_t HeapLongBufferR::ARRAY_BASE_OFFSET = 0;
int64_t HeapLongBufferR::ARRAY_INDEX_SCALE = 0;

void HeapLongBufferR::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$HeapLongBuffer::init$(cap, lim, segment);
	this->$LongBuffer::isReadOnly$ = true;
}

void HeapLongBufferR::init$($longs* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$HeapLongBuffer::init$(buf, off, len, segment);
	this->$LongBuffer::isReadOnly$ = true;
}

void HeapLongBufferR::init$($longs* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$HeapLongBuffer::init$(buf, mark, pos, lim, cap, off, segment);
	this->$LongBuffer::isReadOnly$ = true;
}

$LongBuffer* HeapLongBufferR::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapLongBufferR, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$LongBuffer* HeapLongBufferR::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapLongBufferR, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$LongBuffer* HeapLongBufferR::duplicate() {
	$var($longs, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapLongBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$LongBuffer* HeapLongBufferR::asReadOnlyBuffer() {
	return duplicate();
}

bool HeapLongBufferR::isReadOnly() {
	return true;
}

$LongBuffer* HeapLongBufferR::put(int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* HeapLongBufferR::put(int32_t i, int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* HeapLongBufferR::put($longs* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* HeapLongBufferR::put($LongBuffer* src) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* HeapLongBufferR::put(int32_t index, $LongBuffer* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* HeapLongBufferR::put(int32_t index, $longs* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* HeapLongBufferR::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteOrder* HeapLongBufferR::order() {
	return $ByteOrder::nativeOrder();
}

void clinit$HeapLongBufferR($Class* class$) {
	$init($Buffer);
	$load($longs);
	HeapLongBufferR::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($longs));
	HeapLongBufferR::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($longs));
}

HeapLongBufferR::HeapLongBufferR() {
}

$Class* HeapLongBufferR::load$($String* name, bool initialize) {
	$loadClass(HeapLongBufferR, name, initialize, &_HeapLongBufferR_ClassInfo_, clinit$HeapLongBufferR, allocate$HeapLongBufferR);
	return class$;
}

$Class* HeapLongBufferR::class$ = nullptr;

	} // nio
} // java