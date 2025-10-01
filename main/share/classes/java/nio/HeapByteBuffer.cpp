#include <java/nio/HeapByteBuffer.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsCharBufferB.h>
#include <java/nio/ByteBufferAsCharBufferL.h>
#include <java/nio/ByteBufferAsDoubleBufferB.h>
#include <java/nio/ByteBufferAsDoubleBufferL.h>
#include <java/nio/ByteBufferAsFloatBufferB.h>
#include <java/nio/ByteBufferAsFloatBufferL.h>
#include <java/nio/ByteBufferAsIntBufferB.h>
#include <java/nio/ByteBufferAsIntBufferL.h>
#include <java/nio/ByteBufferAsLongBufferB.h>
#include <java/nio/ByteBufferAsLongBufferL.h>
#include <java/nio/ByteBufferAsShortBufferB.h>
#include <java/nio/ByteBufferAsShortBufferL.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/DoubleBuffer.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/HeapByteBufferR.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/LongBuffer.h>
#include <java/nio/ShortBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_INDEX_SCALE
#undef ARRAY_BASE_OFFSET
#undef UNSAFE
#undef SCOPED_MEMORY_ACCESS

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsCharBufferB = ::java::nio::ByteBufferAsCharBufferB;
using $ByteBufferAsCharBufferL = ::java::nio::ByteBufferAsCharBufferL;
using $ByteBufferAsDoubleBufferB = ::java::nio::ByteBufferAsDoubleBufferB;
using $ByteBufferAsDoubleBufferL = ::java::nio::ByteBufferAsDoubleBufferL;
using $ByteBufferAsFloatBufferB = ::java::nio::ByteBufferAsFloatBufferB;
using $ByteBufferAsFloatBufferL = ::java::nio::ByteBufferAsFloatBufferL;
using $ByteBufferAsIntBufferB = ::java::nio::ByteBufferAsIntBufferB;
using $ByteBufferAsIntBufferL = ::java::nio::ByteBufferAsIntBufferL;
using $ByteBufferAsLongBufferB = ::java::nio::ByteBufferAsLongBufferB;
using $ByteBufferAsLongBufferL = ::java::nio::ByteBufferAsLongBufferL;
using $ByteBufferAsShortBufferB = ::java::nio::ByteBufferAsShortBufferB;
using $ByteBufferAsShortBufferL = ::java::nio::ByteBufferAsShortBufferL;
using $CharBuffer = ::java::nio::CharBuffer;
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $HeapByteBufferR = ::java::nio::HeapByteBufferR;
using $IntBuffer = ::java::nio::IntBuffer;
using $LongBuffer = ::java::nio::LongBuffer;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapByteBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HeapByteBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapByteBuffer, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapByteBuffer, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapByteBuffer_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapByteBuffer::*)(int32_t,int32_t,$MemorySegmentProxy*)>(&HeapByteBuffer::init$))},
	{"<init>", "([BIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapByteBuffer::*)($bytes*,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapByteBuffer::init$))},
	{"<init>", "([BIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(HeapByteBuffer::*)($bytes*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapByteBuffer::init$))},
	{"_get", "(I)B", nullptr, 0},
	{"_put", "(IB)V", nullptr, 0},
	{"asCharBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"asDoubleBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"asFloatBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"asIntBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"asLongBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"asShortBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"byteOffset", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(HeapByteBuffer::*)(int64_t)>(&HeapByteBuffer::byteOffset))},
	{"compact", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"get", "()B", nullptr, $PUBLIC},
	{"get", "(I)B", nullptr, $PUBLIC},
	{"get", "([BII)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"get", "(I[BII)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"getChar", "()C", nullptr, $PUBLIC},
	{"getChar", "(I)C", nullptr, $PUBLIC},
	{"getDouble", "()D", nullptr, $PUBLIC},
	{"getDouble", "(I)D", nullptr, $PUBLIC},
	{"getFloat", "()F", nullptr, $PUBLIC},
	{"getFloat", "(I)F", nullptr, $PUBLIC},
	{"getInt", "()I", nullptr, $PUBLIC},
	{"getInt", "(I)I", nullptr, $PUBLIC},
	{"getLong", "()J", nullptr, $PUBLIC},
	{"getLong", "(I)J", nullptr, $PUBLIC},
	{"getShort", "()S", nullptr, $PUBLIC},
	{"getShort", "(I)S", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PROTECTED},
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

$ClassInfo _HeapByteBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapByteBuffer",
	"java.nio.ByteBuffer",
	nullptr,
	_HeapByteBuffer_FieldInfo_,
	_HeapByteBuffer_MethodInfo_
};

$Object* allocate$HeapByteBuffer($Class* clazz) {
	return $of($alloc(HeapByteBuffer));
}

bool HeapByteBuffer::$assertionsDisabled = false;
int64_t HeapByteBuffer::ARRAY_BASE_OFFSET = 0;
int64_t HeapByteBuffer::ARRAY_INDEX_SCALE = 0;

void HeapByteBuffer::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$ByteBuffer::init$(-1, 0, lim, cap, $$new($bytes, cap), 0, segment);
	this->address = HeapByteBuffer::ARRAY_BASE_OFFSET;
}

void HeapByteBuffer::init$($bytes* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$ByteBuffer::init$(-1, off, off + len, $nc(buf)->length, buf, 0, segment);
	this->address = HeapByteBuffer::ARRAY_BASE_OFFSET;
}

void HeapByteBuffer::init$($bytes* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$ByteBuffer::init$(mark, pos, lim, cap, buf, off, segment);
	this->address = HeapByteBuffer::ARRAY_BASE_OFFSET + off * HeapByteBuffer::ARRAY_INDEX_SCALE;
}

$ByteBuffer* HeapByteBuffer::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapByteBuffer, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$ByteBuffer* HeapByteBuffer::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapByteBuffer, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$ByteBuffer* HeapByteBuffer::duplicate() {
	$var($bytes, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapByteBuffer, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$ByteBuffer* HeapByteBuffer::asReadOnlyBuffer() {
	$var($bytes, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($HeapByteBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

int32_t HeapByteBuffer::ix(int32_t i) {
	return i + this->offset;
}

int64_t HeapByteBuffer::byteOffset(int64_t i) {
	return this->address + i;
}

int8_t HeapByteBuffer::get() {
	return $nc(this->hb)->get(ix(nextGetIndex()));
}

int8_t HeapByteBuffer::get(int32_t i) {
	return $nc(this->hb)->get(ix(checkIndex(i)));
}

$ByteBuffer* HeapByteBuffer::get($bytes* dst, int32_t offset, int32_t length) {
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

$ByteBuffer* HeapByteBuffer::get(int32_t index, $bytes* dst, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	$System::arraycopy(this->hb, ix(index), dst, offset, length);
	return this;
}

bool HeapByteBuffer::isDirect() {
	return false;
}

bool HeapByteBuffer::isReadOnly() {
	return false;
}

$ByteBuffer* HeapByteBuffer::put(int8_t x) {
	$nc(this->hb)->set(ix(nextPutIndex()), x);
	return this;
}

$ByteBuffer* HeapByteBuffer::put(int32_t i, int8_t x) {
	$nc(this->hb)->set(ix(checkIndex(i)), x);
	return this;
}

$ByteBuffer* HeapByteBuffer::put($bytes* src, int32_t offset, int32_t length) {
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

$ByteBuffer* HeapByteBuffer::put($ByteBuffer* src) {
	checkScope();
	$ByteBuffer::put(src);
	return this;
}

$ByteBuffer* HeapByteBuffer::put(int32_t index, $ByteBuffer* src, int32_t offset, int32_t length) {
	checkScope();
	$ByteBuffer::put(index, src, offset, length);
	return this;
}

$ByteBuffer* HeapByteBuffer::put(int32_t index, $bytes* src, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	$System::arraycopy(src, offset, this->hb, ix(index), length);
	return this;
}

$ByteBuffer* HeapByteBuffer::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!HeapByteBuffer::$assertionsDisabled && !(pos <= lim)) {
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

int8_t HeapByteBuffer::_get(int32_t i) {
	return $nc(this->hb)->get(i);
}

void HeapByteBuffer::_put(int32_t i, int8_t b) {
	$nc(this->hb)->set(i, b);
}

char16_t HeapByteBuffer::getChar() {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	return $nc($Buffer::SCOPED_MEMORY_ACCESS)->getCharUnaligned(var$0, var$1, byteOffset(nextGetIndex(2)), this->bigEndian);
}

char16_t HeapByteBuffer::getChar(int32_t i) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	return $nc($Buffer::SCOPED_MEMORY_ACCESS)->getCharUnaligned(var$0, var$1, byteOffset(checkIndex(i, 2)), this->bigEndian);
}

$ByteBuffer* HeapByteBuffer::putChar(char16_t x) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putCharUnaligned(var$0, var$1, byteOffset(nextPutIndex(2)), x, this->bigEndian);
	return this;
}

$ByteBuffer* HeapByteBuffer::putChar(int32_t i, char16_t x) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putCharUnaligned(var$0, var$1, byteOffset(checkIndex(i, 2)), x, this->bigEndian);
	return this;
}

$CharBuffer* HeapByteBuffer::asCharBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 1;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$CharBuffer*>(($new($ByteBufferAsCharBufferB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$CharBuffer*>(($new($ByteBufferAsCharBufferL, this, -1, 0, size, size, addr, this->segment))));
}

int16_t HeapByteBuffer::getShort() {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	return $nc($Buffer::SCOPED_MEMORY_ACCESS)->getShortUnaligned(var$0, var$1, byteOffset(nextGetIndex(2)), this->bigEndian);
}

int16_t HeapByteBuffer::getShort(int32_t i) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	return $nc($Buffer::SCOPED_MEMORY_ACCESS)->getShortUnaligned(var$0, var$1, byteOffset(checkIndex(i, 2)), this->bigEndian);
}

$ByteBuffer* HeapByteBuffer::putShort(int16_t x) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putShortUnaligned(var$0, var$1, byteOffset(nextPutIndex(2)), x, this->bigEndian);
	return this;
}

$ByteBuffer* HeapByteBuffer::putShort(int32_t i, int16_t x) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putShortUnaligned(var$0, var$1, byteOffset(checkIndex(i, 2)), x, this->bigEndian);
	return this;
}

$ShortBuffer* HeapByteBuffer::asShortBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 1;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$ShortBuffer*>(($new($ByteBufferAsShortBufferB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$ShortBuffer*>(($new($ByteBufferAsShortBufferL, this, -1, 0, size, size, addr, this->segment))));
}

int32_t HeapByteBuffer::getInt() {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	return $nc($Buffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, byteOffset(nextGetIndex(4)), this->bigEndian);
}

int32_t HeapByteBuffer::getInt(int32_t i) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	return $nc($Buffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, byteOffset(checkIndex(i, 4)), this->bigEndian);
}

$ByteBuffer* HeapByteBuffer::putInt(int32_t x) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, byteOffset(nextPutIndex(4)), x, this->bigEndian);
	return this;
}

$ByteBuffer* HeapByteBuffer::putInt(int32_t i, int32_t x) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, byteOffset(checkIndex(i, 4)), x, this->bigEndian);
	return this;
}

$IntBuffer* HeapByteBuffer::asIntBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 2;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$IntBuffer*>(($new($ByteBufferAsIntBufferB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$IntBuffer*>(($new($ByteBufferAsIntBufferL, this, -1, 0, size, size, addr, this->segment))));
}

int64_t HeapByteBuffer::getLong() {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	return $nc($Buffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, byteOffset(nextGetIndex(8)), this->bigEndian);
}

int64_t HeapByteBuffer::getLong(int32_t i) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	return $nc($Buffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, byteOffset(checkIndex(i, 8)), this->bigEndian);
}

$ByteBuffer* HeapByteBuffer::putLong(int64_t x) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, byteOffset(nextPutIndex(8)), x, this->bigEndian);
	return this;
}

$ByteBuffer* HeapByteBuffer::putLong(int32_t i, int64_t x) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, byteOffset(checkIndex(i, 8)), x, this->bigEndian);
	return this;
}

$LongBuffer* HeapByteBuffer::asLongBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 3;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$LongBuffer*>(($new($ByteBufferAsLongBufferB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$LongBuffer*>(($new($ByteBufferAsLongBufferL, this, -1, 0, size, size, addr, this->segment))));
}

float HeapByteBuffer::getFloat() {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	int32_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, byteOffset(nextGetIndex(4)), this->bigEndian);
	return $Float::intBitsToFloat(x);
}

float HeapByteBuffer::getFloat(int32_t i) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	int32_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, byteOffset(checkIndex(i, 4)), this->bigEndian);
	return $Float::intBitsToFloat(x);
}

$ByteBuffer* HeapByteBuffer::putFloat(float x) {
	int32_t y = $Float::floatToRawIntBits(x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, byteOffset(nextPutIndex(4)), y, this->bigEndian);
	return this;
}

$ByteBuffer* HeapByteBuffer::putFloat(int32_t i, float x) {
	int32_t y = $Float::floatToRawIntBits(x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, byteOffset(checkIndex(i, 4)), y, this->bigEndian);
	return this;
}

$FloatBuffer* HeapByteBuffer::asFloatBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 2;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$FloatBuffer*>(($new($ByteBufferAsFloatBufferB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$FloatBuffer*>(($new($ByteBufferAsFloatBufferL, this, -1, 0, size, size, addr, this->segment))));
}

double HeapByteBuffer::getDouble() {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	int64_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, byteOffset(nextGetIndex(8)), this->bigEndian);
	return $Double::longBitsToDouble(x);
}

double HeapByteBuffer::getDouble(int32_t i) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	int64_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, byteOffset(checkIndex(i, 8)), this->bigEndian);
	return $Double::longBitsToDouble(x);
}

$ByteBuffer* HeapByteBuffer::putDouble(double x) {
	int64_t y = $Double::doubleToRawLongBits(x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, byteOffset(nextPutIndex(8)), y, this->bigEndian);
	return this;
}

$ByteBuffer* HeapByteBuffer::putDouble(int32_t i, double x) {
	int64_t y = $Double::doubleToRawLongBits(x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of(this->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, byteOffset(checkIndex(i, 8)), y, this->bigEndian);
	return this;
}

$DoubleBuffer* HeapByteBuffer::asDoubleBuffer() {
	int32_t pos = position();
	int32_t size = (limit() - pos) >> 3;
	int64_t addr = this->address + pos;
	return (this->bigEndian ? static_cast<$DoubleBuffer*>(($new($ByteBufferAsDoubleBufferB, this, -1, 0, size, size, addr, this->segment))) : static_cast<$DoubleBuffer*>(($new($ByteBufferAsDoubleBufferL, this, -1, 0, size, size, addr, this->segment))));
}

void clinit$HeapByteBuffer($Class* class$) {
	HeapByteBuffer::$assertionsDisabled = !HeapByteBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($bytes);
	HeapByteBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($bytes));
	HeapByteBuffer::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($bytes));
}

HeapByteBuffer::HeapByteBuffer() {
}

$Class* HeapByteBuffer::load$($String* name, bool initialize) {
	$loadClass(HeapByteBuffer, name, initialize, &_HeapByteBuffer_ClassInfo_, clinit$HeapByteBuffer, allocate$HeapByteBuffer);
	return class$;
}

$Class* HeapByteBuffer::class$ = nullptr;

	} // nio
} // java