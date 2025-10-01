#include <java/nio/ByteBufferAsShortBufferRL.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsShortBufferL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/nio/ShortBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsShortBufferL = ::java::nio::ByteBufferAsShortBufferL;
using $ByteOrder = ::java::nio::ByteOrder;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$MethodInfo _ByteBufferAsShortBufferRL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsShortBufferRL::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsShortBufferRL::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsShortBufferRL::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsShortBufferRL::init$))},
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

$ClassInfo _ByteBufferAsShortBufferRL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsShortBufferRL",
	"java.nio.ByteBufferAsShortBufferL",
	nullptr,
	nullptr,
	_ByteBufferAsShortBufferRL_MethodInfo_
};

$Object* allocate$ByteBufferAsShortBufferRL($Class* clazz) {
	return $of($alloc(ByteBufferAsShortBufferRL));
}

void ByteBufferAsShortBufferRL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	$ByteBufferAsShortBufferL::init$(bb, segment);
}

void ByteBufferAsShortBufferRL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ByteBufferAsShortBufferL::init$(bb, mark, pos, lim, cap, addr, segment);
}

$Object* ByteBufferAsShortBufferRL::base() {
	return $of($nc(this->bb)->hb);
}

$ShortBuffer* ByteBufferAsShortBufferRL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsShortBufferRL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$ShortBuffer* ByteBufferAsShortBufferRL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsShortBufferRL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$ShortBuffer* ByteBufferAsShortBufferRL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsShortBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$ShortBuffer* ByteBufferAsShortBufferRL::asReadOnlyBuffer() {
	return duplicate();
}

$ShortBuffer* ByteBufferAsShortBufferRL::put(int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* ByteBufferAsShortBufferRL::put(int32_t i, int16_t x) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$ShortBuffer* ByteBufferAsShortBufferRL::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool ByteBufferAsShortBufferRL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsShortBufferRL::isReadOnly() {
	return true;
}

$ByteOrder* ByteBufferAsShortBufferRL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

ByteBufferAsShortBufferRL::ByteBufferAsShortBufferRL() {
}

$Class* ByteBufferAsShortBufferRL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsShortBufferRL, name, initialize, &_ByteBufferAsShortBufferRL_ClassInfo_, allocate$ByteBufferAsShortBufferRL);
	return class$;
}

$Class* ByteBufferAsShortBufferRL::class$ = nullptr;

	} // nio
} // java