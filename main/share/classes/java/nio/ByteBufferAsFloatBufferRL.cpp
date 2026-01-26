#include <java/nio/ByteBufferAsFloatBufferRL.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsFloatBufferL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsFloatBufferL = ::java::nio::ByteBufferAsFloatBufferL;
using $ByteOrder = ::java::nio::ByteOrder;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$MethodInfo _ByteBufferAsFloatBufferRL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsFloatBufferRL, init$, void, $ByteBuffer*, $MemorySegmentProxy*)},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsFloatBufferRL, init$, void, $ByteBuffer*, int32_t, int32_t, int32_t, int32_t, int64_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsFloatBufferRL, asReadOnlyBuffer, $FloatBuffer*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(ByteBufferAsFloatBufferRL, base, $Object*)},
	{"compact", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsFloatBufferRL, compact, $FloatBuffer*)},
	{"duplicate", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsFloatBufferRL, duplicate, $FloatBuffer*)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsFloatBufferRL, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsFloatBufferRL, isReadOnly, bool)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsFloatBufferRL, order, $ByteOrder*)},
	{"put", "(F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsFloatBufferRL, put, $FloatBuffer*, float)},
	{"put", "(IF)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsFloatBufferRL, put, $FloatBuffer*, int32_t, float)},
	{"slice", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsFloatBufferRL, slice, $FloatBuffer*)},
	{"slice", "(II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsFloatBufferRL, slice, $FloatBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _ByteBufferAsFloatBufferRL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsFloatBufferRL",
	"java.nio.ByteBufferAsFloatBufferL",
	nullptr,
	nullptr,
	_ByteBufferAsFloatBufferRL_MethodInfo_
};

$Object* allocate$ByteBufferAsFloatBufferRL($Class* clazz) {
	return $of($alloc(ByteBufferAsFloatBufferRL));
}

void ByteBufferAsFloatBufferRL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsFloatBufferL::init$(bb, segment);
}

void ByteBufferAsFloatBufferRL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsFloatBufferL::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsFloatBufferRL::base() {
	return $of($nc(this->bb)->hb);
}

$FloatBuffer* ByteBufferAsFloatBufferRL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsFloatBufferRL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferRL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsFloatBufferRL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferRL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsFloatBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferRL::asReadOnlyBuffer() {
	return duplicate();
}

$FloatBuffer* ByteBufferAsFloatBufferRL::put(float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* ByteBufferAsFloatBufferRL::put(int32_t i, float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* ByteBufferAsFloatBufferRL::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsFloatBufferRL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsFloatBufferRL::isReadOnly() {
	return true;
}

$ByteOrder* ByteBufferAsFloatBufferRL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

ByteBufferAsFloatBufferRL::ByteBufferAsFloatBufferRL() {
}

$Class* ByteBufferAsFloatBufferRL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsFloatBufferRL, name, initialize, &_ByteBufferAsFloatBufferRL_ClassInfo_, allocate$ByteBufferAsFloatBufferRL);
	return class$;
}

$Class* ByteBufferAsFloatBufferRL::class$ = nullptr;

	} // nio
} // java