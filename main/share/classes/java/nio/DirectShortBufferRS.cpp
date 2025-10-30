#include <java/nio/DirectShortBufferRS.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DirectShortBufferS.h>
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
using $Buffer = ::java::nio::Buffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $DirectShortBufferS = ::java::nio::DirectShortBufferS;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectShortBufferRS_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectShortBufferRS, $assertionsDisabled)},
	{}
};

$MethodInfo _DirectShortBufferRS_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectShortBufferRS::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectShortBufferRS::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"compact", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "(IS)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectShortBufferRS_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectShortBufferRS",
	"java.nio.DirectShortBufferS",
	nullptr,
	_DirectShortBufferRS_FieldInfo_,
	_DirectShortBufferRS_MethodInfo_
};

$Object* allocate$DirectShortBufferRS($Class* clazz) {
	return $of($alloc(DirectShortBufferRS));
}

bool DirectShortBufferRS::$assertionsDisabled = false;

void DirectShortBufferRS::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DirectShortBufferS::init$(db, mark, pos, lim, cap, off, segment);
	this->$ShortBuffer::isReadOnly$ = true;
}

$Object* DirectShortBufferRS::base() {
	return $of(nullptr);
}

$ShortBuffer* DirectShortBufferRS::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 1);
	if (!DirectShortBufferRS::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectShortBufferRS, this, -1, 0, rem, rem, off, this->segment);
}

$ShortBuffer* DirectShortBufferRS::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectShortBufferRS, this, -1, 0, length, length, index << 1, this->segment);
}

$ShortBuffer* DirectShortBufferRS::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectShortBufferRS, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$ShortBuffer* DirectShortBufferRS::asReadOnlyBuffer() {
	return duplicate();
}

$ShortBuffer* DirectShortBufferRS::put(int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* DirectShortBufferRS::put(int32_t i, int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* DirectShortBufferRS::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool DirectShortBufferRS::isDirect() {
	return true;
}

bool DirectShortBufferRS::isReadOnly() {
	return true;
}

$ByteOrder* DirectShortBufferRS::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectShortBufferRS($Class* class$) {
	DirectShortBufferRS::$assertionsDisabled = !DirectShortBufferRS::class$->desiredAssertionStatus();
}

DirectShortBufferRS::DirectShortBufferRS() {
}

$Class* DirectShortBufferRS::load$($String* name, bool initialize) {
	$loadClass(DirectShortBufferRS, name, initialize, &_DirectShortBufferRS_ClassInfo_, clinit$DirectShortBufferRS, allocate$DirectShortBufferRS);
	return class$;
}

$Class* DirectShortBufferRS::class$ = nullptr;

	} // nio
} // java