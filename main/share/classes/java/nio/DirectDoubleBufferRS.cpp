#include <java/nio/DirectDoubleBufferRS.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DirectDoubleBufferS.h>
#include <java/nio/DoubleBuffer.h>
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
using $DirectDoubleBufferS = ::java::nio::DirectDoubleBufferS;
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectDoubleBufferRS_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectDoubleBufferRS, $assertionsDisabled)},
	{}
};

$MethodInfo _DirectDoubleBufferRS_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectDoubleBufferRS::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectDoubleBufferRS::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"compact", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "(ID)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectDoubleBufferRS_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectDoubleBufferRS",
	"java.nio.DirectDoubleBufferS",
	nullptr,
	_DirectDoubleBufferRS_FieldInfo_,
	_DirectDoubleBufferRS_MethodInfo_
};

$Object* allocate$DirectDoubleBufferRS($Class* clazz) {
	return $of($alloc(DirectDoubleBufferRS));
}

bool DirectDoubleBufferRS::$assertionsDisabled = false;

void DirectDoubleBufferRS::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DirectDoubleBufferS::init$(db, mark, pos, lim, cap, off, segment);
	this->$DoubleBuffer::isReadOnly$ = true;
}

$Object* DirectDoubleBufferRS::base() {
	return $of(nullptr);
}

$DoubleBuffer* DirectDoubleBufferRS::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 3);
	if (!DirectDoubleBufferRS::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectDoubleBufferRS, this, -1, 0, rem, rem, off, this->segment);
}

$DoubleBuffer* DirectDoubleBufferRS::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectDoubleBufferRS, this, -1, 0, length, length, index << 3, this->segment);
}

$DoubleBuffer* DirectDoubleBufferRS::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectDoubleBufferRS, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$DoubleBuffer* DirectDoubleBufferRS::asReadOnlyBuffer() {
	return duplicate();
}

$DoubleBuffer* DirectDoubleBufferRS::put(double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* DirectDoubleBufferRS::put(int32_t i, double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* DirectDoubleBufferRS::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool DirectDoubleBufferRS::isDirect() {
	return true;
}

bool DirectDoubleBufferRS::isReadOnly() {
	return true;
}

$ByteOrder* DirectDoubleBufferRS::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectDoubleBufferRS($Class* class$) {
	DirectDoubleBufferRS::$assertionsDisabled = !DirectDoubleBufferRS::class$->desiredAssertionStatus();
}

DirectDoubleBufferRS::DirectDoubleBufferRS() {
}

$Class* DirectDoubleBufferRS::load$($String* name, bool initialize) {
	$loadClass(DirectDoubleBufferRS, name, initialize, &_DirectDoubleBufferRS_ClassInfo_, clinit$DirectDoubleBufferRS, allocate$DirectDoubleBufferRS);
	return class$;
}

$Class* DirectDoubleBufferRS::class$ = nullptr;

	} // nio
} // java