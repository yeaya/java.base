#include <java/nio/ByteBufferAsFloatBufferRB.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsFloatBufferB.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/FloatBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsFloatBufferB = ::java::nio::ByteBufferAsFloatBufferB;
using $ByteOrder = ::java::nio::ByteOrder;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$MethodInfo _ByteBufferAsFloatBufferRB_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsFloatBufferRB::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsFloatBufferRB::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsFloatBufferRB::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsFloatBufferRB::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"compact", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "(IF)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteBufferAsFloatBufferRB_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsFloatBufferRB",
	"java.nio.ByteBufferAsFloatBufferB",
	nullptr,
	nullptr,
	_ByteBufferAsFloatBufferRB_MethodInfo_
};

$Object* allocate$ByteBufferAsFloatBufferRB($Class* clazz) {
	return $of($alloc(ByteBufferAsFloatBufferRB));
}

void ByteBufferAsFloatBufferRB::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsFloatBufferB::init$(bb, segment);
}

void ByteBufferAsFloatBufferRB::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsFloatBufferB::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsFloatBufferRB::base() {
	return $of($nc(this->bb)->hb);
}

$FloatBuffer* ByteBufferAsFloatBufferRB::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsFloatBufferRB, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferRB::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsFloatBufferRB, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferRB::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsFloatBufferRB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferRB::asReadOnlyBuffer() {
	return duplicate();
}

$FloatBuffer* ByteBufferAsFloatBufferRB::put(float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* ByteBufferAsFloatBufferRB::put(int32_t i, float x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$FloatBuffer* ByteBufferAsFloatBufferRB::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsFloatBufferRB::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsFloatBufferRB::isReadOnly() {
	return true;
}

$ByteOrder* ByteBufferAsFloatBufferRB::order() {
	$init($ByteOrder);
	return $ByteOrder::BIG_ENDIAN;
}

ByteBufferAsFloatBufferRB::ByteBufferAsFloatBufferRB() {
}

$Class* ByteBufferAsFloatBufferRB::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsFloatBufferRB, name, initialize, &_ByteBufferAsFloatBufferRB_ClassInfo_, allocate$ByteBufferAsFloatBufferRB);
	return class$;
}

$Class* ByteBufferAsFloatBufferRB::class$ = nullptr;

	} // nio
} // java