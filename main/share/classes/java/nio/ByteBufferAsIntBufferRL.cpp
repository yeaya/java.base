#include <java/nio/ByteBufferAsIntBufferRL.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsIntBufferL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/IntBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsIntBufferL = ::java::nio::ByteBufferAsIntBufferL;
using $ByteOrder = ::java::nio::ByteOrder;
using $IntBuffer = ::java::nio::IntBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$MethodInfo _ByteBufferAsIntBufferRL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsIntBufferRL::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsIntBufferRL::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsIntBufferRL::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsIntBufferRL::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"compact", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteBufferAsIntBufferRL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsIntBufferRL",
	"java.nio.ByteBufferAsIntBufferL",
	nullptr,
	nullptr,
	_ByteBufferAsIntBufferRL_MethodInfo_
};

$Object* allocate$ByteBufferAsIntBufferRL($Class* clazz) {
	return $of($alloc(ByteBufferAsIntBufferRL));
}

void ByteBufferAsIntBufferRL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsIntBufferL::init$(bb, segment);
}

void ByteBufferAsIntBufferRL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsIntBufferL::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsIntBufferRL::base() {
	return $of($nc(this->bb)->hb);
}

$IntBuffer* ByteBufferAsIntBufferRL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsIntBufferRL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$IntBuffer* ByteBufferAsIntBufferRL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsIntBufferRL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$IntBuffer* ByteBufferAsIntBufferRL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsIntBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$IntBuffer* ByteBufferAsIntBufferRL::asReadOnlyBuffer() {
	return duplicate();
}

$IntBuffer* ByteBufferAsIntBufferRL::put(int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* ByteBufferAsIntBufferRL::put(int32_t i, int32_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$IntBuffer* ByteBufferAsIntBufferRL::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsIntBufferRL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsIntBufferRL::isReadOnly() {
	return true;
}

$ByteOrder* ByteBufferAsIntBufferRL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

ByteBufferAsIntBufferRL::ByteBufferAsIntBufferRL() {
}

$Class* ByteBufferAsIntBufferRL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsIntBufferRL, name, initialize, &_ByteBufferAsIntBufferRL_ClassInfo_, allocate$ByteBufferAsIntBufferRL);
	return class$;
}

$Class* ByteBufferAsIntBufferRL::class$ = nullptr;

	} // nio
} // java