#include <java/nio/DirectIntBufferRS.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DirectIntBufferS.h>
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
using $DirectIntBufferS = ::java::nio::DirectIntBufferS;
using $IntBuffer = ::java::nio::IntBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectIntBufferRS_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectIntBufferRS, $assertionsDisabled)},
	{}
};

$MethodInfo _DirectIntBufferRS_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectIntBufferRS::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectIntBufferRS::init$))},
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

$ClassInfo _DirectIntBufferRS_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectIntBufferRS",
	"java.nio.DirectIntBufferS",
	nullptr,
	_DirectIntBufferRS_FieldInfo_,
	_DirectIntBufferRS_MethodInfo_
};

$Object* allocate$DirectIntBufferRS($Class* clazz) {
	return $of($alloc(DirectIntBufferRS));
}

bool DirectIntBufferRS::$assertionsDisabled = false;

void DirectIntBufferRS::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DirectIntBufferS::init$(db, mark, pos, lim, cap, off, segment);
	this->$IntBuffer::isReadOnly$ = true;
}

$Object* DirectIntBufferRS::base() {
	return $of(nullptr);
}

$IntBuffer* DirectIntBufferRS::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 2);
	if (!DirectIntBufferRS::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectIntBufferRS, this, -1, 0, rem, rem, off, this->segment);
}

$IntBuffer* DirectIntBufferRS::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectIntBufferRS, this, -1, 0, length, length, index << 2, this->segment);
}

$IntBuffer* DirectIntBufferRS::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectIntBufferRS, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$IntBuffer* DirectIntBufferRS::asReadOnlyBuffer() {
	return duplicate();
}

$IntBuffer* DirectIntBufferRS::put(int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* DirectIntBufferRS::put(int32_t i, int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* DirectIntBufferRS::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool DirectIntBufferRS::isDirect() {
	return true;
}

bool DirectIntBufferRS::isReadOnly() {
	return true;
}

$ByteOrder* DirectIntBufferRS::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectIntBufferRS($Class* class$) {
	DirectIntBufferRS::$assertionsDisabled = !DirectIntBufferRS::class$->desiredAssertionStatus();
}

DirectIntBufferRS::DirectIntBufferRS() {
}

$Class* DirectIntBufferRS::load$($String* name, bool initialize) {
	$loadClass(DirectIntBufferRS, name, initialize, &_DirectIntBufferRS_ClassInfo_, clinit$DirectIntBufferRS, allocate$DirectIntBufferRS);
	return class$;
}

$Class* DirectIntBufferRS::class$ = nullptr;

	} // nio
} // java