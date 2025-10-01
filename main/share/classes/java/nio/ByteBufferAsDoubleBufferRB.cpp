#include <java/nio/ByteBufferAsDoubleBufferRB.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsDoubleBufferB.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DoubleBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsDoubleBufferB = ::java::nio::ByteBufferAsDoubleBufferB;
using $ByteOrder = ::java::nio::ByteOrder;
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$MethodInfo _ByteBufferAsDoubleBufferRB_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsDoubleBufferRB::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsDoubleBufferRB::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsDoubleBufferRB::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsDoubleBufferRB::init$))},
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

$ClassInfo _ByteBufferAsDoubleBufferRB_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsDoubleBufferRB",
	"java.nio.ByteBufferAsDoubleBufferB",
	nullptr,
	nullptr,
	_ByteBufferAsDoubleBufferRB_MethodInfo_
};

$Object* allocate$ByteBufferAsDoubleBufferRB($Class* clazz) {
	return $of($alloc(ByteBufferAsDoubleBufferRB));
}

void ByteBufferAsDoubleBufferRB::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsDoubleBufferB::init$(bb, segment);
}

void ByteBufferAsDoubleBufferRB::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsDoubleBufferB::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsDoubleBufferRB::base() {
	return $of($nc(this->bb)->hb);
}

$DoubleBuffer* ByteBufferAsDoubleBufferRB::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsDoubleBufferRB, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$DoubleBuffer* ByteBufferAsDoubleBufferRB::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsDoubleBufferRB, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$DoubleBuffer* ByteBufferAsDoubleBufferRB::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsDoubleBufferRB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$DoubleBuffer* ByteBufferAsDoubleBufferRB::asReadOnlyBuffer() {
	return duplicate();
}

$DoubleBuffer* ByteBufferAsDoubleBufferRB::put(double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* ByteBufferAsDoubleBufferRB::put(int32_t i, double x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$DoubleBuffer* ByteBufferAsDoubleBufferRB::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsDoubleBufferRB::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsDoubleBufferRB::isReadOnly() {
	return true;
}

$ByteOrder* ByteBufferAsDoubleBufferRB::order() {
	$init($ByteOrder);
	return $ByteOrder::BIG_ENDIAN;
}

ByteBufferAsDoubleBufferRB::ByteBufferAsDoubleBufferRB() {
}

$Class* ByteBufferAsDoubleBufferRB::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsDoubleBufferRB, name, initialize, &_ByteBufferAsDoubleBufferRB_ClassInfo_, allocate$ByteBufferAsDoubleBufferRB);
	return class$;
}

$Class* ByteBufferAsDoubleBufferRB::class$ = nullptr;

	} // nio
} // java