#include <java/nio/ByteBufferAsDoubleBufferRL.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsDoubleBufferL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DoubleBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsDoubleBufferL = ::java::nio::ByteBufferAsDoubleBufferL;
using $ByteOrder = ::java::nio::ByteOrder;
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$MethodInfo _ByteBufferAsDoubleBufferRL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsDoubleBufferRL, init$, void, $ByteBuffer*, $MemorySegmentProxy*)},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsDoubleBufferRL, init$, void, $ByteBuffer*, int32_t, int32_t, int32_t, int32_t, int64_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsDoubleBufferRL, asReadOnlyBuffer, $DoubleBuffer*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(ByteBufferAsDoubleBufferRL, base, $Object*)},
	{"compact", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsDoubleBufferRL, compact, $DoubleBuffer*)},
	{"duplicate", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsDoubleBufferRL, duplicate, $DoubleBuffer*)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsDoubleBufferRL, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsDoubleBufferRL, isReadOnly, bool)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsDoubleBufferRL, order, $ByteOrder*)},
	{"put", "(D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsDoubleBufferRL, put, $DoubleBuffer*, double)},
	{"put", "(ID)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsDoubleBufferRL, put, $DoubleBuffer*, int32_t, double)},
	{"slice", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsDoubleBufferRL, slice, $DoubleBuffer*)},
	{"slice", "(II)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsDoubleBufferRL, slice, $DoubleBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _ByteBufferAsDoubleBufferRL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsDoubleBufferRL",
	"java.nio.ByteBufferAsDoubleBufferL",
	nullptr,
	nullptr,
	_ByteBufferAsDoubleBufferRL_MethodInfo_
};

$Object* allocate$ByteBufferAsDoubleBufferRL($Class* clazz) {
	return $of($alloc(ByteBufferAsDoubleBufferRL));
}

void ByteBufferAsDoubleBufferRL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsDoubleBufferL::init$(bb, segment);
}

void ByteBufferAsDoubleBufferRL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsDoubleBufferL::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsDoubleBufferRL::base() {
	return $of($nc(this->bb)->hb);
}

$DoubleBuffer* ByteBufferAsDoubleBufferRL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsDoubleBufferRL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$DoubleBuffer* ByteBufferAsDoubleBufferRL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsDoubleBufferRL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$DoubleBuffer* ByteBufferAsDoubleBufferRL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsDoubleBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$DoubleBuffer* ByteBufferAsDoubleBufferRL::asReadOnlyBuffer() {
	return duplicate();
}

$DoubleBuffer* ByteBufferAsDoubleBufferRL::put(double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* ByteBufferAsDoubleBufferRL::put(int32_t i, double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* ByteBufferAsDoubleBufferRL::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsDoubleBufferRL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsDoubleBufferRL::isReadOnly() {
	return true;
}

$ByteOrder* ByteBufferAsDoubleBufferRL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

ByteBufferAsDoubleBufferRL::ByteBufferAsDoubleBufferRL() {
}

$Class* ByteBufferAsDoubleBufferRL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsDoubleBufferRL, name, initialize, &_ByteBufferAsDoubleBufferRL_ClassInfo_, allocate$ByteBufferAsDoubleBufferRL);
	return class$;
}

$Class* ByteBufferAsDoubleBufferRL::class$ = nullptr;

	} // nio
} // java