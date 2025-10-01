#include <java/nio/DirectIntBufferRU.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DirectIntBufferU.h>
#include <java/nio/IntBuffer.h>
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
using $DirectIntBufferU = ::java::nio::DirectIntBufferU;
using $IntBuffer = ::java::nio::IntBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectIntBufferRU_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectIntBufferRU, $assertionsDisabled)},
	{}
};

$MethodInfo _DirectIntBufferRU_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectIntBufferRU::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectIntBufferRU::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"compact", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectIntBufferRU_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectIntBufferRU",
	"java.nio.DirectIntBufferU",
	nullptr,
	_DirectIntBufferRU_FieldInfo_,
	_DirectIntBufferRU_MethodInfo_
};

$Object* allocate$DirectIntBufferRU($Class* clazz) {
	return $of($alloc(DirectIntBufferRU));
}

bool DirectIntBufferRU::$assertionsDisabled = false;

void DirectIntBufferRU::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DirectIntBufferU::init$(db, mark, pos, lim, cap, off, segment);
	this->$IntBuffer::isReadOnly$ = true;
}

$Object* DirectIntBufferRU::base() {
	return $of(nullptr);
}

$IntBuffer* DirectIntBufferRU::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 2);
	if (!DirectIntBufferRU::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectIntBufferRU, this, -1, 0, rem, rem, off, this->segment);
}

$IntBuffer* DirectIntBufferRU::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectIntBufferRU, this, -1, 0, length, length, index << 2, this->segment);
}

$IntBuffer* DirectIntBufferRU::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectIntBufferRU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$IntBuffer* DirectIntBufferRU::asReadOnlyBuffer() {
	return duplicate();
}

$IntBuffer* DirectIntBufferRU::put(int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* DirectIntBufferRU::put(int32_t i, int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* DirectIntBufferRU::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool DirectIntBufferRU::isDirect() {
	return true;
}

bool DirectIntBufferRU::isReadOnly() {
	return true;
}

$ByteOrder* DirectIntBufferRU::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() != $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectIntBufferRU($Class* class$) {
	DirectIntBufferRU::$assertionsDisabled = !DirectIntBufferRU::class$->desiredAssertionStatus();
}

DirectIntBufferRU::DirectIntBufferRU() {
}

$Class* DirectIntBufferRU::load$($String* name, bool initialize) {
	$loadClass(DirectIntBufferRU, name, initialize, &_DirectIntBufferRU_ClassInfo_, clinit$DirectIntBufferRU, allocate$DirectIntBufferRU);
	return class$;
}

$Class* DirectIntBufferRU::class$ = nullptr;

	} // nio
} // java