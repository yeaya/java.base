#include <java/nio/HeapCharBuffer.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/HeapCharBufferR.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_BASE_OFFSET
#undef ARRAY_INDEX_SCALE
#undef UNSAFE

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $Buffer = ::java::nio::Buffer;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBuffer = ::java::nio::CharBuffer;
using $HeapCharBufferR = ::java::nio::HeapCharBufferR;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapCharBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HeapCharBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapCharBuffer, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapCharBuffer, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapCharBuffer_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapCharBuffer::*)(int32_t,int32_t,$MemorySegmentProxy*)>(&HeapCharBuffer::init$))},
	{"<init>", "([CIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapCharBuffer::*)($chars*,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapCharBuffer::init$))},
	{"<init>", "([CIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(HeapCharBuffer::*)($chars*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapCharBuffer::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"charRegionOrder", "()Ljava/nio/ByteOrder;", nullptr, 0},
	{"compact", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"get", "()C", nullptr, $PUBLIC},
	{"get", "(I)C", nullptr, $PUBLIC},
	{"get", "([CII)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"get", "(I[CII)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"getUnchecked", "(I)C", nullptr, 0},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PROTECTED},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"put", "(IC)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"put", "([CII)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"put", "(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/CharBuffer;II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"put", "(I[CII)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"subSequence", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"toString", "(II)Ljava/lang/String;", nullptr, 0},
	{}
};

$ClassInfo _HeapCharBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapCharBuffer",
	"java.nio.CharBuffer",
	nullptr,
	_HeapCharBuffer_FieldInfo_,
	_HeapCharBuffer_MethodInfo_
};

$Object* allocate$HeapCharBuffer($Class* clazz) {
	return $of($alloc(HeapCharBuffer));
}

bool HeapCharBuffer::$assertionsDisabled = false;
int64_t HeapCharBuffer::ARRAY_BASE_OFFSET = 0;
int64_t HeapCharBuffer::ARRAY_INDEX_SCALE = 0;

void HeapCharBuffer::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$CharBuffer::init$(-1, 0, lim, cap, $$new($chars, cap), 0, segment);
	this->address = HeapCharBuffer::ARRAY_BASE_OFFSET;
}

void HeapCharBuffer::init$($chars* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$CharBuffer::init$(-1, off, off + len, $nc(buf)->length, buf, 0, segment);
	this->address = HeapCharBuffer::ARRAY_BASE_OFFSET;
}

void HeapCharBuffer::init$($chars* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$CharBuffer::init$(mark, pos, lim, cap, buf, off, segment);
	this->address = HeapCharBuffer::ARRAY_BASE_OFFSET + off * HeapCharBuffer::ARRAY_INDEX_SCALE;
}

$CharBuffer* HeapCharBuffer::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapCharBuffer, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$CharBuffer* HeapCharBuffer::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapCharBuffer, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$CharBuffer* HeapCharBuffer::duplicate() {
	$var($chars, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapCharBuffer, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$CharBuffer* HeapCharBuffer::asReadOnlyBuffer() {
	$var($chars, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($HeapCharBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

int32_t HeapCharBuffer::ix(int32_t i) {
	return i + this->offset;
}

char16_t HeapCharBuffer::get() {
	return $nc(this->hb)->get(ix(nextGetIndex()));
}

char16_t HeapCharBuffer::get(int32_t i) {
	return $nc(this->hb)->get(ix(checkIndex(i)));
}

char16_t HeapCharBuffer::getUnchecked(int32_t i) {
	return $nc(this->hb)->get(ix(i));
}

$CharBuffer* HeapCharBuffer::get($chars* dst, int32_t offset, int32_t length) {
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

$CharBuffer* HeapCharBuffer::get(int32_t index, $chars* dst, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	$System::arraycopy(this->hb, ix(index), dst, offset, length);
	return this;
}

bool HeapCharBuffer::isDirect() {
	return false;
}

bool HeapCharBuffer::isReadOnly() {
	return false;
}

$CharBuffer* HeapCharBuffer::put(char16_t x) {
	$nc(this->hb)->set(ix(nextPutIndex()), x);
	return this;
}

$CharBuffer* HeapCharBuffer::put(int32_t i, char16_t x) {
	$nc(this->hb)->set(ix(checkIndex(i)), x);
	return this;
}

$CharBuffer* HeapCharBuffer::put($chars* src, int32_t offset, int32_t length) {
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

$CharBuffer* HeapCharBuffer::put($CharBuffer* src) {
	checkScope();
	$CharBuffer::put(src);
	return this;
}

$CharBuffer* HeapCharBuffer::put(int32_t index, $CharBuffer* src, int32_t offset, int32_t length) {
	checkScope();
	$CharBuffer::put(index, src, offset, length);
	return this;
}

$CharBuffer* HeapCharBuffer::put(int32_t index, $chars* src, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	$System::arraycopy(src, offset, this->hb, ix(index), length);
	return this;
}

$CharBuffer* HeapCharBuffer::put($String* src, int32_t start, int32_t end) {
	checkScope();
	int32_t length = end - start;
	$Objects::checkFromIndexSize(start, length, $nc(src)->length());
	int32_t pos = position();
	int32_t lim = limit();
	int32_t rem = (pos <= lim) ? lim - pos : 0;
	if (length > rem) {
		$throwNew($BufferOverflowException);
	}
	$nc(src)->getChars(start, end, this->hb, ix(pos));
	position(pos + length);
	return this;
}

$CharBuffer* HeapCharBuffer::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!HeapCharBuffer::$assertionsDisabled && !(pos <= lim)) {
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

$String* HeapCharBuffer::toString(int32_t start, int32_t end) {
	try {
		return $new($String, this->hb, start + this->offset, end - start);
	} catch ($StringIndexOutOfBoundsException&) {
		$var($StringIndexOutOfBoundsException, x, $catch());
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

$CharSequence* HeapCharBuffer::subSequence(int32_t start, int32_t end) {
	int32_t pos = position();
	$Objects::checkFromToIndex(start, end, limit() - pos);
	return $new(HeapCharBuffer, this->hb, -1, pos + start, pos + end, capacity(), this->offset, this->segment);
}

$ByteOrder* HeapCharBuffer::order() {
	return $ByteOrder::nativeOrder();
}

$ByteOrder* HeapCharBuffer::charRegionOrder() {
	return order();
}

void clinit$HeapCharBuffer($Class* class$) {
	HeapCharBuffer::$assertionsDisabled = !HeapCharBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($chars);
	HeapCharBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($chars));
	HeapCharBuffer::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($chars));
}

HeapCharBuffer::HeapCharBuffer() {
}

$Class* HeapCharBuffer::load$($String* name, bool initialize) {
	$loadClass(HeapCharBuffer, name, initialize, &_HeapCharBuffer_ClassInfo_, clinit$HeapCharBuffer, allocate$HeapCharBuffer);
	return class$;
}

$Class* HeapCharBuffer::class$ = nullptr;

	} // nio
} // java