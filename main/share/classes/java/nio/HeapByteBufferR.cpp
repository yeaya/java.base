#include <java/nio/HeapByteBufferR.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsCharBufferB.h>
#include <java/nio/ByteBufferAsCharBufferL.h>
#include <java/nio/ByteBufferAsCharBufferRB.h>
#include <java/nio/ByteBufferAsCharBufferRL.h>
#include <java/nio/ByteBufferAsDoubleBufferB.h>
#include <java/nio/ByteBufferAsDoubleBufferL.h>
#include <java/nio/ByteBufferAsDoubleBufferRB.h>
#include <java/nio/ByteBufferAsDoubleBufferRL.h>
#include <java/nio/ByteBufferAsFloatBufferB.h>
#include <java/nio/ByteBufferAsFloatBufferL.h>
#include <java/nio/ByteBufferAsFloatBufferRB.h>
#include <java/nio/ByteBufferAsFloatBufferRL.h>
#include <java/nio/ByteBufferAsIntBufferB.h>
#include <java/nio/ByteBufferAsIntBufferL.h>
#include <java/nio/ByteBufferAsIntBufferRB.h>
#include <java/nio/ByteBufferAsIntBufferRL.h>
#include <java/nio/ByteBufferAsLongBufferB.h>
#include <java/nio/ByteBufferAsLongBufferL.h>
#include <java/nio/ByteBufferAsLongBufferRB.h>
#include <java/nio/ByteBufferAsLongBufferRL.h>
#include <java/nio/ByteBufferAsShortBufferB.h>
#include <java/nio/ByteBufferAsShortBufferL.h>
#include <java/nio/ByteBufferAsShortBufferRB.h>
#include <java/nio/ByteBufferAsShortBufferRL.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/DoubleBuffer.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/HeapByteBuffer.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/LongBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/nio/ShortBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_INDEX_SCALE
#undef ARRAY_BASE_OFFSET
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsCharBufferB = ::java::nio::ByteBufferAsCharBufferB;
using $ByteBufferAsCharBufferL = ::java::nio::ByteBufferAsCharBufferL;
using $ByteBufferAsCharBufferRB = ::java::nio::ByteBufferAsCharBufferRB;
using $ByteBufferAsCharBufferRL = ::java::nio::ByteBufferAsCharBufferRL;
using $ByteBufferAsDoubleBufferB = ::java::nio::ByteBufferAsDoubleBufferB;
using $ByteBufferAsDoubleBufferL = ::java::nio::ByteBufferAsDoubleBufferL;
using $ByteBufferAsDoubleBufferRB = ::java::nio::ByteBufferAsDoubleBufferRB;
using $ByteBufferAsDoubleBufferRL = ::java::nio::ByteBufferAsDoubleBufferRL;
using $ByteBufferAsFloatBufferB = ::java::nio::ByteBufferAsFloatBufferB;
using $ByteBufferAsFloatBufferL = ::java::nio::ByteBufferAsFloatBufferL;
using $ByteBufferAsFloatBufferRB = ::java::nio::ByteBufferAsFloatBufferRB;
using $ByteBufferAsFloatBufferRL = ::java::nio::ByteBufferAsFloatBufferRL;
using $ByteBufferAsIntBufferB = ::java::nio::ByteBufferAsIntBufferB;
using $ByteBufferAsIntBufferL = ::java::nio::ByteBufferAsIntBufferL;
using $ByteBufferAsIntBufferRB = ::java::nio::ByteBufferAsIntBufferRB;
using $ByteBufferAsIntBufferRL = ::java::nio::ByteBufferAsIntBufferRL;
using $ByteBufferAsLongBufferB = ::java::nio::ByteBufferAsLongBufferB;
using $ByteBufferAsLongBufferL = ::java::nio::ByteBufferAsLongBufferL;
using $ByteBufferAsLongBufferRB = ::java::nio::ByteBufferAsLongBufferRB;
using $ByteBufferAsLongBufferRL = ::java::nio::ByteBufferAsLongBufferRL;
using $ByteBufferAsShortBufferB = ::java::nio::ByteBufferAsShortBufferB;
using $ByteBufferAsShortBufferL = ::java::nio::ByteBufferAsShortBufferL;
using $ByteBufferAsShortBufferRB = ::java::nio::ByteBufferAsShortBufferRB;
using $ByteBufferAsShortBufferRL = ::java::nio::ByteBufferAsShortBufferRL;
using $CharBuffer = ::java::nio::CharBuffer;
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $HeapByteBuffer = ::java::nio::HeapByteBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $LongBuffer = ::java::nio::LongBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapByteBufferR_FieldInfo_[] = {
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapByteBufferR, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapByteBufferR, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapByteBufferR_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapByteBufferR::*)(int32_t,int32_t,$MemorySegmentProxy*)>(&HeapByteBufferR::init$))},
	{"<init>", "([BIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapByteBufferR::*)($bytes*,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapByteBufferR::init$))},
	{"<init>", "([BIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(HeapByteBufferR::*)($bytes*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapByteBufferR::init$))},
	{"_get", "(I)B", nullptr, 0},
	{"_put", "(IB)V", nullptr, 0},
	{"asCharBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"asDoubleBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"asFloatBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"asIntBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"asLongBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"asShortBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"put", "(B)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"put", "(IB)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"put", "([BII)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"put", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/ByteBuffer;II)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"put", "(I[BII)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putChar", "(C)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putChar", "(IC)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putDouble", "(D)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putDouble", "(ID)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putFloat", "(F)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putFloat", "(IF)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putInt", "(I)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putInt", "(II)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putLong", "(J)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putLong", "(IJ)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putShort", "(S)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putShort", "(IS)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HeapByteBufferR_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapByteBufferR",
	"java.nio.HeapByteBuffer",
	nullptr,
	_HeapByteBufferR_FieldInfo_,
	_HeapByteBufferR_MethodInfo_
};

$Object* allocate$HeapByteBufferR($Class* clazz) {
	return $of($alloc(HeapByteBufferR));
}

int64_t HeapByteBufferR::ARRAY_BASE_OFFSET = 0;
int64_t HeapByteBufferR::ARRAY_INDEX_SCALE = 0;

void HeapByteBufferR::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$HeapByteBuffer::init$(cap, lim, segment);
	this->$ByteBuffer::isReadOnly$ = true;
}

void HeapByteBufferR::init$($bytes* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$HeapByteBuffer::init$(buf, off, len, segment);
	this->$ByteBuffer::isReadOnly$ = true;
}

void HeapByteBufferR::init$($bytes* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$HeapByteBuffer::init$(buf, mark, pos, lim, cap, off, segment);
	this->$ByteBuffer::isReadOnly$ = true;
}

$ByteBuffer* HeapByteBufferR::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapByteBufferR, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$ByteBuffer* HeapByteBufferR::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapByteBufferR, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$ByteBuffer* HeapByteBufferR::duplicate() {
	$var($bytes, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapByteBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$ByteBuffer* HeapByteBufferR::asReadOnlyBuffer() {
	return duplicate();
}

bool HeapByteBufferR::isReadOnly() {
	return true;
}

$ByteBuffer* HeapByteBufferR::put(int8_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::put(int32_t i, int8_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::put($bytes* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::put($ByteBuffer* src) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::put(int32_t index, $ByteBuffer* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::put(int32_t index, $bytes* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

int8_t HeapByteBufferR::_get(int32_t i) {
	return $nc(this->hb)->get(i);
}

void HeapByteBufferR::_put(int32_t i, int8_t b) {
	$throwNew($ReadOnlyBufferException);
}

$ByteBuffer* HeapByteBufferR::putChar(char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::putChar(int32_t i, char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* HeapByteBufferR::asCharBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 1;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$CharBuffer*>(($new($ByteBufferAsCharBufferRB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$CharBuffer*>(($new($ByteBufferAsCharBufferRL, this, -1, 0, size, size, addr, this->segment))));
}

$ByteBuffer* HeapByteBufferR::putShort(int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::putShort(int32_t i, int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* HeapByteBufferR::asShortBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 1;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$ShortBuffer*>(($new($ByteBufferAsShortBufferRB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$ShortBuffer*>(($new($ByteBufferAsShortBufferRL, this, -1, 0, size, size, addr, this->segment))));
}

$ByteBuffer* HeapByteBufferR::putInt(int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::putInt(int32_t i, int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* HeapByteBufferR::asIntBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 2;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$IntBuffer*>(($new($ByteBufferAsIntBufferRB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$IntBuffer*>(($new($ByteBufferAsIntBufferRL, this, -1, 0, size, size, addr, this->segment))));
}

$ByteBuffer* HeapByteBufferR::putLong(int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::putLong(int32_t i, int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* HeapByteBufferR::asLongBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 3;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$LongBuffer*>(($new($ByteBufferAsLongBufferRB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$LongBuffer*>(($new($ByteBufferAsLongBufferRL, this, -1, 0, size, size, addr, this->segment))));
}

$ByteBuffer* HeapByteBufferR::putFloat(float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::putFloat(int32_t i, float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* HeapByteBufferR::asFloatBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 2;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$FloatBuffer*>(($new($ByteBufferAsFloatBufferRB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$FloatBuffer*>(($new($ByteBufferAsFloatBufferRL, this, -1, 0, size, size, addr, this->segment))));
}

$ByteBuffer* HeapByteBufferR::putDouble(double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* HeapByteBufferR::putDouble(int32_t i, double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* HeapByteBufferR::asDoubleBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 3;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$DoubleBuffer*>(($new($ByteBufferAsDoubleBufferRB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$DoubleBuffer*>(($new($ByteBufferAsDoubleBufferRL, this, -1, 0, size, size, addr, this->segment))));
}

void clinit$HeapByteBufferR($Class* class$) {
	$init($Buffer);
	$load($bytes);
	HeapByteBufferR::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($bytes));
	HeapByteBufferR::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($bytes));
}

HeapByteBufferR::HeapByteBufferR() {
}

$Class* HeapByteBufferR::load$($String* name, bool initialize) {
	$loadClass(HeapByteBufferR, name, initialize, &_HeapByteBufferR_ClassInfo_, clinit$HeapByteBufferR, allocate$HeapByteBufferR);
	return class$;
}

$Class* HeapByteBufferR::class$ = nullptr;

	} // nio
} // java