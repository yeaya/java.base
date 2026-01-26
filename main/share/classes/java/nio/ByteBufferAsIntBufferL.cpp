#include <java/nio/ByteBufferAsIntBufferL.h>

#include <java/lang/AssertionError.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsIntBufferRL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/IntBuffer.h>
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
using $ByteBufferAsIntBufferRL = ::java::nio::ByteBufferAsIntBufferRL;
using $ByteOrder = ::java::nio::ByteOrder;
using $IntBuffer = ::java::nio::IntBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace nio {

$FieldInfo _ByteBufferAsIntBufferL_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ByteBufferAsIntBufferL, $assertionsDisabled)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED | $FINAL, $field(ByteBufferAsIntBufferL, bb)},
	{}
};

$MethodInfo _ByteBufferAsIntBufferL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsIntBufferL, init$, void, $ByteBuffer*, $MemorySegmentProxy*)},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsIntBufferL, init$, void, $ByteBuffer*, int32_t, int32_t, int32_t, int32_t, int64_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, asReadOnlyBuffer, $IntBuffer*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(ByteBufferAsIntBufferL, base, $Object*)},
	{"byteOffset", "(J)J", nullptr, $PROTECTED, $virtualMethod(ByteBufferAsIntBufferL, byteOffset, int64_t, int64_t)},
	{"compact", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, compact, $IntBuffer*)},
	{"duplicate", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, duplicate, $IntBuffer*)},
	{"get", "()I", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, get, int32_t)},
	{"get", "(I)I", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, get, int32_t, int32_t)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, isReadOnly, bool)},
	{"ix", "(I)I", nullptr, $PRIVATE, $method(ByteBufferAsIntBufferL, ix, int32_t, int32_t)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, order, $ByteOrder*)},
	{"put", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, put, $IntBuffer*, int32_t)},
	{"put", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, put, $IntBuffer*, int32_t, int32_t)},
	{"slice", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, slice, $IntBuffer*)},
	{"slice", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsIntBufferL, slice, $IntBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _ByteBufferAsIntBufferL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsIntBufferL",
	"java.nio.IntBuffer",
	nullptr,
	_ByteBufferAsIntBufferL_FieldInfo_,
	_ByteBufferAsIntBufferL_MethodInfo_
};

$Object* allocate$ByteBufferAsIntBufferL($Class* clazz) {
	return $of($alloc(ByteBufferAsIntBufferL));
}

bool ByteBufferAsIntBufferL::$assertionsDisabled = false;

void ByteBufferAsIntBufferL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	int32_t var$0 = $nc(bb)->remaining() >> 2;
	$IntBuffer::init$(-1, 0, var$0, bb->remaining() >> 2, segment);
	$set(this, bb, bb);
	int32_t cap = this->capacity();
	this->limit(cap);
	int32_t pos = this->position();
	if (!ByteBufferAsIntBufferL::$assertionsDisabled && !(pos <= cap)) {
		$throwNew($AssertionError);
	}
	this->address = $nc(bb)->address;
}

void ByteBufferAsIntBufferL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$IntBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, bb, bb);
	this->address = addr;
	if (!ByteBufferAsIntBufferL::$assertionsDisabled && !(this->address >= $nc(bb)->address)) {
		$throwNew($AssertionError);
	}
}

$Object* ByteBufferAsIntBufferL::base() {
	return $of($nc(this->bb)->hb);
}

$IntBuffer* ByteBufferAsIntBufferL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsIntBufferL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$IntBuffer* ByteBufferAsIntBufferL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsIntBufferL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$IntBuffer* ByteBufferAsIntBufferL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsIntBufferL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$IntBuffer* ByteBufferAsIntBufferL::asReadOnlyBuffer() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($ByteBufferAsIntBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

int32_t ByteBufferAsIntBufferL::ix(int32_t i) {
	int32_t off = (int32_t)(this->address - $nc(this->bb)->address);
	return (i << 2) + off;
}

int64_t ByteBufferAsIntBufferL::byteOffset(int64_t i) {
	return (i << 2) + this->address;
}

int32_t ByteBufferAsIntBufferL::get() {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int32_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, byteOffset(nextGetIndex()), false);
	return (x);
}

int32_t ByteBufferAsIntBufferL::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int32_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getIntUnaligned(var$0, var$1, byteOffset(checkIndex(i)), false);
	return (x);
}

$IntBuffer* ByteBufferAsIntBufferL::put(int32_t x) {
	$useLocalCurrentObjectStackCache();
	int32_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, byteOffset(nextPutIndex()), y, false);
	return this;
}

$IntBuffer* ByteBufferAsIntBufferL::put(int32_t i, int32_t x) {
	$useLocalCurrentObjectStackCache();
	int32_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putIntUnaligned(var$0, var$1, byteOffset(checkIndex(i)), y, false);
	return this;
}

$IntBuffer* ByteBufferAsIntBufferL::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsIntBufferL::$assertionsDisabled && !(pos <= lim)) {
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

bool ByteBufferAsIntBufferL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsIntBufferL::isReadOnly() {
	return false;
}

$ByteOrder* ByteBufferAsIntBufferL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

void clinit$ByteBufferAsIntBufferL($Class* class$) {
	ByteBufferAsIntBufferL::$assertionsDisabled = !ByteBufferAsIntBufferL::class$->desiredAssertionStatus();
}

ByteBufferAsIntBufferL::ByteBufferAsIntBufferL() {
}

$Class* ByteBufferAsIntBufferL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsIntBufferL, name, initialize, &_ByteBufferAsIntBufferL_ClassInfo_, clinit$ByteBufferAsIntBufferL, allocate$ByteBufferAsIntBufferL);
	return class$;
}

$Class* ByteBufferAsIntBufferL::class$ = nullptr;

	} // nio
} // java