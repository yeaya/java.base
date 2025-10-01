#include <java/nio/DirectByteBufferR.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
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
#include <java/nio/DirectByteBuffer.h>
#include <java/nio/DirectCharBufferRS.h>
#include <java/nio/DirectCharBufferRU.h>
#include <java/nio/DirectCharBufferS.h>
#include <java/nio/DirectCharBufferU.h>
#include <java/nio/DirectDoubleBufferRS.h>
#include <java/nio/DirectDoubleBufferRU.h>
#include <java/nio/DirectDoubleBufferS.h>
#include <java/nio/DirectDoubleBufferU.h>
#include <java/nio/DirectFloatBufferRS.h>
#include <java/nio/DirectFloatBufferRU.h>
#include <java/nio/DirectFloatBufferS.h>
#include <java/nio/DirectFloatBufferU.h>
#include <java/nio/DirectIntBufferRS.h>
#include <java/nio/DirectIntBufferRU.h>
#include <java/nio/DirectIntBufferS.h>
#include <java/nio/DirectIntBufferU.h>
#include <java/nio/DirectLongBufferRS.h>
#include <java/nio/DirectLongBufferRU.h>
#include <java/nio/DirectLongBufferS.h>
#include <java/nio/DirectLongBufferU.h>
#include <java/nio/DirectShortBufferRS.h>
#include <java/nio/DirectShortBufferRU.h>
#include <java/nio/DirectShortBufferS.h>
#include <java/nio/DirectShortBufferU.h>
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
using $DirectByteBuffer = ::java::nio::DirectByteBuffer;
using $DirectCharBufferRS = ::java::nio::DirectCharBufferRS;
using $DirectCharBufferRU = ::java::nio::DirectCharBufferRU;
using $DirectCharBufferS = ::java::nio::DirectCharBufferS;
using $DirectCharBufferU = ::java::nio::DirectCharBufferU;
using $DirectDoubleBufferRS = ::java::nio::DirectDoubleBufferRS;
using $DirectDoubleBufferRU = ::java::nio::DirectDoubleBufferRU;
using $DirectDoubleBufferS = ::java::nio::DirectDoubleBufferS;
using $DirectDoubleBufferU = ::java::nio::DirectDoubleBufferU;
using $DirectFloatBufferRS = ::java::nio::DirectFloatBufferRS;
using $DirectFloatBufferRU = ::java::nio::DirectFloatBufferRU;
using $DirectFloatBufferS = ::java::nio::DirectFloatBufferS;
using $DirectFloatBufferU = ::java::nio::DirectFloatBufferU;
using $DirectIntBufferRS = ::java::nio::DirectIntBufferRS;
using $DirectIntBufferRU = ::java::nio::DirectIntBufferRU;
using $DirectIntBufferS = ::java::nio::DirectIntBufferS;
using $DirectIntBufferU = ::java::nio::DirectIntBufferU;
using $DirectLongBufferRS = ::java::nio::DirectLongBufferRS;
using $DirectLongBufferRU = ::java::nio::DirectLongBufferRU;
using $DirectLongBufferS = ::java::nio::DirectLongBufferS;
using $DirectLongBufferU = ::java::nio::DirectLongBufferU;
using $DirectShortBufferRS = ::java::nio::DirectShortBufferRS;
using $DirectShortBufferRU = ::java::nio::DirectShortBufferRU;
using $DirectShortBufferS = ::java::nio::DirectShortBufferS;
using $DirectShortBufferU = ::java::nio::DirectShortBufferU;
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

$FieldInfo _DirectByteBufferR_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectByteBufferR, $assertionsDisabled)},
	{}
};

$MethodInfo _DirectByteBufferR_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(DirectByteBufferR::*)(int32_t)>(&DirectByteBufferR::init$))},
	{"<init>", "(IJLjava/io/FileDescriptor;Ljava/lang/Runnable;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(DirectByteBufferR::*)(int32_t,int64_t,$FileDescriptor*,$Runnable*,bool,$MemorySegmentProxy*)>(&DirectByteBufferR::init$))},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjava/io/FileDescriptor;ZLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectByteBufferR::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$FileDescriptor*,bool,$MemorySegmentProxy*)>(&DirectByteBufferR::init$))},
	{"asCharBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"asDoubleBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"asFloatBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"asIntBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"asLongBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"asShortBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"compact", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"put", "(B)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"put", "(IB)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putChar", "(JC)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBufferR::*)(int64_t,char16_t)>(&DirectByteBufferR::putChar))},
	{"putChar", "(C)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putChar", "(IC)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putDouble", "(JD)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBufferR::*)(int64_t,double)>(&DirectByteBufferR::putDouble))},
	{"putDouble", "(D)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putDouble", "(ID)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putFloat", "(JF)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBufferR::*)(int64_t,float)>(&DirectByteBufferR::putFloat))},
	{"putFloat", "(F)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putFloat", "(IF)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putInt", "(JI)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBufferR::*)(int64_t,int32_t)>(&DirectByteBufferR::putInt))},
	{"putInt", "(I)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putInt", "(II)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putLong", "(JJ)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBufferR::*)(int64_t,int64_t)>(&DirectByteBufferR::putLong))},
	{"putLong", "(J)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putLong", "(IJ)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putShort", "(JS)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(DirectByteBufferR::*)(int64_t,int16_t)>(&DirectByteBufferR::putShort))},
	{"putShort", "(S)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"putShort", "(IS)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/MappedByteBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectByteBufferR_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectByteBufferR",
	"java.nio.DirectByteBuffer",
	nullptr,
	_DirectByteBufferR_FieldInfo_,
	_DirectByteBufferR_MethodInfo_
};

$Object* allocate$DirectByteBufferR($Class* clazz) {
	return $of($alloc(DirectByteBufferR));
}

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
	return $of(nullptr);
}

$MappedByteBuffer* DirectByteBufferR::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 0);
	if (!DirectByteBufferR::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	int32_t var$0 = rem;
	int32_t var$1 = rem;
	int32_t var$2 = off;
	$var($FileDescriptor, var$3, fileDescriptor());
	return $new(DirectByteBufferR, this, -1, 0, var$0, var$1, var$2, var$3, isSync(), this->segment);
}

$MappedByteBuffer* DirectByteBufferR::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	int32_t var$0 = length;
	int32_t var$1 = length;
	int32_t var$2 = index << 0;
	$var($FileDescriptor, var$3, fileDescriptor());
	return $new(DirectByteBufferR, this, -1, 0, var$0, var$1, var$2, var$3, isSync(), this->segment);
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
		return (this->bigEndian ? static_cast<$CharBuffer*>(($new($ByteBufferAsCharBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$CharBuffer*>(($new($ByteBufferAsCharBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$CharBuffer*>(($new($DirectCharBufferRU, this, -1, 0, size, size, off, this->segment))) : static_cast<$CharBuffer*>(($new($DirectCharBufferRS, this, -1, 0, size, size, off, this->segment))));
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
		return (this->bigEndian ? static_cast<$ShortBuffer*>(($new($ByteBufferAsShortBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$ShortBuffer*>(($new($ByteBufferAsShortBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$ShortBuffer*>(($new($DirectShortBufferRU, this, -1, 0, size, size, off, this->segment))) : static_cast<$ShortBuffer*>(($new($DirectShortBufferRS, this, -1, 0, size, size, off, this->segment))));
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
		return (this->bigEndian ? static_cast<$IntBuffer*>(($new($ByteBufferAsIntBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$IntBuffer*>(($new($ByteBufferAsIntBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$IntBuffer*>(($new($DirectIntBufferRU, this, -1, 0, size, size, off, this->segment))) : static_cast<$IntBuffer*>(($new($DirectIntBufferRS, this, -1, 0, size, size, off, this->segment))));
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
		return (this->bigEndian ? static_cast<$LongBuffer*>(($new($ByteBufferAsLongBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$LongBuffer*>(($new($ByteBufferAsLongBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$LongBuffer*>(($new($DirectLongBufferRU, this, -1, 0, size, size, off, this->segment))) : static_cast<$LongBuffer*>(($new($DirectLongBufferRS, this, -1, 0, size, size, off, this->segment))));
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
		return (this->bigEndian ? static_cast<$FloatBuffer*>(($new($ByteBufferAsFloatBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$FloatBuffer*>(($new($ByteBufferAsFloatBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$FloatBuffer*>(($new($DirectFloatBufferRU, this, -1, 0, size, size, off, this->segment))) : static_cast<$FloatBuffer*>(($new($DirectFloatBufferRS, this, -1, 0, size, size, off, this->segment))));
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
		return (this->bigEndian ? static_cast<$DoubleBuffer*>(($new($ByteBufferAsDoubleBufferRB, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))) : static_cast<$DoubleBuffer*>(($new($ByteBufferAsDoubleBufferRL, this, -1, 0, size, size, this->$Buffer::address + off, this->segment))));
	} else {
		return (this->nativeByteOrder ? static_cast<$DoubleBuffer*>(($new($DirectDoubleBufferRU, this, -1, 0, size, size, off, this->segment))) : static_cast<$DoubleBuffer*>(($new($DirectDoubleBufferRS, this, -1, 0, size, size, off, this->segment))));
	}
}

void clinit$DirectByteBufferR($Class* class$) {
	DirectByteBufferR::$assertionsDisabled = !DirectByteBufferR::class$->desiredAssertionStatus();
}

DirectByteBufferR::DirectByteBufferR() {
}

$Class* DirectByteBufferR::load$($String* name, bool initialize) {
	$loadClass(DirectByteBufferR, name, initialize, &_DirectByteBufferR_ClassInfo_, clinit$DirectByteBufferR, allocate$DirectByteBufferR);
	return class$;
}

$Class* DirectByteBufferR::class$ = nullptr;

	} // nio
} // java