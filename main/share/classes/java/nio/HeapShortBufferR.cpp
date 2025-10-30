#include <java/nio/HeapShortBufferR.h>

#include <java/nio/Buffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/HeapShortBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/nio/ShortBuffer.h>
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
using $HeapShortBuffer = ::java::nio::HeapShortBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapShortBufferR_FieldInfo_[] = {
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapShortBufferR, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapShortBufferR, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapShortBufferR_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapShortBufferR::*)(int32_t,int32_t,$MemorySegmentProxy*)>(&HeapShortBufferR::init$))},
	{"<init>", "([SIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapShortBufferR::*)($shorts*,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapShortBufferR::init$))},
	{"<init>", "([SIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(HeapShortBufferR::*)($shorts*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapShortBufferR::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "(IS)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "([SII)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "(Ljava/nio/ShortBuffer;)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/ShortBuffer;II)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "(I[SII)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HeapShortBufferR_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapShortBufferR",
	"java.nio.HeapShortBuffer",
	nullptr,
	_HeapShortBufferR_FieldInfo_,
	_HeapShortBufferR_MethodInfo_
};

$Object* allocate$HeapShortBufferR($Class* clazz) {
	return $of($alloc(HeapShortBufferR));
}

int64_t HeapShortBufferR::ARRAY_BASE_OFFSET = 0;
int64_t HeapShortBufferR::ARRAY_INDEX_SCALE = 0;

void HeapShortBufferR::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$HeapShortBuffer::init$(cap, lim, segment);
	this->$ShortBuffer::isReadOnly$ = true;
}

void HeapShortBufferR::init$($shorts* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$HeapShortBuffer::init$(buf, off, len, segment);
	this->$ShortBuffer::isReadOnly$ = true;
}

void HeapShortBufferR::init$($shorts* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$HeapShortBuffer::init$(buf, mark, pos, lim, cap, off, segment);
	this->$ShortBuffer::isReadOnly$ = true;
}

$ShortBuffer* HeapShortBufferR::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapShortBufferR, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$ShortBuffer* HeapShortBufferR::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapShortBufferR, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$ShortBuffer* HeapShortBufferR::duplicate() {
	$var($shorts, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapShortBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$ShortBuffer* HeapShortBufferR::asReadOnlyBuffer() {
	return duplicate();
}

bool HeapShortBufferR::isReadOnly() {
	return true;
}

$ShortBuffer* HeapShortBufferR::put(int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* HeapShortBufferR::put(int32_t i, int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* HeapShortBufferR::put($shorts* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* HeapShortBufferR::put($ShortBuffer* src) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* HeapShortBufferR::put(int32_t index, $ShortBuffer* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* HeapShortBufferR::put(int32_t index, $shorts* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* HeapShortBufferR::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteOrder* HeapShortBufferR::order() {
	return $ByteOrder::nativeOrder();
}

void clinit$HeapShortBufferR($Class* class$) {
	$init($Buffer);
	$load($shorts);
	HeapShortBufferR::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($shorts));
	HeapShortBufferR::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($shorts));
}

HeapShortBufferR::HeapShortBufferR() {
}

$Class* HeapShortBufferR::load$($String* name, bool initialize) {
	$loadClass(HeapShortBufferR, name, initialize, &_HeapShortBufferR_ClassInfo_, clinit$HeapShortBufferR, allocate$HeapShortBufferR);
	return class$;
}

$Class* HeapShortBufferR::class$ = nullptr;

	} // nio
} // java