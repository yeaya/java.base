#include <java/nio/DirectCharBufferRU.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/DirectCharBufferU.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef LITTLE_ENDIAN

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $Buffer = ::java::nio::Buffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBuffer = ::java::nio::CharBuffer;
using $DirectCharBufferU = ::java::nio::DirectCharBufferU;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectCharBufferRU_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectCharBufferRU, $assertionsDisabled)},
	{}
};

$MethodInfo _DirectCharBufferRU_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectCharBufferRU::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectCharBufferRU::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"charRegionOrder", "()Ljava/nio/ByteOrder;", nullptr, 0},
	{"compact", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"put", "(IC)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"subSequence", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"toString", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectCharBufferRU_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectCharBufferRU",
	"java.nio.DirectCharBufferU",
	nullptr,
	_DirectCharBufferRU_FieldInfo_,
	_DirectCharBufferRU_MethodInfo_
};

$Object* allocate$DirectCharBufferRU($Class* clazz) {
	return $of($alloc(DirectCharBufferRU));
}

bool DirectCharBufferRU::$assertionsDisabled = false;

void DirectCharBufferRU::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DirectCharBufferU::init$(db, mark, pos, lim, cap, off, segment);
	this->$CharBuffer::isReadOnly$ = true;
}

$Object* DirectCharBufferRU::base() {
	return $of(nullptr);
}

$CharBuffer* DirectCharBufferRU::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 1);
	if (!DirectCharBufferRU::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectCharBufferRU, this, -1, 0, rem, rem, off, this->segment);
}

$CharBuffer* DirectCharBufferRU::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectCharBufferRU, this, -1, 0, length, length, index << 1, this->segment);
}

$CharBuffer* DirectCharBufferRU::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectCharBufferRU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$CharBuffer* DirectCharBufferRU::asReadOnlyBuffer() {
	return duplicate();
}

$CharBuffer* DirectCharBufferRU::put(char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* DirectCharBufferRU::put(int32_t i, char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* DirectCharBufferRU::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool DirectCharBufferRU::isDirect() {
	return true;
}

bool DirectCharBufferRU::isReadOnly() {
	return true;
}

$String* DirectCharBufferRU::toString(int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$Objects::checkFromToIndex(start, end, limit());
	try {
		int32_t len = end - start;
		$var($chars, ca, $new($chars, len));
		$var($CharBuffer, cb, $CharBuffer::wrap(ca));
		$var($CharBuffer, db, this->duplicate());
		$nc(db)->position(start);
		db->limit(end);
		$nc(cb)->put(db);
		return $new($String, ca);
	} catch ($StringIndexOutOfBoundsException& x) {
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

$CharSequence* DirectCharBufferRU::subSequence(int32_t start, int32_t end) {
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectCharBufferRU::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	pos = (pos <= lim ? pos : lim);
	int32_t len = lim - pos;
	$Objects::checkFromToIndex(start, end, len);
	return $new(DirectCharBufferRU, this, -1, pos + start, pos + end, capacity(), this->offset, this->segment);
}

$ByteOrder* DirectCharBufferRU::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() != $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

$ByteOrder* DirectCharBufferRU::charRegionOrder() {
	return order();
}

void clinit$DirectCharBufferRU($Class* class$) {
	DirectCharBufferRU::$assertionsDisabled = !DirectCharBufferRU::class$->desiredAssertionStatus();
}

DirectCharBufferRU::DirectCharBufferRU() {
}

$Class* DirectCharBufferRU::load$($String* name, bool initialize) {
	$loadClass(DirectCharBufferRU, name, initialize, &_DirectCharBufferRU_ClassInfo_, clinit$DirectCharBufferRU, allocate$DirectCharBufferRU);
	return class$;
}

$Class* DirectCharBufferRU::class$ = nullptr;

	} // nio
} // java