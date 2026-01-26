#include <java/nio/HeapIntBufferR.h>

#include <java/nio/Buffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/HeapIntBuffer.h>
#include <java/nio/IntBuffer.h>
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
using $HeapIntBuffer = ::java::nio::HeapIntBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapIntBufferR_FieldInfo_[] = {
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapIntBufferR, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapIntBufferR, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapIntBufferR_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(HeapIntBufferR, init$, void, int32_t, int32_t, $MemorySegmentProxy*)},
	{"<init>", "([IIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(HeapIntBufferR, init$, void, $ints*, int32_t, int32_t, $MemorySegmentProxy*)},
	{"<init>", "([IIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(HeapIntBufferR, init$, void, $ints*, int32_t, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, asReadOnlyBuffer, $IntBuffer*)},
	{"compact", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, compact, $IntBuffer*)},
	{"duplicate", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, duplicate, $IntBuffer*)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, isReadOnly, bool)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, order, $ByteOrder*)},
	{"put", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, put, $IntBuffer*, int32_t)},
	{"put", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, put, $IntBuffer*, int32_t, int32_t)},
	{"put", "([III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, put, $IntBuffer*, $ints*, int32_t, int32_t)},
	{"put", "(Ljava/nio/IntBuffer;)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, put, $IntBuffer*, $IntBuffer*)},
	{"put", "(ILjava/nio/IntBuffer;II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, put, $IntBuffer*, int32_t, $IntBuffer*, int32_t, int32_t)},
	{"put", "(I[III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, put, $IntBuffer*, int32_t, $ints*, int32_t, int32_t)},
	{"slice", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, slice, $IntBuffer*)},
	{"slice", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapIntBufferR, slice, $IntBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _HeapIntBufferR_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapIntBufferR",
	"java.nio.HeapIntBuffer",
	nullptr,
	_HeapIntBufferR_FieldInfo_,
	_HeapIntBufferR_MethodInfo_
};

$Object* allocate$HeapIntBufferR($Class* clazz) {
	return $of($alloc(HeapIntBufferR));
}

int64_t HeapIntBufferR::ARRAY_BASE_OFFSET = 0;
int64_t HeapIntBufferR::ARRAY_INDEX_SCALE = 0;

void HeapIntBufferR::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$HeapIntBuffer::init$(cap, lim, segment);
	this->$IntBuffer::isReadOnly$ = true;
}

void HeapIntBufferR::init$($ints* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$HeapIntBuffer::init$(buf, off, len, segment);
	this->$IntBuffer::isReadOnly$ = true;
}

void HeapIntBufferR::init$($ints* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$HeapIntBuffer::init$(buf, mark, pos, lim, cap, off, segment);
	this->$IntBuffer::isReadOnly$ = true;
}

$IntBuffer* HeapIntBufferR::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapIntBufferR, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$IntBuffer* HeapIntBufferR::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapIntBufferR, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$IntBuffer* HeapIntBufferR::duplicate() {
	$var($ints, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapIntBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$IntBuffer* HeapIntBufferR::asReadOnlyBuffer() {
	return duplicate();
}

bool HeapIntBufferR::isReadOnly() {
	return true;
}

$IntBuffer* HeapIntBufferR::put(int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* HeapIntBufferR::put(int32_t i, int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* HeapIntBufferR::put($ints* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* HeapIntBufferR::put($IntBuffer* src) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* HeapIntBufferR::put(int32_t index, $IntBuffer* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* HeapIntBufferR::put(int32_t index, $ints* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* HeapIntBufferR::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteOrder* HeapIntBufferR::order() {
	return $ByteOrder::nativeOrder();
}

void clinit$HeapIntBufferR($Class* class$) {
	$init($Buffer);
	$load($ints);
	HeapIntBufferR::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($ints));
	HeapIntBufferR::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($ints));
}

HeapIntBufferR::HeapIntBufferR() {
}

$Class* HeapIntBufferR::load$($String* name, bool initialize) {
	$loadClass(HeapIntBufferR, name, initialize, &_HeapIntBufferR_ClassInfo_, clinit$HeapIntBufferR, allocate$HeapIntBufferR);
	return class$;
}

$Class* HeapIntBufferR::class$ = nullptr;

	} // nio
} // java