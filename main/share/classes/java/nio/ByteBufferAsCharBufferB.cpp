#include <java/nio/ByteBufferAsCharBufferB.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsCharBufferRB.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef SCOPED_MEMORY_ACCESS

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteBufferAsCharBufferRB = ::java::nio::ByteBufferAsCharBufferRB;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBuffer = ::java::nio::CharBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace nio {

$FieldInfo _ByteBufferAsCharBufferB_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ByteBufferAsCharBufferB, $assertionsDisabled)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED | $FINAL, $field(ByteBufferAsCharBufferB, bb)},
	{}
};

$MethodInfo _ByteBufferAsCharBufferB_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsCharBufferB::*)($ByteBuffer*,$MemorySegmentProxy*)>(&ByteBufferAsCharBufferB::init$))},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ByteBufferAsCharBufferB::*)($ByteBuffer*,int32_t,int32_t,int32_t,int32_t,int64_t,$MemorySegmentProxy*)>(&ByteBufferAsCharBufferB::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"byteOffset", "(J)J", nullptr, $PROTECTED},
	{"charRegionOrder", "()Ljava/nio/ByteOrder;", nullptr, 0},
	{"compact", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"get", "()C", nullptr, $PUBLIC},
	{"get", "(I)C", nullptr, $PUBLIC},
	{"getUnchecked", "(I)C", nullptr, 0},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ByteBufferAsCharBufferB::*)(int32_t)>(&ByteBufferAsCharBufferB::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"put", "(IC)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"subSequence", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"toString", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteBufferAsCharBufferB_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsCharBufferB",
	"java.nio.CharBuffer",
	nullptr,
	_ByteBufferAsCharBufferB_FieldInfo_,
	_ByteBufferAsCharBufferB_MethodInfo_
};

$Object* allocate$ByteBufferAsCharBufferB($Class* clazz) {
	return $of($alloc(ByteBufferAsCharBufferB));
}

bool ByteBufferAsCharBufferB::$assertionsDisabled = false;

void ByteBufferAsCharBufferB::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	int32_t var$0 = $nc(bb)->remaining() >> 1;
	$CharBuffer::init$(-1, 0, var$0, bb->remaining() >> 1, segment);
	$set(this, bb, bb);
	int32_t cap = this->capacity();
	this->limit(cap);
	int32_t pos = this->position();
	if (!ByteBufferAsCharBufferB::$assertionsDisabled && !(pos <= cap)) {
		$throwNew($AssertionError);
	}
	this->address = $nc(bb)->address;
}

void ByteBufferAsCharBufferB::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$CharBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, bb, bb);
	this->address = addr;
	if (!ByteBufferAsCharBufferB::$assertionsDisabled && !(this->address >= $nc(bb)->address)) {
		$throwNew($AssertionError);
	}
}

$Object* ByteBufferAsCharBufferB::base() {
	return $of($nc(this->bb)->hb);
}

$CharBuffer* ByteBufferAsCharBufferB::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsCharBufferB, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$CharBuffer* ByteBufferAsCharBufferB::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsCharBufferB, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$CharBuffer* ByteBufferAsCharBufferB::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsCharBufferB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$CharBuffer* ByteBufferAsCharBufferB::asReadOnlyBuffer() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($ByteBufferAsCharBufferRB, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

int32_t ByteBufferAsCharBufferB::ix(int32_t i) {
	int32_t off = (int32_t)(this->address - $nc(this->bb)->address);
	return (i << 1) + off;
}

int64_t ByteBufferAsCharBufferB::byteOffset(int64_t i) {
	return (i << 1) + this->address;
}

char16_t ByteBufferAsCharBufferB::get() {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	char16_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getCharUnaligned(var$0, var$1, byteOffset(nextGetIndex()), true);
	return (x);
}

char16_t ByteBufferAsCharBufferB::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	char16_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getCharUnaligned(var$0, var$1, byteOffset(checkIndex(i)), true);
	return (x);
}

char16_t ByteBufferAsCharBufferB::getUnchecked(int32_t i) {
	$init($Buffer);
	char16_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getCharUnaligned(nullptr, $nc(this->bb)->hb, byteOffset(i), true);
	return (x);
}

$CharBuffer* ByteBufferAsCharBufferB::put(char16_t x) {
	$useLocalCurrentObjectStackCache();
	char16_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putCharUnaligned(var$0, var$1, byteOffset(nextPutIndex()), y, true);
	return this;
}

$CharBuffer* ByteBufferAsCharBufferB::put(int32_t i, char16_t x) {
	$useLocalCurrentObjectStackCache();
	char16_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putCharUnaligned(var$0, var$1, byteOffset(checkIndex(i)), y, true);
	return this;
}

$CharBuffer* ByteBufferAsCharBufferB::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsCharBufferB::$assertionsDisabled && !(pos <= lim)) {
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

bool ByteBufferAsCharBufferB::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsCharBufferB::isReadOnly() {
	return false;
}

$String* ByteBufferAsCharBufferB::toString(int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$Objects::checkFromToIndex(start, end, limit());
	try {
		int32_t len = end - start;
		$var($chars, ca, $new($chars, len));
		$var($CharBuffer, cb, $CharBuffer::wrap(ca));
		$var($CharBuffer, db, this->duplicate());
		$nc(db)->position(start);
		db->limit(end);
		$nc(cb)->put(db);
		return $new($String, ca);
	} catch ($StringIndexOutOfBoundsException& x) {
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

$CharSequence* ByteBufferAsCharBufferB::subSequence(int32_t start, int32_t end) {
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsCharBufferB::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	pos = (pos <= lim ? pos : lim);
	int32_t len = lim - pos;
	$Objects::checkFromToIndex(start, end, len);
	return $new(ByteBufferAsCharBufferB, this->bb, -1, pos + start, pos + end, capacity(), this->address, this->segment);
}

$ByteOrder* ByteBufferAsCharBufferB::order() {
	$init($ByteOrder);
	return $ByteOrder::BIG_ENDIAN;
}

$ByteOrder* ByteBufferAsCharBufferB::charRegionOrder() {
	return order();
}

void clinit$ByteBufferAsCharBufferB($Class* class$) {
	ByteBufferAsCharBufferB::$assertionsDisabled = !ByteBufferAsCharBufferB::class$->desiredAssertionStatus();
}

ByteBufferAsCharBufferB::ByteBufferAsCharBufferB() {
}

$Class* ByteBufferAsCharBufferB::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsCharBufferB, name, initialize, &_ByteBufferAsCharBufferB_ClassInfo_, clinit$ByteBufferAsCharBufferB, allocate$ByteBufferAsCharBufferB);
	return class$;
}

$Class* ByteBufferAsCharBufferB::class$ = nullptr;

	} // nio
} // java