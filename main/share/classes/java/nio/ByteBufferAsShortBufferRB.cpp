#include <java/nio/ByteBufferAsShortBufferRB.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsShortBufferB.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/nio/ShortBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsShortBufferB = ::java::nio::ByteBufferAsShortBufferB;
using $ByteOrder = ::java::nio::ByteOrder;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$MethodInfo _ByteBufferAsShortBufferRB_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsShortBufferRB::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsShortBufferRB::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsShortBufferRB::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsShortBufferRB::init$))},
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

$ClassInfo _ByteBufferAsShortBufferRB_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsShortBufferRB",
	"java.nio.ByteBufferAsShortBufferB",
	nullptr,
	nullptr,
	_ByteBufferAsShortBufferRB_MethodInfo_
};

$Object* allocate$ByteBufferAsShortBufferRB($Class* clazz) {
	return $of($alloc(ByteBufferAsShortBufferRB));
}

void ByteBufferAsShortBufferRB::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsShortBufferB::init$(bb, segment);
}

void ByteBufferAsShortBufferRB::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsShortBufferB::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsShortBufferRB::base() {
	return $of($nc(this->bb)->hb);
}

$ShortBuffer* ByteBufferAsShortBufferRB::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsShortBufferRB, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$ShortBuffer* ByteBufferAsShortBufferRB::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsShortBufferRB, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$ShortBuffer* ByteBufferAsShortBufferRB::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsShortBufferRB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$ShortBuffer* ByteBufferAsShortBufferRB::asReadOnlyBuffer() {
	return duplicate();
}

$ShortBuffer* ByteBufferAsShortBufferRB::put(int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* ByteBufferAsShortBufferRB::put(int32_t i, int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* ByteBufferAsShortBufferRB::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsShortBufferRB::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsShortBufferRB::isReadOnly() {
	return true;
}

$ByteOrder* ByteBufferAsShortBufferRB::order() {
	$init($ByteOrder);
	return $ByteOrder::BIG_ENDIAN;
}

ByteBufferAsShortBufferRB::ByteBufferAsShortBufferRB() {
}

$Class* ByteBufferAsShortBufferRB::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsShortBufferRB, name, initialize, &_ByteBufferAsShortBufferRB_ClassInfo_, allocate$ByteBufferAsShortBufferRB);
	return class$;
}

$Class* ByteBufferAsShortBufferRB::class$ = nullptr;

	} // nio
} // java