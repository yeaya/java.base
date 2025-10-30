#include <java/nio/DirectLongBufferRU.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DirectLongBufferU.h>
#include <java/nio/LongBuffer.h>
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
using $Buffer = ::java::nio::Buffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $DirectLongBufferU = ::java::nio::DirectLongBufferU;
using $LongBuffer = ::java::nio::LongBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectLongBufferRU_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectLongBufferRU, $assertionsDisabled)},
	{}
};

$MethodInfo _DirectLongBufferRU_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectLongBufferRU::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectLongBufferRU::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"compact", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "(IJ)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectLongBufferRU_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectLongBufferRU",
	"java.nio.DirectLongBufferU",
	nullptr,
	_DirectLongBufferRU_FieldInfo_,
	_DirectLongBufferRU_MethodInfo_
};

$Object* allocate$DirectLongBufferRU($Class* clazz) {
	return $of($alloc(DirectLongBufferRU));
}

bool DirectLongBufferRU::$assertionsDisabled = false;

void DirectLongBufferRU::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DirectLongBufferU::init$(db, mark, pos, lim, cap, off, segment);
	this->$LongBuffer::isReadOnly$ = true;
}

$Object* DirectLongBufferRU::base() {
	return $of(nullptr);
}

$LongBuffer* DirectLongBufferRU::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 3);
	if (!DirectLongBufferRU::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectLongBufferRU, this, -1, 0, rem, rem, off, this->segment);
}

$LongBuffer* DirectLongBufferRU::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectLongBufferRU, this, -1, 0, length, length, index << 3, this->segment);
}

$LongBuffer* DirectLongBufferRU::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectLongBufferRU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$LongBuffer* DirectLongBufferRU::asReadOnlyBuffer() {
	return duplicate();
}

$LongBuffer* DirectLongBufferRU::put(int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* DirectLongBufferRU::put(int32_t i, int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* DirectLongBufferRU::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool DirectLongBufferRU::isDirect() {
	return true;
}

bool DirectLongBufferRU::isReadOnly() {
	return true;
}

$ByteOrder* DirectLongBufferRU::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() != $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectLongBufferRU($Class* class$) {
	DirectLongBufferRU::$assertionsDisabled = !DirectLongBufferRU::class$->desiredAssertionStatus();
}

DirectLongBufferRU::DirectLongBufferRU() {
}

$Class* DirectLongBufferRU::load$($String* name, bool initialize) {
	$loadClass(DirectLongBufferRU, name, initialize, &_DirectLongBufferRU_ClassInfo_, clinit$DirectLongBufferRU, allocate$DirectLongBufferRU);
	return class$;
}

$Class* DirectLongBufferRU::class$ = nullptr;

	} // nio
} // java