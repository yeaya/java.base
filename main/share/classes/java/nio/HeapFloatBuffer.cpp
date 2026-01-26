#include <java/nio/HeapFloatBuffer.h>

#include <java/lang/AssertionError.h>
#include <java/nio/Buffer.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/HeapFloatBufferR.h>
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
using $FloatBuffer = ::java::nio::FloatBuffer;
using $HeapFloatBufferR = ::java::nio::HeapFloatBufferR;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapFloatBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HeapFloatBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapFloatBuffer, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapFloatBuffer, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapFloatBuffer_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(HeapFloatBuffer, init$, void, int32_t, int32_t, $MemorySegmentProxy*)},
	{"<init>", "([FIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(HeapFloatBuffer, init$, void, $floats*, int32_t, int32_t, $MemorySegmentProxy*)},
	{"<init>", "([FIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(HeapFloatBuffer, init$, void, $floats*, int32_t, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, asReadOnlyBuffer, $FloatBuffer*)},
	{"compact", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, compact, $FloatBuffer*)},
	{"duplicate", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, duplicate, $FloatBuffer*)},
	{"get", "()F", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, get, float)},
	{"get", "(I)F", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, get, float, int32_t)},
	{"get", "([FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, get, $FloatBuffer*, $floats*, int32_t, int32_t)},
	{"get", "(I[FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, get, $FloatBuffer*, int32_t, $floats*, int32_t, int32_t)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, isReadOnly, bool)},
	{"ix", "(I)I", nullptr, $PROTECTED, $virtualMethod(HeapFloatBuffer, ix, int32_t, int32_t)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, order, $ByteOrder*)},
	{"put", "(F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, put, $FloatBuffer*, float)},
	{"put", "(IF)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, put, $FloatBuffer*, int32_t, float)},
	{"put", "([FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, put, $FloatBuffer*, $floats*, int32_t, int32_t)},
	{"put", "(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, put, $FloatBuffer*, $FloatBuffer*)},
	{"put", "(ILjava/nio/FloatBuffer;II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, put, $FloatBuffer*, int32_t, $FloatBuffer*, int32_t, int32_t)},
	{"put", "(I[FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, put, $FloatBuffer*, int32_t, $floats*, int32_t, int32_t)},
	{"slice", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, slice, $FloatBuffer*)},
	{"slice", "(II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(HeapFloatBuffer, slice, $FloatBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _HeapFloatBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapFloatBuffer",
	"java.nio.FloatBuffer",
	nullptr,
	_HeapFloatBuffer_FieldInfo_,
	_HeapFloatBuffer_MethodInfo_
};

$Object* allocate$HeapFloatBuffer($Class* clazz) {
	return $of($alloc(HeapFloatBuffer));
}

bool HeapFloatBuffer::$assertionsDisabled = false;
int64_t HeapFloatBuffer::ARRAY_BASE_OFFSET = 0;
int64_t HeapFloatBuffer::ARRAY_INDEX_SCALE = 0;

void HeapFloatBuffer::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$FloatBuffer::init$(-1, 0, lim, cap, $$new($floats, cap), 0, segment);
	this->address = HeapFloatBuffer::ARRAY_BASE_OFFSET;
}

void HeapFloatBuffer::init$($floats* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$FloatBuffer::init$(-1, off, off + len, $nc(buf)->length, buf, 0, segment);
	this->address = HeapFloatBuffer::ARRAY_BASE_OFFSET;
}

void HeapFloatBuffer::init$($floats* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$FloatBuffer::init$(mark, pos, lim, cap, buf, off, segment);
	this->address = HeapFloatBuffer::ARRAY_BASE_OFFSET + off * HeapFloatBuffer::ARRAY_INDEX_SCALE;
}

$FloatBuffer* HeapFloatBuffer::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapFloatBuffer, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$FloatBuffer* HeapFloatBuffer::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapFloatBuffer, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$FloatBuffer* HeapFloatBuffer::duplicate() {
	$var($floats, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapFloatBuffer, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$FloatBuffer* HeapFloatBuffer::asReadOnlyBuffer() {
	$var($floats, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($HeapFloatBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

int32_t HeapFloatBuffer::ix(int32_t i) {
	return i + this->offset;
}

float HeapFloatBuffer::get() {
	return $nc(this->hb)->get(ix(nextGetIndex()));
}

float HeapFloatBuffer::get(int32_t i) {
	return $nc(this->hb)->get(ix(checkIndex(i)));
}

$FloatBuffer* HeapFloatBuffer::get($floats* dst, int32_t offset, int32_t length) {
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

$FloatBuffer* HeapFloatBuffer::get(int32_t index, $floats* dst, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	$System::arraycopy(this->hb, ix(index), dst, offset, length);
	return this;
}

bool HeapFloatBuffer::isDirect() {
	return false;
}

bool HeapFloatBuffer::isReadOnly() {
	return false;
}

$FloatBuffer* HeapFloatBuffer::put(float x) {
	$nc(this->hb)->set(ix(nextPutIndex()), x);
	return this;
}

$FloatBuffer* HeapFloatBuffer::put(int32_t i, float x) {
	$nc(this->hb)->set(ix(checkIndex(i)), x);
	return this;
}

$FloatBuffer* HeapFloatBuffer::put($floats* src, int32_t offset, int32_t length) {
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

$FloatBuffer* HeapFloatBuffer::put($FloatBuffer* src) {
	checkScope();
	$FloatBuffer::put(src);
	return this;
}

$FloatBuffer* HeapFloatBuffer::put(int32_t index, $FloatBuffer* src, int32_t offset, int32_t length) {
	checkScope();
	$FloatBuffer::put(index, src, offset, length);
	return this;
}

$FloatBuffer* HeapFloatBuffer::put(int32_t index, $floats* src, int32_t offset, int32_t length) {
	checkScope();
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	$System::arraycopy(src, offset, this->hb, ix(index), length);
	return this;
}

$FloatBuffer* HeapFloatBuffer::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!HeapFloatBuffer::$assertionsDisabled && !(pos <= lim)) {
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

$ByteOrder* HeapFloatBuffer::order() {
	return $ByteOrder::nativeOrder();
}

void clinit$HeapFloatBuffer($Class* class$) {
	HeapFloatBuffer::$assertionsDisabled = !HeapFloatBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($floats);
	HeapFloatBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($floats));
	HeapFloatBuffer::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($floats));
}

HeapFloatBuffer::HeapFloatBuffer() {
}

$Class* HeapFloatBuffer::load$($String* name, bool initialize) {
	$loadClass(HeapFloatBuffer, name, initialize, &_HeapFloatBuffer_ClassInfo_, clinit$HeapFloatBuffer, allocate$HeapFloatBuffer);
	return class$;
}

$Class* HeapFloatBuffer::class$ = nullptr;

	} // nio
} // java