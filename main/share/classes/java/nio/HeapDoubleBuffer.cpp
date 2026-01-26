#include <java/nio/HeapDoubleBuffer.h>

#include <java/lang/AssertionError.h>
#include <java/nio/Buffer.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DoubleBuffer.h>
#include <java/nio/HeapDoubleBufferR.h>
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
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $HeapDoubleBufferR = ::java::nio::HeapDoubleBufferR;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapDoubleBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HeapDoubleBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapDoubleBuffer, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapDoubleBuffer, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapDoubleBuffer_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(HeapDoubleBuffer, init$, void, int32_t, int32_t, $MemorySegmentProxy*)},
	{"<init>", "([DIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(HeapDoubleBuffer, init$, void, $doubles*, int32_t, int32_t, $MemorySegmentProxy*)},
	{"<init>", "([DIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(HeapDoubleBuffer, init$, void, $doubles*, int32_t, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, asReadOnlyBuffer, $DoubleBuffer*)},
	{"compact", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, compact, $DoubleBuffer*)},
	{"duplicate", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, duplicate, $DoubleBuffer*)},
	{"get", "()D", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, get, double)},
	{"get", "(I)D", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, get, double, int32_t)},
	{"get", "([DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, get, $DoubleBuffer*, $doubles*, int32_t, int32_t)},
	{"get", "(I[DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, get, $DoubleBuffer*, int32_t, $doubles*, int32_t, int32_t)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, isReadOnly, bool)},
	{"ix", "(I)I", nullptr, $PROTECTED, $virtualMethod(HeapDoubleBuffer, ix, int32_t, int32_t)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, order, $ByteOrder*)},
	{"put", "(D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, put, $DoubleBuffer*, double)},
	{"put", "(ID)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, put, $DoubleBuffer*, int32_t, double)},
	{"put", "([DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, put, $DoubleBuffer*, $doubles*, int32_t, int32_t)},
	{"put", "(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, put, $DoubleBuffer*, $DoubleBuffer*)},
	{"put", "(ILjava/nio/DoubleBuffer;II)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, put, $DoubleBuffer*, int32_t, $DoubleBuffer*, int32_t, int32_t)},
	{"put", "(I[DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, put, $DoubleBuffer*, int32_t, $doubles*, int32_t, int32_t)},
	{"slice", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, slice, $DoubleBuffer*)},
	{"slice", "(II)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapDoubleBuffer, slice, $DoubleBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _HeapDoubleBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapDoubleBuffer",
	"java.nio.DoubleBuffer",
	nullptr,
	_HeapDoubleBuffer_FieldInfo_,
	_HeapDoubleBuffer_MethodInfo_
};

$Object* allocate$HeapDoubleBuffer($Class* clazz) {
	return $of($alloc(HeapDoubleBuffer));
}

bool HeapDoubleBuffer::$assertionsDisabled = false;
int64_t HeapDoubleBuffer::ARRAY_BASE_OFFSET = 0;
int64_t HeapDoubleBuffer::ARRAY_INDEX_SCALE = 0;

void HeapDoubleBuffer::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$DoubleBuffer::init$(-1, 0, lim, cap, $$new($doubles, cap), 0, segment);
	this->address = HeapDoubleBuffer::ARRAY_BASE_OFFSET;
}

void HeapDoubleBuffer::init$($doubles* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$DoubleBuffer::init$(-1, off, off + len, $nc(buf)->length, buf, 0, segment);
	this->address = HeapDoubleBuffer::ARRAY_BASE_OFFSET;
}

void HeapDoubleBuffer::init$($doubles* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DoubleBuffer::init$(mark, pos, lim, cap, buf, off, segment);
	this->address = HeapDoubleBuffer::ARRAY_BASE_OFFSET + off * HeapDoubleBuffer::ARRAY_INDEX_SCALE;
}

$DoubleBuffer* HeapDoubleBuffer::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapDoubleBuffer, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$DoubleBuffer* HeapDoubleBuffer::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapDoubleBuffer, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$DoubleBuffer* HeapDoubleBuffer::duplicate() {
	$var($doubles, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapDoubleBuffer, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$DoubleBuffer* HeapDoubleBuffer::asReadOnlyBuffer() {
	$var($doubles, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($HeapDoubleBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

int32_t HeapDoubleBuffer::ix(int32_t i) {
	return i + this->offset;
}

double HeapDoubleBuffer::get() {
	return $nc(this->hb)->get(ix(nextGetIndex()));
}

double HeapDoubleBuffer::get(int32_t i) {
	return $nc(this->hb)->get(ix(checkIndex(i)));
}

$DoubleBuffer* HeapDoubleBuffer::get($doubles* dst, int32_t offset, int32_t length) {
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

$DoubleBuffer* HeapDoubleBuffer::get(int32_t index, $doubles* dst, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	$System::arraycopy(this->hb, ix(index), dst, offset, length);
	return this;
}

bool HeapDoubleBuffer::isDirect() {
	return false;
}

bool HeapDoubleBuffer::isReadOnly() {
	return false;
}

$DoubleBuffer* HeapDoubleBuffer::put(double x) {
	$nc(this->hb)->set(ix(nextPutIndex()), x);
	return this;
}

$DoubleBuffer* HeapDoubleBuffer::put(int32_t i, double x) {
	$nc(this->hb)->set(ix(checkIndex(i)), x);
	return this;
}

$DoubleBuffer* HeapDoubleBuffer::put($doubles* src, int32_t offset, int32_t length) {
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

$DoubleBuffer* HeapDoubleBuffer::put($DoubleBuffer* src) {
	checkScope();
	$DoubleBuffer::put(src);
	return this;
}

$DoubleBuffer* HeapDoubleBuffer::put(int32_t index, $DoubleBuffer* src, int32_t offset, int32_t length) {
	checkScope();
	$DoubleBuffer::put(index, src, offset, length);
	return this;
}

$DoubleBuffer* HeapDoubleBuffer::put(int32_t index, $doubles* src, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	$System::arraycopy(src, offset, this->hb, ix(index), length);
	return this;
}

$DoubleBuffer* HeapDoubleBuffer::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!HeapDoubleBuffer::$assertionsDisabled && !(pos <= lim)) {
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

$ByteOrder* HeapDoubleBuffer::order() {
	return $ByteOrder::nativeOrder();
}

void clinit$HeapDoubleBuffer($Class* class$) {
	HeapDoubleBuffer::$assertionsDisabled = !HeapDoubleBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($doubles);
	HeapDoubleBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($doubles));
	HeapDoubleBuffer::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($doubles));
}

HeapDoubleBuffer::HeapDoubleBuffer() {
}

$Class* HeapDoubleBuffer::load$($String* name, bool initialize) {
	$loadClass(HeapDoubleBuffer, name, initialize, &_HeapDoubleBuffer_ClassInfo_, clinit$HeapDoubleBuffer, allocate$HeapDoubleBuffer);
	return class$;
}

$Class* HeapDoubleBuffer::class$ = nullptr;

	} // nio
} // java