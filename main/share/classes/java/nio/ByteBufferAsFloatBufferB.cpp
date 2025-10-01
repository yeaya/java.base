#include <java/nio/ByteBufferAsFloatBufferB.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsFloatBufferRB.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/FloatBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef SCOPED_MEMORY_ACCESS

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsFloatBufferRB = ::java::nio::ByteBufferAsFloatBufferRB;
using $ByteOrder = ::java::nio::ByteOrder;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace nio {

$FieldInfo _ByteBufferAsFloatBufferB_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ByteBufferAsFloatBufferB, $assertionsDisabled)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED | $FINAL, $field(ByteBufferAsFloatBufferB, bb)},
	{}
};

$MethodInfo _ByteBufferAsFloatBufferB_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsFloatBufferB::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsFloatBufferB::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsFloatBufferB::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsFloatBufferB::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"byteOffset", "(J)J", nullptr, $PROTECTED},
	{"compact", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"get", "()F", nullptr, $PUBLIC},
	{"get", "(I)F", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ByteBufferAsFloatBufferB::*)(int32_t)>(&ByteBufferAsFloatBufferB::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "(IF)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteBufferAsFloatBufferB_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsFloatBufferB",
	"java.nio.FloatBuffer",
	nullptr,
	_ByteBufferAsFloatBufferB_FieldInfo_,
	_ByteBufferAsFloatBufferB_MethodInfo_
};

$Object* allocate$ByteBufferAsFloatBufferB($Class* clazz) {
	return $of($alloc(ByteBufferAsFloatBufferB));
}

bool ByteBufferAsFloatBufferB::$assertionsDisabled = false;

void ByteBufferAsFloatBufferB::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	int32_t var$0 = $nc(bb)->remaining() >> 2;
	$FloatBuffer::init$(-1, 0, var$0, bb->remaining() >> 2, segment);
	$set(this, bb, bb);
	int32_t cap = this->capacity();
	this->limit(cap);
	int32_t pos = this->position();
	if (!ByteBufferAsFloatBufferB::$assertionsDisabled && !(pos <= cap)) {
		$throwNew($AssertionError);
	}
	this->address = $nc(bb)->address;
}

void ByteBufferAsFloatBufferB::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$FloatBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, bb, bb);
	this->address = addr;
	if (!ByteBufferAsFloatBufferB::$assertionsDisabled && !(this->address >= $nc(bb)->address)) {
		$throwNew($AssertionError);
	}
}

$Object* ByteBufferAsFloatBufferB::base() {
	return $of($nc(this->bb)->hb);
}

$FloatBuffer* ByteBufferAsFloatBufferB::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsFloatBufferB, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferB::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsFloatBufferB, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferB::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsFloatBufferB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferB::asReadOnlyBuffer() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($ByteBufferAsFloatBufferRB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

int32_t ByteBufferAsFloatBufferB::ix(int32_t i) {
	int32_t off = (int32_t)(this->address - $nc(this->bb)->address);
	return (i << 2) + off;
}

int64_t ByteBufferAsFloatBufferB::byteOffset(int64_t i) {
	return (i << 2) + this->address;
}

float ByteBufferAsFloatBufferB::get() {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int32_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, byteOffset(nextGetIndex()), true);
	return $Float::intBitsToFloat(x);
}

float ByteBufferAsFloatBufferB::get(int32_t i) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int32_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, byteOffset(checkIndex(i)), true);
	return $Float::intBitsToFloat(x);
}

$FloatBuffer* ByteBufferAsFloatBufferB::put(float x) {
	int32_t y = $Float::floatToRawIntBits(x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, byteOffset(nextPutIndex()), y, true);
	return this;
}

$FloatBuffer* ByteBufferAsFloatBufferB::put(int32_t i, float x) {
	int32_t y = $Float::floatToRawIntBits(x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, byteOffset(checkIndex(i)), y, true);
	return this;
}

$FloatBuffer* ByteBufferAsFloatBufferB::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsFloatBufferB::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	$var($ByteBuffer, db, $nc(this->bb)->duplicate());
	$nc(db)->limit(ix(lim));
	db->position(ix(0));
	$var($ByteBuffer, sb, db->slice());
	$nc(sb)->position(pos << 2);
	sb->compact();
	position(rem);
	limit(capacity());
	discardMark();
	return this;
}

bool ByteBufferAsFloatBufferB::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsFloatBufferB::isReadOnly() {
	return false;
}

$ByteOrder* ByteBufferAsFloatBufferB::order() {
	$init($ByteOrder);
	return $ByteOrder::BIG_ENDIAN;
}

void clinit$ByteBufferAsFloatBufferB($Class* class$) {
	ByteBufferAsFloatBufferB::$assertionsDisabled = !ByteBufferAsFloatBufferB::class$->desiredAssertionStatus();
}

ByteBufferAsFloatBufferB::ByteBufferAsFloatBufferB() {
}

$Class* ByteBufferAsFloatBufferB::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsFloatBufferB, name, initialize, &_ByteBufferAsFloatBufferB_ClassInfo_, clinit$ByteBufferAsFloatBufferB, allocate$ByteBufferAsFloatBufferB);
	return class$;
}

$Class* ByteBufferAsFloatBufferB::class$ = nullptr;

	} // nio
} // java