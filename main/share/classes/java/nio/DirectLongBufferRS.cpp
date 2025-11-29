#include <java/nio/DirectLongBufferRS.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DirectLongBufferS.h>
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
using $ByteOrder = ::java::nio::ByteOrder;
using $DirectLongBufferS = ::java::nio::DirectLongBufferS;
using $LongBuffer = ::java::nio::LongBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectLongBufferRS_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectLongBufferRS, $assertionsDisabled)},
	{}
};

$MethodInfo _DirectLongBufferRS_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectLongBufferRS::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectLongBufferRS::init$))},
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

$ClassInfo _DirectLongBufferRS_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectLongBufferRS",
	"java.nio.DirectLongBufferS",
	nullptr,
	_DirectLongBufferRS_FieldInfo_,
	_DirectLongBufferRS_MethodInfo_
};

$Object* allocate$DirectLongBufferRS($Class* clazz) {
	return $of($alloc(DirectLongBufferRS));
}

bool DirectLongBufferRS::$assertionsDisabled = false;

void DirectLongBufferRS::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DirectLongBufferS::init$(db, mark, pos, lim, cap, off, segment);
	this->$LongBuffer::isReadOnly$ = true;
}

$Object* DirectLongBufferRS::base() {
	return $of(nullptr);
}

$LongBuffer* DirectLongBufferRS::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 3);
	if (!DirectLongBufferRS::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectLongBufferRS, this, -1, 0, rem, rem, off, this->segment);
}

$LongBuffer* DirectLongBufferRS::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectLongBufferRS, this, -1, 0, length, length, index << 3, this->segment);
}

$LongBuffer* DirectLongBufferRS::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectLongBufferRS, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$LongBuffer* DirectLongBufferRS::asReadOnlyBuffer() {
	return duplicate();
}

$LongBuffer* DirectLongBufferRS::put(int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* DirectLongBufferRS::put(int32_t i, int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* DirectLongBufferRS::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool DirectLongBufferRS::isDirect() {
	return true;
}

bool DirectLongBufferRS::isReadOnly() {
	return true;
}

$ByteOrder* DirectLongBufferRS::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectLongBufferRS($Class* class$) {
	DirectLongBufferRS::$assertionsDisabled = !DirectLongBufferRS::class$->desiredAssertionStatus();
}

DirectLongBufferRS::DirectLongBufferRS() {
}

$Class* DirectLongBufferRS::load$($String* name, bool initialize) {
	$loadClass(DirectLongBufferRS, name, initialize, &_DirectLongBufferRS_ClassInfo_, clinit$DirectLongBufferRS, allocate$DirectLongBufferRS);
	return class$;
}

$Class* DirectLongBufferRS::class$ = nullptr;

	} // nio
} // java