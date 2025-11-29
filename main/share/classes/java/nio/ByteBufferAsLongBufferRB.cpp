#include <java/nio/ByteBufferAsLongBufferRB.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsLongBufferB.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/LongBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsLongBufferB = ::java::nio::ByteBufferAsLongBufferB;
using $ByteOrder = ::java::nio::ByteOrder;
using $LongBuffer = ::java::nio::LongBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$MethodInfo _ByteBufferAsLongBufferRB_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsLongBufferRB::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsLongBufferRB::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsLongBufferRB::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsLongBufferRB::init$))},
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

$ClassInfo _ByteBufferAsLongBufferRB_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsLongBufferRB",
	"java.nio.ByteBufferAsLongBufferB",
	nullptr,
	nullptr,
	_ByteBufferAsLongBufferRB_MethodInfo_
};

$Object* allocate$ByteBufferAsLongBufferRB($Class* clazz) {
	return $of($alloc(ByteBufferAsLongBufferRB));
}

void ByteBufferAsLongBufferRB::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsLongBufferB::init$(bb, segment);
}

void ByteBufferAsLongBufferRB::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsLongBufferB::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsLongBufferRB::base() {
	return $of($nc(this->bb)->hb);
}

$LongBuffer* ByteBufferAsLongBufferRB::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsLongBufferRB, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$LongBuffer* ByteBufferAsLongBufferRB::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsLongBufferRB, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$LongBuffer* ByteBufferAsLongBufferRB::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsLongBufferRB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$LongBuffer* ByteBufferAsLongBufferRB::asReadOnlyBuffer() {
	return duplicate();
}

$LongBuffer* ByteBufferAsLongBufferRB::put(int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* ByteBufferAsLongBufferRB::put(int32_t i, int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* ByteBufferAsLongBufferRB::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsLongBufferRB::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsLongBufferRB::isReadOnly() {
	return true;
}

$ByteOrder* ByteBufferAsLongBufferRB::order() {
	$init($ByteOrder);
	return $ByteOrder::BIG_ENDIAN;
}

ByteBufferAsLongBufferRB::ByteBufferAsLongBufferRB() {
}

$Class* ByteBufferAsLongBufferRB::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsLongBufferRB, name, initialize, &_ByteBufferAsLongBufferRB_ClassInfo_, allocate$ByteBufferAsLongBufferRB);
	return class$;
}

$Class* ByteBufferAsLongBufferRB::class$ = nullptr;

	} // nio
} // java