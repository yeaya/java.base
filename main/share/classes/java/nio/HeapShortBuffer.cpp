#include <java/nio/HeapShortBuffer.h>

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
#include <java/nio/HeapShortBufferR.h>
#include <java/nio/ShortBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_INDEX_SCALE
#undef ARRAY_BASE_OFFSET
#undef UNSAFE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteOrder = ::java::nio::ByteOrder;
using $HeapShortBufferR = ::java::nio::HeapShortBufferR;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapShortBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HeapShortBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapShortBuffer, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapShortBuffer, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapShortBuffer_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapShortBuffer::*)(int32_t,int32_t,$MemorySegmentProxy*)>(&HeapShortBuffer::init$))},
	{"<init>", "([SIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapShortBuffer::*)($shorts*,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapShortBuffer::init$))},
	{"<init>", "([SIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(HeapShortBuffer::*)($shorts*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapShortBuffer::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"get", "()S", nullptr, $PUBLIC},
	{"get", "(I)S", nullptr, $PUBLIC},
	{"get", "([SII)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"get", "(I[SII)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PROTECTED},
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

$ClassInfo _HeapShortBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapShortBuffer",
	"java.nio.ShortBuffer",
	nullptr,
	_HeapShortBuffer_FieldInfo_,
	_HeapShortBuffer_MethodInfo_
};

$Object* allocate$HeapShortBuffer($Class* clazz) {
	return $of($alloc(HeapShortBuffer));
}

bool HeapShortBuffer::$assertionsDisabled = false;
int64_t HeapShortBuffer::ARRAY_BASE_OFFSET = 0;
int64_t HeapShortBuffer::ARRAY_INDEX_SCALE = 0;

void HeapShortBuffer::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$ShortBuffer::init$(-1, 0, lim, cap, $$new($shorts, cap), 0, segment);
	this->address = HeapShortBuffer::ARRAY_BASE_OFFSET;
}

void HeapShortBuffer::init$($shorts* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$ShortBuffer::init$(-1, off, off + len, $nc(buf)->length, buf, 0, segment);
	this->address = HeapShortBuffer::ARRAY_BASE_OFFSET;
}

void HeapShortBuffer::init$($shorts* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$ShortBuffer::init$(mark, pos, lim, cap, buf, off, segment);
	this->address = HeapShortBuffer::ARRAY_BASE_OFFSET + off * HeapShortBuffer::ARRAY_INDEX_SCALE;
}

$ShortBuffer* HeapShortBuffer::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapShortBuffer, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$ShortBuffer* HeapShortBuffer::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapShortBuffer, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$ShortBuffer* HeapShortBuffer::duplicate() {
	$var($shorts, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapShortBuffer, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$ShortBuffer* HeapShortBuffer::asReadOnlyBuffer() {
	$var($shorts, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($HeapShortBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

int32_t HeapShortBuffer::ix(int32_t i) {
	return i + this->offset;
}

int16_t HeapShortBuffer::get() {
	return $nc(this->hb)->get(ix(nextGetIndex()));
}

int16_t HeapShortBuffer::get(int32_t i) {
	return $nc(this->hb)->get(ix(checkIndex(i)));
}

$ShortBuffer* HeapShortBuffer::get($shorts* dst, int32_t offset, int32_t length) {
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

$ShortBuffer* HeapShortBuffer::get(int32_t index, $shorts* dst, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	$System::arraycopy(this->hb, ix(index), dst, offset, length);
	return this;
}

bool HeapShortBuffer::isDirect() {
	return false;
}

bool HeapShortBuffer::isReadOnly() {
	return false;
}

$ShortBuffer* HeapShortBuffer::put(int16_t x) {
	$nc(this->hb)->set(ix(nextPutIndex()), x);
	return this;
}

$ShortBuffer* HeapShortBuffer::put(int32_t i, int16_t x) {
	$nc(this->hb)->set(ix(checkIndex(i)), x);
	return this;
}

$ShortBuffer* HeapShortBuffer::put($shorts* src, int32_t offset, int32_t length) {
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

$ShortBuffer* HeapShortBuffer::put($ShortBuffer* src) {
	checkScope();
	$ShortBuffer::put(src);
	return this;
}

$ShortBuffer* HeapShortBuffer::put(int32_t index, $ShortBuffer* src, int32_t offset, int32_t length) {
	checkScope();
	$ShortBuffer::put(index, src, offset, length);
	return this;
}

$ShortBuffer* HeapShortBuffer::put(int32_t index, $shorts* src, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	$System::arraycopy(src, offset, this->hb, ix(index), length);
	return this;
}

$ShortBuffer* HeapShortBuffer::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!HeapShortBuffer::$assertionsDisabled && !(pos <= lim)) {
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

$ByteOrder* HeapShortBuffer::order() {
	return $ByteOrder::nativeOrder();
}

void clinit$HeapShortBuffer($Class* class$) {
	HeapShortBuffer::$assertionsDisabled = !HeapShortBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($shorts);
	HeapShortBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($shorts));
	HeapShortBuffer::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($shorts));
}

HeapShortBuffer::HeapShortBuffer() {
}

$Class* HeapShortBuffer::load$($String* name, bool initialize) {
	$loadClass(HeapShortBuffer, name, initialize, &_HeapShortBuffer_ClassInfo_, clinit$HeapShortBuffer, allocate$HeapShortBuffer);
	return class$;
}

$Class* HeapShortBuffer::class$ = nullptr;

	} // nio
} // java