#include <java/nio/HeapFloatBufferR.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/HeapFloatBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_BASE_OFFSET
#undef ARRAY_INDEX_SCALE
#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $HeapFloatBuffer = ::java::nio::HeapFloatBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _HeapFloatBufferR_FieldInfo_[] = {
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapFloatBufferR, ARRAY_BASE_OFFSET)},
	{"ARRAY_INDEX_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HeapFloatBufferR, ARRAY_INDEX_SCALE)},
	{}
};

$MethodInfo _HeapFloatBufferR_MethodInfo_[] = {
	{"<init>", "(IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapFloatBufferR::*)(int32_t,int32_t,$MemorySegmentProxy*)>(&HeapFloatBufferR::init$))},
	{"<init>", "([FIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(HeapFloatBufferR::*)($floats*,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapFloatBufferR::init$))},
	{"<init>", "([FIIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, $PROTECTED, $method(static_cast<void(HeapFloatBufferR::*)($floats*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&HeapFloatBufferR::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "(IF)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "([FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/FloatBuffer;II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "(I[FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HeapFloatBufferR_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.HeapFloatBufferR",
	"java.nio.HeapFloatBuffer",
	nullptr,
	_HeapFloatBufferR_FieldInfo_,
	_HeapFloatBufferR_MethodInfo_
};

$Object* allocate$HeapFloatBufferR($Class* clazz) {
	return $of($alloc(HeapFloatBufferR));
}

int64_t HeapFloatBufferR::ARRAY_BASE_OFFSET = 0;
int64_t HeapFloatBufferR::ARRAY_INDEX_SCALE = 0;

void HeapFloatBufferR::init$(int32_t cap, int32_t lim, $MemorySegmentProxy* segment) {
	$HeapFloatBuffer::init$(cap, lim, segment);
	this->$FloatBuffer::isReadOnly$ = true;
}

void HeapFloatBufferR::init$($floats* buf, int32_t off, int32_t len, $MemorySegmentProxy* segment) {
	$HeapFloatBuffer::init$(buf, off, len, segment);
	this->$FloatBuffer::isReadOnly$ = true;
}

void HeapFloatBufferR::init$($floats* buf, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$HeapFloatBuffer::init$(buf, mark, pos, lim, cap, off, segment);
	this->$FloatBuffer::isReadOnly$ = true;
}

$FloatBuffer* HeapFloatBufferR::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(HeapFloatBufferR, this->hb, -1, 0, rem, rem, pos + this->offset, this->segment);
}

$FloatBuffer* HeapFloatBufferR::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(HeapFloatBufferR, this->hb, -1, 0, length, length, index + this->offset, this->segment);
}

$FloatBuffer* HeapFloatBufferR::duplicate() {
	$var($floats, var$0, this->hb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(HeapFloatBufferR, var$0, var$1, var$2, var$3, this->capacity(), this->offset, this->segment);
}

$FloatBuffer* HeapFloatBufferR::asReadOnlyBuffer() {
	return duplicate();
}

bool HeapFloatBufferR::isReadOnly() {
	return true;
}

$FloatBuffer* HeapFloatBufferR::put(float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* HeapFloatBufferR::put(int32_t i, float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* HeapFloatBufferR::put($floats* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* HeapFloatBufferR::put($FloatBuffer* src) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* HeapFloatBufferR::put(int32_t index, $FloatBuffer* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* HeapFloatBufferR::put(int32_t index, $floats* src, int32_t offset, int32_t length) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* HeapFloatBufferR::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ByteOrder* HeapFloatBufferR::order() {
	return $ByteOrder::nativeOrder();
}

void clinit$HeapFloatBufferR($Class* class$) {
	$init($Buffer);
	$load($floats);
	HeapFloatBufferR::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($floats));
	HeapFloatBufferR::ARRAY_INDEX_SCALE = $nc($Buffer::UNSAFE)->arrayIndexScale($getClass($floats));
}

HeapFloatBufferR::HeapFloatBufferR() {
}

$Class* HeapFloatBufferR::load$($String* name, bool initialize) {
	$loadClass(HeapFloatBufferR, name, initialize, &_HeapFloatBufferR_ClassInfo_, clinit$HeapFloatBufferR, allocate$HeapFloatBufferR);
	return class$;
}

$Class* HeapFloatBufferR::class$ = nullptr;

	} // nio
} // java