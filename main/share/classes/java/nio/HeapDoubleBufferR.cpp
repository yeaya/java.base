#include <java/nio/HeapDoubleBufferR.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DoubleBuffer.h>
#include <java/nio/HeapDoubleBuffer.h>
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
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $HeapDoubleBuffer = ::java::nio::HeapDoubleBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapDoubleBufferR_FieldInfo_[] = {
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapDoubleBufferR, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapDoubleBufferR, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapDoubleBufferR_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapDoubleBufferR::*)(int32_t,int32_t,$MemorySegmentProxy*)>(&HeapDoubleBufferR::init$))},
	{"<init>", "([DIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapDoubleBufferR::*)($doubles*,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapDoubleBufferR::init$))},
	{"<init>", "([DIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(HeapDoubleBufferR::*)($doubles*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapDoubleBufferR::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "(ID)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "([DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/DoubleBuffer;II)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "(I[DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HeapDoubleBufferR_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapDoubleBufferR",
	"java.nio.HeapDoubleBuffer",
	nullptr,
	_HeapDoubleBufferR_FieldInfo_,
	_HeapDoubleBufferR_MethodInfo_
};

$Object* allocate$HeapDoubleBufferR($Class* clazz) {
	return $of($alloc(HeapDoubleBufferR));
}

int64_t HeapDoubleBufferR::ARRAY_BASE_OFFSET = 0;
int64_t HeapDoubleBufferR::ARRAY_INDEX_SCALE = 0;

void HeapDoubleBufferR::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$HeapDoubleBuffer::init$(cap, lim, segment);
	this->$DoubleBuffer::isReadOnly$ = true;
}

void HeapDoubleBufferR::init$($doubles* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$HeapDoubleBuffer::init$(buf, off, len, segment);
	this->$DoubleBuffer::isReadOnly$ = true;
}

void HeapDoubleBufferR::init$($doubles* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$HeapDoubleBuffer::init$(buf, mark, pos, lim, cap, off, segment);
	this->$DoubleBuffer::isReadOnly$ = true;
}

$DoubleBuffer* HeapDoubleBufferR::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapDoubleBufferR, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$DoubleBuffer* HeapDoubleBufferR::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapDoubleBufferR, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$DoubleBuffer* HeapDoubleBufferR::duplicate() {
	$var($doubles, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapDoubleBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$DoubleBuffer* HeapDoubleBufferR::asReadOnlyBuffer() {
	return duplicate();
}

bool HeapDoubleBufferR::isReadOnly() {
	return true;
}

$DoubleBuffer* HeapDoubleBufferR::put(double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* HeapDoubleBufferR::put(int32_t i, double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* HeapDoubleBufferR::put($doubles* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* HeapDoubleBufferR::put($DoubleBuffer* src) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* HeapDoubleBufferR::put(int32_t index, $DoubleBuffer* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* HeapDoubleBufferR::put(int32_t index, $doubles* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* HeapDoubleBufferR::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteOrder* HeapDoubleBufferR::order() {
	return $ByteOrder::nativeOrder();
}

void clinit$HeapDoubleBufferR($Class* class$) {
	$init($Buffer);
	$load($doubles);
	HeapDoubleBufferR::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($doubles));
	HeapDoubleBufferR::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($doubles));
}

HeapDoubleBufferR::HeapDoubleBufferR() {
}

$Class* HeapDoubleBufferR::load$($String* name, bool initialize) {
	$loadClass(HeapDoubleBufferR, name, initialize, &_HeapDoubleBufferR_ClassInfo_, clinit$HeapDoubleBufferR, allocate$HeapDoubleBufferR);
	return class$;
}

$Class* HeapDoubleBufferR::class$ = nullptr;

	} // nio
} // java