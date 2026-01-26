#include <java/nio/DirectShortBufferRU.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DirectShortBufferU.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/nio/ShortBuffer.h>
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
using $DirectShortBufferU = ::java::nio::DirectShortBufferU;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectShortBufferRU_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectShortBufferRU, $assertionsDisabled)},
	{}
};

$MethodInfo _DirectShortBufferRU_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(DirectShortBufferRU, init$, void, $DirectBuffer*, int32_t, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectShortBufferRU, asReadOnlyBuffer, $ShortBuffer*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(DirectShortBufferRU, base, $Object*)},
	{"compact", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectShortBufferRU, compact, $ShortBuffer*)},
	{"duplicate", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectShortBufferRU, duplicate, $ShortBuffer*)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectShortBufferRU, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectShortBufferRU, isReadOnly, bool)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(DirectShortBufferRU, order, $ByteOrder*)},
	{"put", "(S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectShortBufferRU, put, $ShortBuffer*, int16_t)},
	{"put", "(IS)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectShortBufferRU, put, $ShortBuffer*, int32_t, int16_t)},
	{"slice", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectShortBufferRU, slice, $ShortBuffer*)},
	{"slice", "(II)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectShortBufferRU, slice, $ShortBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _DirectShortBufferRU_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectShortBufferRU",
	"java.nio.DirectShortBufferU",
	nullptr,
	_DirectShortBufferRU_FieldInfo_,
	_DirectShortBufferRU_MethodInfo_
};

$Object* allocate$DirectShortBufferRU($Class* clazz) {
	return $of($alloc(DirectShortBufferRU));
}

bool DirectShortBufferRU::$assertionsDisabled = false;

void DirectShortBufferRU::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DirectShortBufferU::init$(db, mark, pos, lim, cap, off, segment);
	this->$ShortBuffer::isReadOnly$ = true;
}

$Object* DirectShortBufferRU::base() {
	return $of(nullptr);
}

$ShortBuffer* DirectShortBufferRU::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 1);
	if (!DirectShortBufferRU::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectShortBufferRU, this, -1, 0, rem, rem, off, this->segment);
}

$ShortBuffer* DirectShortBufferRU::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectShortBufferRU, this, -1, 0, length, length, index << 1, this->segment);
}

$ShortBuffer* DirectShortBufferRU::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectShortBufferRU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$ShortBuffer* DirectShortBufferRU::asReadOnlyBuffer() {
	return duplicate();
}

$ShortBuffer* DirectShortBufferRU::put(int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* DirectShortBufferRU::put(int32_t i, int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* DirectShortBufferRU::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool DirectShortBufferRU::isDirect() {
	return true;
}

bool DirectShortBufferRU::isReadOnly() {
	return true;
}

$ByteOrder* DirectShortBufferRU::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() != $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectShortBufferRU($Class* class$) {
	DirectShortBufferRU::$assertionsDisabled = !DirectShortBufferRU::class$->desiredAssertionStatus();
}

DirectShortBufferRU::DirectShortBufferRU() {
}

$Class* DirectShortBufferRU::load$($String* name, bool initialize) {
	$loadClass(DirectShortBufferRU, name, initialize, &_DirectShortBufferRU_ClassInfo_, clinit$DirectShortBufferRU, allocate$DirectShortBufferRU);
	return class$;
}

$Class* DirectShortBufferRU::class$ = nullptr;

	} // nio
} // java