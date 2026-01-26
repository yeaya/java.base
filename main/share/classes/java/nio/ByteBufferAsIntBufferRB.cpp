#include <java/nio/ByteBufferAsIntBufferRB.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsIntBufferB.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsIntBufferB = ::java::nio::ByteBufferAsIntBufferB;
using $ByteOrder = ::java::nio::ByteOrder;
using $IntBuffer = ::java::nio::IntBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$MethodInfo _ByteBufferAsIntBufferRB_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsIntBufferRB, init$, void, $ByteBuffer*, $MemorySegmentProxy*)},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsIntBufferRB, init$, void, $ByteBuffer*, int32_t, int32_t, int32_t, int32_t, int64_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferRB, asReadOnlyBuffer, $IntBuffer*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(ByteBufferAsIntBufferRB, base, $Object*)},
	{"compact", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferRB, compact, $IntBuffer*)},
	{"duplicate", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferRB, duplicate, $IntBuffer*)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferRB, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferRB, isReadOnly, bool)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferRB, order, $ByteOrder*)},
	{"put", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferRB, put, $IntBuffer*, int32_t)},
	{"put", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferRB, put, $IntBuffer*, int32_t, int32_t)},
	{"slice", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferRB, slice, $IntBuffer*)},
	{"slice", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferRB, slice, $IntBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _ByteBufferAsIntBufferRB_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsIntBufferRB",
	"java.nio.ByteBufferAsIntBufferB",
	nullptr,
	nullptr,
	_ByteBufferAsIntBufferRB_MethodInfo_
};

$Object* allocate$ByteBufferAsIntBufferRB($Class* clazz) {
	return $of($alloc(ByteBufferAsIntBufferRB));
}

void ByteBufferAsIntBufferRB::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsIntBufferB::init$(bb, segment);
}

void ByteBufferAsIntBufferRB::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsIntBufferB::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsIntBufferRB::base() {
	return $of($nc(this->bb)->hb);
}

$IntBuffer* ByteBufferAsIntBufferRB::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsIntBufferRB, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$IntBuffer* ByteBufferAsIntBufferRB::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsIntBufferRB, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$IntBuffer* ByteBufferAsIntBufferRB::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsIntBufferRB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$IntBuffer* ByteBufferAsIntBufferRB::asReadOnlyBuffer() {
	return duplicate();
}

$IntBuffer* ByteBufferAsIntBufferRB::put(int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* ByteBufferAsIntBufferRB::put(int32_t i, int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* ByteBufferAsIntBufferRB::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsIntBufferRB::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsIntBufferRB::isReadOnly() {
	return true;
}

$ByteOrder* ByteBufferAsIntBufferRB::order() {
	$init($ByteOrder);
	return $ByteOrder::BIG_ENDIAN;
}

ByteBufferAsIntBufferRB::ByteBufferAsIntBufferRB() {
}

$Class* ByteBufferAsIntBufferRB::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsIntBufferRB, name, initialize, &_ByteBufferAsIntBufferRB_ClassInfo_, allocate$ByteBufferAsIntBufferRB);
	return class$;
}

$Class* ByteBufferAsIntBufferRB::class$ = nullptr;

	} // nio
} // java