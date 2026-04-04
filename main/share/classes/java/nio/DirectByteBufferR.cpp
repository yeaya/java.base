#include <java/nio/DirectByteBufferR.h>
#include <java/io/FileDescriptor.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsCharBufferRB.h>
#include <java/nio/ByteBufferAsCharBufferRL.h>
#include <java/nio/ByteBufferAsDoubleBufferRB.h>
#include <java/nio/ByteBufferAsDoubleBufferRL.h>
#include <java/nio/ByteBufferAsFloatBufferRB.h>
#include <java/nio/ByteBufferAsFloatBufferRL.h>
#include <java/nio/ByteBufferAsIntBufferRB.h>
#include <java/nio/ByteBufferAsIntBufferRL.h>
#include <java/nio/ByteBufferAsLongBufferRB.h>
#include <java/nio/ByteBufferAsLongBufferRL.h>
#include <java/nio/ByteBufferAsShortBufferRB.h>
#include <java/nio/ByteBufferAsShortBufferRL.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/DirectByteBuffer.h>
#include <java/nio/DirectCharBufferRS.h>
#include <java/nio/DirectCharBufferRU.h>
#include <java/nio/DirectDoubleBufferRS.h>
#include <java/nio/DirectDoubleBufferRU.h>
#include <java/nio/DirectFloatBufferRS.h>
#include <java/nio/DirectFloatBufferRU.h>
#include <java/nio/DirectIntBufferRS.h>
#include <java/nio/DirectIntBufferRU.h>
#include <java/nio/DirectLongBufferRS.h>
#include <java/nio/DirectLongBufferRU.h>
#include <java/nio/DirectShortBufferRS.h>
#include <java/nio/DirectShortBufferRU.h>
#include <java/nio/DoubleBuffer.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/LongBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/nio/ShortBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#undef UNALIGNED

using $FileDescriptor = ::java::io::FileDescriptor;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsCharBufferRB = ::java::nio::ByteBufferAsCharBufferRB;
using $ByteBufferAsCharBufferRL = ::java::nio::ByteBufferAsCharBufferRL;
using $ByteBufferAsDoubleBufferRB = ::java::nio::ByteBufferAsDoubleBufferRB;
using $ByteBufferAsDoubleBufferRL = ::java::nio::ByteBufferAsDoubleBufferRL;
using $ByteBufferAsFloatBufferRB = ::java::nio::ByteBufferAsFloatBufferRB;
using $ByteBufferAsFloatBufferRL = ::java::nio::ByteBufferAsFloatBufferRL;
using $ByteBufferAsIntBufferRB = ::java::nio::ByteBufferAsIntBufferRB;
using $ByteBufferAsIntBufferRL = ::java::nio::ByteBufferAsIntBufferRL;
using $ByteBufferAsLongBufferRB = ::java::nio::ByteBufferAsLongBufferRB;
using $ByteBufferAsLongBufferRL = ::java::nio::ByteBufferAsLongBufferRL;
using $ByteBufferAsShortBufferRB = ::java::nio::ByteBufferAsShortBufferRB;
using $ByteBufferAsShortBufferRL = ::java::nio::ByteBufferAsShortBufferRL;
using $CharBuffer = ::java::nio::CharBuffer;
using $DirectByteBuffer = ::java::nio::DirectByteBuffer;
using $DirectCharBufferRS = ::java::nio::DirectCharBufferRS;
using $DirectCharBufferRU = ::java::nio::DirectCharBufferRU;
using $DirectDoubleBufferRS = ::java::nio::DirectDoubleBufferRS;
using $DirectDoubleBufferRU = ::java::nio::DirectDoubleBufferRU;
using $DirectFloatBufferRS = ::java::nio::DirectFloatBufferRS;
using $DirectFloatBufferRU = ::java::nio::DirectFloatBufferRU;
using $DirectIntBufferRS = ::java::nio::DirectIntBufferRS;
using $DirectIntBufferRU = ::java::nio::DirectIntBufferRU;
using $DirectLongBufferRS = ::java::nio::DirectLongBufferRS;
using $DirectLongBufferRU = ::java::nio::DirectLongBufferRU;
using $DirectShortBufferRS = ::java::nio::DirectShortBufferRS;
using $DirectShortBufferRU = ::java::nio::DirectShortBufferRU;
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $IntBuffer = ::java::nio::IntBuffer;
using $LongBuffer = ::java::nio::LongBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

bool DirectByteBufferR::$assertionsDisabled = false;

void DirectByteBufferR::init$(int32_t cap) {
	$DirectByteBuffer::init$(cap);
	this->$ByteBuffer::isReadOnly$ = true;
}

void DirectByteBufferR::init$(int32_t cap, int64_t addr, $FileDescriptor* fd, $Runnable* unmapper, bool isSync, $MemorySegmentProxy* segment) {
	$DirectByteBuffer::init$(cap, addr, fd, unmapper, isSync, segment);
	this->$ByteBuffer::isReadOnly$ = true;
}

void DirectByteBufferR::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $FileDescriptor* fd, bool isSync, $MemorySegmentProxy* segment) {
	$DirectByteBuffer::init$(db, mark, pos, lim, cap, off, fd, isSync, segment);
	this->$ByteBuffer::isReadOnly$ = true;
}

$Object* DirectByteBufferR::base() {
	return nullptr;
}

$MappedByteBuffer* DirectByteBufferR::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 0);
	if (!DirectByteBufferR::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	$var($FileDescriptor, var$0, fileDescriptor());
	return $new(DirectByteBufferR, this, -1, 0, rem, rem, off, var$0, isSync(), this->segment);
}

$MappedByteBuffer* DirectByteBufferR::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	int32_t var$0 = index << 0;
	$var($FileDescriptor, var$1, fileDescriptor());
	return $new(DirectByteBufferR, this, -1, 0, length, length, var$0, var$1, isSync(), this->segment);
}

$MappedByteBuffer* DirectByteBufferR::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	int32_t var$3 = this->capacity();
	$var($FileDescriptor, var$4, fileDescriptor());
	return $new(DirectByteBufferR, this, var$0, var$1, var$2, var$3, 0, var$4, isSync(), this->segment);
}

$ByteBuffer* DirectByteBufferR::asReadOnlyBuffer() {
	return duplicate();
}

$ByteBuffer* DirectByteBufferR::put(int8_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::put(int32_t i, int8_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$MappedByteBuffer* DirectByteBufferR::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool DirectByteBufferR::isDirect() {
	return true;
}

bool DirectByteBufferR::isReadOnly() {
	return true;
}

$ByteBuffer* DirectByteBufferR::putChar(int64_t a, char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putChar(char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putChar(int32_t i, char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* DirectByteBufferR::asCharBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBufferR::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 1;
	$init($DirectByteBuffer);
	if (!$DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 1)) != 0)) {
		return (this->bigEndian ? $cast($CharBuffer, ($new($ByteBufferAsCharBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : $cast($CharBuffer, ($new($ByteBufferAsCharBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? $cast($CharBuffer, ($new($DirectCharBufferRU, this, -1, 0, size, size, off, this->segment))) : $cast($CharBuffer, ($new($DirectCharBufferRS, this, -1, 0, size, size, off, this->segment))));
	}
}

$ByteBuffer* DirectByteBufferR::putShort(int64_t a, int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putShort(int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putShort(int32_t i, int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* DirectByteBufferR::asShortBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBufferR::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 1;
	$init($DirectByteBuffer);
	if (!$DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 1)) != 0)) {
		return (this->bigEndian ? $cast($ShortBuffer, ($new($ByteBufferAsShortBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : $cast($ShortBuffer, ($new($ByteBufferAsShortBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? $cast($ShortBuffer, ($new($DirectShortBufferRU, this, -1, 0, size, size, off, this->segment))) : $cast($ShortBuffer, ($new($DirectShortBufferRS, this, -1, 0, size, size, off, this->segment))));
	}
}

$ByteBuffer* DirectByteBufferR::putInt(int64_t a, int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putInt(int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putInt(int32_t i, int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* DirectByteBufferR::asIntBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBufferR::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 2;
	$init($DirectByteBuffer);
	if (!$DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 2)) != 0)) {
		return (this->bigEndian ? $cast($IntBuffer, ($new($ByteBufferAsIntBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : $cast($IntBuffer, ($new($ByteBufferAsIntBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? $cast($IntBuffer, ($new($DirectIntBufferRU, this, -1, 0, size, size, off, this->segment))) : $cast($IntBuffer, ($new($DirectIntBufferRS, this, -1, 0, size, size, off, this->segment))));
	}
}

$ByteBuffer* DirectByteBufferR::putLong(int64_t a, int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putLong(int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putLong(int32_t i, int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* DirectByteBufferR::asLongBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBufferR::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 3;
	$init($DirectByteBuffer);
	if (!$DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 3)) != 0)) {
		return (this->bigEndian ? $cast($LongBuffer, ($new($ByteBufferAsLongBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : $cast($LongBuffer, ($new($ByteBufferAsLongBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? $cast($LongBuffer, ($new($DirectLongBufferRU, this, -1, 0, size, size, off, this->segment))) : $cast($LongBuffer, ($new($DirectLongBufferRS, this, -1, 0, size, size, off, this->segment))));
	}
}

$ByteBuffer* DirectByteBufferR::putFloat(int64_t a, float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putFloat(float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putFloat(int32_t i, float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* DirectByteBufferR::asFloatBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBufferR::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 2;
	$init($DirectByteBuffer);
	if (!$DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 2)) != 0)) {
		return (this->bigEndian ? $cast($FloatBuffer, ($new($ByteBufferAsFloatBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : $cast($FloatBuffer, ($new($ByteBufferAsFloatBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? $cast($FloatBuffer, ($new($DirectFloatBufferRU, this, -1, 0, size, size, off, this->segment))) : $cast($FloatBuffer, ($new($DirectFloatBufferRS, this, -1, 0, size, size, off, this->segment))));
	}
}

$ByteBuffer* DirectByteBufferR::putDouble(int64_t a, double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putDouble(double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteBuffer* DirectByteBufferR::putDouble(int32_t i, double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* DirectByteBufferR::asDoubleBuffer() {
	int32_t off = this->position();
	int32_t lim = this->limit();
	if (!DirectByteBufferR::$assertionsDisabled && !(off <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (off <= lim ? lim - off : 0);
	int32_t size = rem >> 3;
	$init($DirectByteBuffer);
	if (!$DirectByteBuffer::UNALIGNED && ($mod((this->$Buffer::address + off), (1 << 3)) != 0)) {
		return (this->bigEndian ? $cast($DoubleBuffer, ($new($ByteBufferAsDoubleBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : $cast($DoubleBuffer, ($new($ByteBufferAsDoubleBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? $cast($DoubleBuffer, ($new($DirectDoubleBufferRU, this, -1, 0, size, size, off, this->segment))) : $cast($DoubleBuffer, ($new($DirectDoubleBufferRS, this, -1, 0, size, size, off, this->segment))));
	}
}

void DirectByteBufferR::clinit$($Class* clazz) {
	DirectByteBufferR::$assertionsDisabled = !DirectByteBufferR::class$->desiredAssertionStatus();
}

DirectByteBufferR::DirectByteBufferR() {
}

$Class* DirectByteBufferR::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectByteBufferR, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(DirectByteBufferR, init$, void, int32_t)},
		{"<init>", "(IJLjava/io/FileDescriptor;Ljava/lang/Runnable;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(DirectByteBufferR, init$, void, int32_t, int64_t, $FileDescriptor*, $Runnable*, bool, $MemorySegmentProxy*)},
		{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjava/io/FileDescriptor;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(DirectByteBufferR, init$, void, $DirectBuffer*, int32_t, int32_t, int32_t, int32_t, int32_t, $FileDescriptor*, bool, $MemorySegmentProxy*)},
		{"asCharBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, asCharBuffer, $CharBuffer*)},
		{"asDoubleBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, asDoubleBuffer, $DoubleBuffer*)},
		{"asFloatBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, asFloatBuffer, $FloatBuffer*)},
		{"asIntBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, asIntBuffer, $IntBuffer*)},
		{"asLongBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, asLongBuffer, $LongBuffer*)},
		{"asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, asReadOnlyBuffer, $ByteBuffer*)},
		{"asShortBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, asShortBuffer, $ShortBuffer*)},
		{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(DirectByteBufferR, base, $Object*)},
		{"compact", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, compact, $MappedByteBuffer*)},
		{"duplicate", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, duplicate, $MappedByteBuffer*)},
		{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, isDirect, bool)},
		{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, isReadOnly, bool)},
		{"put", "(B)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, put, $ByteBuffer*, int8_t)},
		{"put", "(IB)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, put, $ByteBuffer*, int32_t, int8_t)},
		{"putChar", "(JC)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBufferR, putChar, $ByteBuffer*, int64_t, char16_t)},
		{"putChar", "(C)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putChar, $ByteBuffer*, char16_t)},
		{"putChar", "(IC)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putChar, $ByteBuffer*, int32_t, char16_t)},
		{"putDouble", "(JD)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBufferR, putDouble, $ByteBuffer*, int64_t, double)},
		{"putDouble", "(D)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putDouble, $ByteBuffer*, double)},
		{"putDouble", "(ID)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putDouble, $ByteBuffer*, int32_t, double)},
		{"putFloat", "(JF)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBufferR, putFloat, $ByteBuffer*, int64_t, float)},
		{"putFloat", "(F)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putFloat, $ByteBuffer*, float)},
		{"putFloat", "(IF)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putFloat, $ByteBuffer*, int32_t, float)},
		{"putInt", "(JI)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBufferR, putInt, $ByteBuffer*, int64_t, int32_t)},
		{"putInt", "(I)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putInt, $ByteBuffer*, int32_t)},
		{"putInt", "(II)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putInt, $ByteBuffer*, int32_t, int32_t)},
		{"putLong", "(JJ)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBufferR, putLong, $ByteBuffer*, int64_t, int64_t)},
		{"putLong", "(J)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putLong, $ByteBuffer*, int64_t)},
		{"putLong", "(IJ)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putLong, $ByteBuffer*, int32_t, int64_t)},
		{"putShort", "(JS)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(DirectByteBufferR, putShort, $ByteBuffer*, int64_t, int16_t)},
		{"putShort", "(S)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putShort, $ByteBuffer*, int16_t)},
		{"putShort", "(IS)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, putShort, $ByteBuffer*, int32_t, int16_t)},
		{"slice", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, slice, $MappedByteBuffer*)},
		{"slice", "(II)Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectByteBufferR, slice, $MappedByteBuffer*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.DirectByteBufferR",
		"java.nio.DirectByteBuffer",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DirectByteBufferR, name, initialize, &classInfo$$, DirectByteBufferR::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DirectByteBufferR));
	});
	return class$;
}

$Class* DirectByteBufferR::class$ = nullptr;

	} // nio
} // java