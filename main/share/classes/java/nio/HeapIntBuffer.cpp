#include <java/nio/HeapIntBuffer.h>

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
#include <java/nio/HeapIntBufferR.h>
#include <java/nio/IntBuffer.h>
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
using $HeapIntBufferR = ::java::nio::HeapIntBufferR;
using $IntBuffer = ::java::nio::IntBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapIntBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HeapIntBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapIntBuffer, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapIntBuffer, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapIntBuffer_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapIntBuffer::*)(int32_t,int32_t,$MemorySegmentProxy*)>(&HeapIntBuffer::init$))},
	{"<init>", "([IIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapIntBuffer::*)($ints*,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapIntBuffer::init$))},
	{"<init>", "([IIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(HeapIntBuffer::*)($ints*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapIntBuffer::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"get", "()I", nullptr, $PUBLIC},
	{"get", "(I)I", nullptr, $PUBLIC},
	{"get", "([III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"get", "(I[III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PROTECTED},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "([III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "(Ljava/nio/IntBuffer;)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/IntBuffer;II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "(I[III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HeapIntBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapIntBuffer",
	"java.nio.IntBuffer",
	nullptr,
	_HeapIntBuffer_FieldInfo_,
	_HeapIntBuffer_MethodInfo_
};

$Object* allocate$HeapIntBuffer($Class* clazz) {
	return $of($alloc(HeapIntBuffer));
}

bool HeapIntBuffer::$assertionsDisabled = false;
int64_t HeapIntBuffer::ARRAY_BASE_OFFSET = 0;
int64_t HeapIntBuffer::ARRAY_INDEX_SCALE = 0;

void HeapIntBuffer::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$IntBuffer::init$(-1, 0, lim, cap, $$new($ints, cap), 0, segment);
	this->address = HeapIntBuffer::ARRAY_BASE_OFFSET;
}

void HeapIntBuffer::init$($ints* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$IntBuffer::init$(-1, off, off + len, $nc(buf)->length, buf, 0, segment);
	this->address = HeapIntBuffer::ARRAY_BASE_OFFSET;
}

void HeapIntBuffer::init$($ints* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$IntBuffer::init$(mark, pos, lim, cap, buf, off, segment);
	this->address = HeapIntBuffer::ARRAY_BASE_OFFSET + off * HeapIntBuffer::ARRAY_INDEX_SCALE;
}

$IntBuffer* HeapIntBuffer::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapIntBuffer, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$IntBuffer* HeapIntBuffer::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapIntBuffer, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$IntBuffer* HeapIntBuffer::duplicate() {
	$var($ints, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapIntBuffer, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$IntBuffer* HeapIntBuffer::asReadOnlyBuffer() {
	$var($ints, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($HeapIntBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

int32_t HeapIntBuffer::ix(int32_t i) {
	return i + this->offset;
}

int32_t HeapIntBuffer::get() {
	return $nc(this->hb)->get(ix(nextGetIndex()));
}

int32_t HeapIntBuffer::get(int32_t i) {
	return $nc(this->hb)->get(ix(checkIndex(i)));
}

$IntBuffer* HeapIntBuffer::get($ints* dst, int32_t offset, int32_t length) {
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

$IntBuffer* HeapIntBuffer::get(int32_t index, $ints* dst, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	$System::arraycopy(this->hb, ix(index), dst, offset, length);
	return this;
}

bool HeapIntBuffer::isDirect() {
	return false;
}

bool HeapIntBuffer::isReadOnly() {
	return false;
}

$IntBuffer* HeapIntBuffer::put(int32_t x) {
	$nc(this->hb)->set(ix(nextPutIndex()), x);
	return this;
}

$IntBuffer* HeapIntBuffer::put(int32_t i, int32_t x) {
	$nc(this->hb)->set(ix(checkIndex(i)), x);
	return this;
}

$IntBuffer* HeapIntBuffer::put($ints* src, int32_t offset, int32_t length) {
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

$IntBuffer* HeapIntBuffer::put($IntBuffer* src) {
	checkScope();
	$IntBuffer::put(src);
	return this;
}

$IntBuffer* HeapIntBuffer::put(int32_t index, $IntBuffer* src, int32_t offset, int32_t length) {
	checkScope();
	$IntBuffer::put(index, src, offset, length);
	return this;
}

$IntBuffer* HeapIntBuffer::put(int32_t index, $ints* src, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	$System::arraycopy(src, offset, this->hb, ix(index), length);
	return this;
}

$IntBuffer* HeapIntBuffer::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!HeapIntBuffer::$assertionsDisabled && !(pos <= lim)) {
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

$ByteOrder* HeapIntBuffer::order() {
	return $ByteOrder::nativeOrder();
}

void clinit$HeapIntBuffer($Class* class$) {
	HeapIntBuffer::$assertionsDisabled = !HeapIntBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($ints);
	HeapIntBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($ints));
	HeapIntBuffer::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($ints));
}

HeapIntBuffer::HeapIntBuffer() {
}

$Class* HeapIntBuffer::load$($String* name, bool initialize) {
	$loadClass(HeapIntBuffer, name, initialize, &_HeapIntBuffer_ClassInfo_, clinit$HeapIntBuffer, allocate$HeapIntBuffer);
	return class$;
}

$Class* HeapIntBuffer::class$ = nullptr;

	} // nio
} // java