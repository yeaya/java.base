#include <java/nio/ByteBufferAsCharBufferRL.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsCharBufferL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsCharBufferL = ::java::nio::ByteBufferAsCharBufferL;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBuffer = ::java::nio::CharBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$FieldInfo _ByteBufferAsCharBufferRL_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ByteBufferAsCharBufferRL, $assertionsDisabled)},
	{}
};

$MethodInfo _ByteBufferAsCharBufferRL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsCharBufferRL::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsCharBufferRL::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsCharBufferRL::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsCharBufferRL::init$))},
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

$ClassInfo _ByteBufferAsCharBufferRL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsCharBufferRL",
	"java.nio.ByteBufferAsCharBufferL",
	nullptr,
	_ByteBufferAsCharBufferRL_FieldInfo_,
	_ByteBufferAsCharBufferRL_MethodInfo_
};

$Object* allocate$ByteBufferAsCharBufferRL($Class* clazz) {
	return $of($alloc(ByteBufferAsCharBufferRL));
}

bool ByteBufferAsCharBufferRL::$assertionsDisabled = false;

void ByteBufferAsCharBufferRL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsCharBufferL::init$(bb, segment);
}

void ByteBufferAsCharBufferRL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsCharBufferL::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsCharBufferRL::base() {
	return $of($nc(this->bb)->hb);
}

$CharBuffer* ByteBufferAsCharBufferRL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsCharBufferRL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$CharBuffer* ByteBufferAsCharBufferRL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsCharBufferRL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$CharBuffer* ByteBufferAsCharBufferRL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsCharBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$CharBuffer* ByteBufferAsCharBufferRL::asReadOnlyBuffer() {
	return duplicate();
}

$CharBuffer* ByteBufferAsCharBufferRL::put(char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* ByteBufferAsCharBufferRL::put(int32_t i, char16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* ByteBufferAsCharBufferRL::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsCharBufferRL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsCharBufferRL::isReadOnly() {
	return true;
}

$String* ByteBufferAsCharBufferRL::toString(int32_t start, int32_t end) {
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

$CharSequence* ByteBufferAsCharBufferRL::subSequence(int32_t start, int32_t end) {
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsCharBufferRL::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	pos = (pos <= lim ? pos : lim);
	int32_t len = lim - pos;
	$Objects::checkFromToIndex(start, end, len);
	return $new(ByteBufferAsCharBufferRL, this->bb, -1, pos + start, pos + end, capacity(), this->address, this->segment);
}

$ByteOrder* ByteBufferAsCharBufferRL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

$ByteOrder* ByteBufferAsCharBufferRL::charRegionOrder() {
	return order();
}

void clinit$ByteBufferAsCharBufferRL($Class* class$) {
	ByteBufferAsCharBufferRL::$assertionsDisabled = !ByteBufferAsCharBufferRL::class$->desiredAssertionStatus();
}

ByteBufferAsCharBufferRL::ByteBufferAsCharBufferRL() {
}

$Class* ByteBufferAsCharBufferRL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsCharBufferRL, name, initialize, &_ByteBufferAsCharBufferRL_ClassInfo_, clinit$ByteBufferAsCharBufferRL, allocate$ByteBufferAsCharBufferRL);
	return class$;
}

$Class* ByteBufferAsCharBufferRL::class$ = nullptr;

	} // nio
} // java