#include <java/nio/ByteBufferAsFloatBufferL.h>

#include <java/lang/AssertionError.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsFloatBufferRL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/FloatBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN
#undef SCOPED_MEMORY_ACCESS

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsFloatBufferRL = ::java::nio::ByteBufferAsFloatBufferRL;
using $ByteOrder = ::java::nio::ByteOrder;
using $FloatBuffer = ::java::nio::FloatBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace nio {

$FieldInfo _ByteBufferAsFloatBufferL_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ByteBufferAsFloatBufferL, $assertionsDisabled)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED | $FINAL, $field(ByteBufferAsFloatBufferL, bb)},
	{}
};

$MethodInfo _ByteBufferAsFloatBufferL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsFloatBufferL::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsFloatBufferL::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsFloatBufferL::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsFloatBufferL::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"byteOffset", "(J)J", nullptr, $PROTECTED},
	{"compact", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"get", "()F", nullptr, $PUBLIC},
	{"get", "(I)F", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ByteBufferAsFloatBufferL::*)(int32_t)>(&ByteBufferAsFloatBufferL::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "(IF)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteBufferAsFloatBufferL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsFloatBufferL",
	"java.nio.FloatBuffer",
	nullptr,
	_ByteBufferAsFloatBufferL_FieldInfo_,
	_ByteBufferAsFloatBufferL_MethodInfo_
};

$Object* allocate$ByteBufferAsFloatBufferL($Class* clazz) {
	return $of($alloc(ByteBufferAsFloatBufferL));
}

bool ByteBufferAsFloatBufferL::$assertionsDisabled = false;

void ByteBufferAsFloatBufferL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	int32_t var$0 = $nc(bb)->remaining() >> 2;
	$FloatBuffer::init$(-1, 0, var$0, bb->remaining() >> 2, segment);
	$set(this, bb, bb);
	int32_t cap = this->capacity();
	this->limit(cap);
	int32_t pos = this->position();
	if (!ByteBufferAsFloatBufferL::$assertionsDisabled && !(pos <= cap)) {
		$throwNew($AssertionError);
	}
	this->address = $nc(bb)->address;
}

void ByteBufferAsFloatBufferL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$FloatBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, bb, bb);
	this->address = addr;
	if (!ByteBufferAsFloatBufferL::$assertionsDisabled && !(this->address >= $nc(bb)->address)) {
		$throwNew($AssertionError);
	}
}

$Object* ByteBufferAsFloatBufferL::base() {
	return $of($nc(this->bb)->hb);
}

$FloatBuffer* ByteBufferAsFloatBufferL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsFloatBufferL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsFloatBufferL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsFloatBufferL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$FloatBuffer* ByteBufferAsFloatBufferL::asReadOnlyBuffer() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($ByteBufferAsFloatBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

int32_t ByteBufferAsFloatBufferL::ix(int32_t i) {
	int32_t off = (int32_t)(this->address - $nc(this->bb)->address);
	return (i << 2) + off;
}

int64_t ByteBufferAsFloatBufferL::byteOffset(int64_t i) {
	return (i << 2) + this->address;
}

float ByteBufferAsFloatBufferL::get() {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int32_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, byteOffset(nextGetIndex()), false);
	return $Float::intBitsToFloat(x);
}

float ByteBufferAsFloatBufferL::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int32_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, byteOffset(checkIndex(i)), false);
	return $Float::intBitsToFloat(x);
}

$FloatBuffer* ByteBufferAsFloatBufferL::put(float x) {
	$useLocalCurrentObjectStackCache();
	int32_t y = $Float::floatToRawIntBits(x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, byteOffset(nextPutIndex()), y, false);
	return this;
}

$FloatBuffer* ByteBufferAsFloatBufferL::put(int32_t i, float x) {
	$useLocalCurrentObjectStackCache();
	int32_t y = $Float::floatToRawIntBits(x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, byteOffset(checkIndex(i)), y, false);
	return this;
}

$FloatBuffer* ByteBufferAsFloatBufferL::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsFloatBufferL::$assertionsDisabled && !(pos <= lim)) {
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

bool ByteBufferAsFloatBufferL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsFloatBufferL::isReadOnly() {
	return false;
}

$ByteOrder* ByteBufferAsFloatBufferL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

void clinit$ByteBufferAsFloatBufferL($Class* class$) {
	ByteBufferAsFloatBufferL::$assertionsDisabled = !ByteBufferAsFloatBufferL::class$->desiredAssertionStatus();
}

ByteBufferAsFloatBufferL::ByteBufferAsFloatBufferL() {
}

$Class* ByteBufferAsFloatBufferL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsFloatBufferL, name, initialize, &_ByteBufferAsFloatBufferL_ClassInfo_, clinit$ByteBufferAsFloatBufferL, allocate$ByteBufferAsFloatBufferL);
	return class$;
}

$Class* ByteBufferAsFloatBufferL::class$ = nullptr;

	} // nio
} // java