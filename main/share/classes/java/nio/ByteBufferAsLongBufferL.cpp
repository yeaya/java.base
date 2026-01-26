#include <java/nio/ByteBufferAsLongBufferL.h>

#include <java/lang/AssertionError.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsLongBufferRL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/LongBuffer.h>
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
using $ByteBufferAsLongBufferRL = ::java::nio::ByteBufferAsLongBufferRL;
using $ByteOrder = ::java::nio::ByteOrder;
using $LongBuffer = ::java::nio::LongBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace nio {

$FieldInfo _ByteBufferAsLongBufferL_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ByteBufferAsLongBufferL, $assertionsDisabled)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED | $FINAL, $field(ByteBufferAsLongBufferL, bb)},
	{}
};

$MethodInfo _ByteBufferAsLongBufferL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsLongBufferL, init$, void, $ByteBuffer*, $MemorySegmentProxy*)},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsLongBufferL, init$, void, $ByteBuffer*, int32_t, int32_t, int32_t, int32_t, int64_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, asReadOnlyBuffer, $LongBuffer*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(ByteBufferAsLongBufferL, base, $Object*)},
	{"byteOffset", "(J)J", nullptr, $PROTECTED, $virtualMethod(ByteBufferAsLongBufferL, byteOffset, int64_t, int64_t)},
	{"compact", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, compact, $LongBuffer*)},
	{"duplicate", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, duplicate, $LongBuffer*)},
	{"get", "()J", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, get, int64_t)},
	{"get", "(I)J", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, get, int64_t, int32_t)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, isReadOnly, bool)},
	{"ix", "(I)I", nullptr, $PRIVATE, $method(ByteBufferAsLongBufferL, ix, int32_t, int32_t)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, order, $ByteOrder*)},
	{"put", "(J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, put, $LongBuffer*, int64_t)},
	{"put", "(IJ)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, put, $LongBuffer*, int32_t, int64_t)},
	{"slice", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, slice, $LongBuffer*)},
	{"slice", "(II)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsLongBufferL, slice, $LongBuffer*, int32_t, int32_t)},
	{}
};

$ClassInfo _ByteBufferAsLongBufferL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsLongBufferL",
	"java.nio.LongBuffer",
	nullptr,
	_ByteBufferAsLongBufferL_FieldInfo_,
	_ByteBufferAsLongBufferL_MethodInfo_
};

$Object* allocate$ByteBufferAsLongBufferL($Class* clazz) {
	return $of($alloc(ByteBufferAsLongBufferL));
}

bool ByteBufferAsLongBufferL::$assertionsDisabled = false;

void ByteBufferAsLongBufferL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	int32_t var$0 = $nc(bb)->remaining() >> 3;
	$LongBuffer::init$(-1, 0, var$0, bb->remaining() >> 3, segment);
	$set(this, bb, bb);
	int32_t cap = this->capacity();
	this->limit(cap);
	int32_t pos = this->position();
	if (!ByteBufferAsLongBufferL::$assertionsDisabled && !(pos <= cap)) {
		$throwNew($AssertionError);
	}
	this->address = $nc(bb)->address;
}

void ByteBufferAsLongBufferL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$LongBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, bb, bb);
	this->address = addr;
	if (!ByteBufferAsLongBufferL::$assertionsDisabled && !(this->address >= $nc(bb)->address)) {
		$throwNew($AssertionError);
	}
}

$Object* ByteBufferAsLongBufferL::base() {
	return $of($nc(this->bb)->hb);
}

$LongBuffer* ByteBufferAsLongBufferL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsLongBufferL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$LongBuffer* ByteBufferAsLongBufferL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsLongBufferL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$LongBuffer* ByteBufferAsLongBufferL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsLongBufferL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$LongBuffer* ByteBufferAsLongBufferL::asReadOnlyBuffer() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($ByteBufferAsLongBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

int32_t ByteBufferAsLongBufferL::ix(int32_t i) {
	int32_t off = (int32_t)(this->address - $nc(this->bb)->address);
	return (i << 3) + off;
}

int64_t ByteBufferAsLongBufferL::byteOffset(int64_t i) {
	return (i << 3) + this->address;
}

int64_t ByteBufferAsLongBufferL::get() {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int64_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, byteOffset(nextGetIndex()), false);
	return (x);
}

int64_t ByteBufferAsLongBufferL::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int64_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, byteOffset(checkIndex(i)), false);
	return (x);
}

$LongBuffer* ByteBufferAsLongBufferL::put(int64_t x) {
	$useLocalCurrentObjectStackCache();
	int64_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, byteOffset(nextPutIndex()), y, false);
	return this;
}

$LongBuffer* ByteBufferAsLongBufferL::put(int32_t i, int64_t x) {
	$useLocalCurrentObjectStackCache();
	int64_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, byteOffset(checkIndex(i)), y, false);
	return this;
}

$LongBuffer* ByteBufferAsLongBufferL::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsLongBufferL::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	$var($ByteBuffer, db, $nc(this->bb)->duplicate());
	$nc(db)->limit(ix(lim));
	db->position(ix(0));
	$var($ByteBuffer, sb, db->slice());
	$nc(sb)->position(pos << 3);
	sb->compact();
	position(rem);
	limit(capacity());
	discardMark();
	return this;
}

bool ByteBufferAsLongBufferL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsLongBufferL::isReadOnly() {
	return false;
}

$ByteOrder* ByteBufferAsLongBufferL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

void clinit$ByteBufferAsLongBufferL($Class* class$) {
	ByteBufferAsLongBufferL::$assertionsDisabled = !ByteBufferAsLongBufferL::class$->desiredAssertionStatus();
}

ByteBufferAsLongBufferL::ByteBufferAsLongBufferL() {
}

$Class* ByteBufferAsLongBufferL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsLongBufferL, name, initialize, &_ByteBufferAsLongBufferL_ClassInfo_, clinit$ByteBufferAsLongBufferL, allocate$ByteBufferAsLongBufferL);
	return class$;
}

$Class* ByteBufferAsLongBufferL::class$ = nullptr;

	} // nio
} // java