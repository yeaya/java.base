#include <java/nio/ByteBufferAsLongBufferB.h>

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
#include <java/nio/ByteBufferAsLongBufferRB.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/LongBuffer.h>
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
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsLongBufferRB = ::java::nio::ByteBufferAsLongBufferRB;
using $ByteOrder = ::java::nio::ByteOrder;
using $LongBuffer = ::java::nio::LongBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace nio {

$FieldInfo _ByteBufferAsLongBufferB_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ByteBufferAsLongBufferB, $assertionsDisabled)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED | $FINAL, $field(ByteBufferAsLongBufferB, bb)},
	{}
};

$MethodInfo _ByteBufferAsLongBufferB_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsLongBufferB::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsLongBufferB::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsLongBufferB::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsLongBufferB::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"byteOffset", "(J)J", nullptr, $PROTECTED},
	{"compact", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"get", "()J", nullptr, $PUBLIC},
	{"get", "(I)J", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ByteBufferAsLongBufferB::*)(int32_t)>(&ByteBufferAsLongBufferB::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "(IJ)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteBufferAsLongBufferB_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsLongBufferB",
	"java.nio.LongBuffer",
	nullptr,
	_ByteBufferAsLongBufferB_FieldInfo_,
	_ByteBufferAsLongBufferB_MethodInfo_
};

$Object* allocate$ByteBufferAsLongBufferB($Class* clazz) {
	return $of($alloc(ByteBufferAsLongBufferB));
}

bool ByteBufferAsLongBufferB::$assertionsDisabled = false;

void ByteBufferAsLongBufferB::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	int32_t var$0 = $nc(bb)->remaining() >> 3;
	$LongBuffer::init$(-1, 0, var$0, bb->remaining() >> 3, segment);
	$set(this, bb, bb);
	int32_t cap = this->capacity();
	this->limit(cap);
	int32_t pos = this->position();
	if (!ByteBufferAsLongBufferB::$assertionsDisabled && !(pos <= cap)) {
		$throwNew($AssertionError);
	}
	this->address = $nc(bb)->address;
}

void ByteBufferAsLongBufferB::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$LongBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, bb, bb);
	this->address = addr;
	if (!ByteBufferAsLongBufferB::$assertionsDisabled && !(this->address >= $nc(bb)->address)) {
		$throwNew($AssertionError);
	}
}

$Object* ByteBufferAsLongBufferB::base() {
	return $of($nc(this->bb)->hb);
}

$LongBuffer* ByteBufferAsLongBufferB::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsLongBufferB, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$LongBuffer* ByteBufferAsLongBufferB::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsLongBufferB, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$LongBuffer* ByteBufferAsLongBufferB::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsLongBufferB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$LongBuffer* ByteBufferAsLongBufferB::asReadOnlyBuffer() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($ByteBufferAsLongBufferRB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

int32_t ByteBufferAsLongBufferB::ix(int32_t i) {
	int32_t off = (int32_t)(this->address - $nc(this->bb)->address);
	return (i << 3) + off;
}

int64_t ByteBufferAsLongBufferB::byteOffset(int64_t i) {
	return (i << 3) + this->address;
}

int64_t ByteBufferAsLongBufferB::get() {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int64_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, byteOffset(nextGetIndex()), true);
	return (x);
}

int64_t ByteBufferAsLongBufferB::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int64_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, byteOffset(checkIndex(i)), true);
	return (x);
}

$LongBuffer* ByteBufferAsLongBufferB::put(int64_t x) {
	$useLocalCurrentObjectStackCache();
	int64_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, byteOffset(nextPutIndex()), y, true);
	return this;
}

$LongBuffer* ByteBufferAsLongBufferB::put(int32_t i, int64_t x) {
	$useLocalCurrentObjectStackCache();
	int64_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, byteOffset(checkIndex(i)), y, true);
	return this;
}

$LongBuffer* ByteBufferAsLongBufferB::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsLongBufferB::$assertionsDisabled && !(pos <= lim)) {
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

bool ByteBufferAsLongBufferB::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsLongBufferB::isReadOnly() {
	return false;
}

$ByteOrder* ByteBufferAsLongBufferB::order() {
	$init($ByteOrder);
	return $ByteOrder::BIG_ENDIAN;
}

void clinit$ByteBufferAsLongBufferB($Class* class$) {
	ByteBufferAsLongBufferB::$assertionsDisabled = !ByteBufferAsLongBufferB::class$->desiredAssertionStatus();
}

ByteBufferAsLongBufferB::ByteBufferAsLongBufferB() {
}

$Class* ByteBufferAsLongBufferB::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsLongBufferB, name, initialize, &_ByteBufferAsLongBufferB_ClassInfo_, clinit$ByteBufferAsLongBufferB, allocate$ByteBufferAsLongBufferB);
	return class$;
}

$Class* ByteBufferAsLongBufferB::class$ = nullptr;

	} // nio
} // java