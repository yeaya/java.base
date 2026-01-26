#include <java/nio/DirectFloatBufferRU.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DirectFloatBufferU.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef LITTLE_ENDIAN

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteOrder = ::java::nio::ByteOrder;
using $DirectFloatBufferU = ::java::nio::DirectFloatBufferU;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectFloatBufferRU_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectFloatBufferRU, $assertionsDisabled)},
	{}
};

$MethodInfo _DirectFloatBufferRU_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(DirectFloatBufferRU, init$, void, $DirectBuffer*, int32_t, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectFloatBufferRU, asReadOnlyBuffer, $FloatBuffer*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(DirectFloatBufferRU, base, $Object*)},
	{"compact", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectFloatBufferRU, compact, $FloatBuffer*)},
	{"duplicate", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectFloatBufferRU, duplicate, $FloatBuffer*)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectFloatBufferRU, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectFloatBufferRU, isReadOnly, bool)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(DirectFloatBufferRU, order, $ByteOrder*)},
	{"put", "(F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectFloatBufferRU, put, $FloatBuffer*, float)},
	{"put", "(IF)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectFloatBufferRU, put, $FloatBuffer*, int32_t, float)},
	{"slice", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectFloatBufferRU, slice, $FloatBuffer*)},
	{"slice", "(II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectFloatBufferRU, slice, $FloatBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _DirectFloatBufferRU_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectFloatBufferRU",
	"java.nio.DirectFloatBufferU",
	nullptr,
	_DirectFloatBufferRU_FieldInfo_,
	_DirectFloatBufferRU_MethodInfo_
};

$Object* allocate$DirectFloatBufferRU($Class* clazz) {
	return $of($alloc(DirectFloatBufferRU));
}

bool DirectFloatBufferRU::$assertionsDisabled = false;

void DirectFloatBufferRU::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DirectFloatBufferU::init$(db, mark, pos, lim, cap, off, segment);
	this->$FloatBuffer::isReadOnly$ = true;
}

$Object* DirectFloatBufferRU::base() {
	return $of(nullptr);
}

$FloatBuffer* DirectFloatBufferRU::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 2);
	if (!DirectFloatBufferRU::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectFloatBufferRU, this, -1, 0, rem, rem, off, this->segment);
}

$FloatBuffer* DirectFloatBufferRU::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectFloatBufferRU, this, -1, 0, length, length, index << 2, this->segment);
}

$FloatBuffer* DirectFloatBufferRU::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectFloatBufferRU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$FloatBuffer* DirectFloatBufferRU::asReadOnlyBuffer() {
	return duplicate();
}

$FloatBuffer* DirectFloatBufferRU::put(float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* DirectFloatBufferRU::put(int32_t i, float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* DirectFloatBufferRU::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool DirectFloatBufferRU::isDirect() {
	return true;
}

bool DirectFloatBufferRU::isReadOnly() {
	return true;
}

$ByteOrder* DirectFloatBufferRU::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() != $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectFloatBufferRU($Class* class$) {
	DirectFloatBufferRU::$assertionsDisabled = !DirectFloatBufferRU::class$->desiredAssertionStatus();
}

DirectFloatBufferRU::DirectFloatBufferRU() {
}

$Class* DirectFloatBufferRU::load$($String* name, bool initialize) {
	$loadClass(DirectFloatBufferRU, name, initialize, &_DirectFloatBufferRU_ClassInfo_, clinit$DirectFloatBufferRU, allocate$DirectFloatBufferRU);
	return class$;
}

$Class* DirectFloatBufferRU::class$ = nullptr;

	} // nio
} // java