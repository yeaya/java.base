#include <java/nio/ByteBufferAsLongBufferRL.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsLongBufferL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/LongBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsLongBufferL = ::java::nio::ByteBufferAsLongBufferL;
using $ByteOrder = ::java::nio::ByteOrder;
using $LongBuffer = ::java::nio::LongBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$MethodInfo _ByteBufferAsLongBufferRL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsLongBufferRL::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsLongBufferRL::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsLongBufferRL::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsLongBufferRL::init$))},
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

$ClassInfo _ByteBufferAsLongBufferRL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsLongBufferRL",
	"java.nio.ByteBufferAsLongBufferL",
	nullptr,
	nullptr,
	_ByteBufferAsLongBufferRL_MethodInfo_
};

$Object* allocate$ByteBufferAsLongBufferRL($Class* clazz) {
	return $of($alloc(ByteBufferAsLongBufferRL));
}

void ByteBufferAsLongBufferRL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsLongBufferL::init$(bb, segment);
}

void ByteBufferAsLongBufferRL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsLongBufferL::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsLongBufferRL::base() {
	return $of($nc(this->bb)->hb);
}

$LongBuffer* ByteBufferAsLongBufferRL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsLongBufferRL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$LongBuffer* ByteBufferAsLongBufferRL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsLongBufferRL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$LongBuffer* ByteBufferAsLongBufferRL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsLongBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$LongBuffer* ByteBufferAsLongBufferRL::asReadOnlyBuffer() {
	return duplicate();
}

$LongBuffer* ByteBufferAsLongBufferRL::put(int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* ByteBufferAsLongBufferRL::put(int32_t i, int64_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$LongBuffer* ByteBufferAsLongBufferRL::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsLongBufferRL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsLongBufferRL::isReadOnly() {
	return true;
}

$ByteOrder* ByteBufferAsLongBufferRL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

ByteBufferAsLongBufferRL::ByteBufferAsLongBufferRL() {
}

$Class* ByteBufferAsLongBufferRL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsLongBufferRL, name, initialize, &_ByteBufferAsLongBufferRL_ClassInfo_, allocate$ByteBufferAsLongBufferRL);
	return class$;
}

$Class* ByteBufferAsLongBufferRL::class$ = nullptr;

	} // nio
} // java