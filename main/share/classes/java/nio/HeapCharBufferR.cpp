#include <java/nio/HeapCharBufferR.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/HeapCharBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_INDEX_SCALE
#undef ARRAY_BASE_OFFSET
#undef UNSAFE

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $Buffer = ::java::nio::Buffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBuffer = ::java::nio::CharBuffer;
using $HeapCharBuffer = ::java::nio::HeapCharBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapCharBufferR_FieldInfo_[] = {
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapCharBufferR, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapCharBufferR, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapCharBufferR_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapCharBufferR::*)(int32_t,int32_t,$MemorySegmentProxy*)>(&HeapCharBufferR::init$))},
	{"<init>", "([CIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapCharBufferR::*)($chars*,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapCharBufferR::init$))},
	{"<init>", "([CIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(HeapCharBufferR::*)($chars*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapCharBufferR::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"charRegionOrder", "()Ljava/nio/ByteOrder;", nullptr, 0},
	{"compact", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
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

$ClassInfo _HeapCharBufferR_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapCharBufferR",
	"java.nio.HeapCharBuffer",
	nullptr,
	_HeapCharBufferR_FieldInfo_,
	_HeapCharBufferR_MethodInfo_
};

$Object* allocate$HeapCharBufferR($Class* clazz) {
	return $of($alloc(HeapCharBufferR));
}

int64_t HeapCharBufferR::ARRAY_BASE_OFFSET = 0;
int64_t HeapCharBufferR::ARRAY_INDEX_SCALE = 0;

void HeapCharBufferR::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$HeapCharBuffer::init$(cap, lim, segment);
	this->$CharBuffer::isReadOnly$ = true;
}

void HeapCharBufferR::init$($chars* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$HeapCharBuffer::init$(buf, off, len, segment);
	this->$CharBuffer::isReadOnly$ = true;
}

void HeapCharBufferR::init$($chars* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$HeapCharBuffer::init$(buf, mark, pos, lim, cap, off, segment);
	this->$CharBuffer::isReadOnly$ = true;
}

$CharBuffer* HeapCharBufferR::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapCharBufferR, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$CharBuffer* HeapCharBufferR::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapCharBufferR, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$CharBuffer* HeapCharBufferR::duplicate() {
	$var($chars, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapCharBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$CharBuffer* HeapCharBufferR::asReadOnlyBuffer() {
	return duplicate();
}

bool HeapCharBufferR::isReadOnly() {
	return true;
}

$CharBuffer* HeapCharBufferR::put(char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* HeapCharBufferR::put(int32_t i, char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* HeapCharBufferR::put($chars* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* HeapCharBufferR::put($CharBuffer* src) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* HeapCharBufferR::put(int32_t index, $CharBuffer* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* HeapCharBufferR::put(int32_t index, $chars* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* HeapCharBufferR::put($String* src, int32_t start, int32_t end) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* HeapCharBufferR::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$String* HeapCharBufferR::toString(int32_t start, int32_t end) {
	try {
		return $new($String, this->hb, start + this->offset, end - start);
	} catch ($StringIndexOutOfBoundsException&) {
		$var($StringIndexOutOfBoundsException, x, $catch());
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

$CharSequence* HeapCharBufferR::subSequence(int32_t start, int32_t end) {
	int32_t pos = position();
	$Objects::checkFromToIndex(start, end, limit() - pos);
	return $new(HeapCharBufferR, this->hb, -1, pos + start, pos + end, capacity(), this->offset, this->segment);
}

$ByteOrder* HeapCharBufferR::order() {
	return $ByteOrder::nativeOrder();
}

$ByteOrder* HeapCharBufferR::charRegionOrder() {
	return order();
}

void clinit$HeapCharBufferR($Class* class$) {
	$init($Buffer);
	$load($chars);
	HeapCharBufferR::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($chars));
	HeapCharBufferR::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($chars));
}

HeapCharBufferR::HeapCharBufferR() {
}

$Class* HeapCharBufferR::load$($String* name, bool initialize) {
	$loadClass(HeapCharBufferR, name, initialize, &_HeapCharBufferR_ClassInfo_, clinit$HeapCharBufferR, allocate$HeapCharBufferR);
	return class$;
}

$Class* HeapCharBufferR::class$ = nullptr;

	} // nio
} // java