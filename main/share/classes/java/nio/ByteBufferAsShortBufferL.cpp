#include <java/nio/ByteBufferAsShortBufferL.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsShortBufferRL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/ShortBuffer.h>
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
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsShortBufferRL = ::java::nio::ByteBufferAsShortBufferRL;
using $ByteOrder = ::java::nio::ByteOrder;
using $ShortBuffer = ::java::nio::ShortBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace nio {

$FieldInfo _ByteBufferAsShortBufferL_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ByteBufferAsShortBufferL, $assertionsDisabled)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED | $FINAL, $field(ByteBufferAsShortBufferL, bb)},
	{}
};

$MethodInfo _ByteBufferAsShortBufferL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsShortBufferL::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsShortBufferL::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsShortBufferL::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsShortBufferL::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"byteOffset", "(J)J", nullptr, $PROTECTED},
	{"compact", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"get", "()S", nullptr, $PUBLIC},
	{"get", "(I)S", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ByteBufferAsShortBufferL::*)(int32_t)>(&ByteBufferAsShortBufferL::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "(IS)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteBufferAsShortBufferL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsShortBufferL",
	"java.nio.ShortBuffer",
	nullptr,
	_ByteBufferAsShortBufferL_FieldInfo_,
	_ByteBufferAsShortBufferL_MethodInfo_
};

$Object* allocate$ByteBufferAsShortBufferL($Class* clazz) {
	return $of($alloc(ByteBufferAsShortBufferL));
}

bool ByteBufferAsShortBufferL::$assertionsDisabled = false;

void ByteBufferAsShortBufferL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	int32_t var$0 = $nc(bb)->remaining() >> 1;
	$ShortBuffer::init$(-1, 0, var$0, bb->remaining() >> 1, segment);
	$set(this, bb, bb);
	int32_t cap = this->capacity();
	this->limit(cap);
	int32_t pos = this->position();
	if (!ByteBufferAsShortBufferL::$assertionsDisabled && !(pos <= cap)) {
		$throwNew($AssertionError);
	}
	this->address = $nc(bb)->address;
}

void ByteBufferAsShortBufferL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$ShortBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, bb, bb);
	this->address = addr;
	if (!ByteBufferAsShortBufferL::$assertionsDisabled && !(this->address >= $nc(bb)->address)) {
		$throwNew($AssertionError);
	}
}

$Object* ByteBufferAsShortBufferL::base() {
	return $of($nc(this->bb)->hb);
}

$ShortBuffer* ByteBufferAsShortBufferL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsShortBufferL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$ShortBuffer* ByteBufferAsShortBufferL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsShortBufferL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$ShortBuffer* ByteBufferAsShortBufferL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsShortBufferL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$ShortBuffer* ByteBufferAsShortBufferL::asReadOnlyBuffer() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($ByteBufferAsShortBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

int32_t ByteBufferAsShortBufferL::ix(int32_t i) {
	int32_t off = (int32_t)(this->address - $nc(this->bb)->address);
	return (i << 1) + off;
}

int64_t ByteBufferAsShortBufferL::byteOffset(int64_t i) {
	return (i << 1) + this->address;
}

int16_t ByteBufferAsShortBufferL::get() {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int16_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getShortUnaligned(var$0, var$1, byteOffset(nextGetIndex()), false);
	return (x);
}

int16_t ByteBufferAsShortBufferL::get(int32_t i) {
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int16_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getShortUnaligned(var$0, var$1, byteOffset(checkIndex(i)), false);
	return (x);
}

$ShortBuffer* ByteBufferAsShortBufferL::put(int16_t x) {
	int16_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putShortUnaligned(var$0, var$1, byteOffset(nextPutIndex()), y, false);
	return this;
}

$ShortBuffer* ByteBufferAsShortBufferL::put(int32_t i, int16_t x) {
	int16_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putShortUnaligned(var$0, var$1, byteOffset(checkIndex(i)), y, false);
	return this;
}

$ShortBuffer* ByteBufferAsShortBufferL::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsShortBufferL::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	$var($ByteBuffer, db, $nc(this->bb)->duplicate());
	$nc(db)->limit(ix(lim));
	db->position(ix(0));
	$var($ByteBuffer, sb, db->slice());
	$nc(sb)->position(pos << 1);
	sb->compact();
	position(rem);
	limit(capacity());
	discardMark();
	return this;
}

bool ByteBufferAsShortBufferL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsShortBufferL::isReadOnly() {
	return false;
}

$ByteOrder* ByteBufferAsShortBufferL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

void clinit$ByteBufferAsShortBufferL($Class* class$) {
	ByteBufferAsShortBufferL::$assertionsDisabled = !ByteBufferAsShortBufferL::class$->desiredAssertionStatus();
}

ByteBufferAsShortBufferL::ByteBufferAsShortBufferL() {
}

$Class* ByteBufferAsShortBufferL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsShortBufferL, name, initialize, &_ByteBufferAsShortBufferL_ClassInfo_, clinit$ByteBufferAsShortBufferL, allocate$ByteBufferAsShortBufferL);
	return class$;
}

$Class* ByteBufferAsShortBufferL::class$ = nullptr;

	} // nio
} // java