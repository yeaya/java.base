#include <java/nio/ByteBufferAsDoubleBufferB.h>

#include <java/lang/AssertionError.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsDoubleBufferRB.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DoubleBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef SCOPED_MEMORY_ACCESS

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsDoubleBufferRB = ::java::nio::ByteBufferAsDoubleBufferRB;
using $ByteOrder = ::java::nio::ByteOrder;
using $DoubleBuffer = ::java::nio::DoubleBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace nio {

$FieldInfo _ByteBufferAsDoubleBufferB_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ByteBufferAsDoubleBufferB, $assertionsDisabled)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED | $FINAL, $field(ByteBufferAsDoubleBufferB, bb)},
	{}
};

$MethodInfo _ByteBufferAsDoubleBufferB_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsDoubleBufferB::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsDoubleBufferB::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsDoubleBufferB::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsDoubleBufferB::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"byteOffset", "(J)J", nullptr, $PROTECTED},
	{"compact", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"get", "()D", nullptr, $PUBLIC},
	{"get", "(I)D", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ByteBufferAsDoubleBufferB::*)(int32_t)>(&ByteBufferAsDoubleBufferB::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "(ID)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteBufferAsDoubleBufferB_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsDoubleBufferB",
	"java.nio.DoubleBuffer",
	nullptr,
	_ByteBufferAsDoubleBufferB_FieldInfo_,
	_ByteBufferAsDoubleBufferB_MethodInfo_
};

$Object* allocate$ByteBufferAsDoubleBufferB($Class* clazz) {
	return $of($alloc(ByteBufferAsDoubleBufferB));
}

bool ByteBufferAsDoubleBufferB::$assertionsDisabled = false;

void ByteBufferAsDoubleBufferB::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	int32_t var$0 = $nc(bb)->remaining() >> 3;
	$DoubleBuffer::init$(-1, 0, var$0, bb->remaining() >> 3, segment);
	$set(this, bb, bb);
	int32_t cap = this->capacity();
	this->limit(cap);
	int32_t pos = this->position();
	if (!ByteBufferAsDoubleBufferB::$assertionsDisabled && !(pos <= cap)) {
		$throwNew($AssertionError);
	}
	this->address = $nc(bb)->address;
}

void ByteBufferAsDoubleBufferB::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$DoubleBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, bb, bb);
	this->address = addr;
	if (!ByteBufferAsDoubleBufferB::$assertionsDisabled && !(this->address >= $nc(bb)->address)) {
		$throwNew($AssertionError);
	}
}

$Object* ByteBufferAsDoubleBufferB::base() {
	return $of($nc(this->bb)->hb);
}

$DoubleBuffer* ByteBufferAsDoubleBufferB::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsDoubleBufferB, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$DoubleBuffer* ByteBufferAsDoubleBufferB::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsDoubleBufferB, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$DoubleBuffer* ByteBufferAsDoubleBufferB::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsDoubleBufferB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$DoubleBuffer* ByteBufferAsDoubleBufferB::asReadOnlyBuffer() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($ByteBufferAsDoubleBufferRB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

int32_t ByteBufferAsDoubleBufferB::ix(int32_t i) {
	int32_t off = (int32_t)(this->address - $nc(this->bb)->address);
	return (i << 3) + off;
}

int64_t ByteBufferAsDoubleBufferB::byteOffset(int64_t i) {
	return (i << 3) + this->address;
}

double ByteBufferAsDoubleBufferB::get() {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int64_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, byteOffset(nextGetIndex()), true);
	return $Double::longBitsToDouble(x);
}

double ByteBufferAsDoubleBufferB::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	int64_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getLongUnaligned(var$0, var$1, byteOffset(checkIndex(i)), true);
	return $Double::longBitsToDouble(x);
}

$DoubleBuffer* ByteBufferAsDoubleBufferB::put(double x) {
	$useLocalCurrentObjectStackCache();
	int64_t y = $Double::doubleToRawLongBits(x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, byteOffset(nextPutIndex()), y, true);
	return this;
}

$DoubleBuffer* ByteBufferAsDoubleBufferB::put(int32_t i, double x) {
	$useLocalCurrentObjectStackCache();
	int64_t y = $Double::doubleToRawLongBits(x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLongUnaligned(var$0, var$1, byteOffset(checkIndex(i)), y, true);
	return this;
}

$DoubleBuffer* ByteBufferAsDoubleBufferB::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsDoubleBufferB::$assertionsDisabled && !(pos <= lim)) {
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

bool ByteBufferAsDoubleBufferB::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsDoubleBufferB::isReadOnly() {
	return false;
}

$ByteOrder* ByteBufferAsDoubleBufferB::order() {
	$init($ByteOrder);
	return $ByteOrder::BIG_ENDIAN;
}

void clinit$ByteBufferAsDoubleBufferB($Class* class$) {
	ByteBufferAsDoubleBufferB::$assertionsDisabled = !ByteBufferAsDoubleBufferB::class$->desiredAssertionStatus();
}

ByteBufferAsDoubleBufferB::ByteBufferAsDoubleBufferB() {
}

$Class* ByteBufferAsDoubleBufferB::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsDoubleBufferB, name, initialize, &_ByteBufferAsDoubleBufferB_ClassInfo_, clinit$ByteBufferAsDoubleBufferB, allocate$ByteBufferAsDoubleBufferB);
	return class$;
}

$Class* ByteBufferAsDoubleBufferB::class$ = nullptr;

	} // nio
} // java