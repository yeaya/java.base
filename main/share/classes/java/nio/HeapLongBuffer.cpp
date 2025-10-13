#include <java/nio/HeapLongBuffer.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/HeapLongBufferR.h>
#include <java/nio/LongBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_BASE_OFFSET
#undef ARRAY_INDEX_SCALE
#undef UNSAFE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteOrder = ::java::nio::ByteOrder;
using $HeapLongBufferR = ::java::nio::HeapLongBufferR;
using $LongBuffer = ::java::nio::LongBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapLongBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HeapLongBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapLongBuffer, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapLongBuffer, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapLongBuffer_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapLongBuffer::*)(int32_t,int32_t,$MemorySegmentProxy*)>(&HeapLongBuffer::init$))},
	{"<init>", "([JIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapLongBuffer::*)($longs*,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapLongBuffer::init$))},
	{"<init>", "([JIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(HeapLongBuffer::*)($longs*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapLongBuffer::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"get", "()J", nullptr, $PUBLIC},
	{"get", "(I)J", nullptr, $PUBLIC},
	{"get", "([JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"get", "(I[JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PROTECTED},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "(IJ)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "([JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/LongBuffer;II)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "(I[JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HeapLongBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapLongBuffer",
	"java.nio.LongBuffer",
	nullptr,
	_HeapLongBuffer_FieldInfo_,
	_HeapLongBuffer_MethodInfo_
};

$Object* allocate$HeapLongBuffer($Class* clazz) {
	return $of($alloc(HeapLongBuffer));
}

bool HeapLongBuffer::$assertionsDisabled = false;
int64_t HeapLongBuffer::ARRAY_BASE_OFFSET = 0;
int64_t HeapLongBuffer::ARRAY_INDEX_SCALE = 0;

void HeapLongBuffer::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$LongBuffer::init$(-1, 0, lim, cap, $$new($longs, cap), 0, segment);
	this->address = HeapLongBuffer::ARRAY_BASE_OFFSET;
}

void HeapLongBuffer::init$($longs* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$LongBuffer::init$(-1, off, off + len, $nc(buf)->length, buf, 0, segment);
	this->address = HeapLongBuffer::ARRAY_BASE_OFFSET;
}

void HeapLongBuffer::init$($longs* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$LongBuffer::init$(mark, pos, lim, cap, buf, off, segment);
	this->address = HeapLongBuffer::ARRAY_BASE_OFFSET + off * HeapLongBuffer::ARRAY_INDEX_SCALE;
}

$LongBuffer* HeapLongBuffer::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapLongBuffer, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$LongBuffer* HeapLongBuffer::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapLongBuffer, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$LongBuffer* HeapLongBuffer::duplicate() {
	$var($longs, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapLongBuffer, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$LongBuffer* HeapLongBuffer::asReadOnlyBuffer() {
	$var($longs, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($HeapLongBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

int32_t HeapLongBuffer::ix(int32_t i) {
	return i + this->offset;
}

int64_t HeapLongBuffer::get() {
	return $nc(this->hb)->get(ix(nextGetIndex()));
}

int64_t HeapLongBuffer::get(int32_t i) {
	return $nc(this->hb)->get(ix(checkIndex(i)));
}

$LongBuffer* HeapLongBuffer::get($longs* dst, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	int32_t pos = position();
	if (length > limit() - pos) {
		$throwNew($BufferUnderflowException);
	}
	$System::arraycopy(this->hb, ix(pos), dst, offset, length);
	position(pos + length);
	return this;
}

$LongBuffer* HeapLongBuffer::get(int32_t index, $longs* dst, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	$System::arraycopy(this->hb, ix(index), dst, offset, length);
	return this;
}

bool HeapLongBuffer::isDirect() {
	return false;
}

bool HeapLongBuffer::isReadOnly() {
	return false;
}

$LongBuffer* HeapLongBuffer::put(int64_t x) {
	$nc(this->hb)->set(ix(nextPutIndex()), x);
	return this;
}

$LongBuffer* HeapLongBuffer::put(int32_t i, int64_t x) {
	$nc(this->hb)->set(ix(checkIndex(i)), x);
	return this;
}

$LongBuffer* HeapLongBuffer::put($longs* src, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	int32_t pos = position();
	if (length > limit() - pos) {
		$throwNew($BufferOverflowException);
	}
	$System::arraycopy(src, offset, this->hb, ix(pos), length);
	position(pos + length);
	return this;
}

$LongBuffer* HeapLongBuffer::put($LongBuffer* src) {
	checkScope();
	$LongBuffer::put(src);
	return this;
}

$LongBuffer* HeapLongBuffer::put(int32_t index, $LongBuffer* src, int32_t offset, int32_t length) {
	checkScope();
	$LongBuffer::put(index, src, offset, length);
	return this;
}

$LongBuffer* HeapLongBuffer::put(int32_t index, $longs* src, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	$System::arraycopy(src, offset, this->hb, ix(index), length);
	return this;
}

$LongBuffer* HeapLongBuffer::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!HeapLongBuffer::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	$var($Object, var$0, $of(this->hb));
	int32_t var$1 = ix(pos);
	$var($Object, var$2, $of(this->hb));
	$System::arraycopy(var$0, var$1, var$2, ix(0), rem);
	position(rem);
	limit(capacity());
	discardMark();
	return this;
}

$ByteOrder* HeapLongBuffer::order() {
	return $ByteOrder::nativeOrder();
}

void clinit$HeapLongBuffer($Class* class$) {
	HeapLongBuffer::$assertionsDisabled = !HeapLongBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($longs);
	HeapLongBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($longs));
	HeapLongBuffer::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($longs));
}

HeapLongBuffer::HeapLongBuffer() {
}

$Class* HeapLongBuffer::load$($String* name, bool initialize) {
	$loadClass(HeapLongBuffer, name, initialize, &_HeapLongBuffer_ClassInfo_, clinit$HeapLongBuffer, allocate$HeapLongBuffer);
	return class$;
}

$Class* HeapLongBuffer::class$ = nullptr;

	} // nio
} // java