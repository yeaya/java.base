#include <java/nio/ByteBufferAsCharBufferL.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteBufferAsCharBufferRL.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN
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
using $ByteBufferAsCharBufferRL = ::java::nio::ByteBufferAsCharBufferRL;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBuffer = ::java::nio::CharBuffer;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace java {
	namespace nio {

$FieldInfo _ByteBufferAsCharBufferL_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ByteBufferAsCharBufferL, $assertionsDisabled)},
	{"bb", "Ljava/nio/ByteBuffer;", nullptr, $PROTECTED | $FINAL, $field(ByteBufferAsCharBufferL, bb)},
	{}
};

$MethodInfo _ByteBufferAsCharBufferL_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;Ljdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsCharBufferL, init$, void, $ByteBuffer*, $MemorySegmentProxy*)},
	{"<init>", "(Ljava/nio/ByteBuffer;IIIIJLjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(ByteBufferAsCharBufferL, init$, void, $ByteBuffer*, int32_t, int32_t, int32_t, int32_t, int64_t, $MemorySegmentProxy*)},
	{"asReadOnlyBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, asReadOnlyBuffer, $CharBuffer*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(ByteBufferAsCharBufferL, base, $Object*)},
	{"byteOffset", "(J)J", nullptr, $PROTECTED, $virtualMethod(ByteBufferAsCharBufferL, byteOffset, int64_t, int64_t)},
	{"charRegionOrder", "()Ljava/nio/ByteOrder;", nullptr, 0, $virtualMethod(ByteBufferAsCharBufferL, charRegionOrder, $ByteOrder*)},
	{"compact", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, compact, $CharBuffer*)},
	{"duplicate", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, duplicate, $CharBuffer*)},
	{"get", "()C", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, get, char16_t)},
	{"get", "(I)C", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, get, char16_t, int32_t)},
	{"getUnchecked", "(I)C", nullptr, 0, $virtualMethod(ByteBufferAsCharBufferL, getUnchecked, char16_t, int32_t)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, isReadOnly, bool)},
	{"ix", "(I)I", nullptr, $PRIVATE, $method(ByteBufferAsCharBufferL, ix, int32_t, int32_t)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, order, $ByteOrder*)},
	{"put", "(C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, put, $CharBuffer*, char16_t)},
	{"put", "(IC)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, put, $CharBuffer*, int32_t, char16_t)},
	{"slice", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, slice, $CharBuffer*)},
	{"slice", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, slice, $CharBuffer*, int32_t, int32_t)},
	{"subSequence", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, subSequence, $CharSequence*, int32_t, int32_t)},
	{"toString", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ByteBufferAsCharBufferL, toString, $String*, int32_t, int32_t)},
	{}
};

$ClassInfo _ByteBufferAsCharBufferL_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.ByteBufferAsCharBufferL",
	"java.nio.CharBuffer",
	nullptr,
	_ByteBufferAsCharBufferL_FieldInfo_,
	_ByteBufferAsCharBufferL_MethodInfo_
};

$Object* allocate$ByteBufferAsCharBufferL($Class* clazz) {
	return $of($alloc(ByteBufferAsCharBufferL));
}

bool ByteBufferAsCharBufferL::$assertionsDisabled = false;

void ByteBufferAsCharBufferL::init$($ByteBuffer* bb, $MemorySegmentProxy* segment) {
	int32_t var$0 = $nc(bb)->remaining() >> 1;
	$CharBuffer::init$(-1, 0, var$0, bb->remaining() >> 1, segment);
	$set(this, bb, bb);
	int32_t cap = this->capacity();
	this->limit(cap);
	int32_t pos = this->position();
	if (!ByteBufferAsCharBufferL::$assertionsDisabled && !(pos <= cap)) {
		$throwNew($AssertionError);
	}
	this->address = $nc(bb)->address;
}

void ByteBufferAsCharBufferL::init$($ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, $MemorySegmentProxy* segment) {
	$CharBuffer::init$(mark, pos, lim, cap, segment);
	$set(this, bb, bb);
	this->address = addr;
	if (!ByteBufferAsCharBufferL::$assertionsDisabled && !(this->address >= $nc(bb)->address)) {
		$throwNew($AssertionError);
	}
}

$Object* ByteBufferAsCharBufferL::base() {
	return $of($nc(this->bb)->hb);
}

$CharBuffer* ByteBufferAsCharBufferL::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int64_t addr = byteOffset(pos);
	return $new(ByteBufferAsCharBufferL, this->bb, -1, 0, rem, rem, addr, this->segment);
}

$CharBuffer* ByteBufferAsCharBufferL::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(ByteBufferAsCharBufferL, this->bb, -1, 0, length, length, byteOffset(index), this->segment);
}

$CharBuffer* ByteBufferAsCharBufferL::duplicate() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new(ByteBufferAsCharBufferL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

$CharBuffer* ByteBufferAsCharBufferL::asReadOnlyBuffer() {
	$var($ByteBuffer, var$0, this->bb);
	int32_t var$1 = this->markValue();
	int32_t var$2 = this->position();
	int32_t var$3 = this->limit();
	return $new($ByteBufferAsCharBufferRL, var$0, var$1, var$2, var$3, this->capacity(), this->address, this->segment);
}

int32_t ByteBufferAsCharBufferL::ix(int32_t i) {
	int32_t off = (int32_t)(this->address - $nc(this->bb)->address);
	return (i << 1) + off;
}

int64_t ByteBufferAsCharBufferL::byteOffset(int64_t i) {
	return (i << 1) + this->address;
}

char16_t ByteBufferAsCharBufferL::get() {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	char16_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getCharUnaligned(var$0, var$1, byteOffset(nextGetIndex()), false);
	return (x);
}

char16_t ByteBufferAsCharBufferL::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	char16_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getCharUnaligned(var$0, var$1, byteOffset(checkIndex(i)), false);
	return (x);
}

char16_t ByteBufferAsCharBufferL::getUnchecked(int32_t i) {
	$init($Buffer);
	char16_t x = $nc($Buffer::SCOPED_MEMORY_ACCESS)->getCharUnaligned(nullptr, $nc(this->bb)->hb, byteOffset(i), false);
	return (x);
}

$CharBuffer* ByteBufferAsCharBufferL::put(char16_t x) {
	$useLocalCurrentObjectStackCache();
	char16_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putCharUnaligned(var$0, var$1, byteOffset(nextPutIndex()), y, false);
	return this;
}

$CharBuffer* ByteBufferAsCharBufferL::put(int32_t i, char16_t x) {
	$useLocalCurrentObjectStackCache();
	char16_t y = (x);
	$init($Buffer);
	$var($ScopedMemoryAccess$Scope, var$0, scope());
	$var($Object, var$1, $of($nc(this->bb)->hb));
	$nc($Buffer::SCOPED_MEMORY_ACCESS)->putCharUnaligned(var$0, var$1, byteOffset(checkIndex(i)), y, false);
	return this;
}

$CharBuffer* ByteBufferAsCharBufferL::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsCharBufferL::$assertionsDisabled && !(pos <= lim)) {
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

bool ByteBufferAsCharBufferL::isDirect() {
	return $nc(this->bb)->isDirect();
}

bool ByteBufferAsCharBufferL::isReadOnly() {
	return false;
}

$String* ByteBufferAsCharBufferL::toString(int32_t start, int32_t end) {
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

$CharSequence* ByteBufferAsCharBufferL::subSequence(int32_t start, int32_t end) {
	int32_t pos = position();
	int32_t lim = limit();
	if (!ByteBufferAsCharBufferL::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	pos = (pos <= lim ? pos : lim);
	int32_t len = lim - pos;
	$Objects::checkFromToIndex(start, end, len);
	return $new(ByteBufferAsCharBufferL, this->bb, -1, pos + start, pos + end, capacity(), this->address, this->segment);
}

$ByteOrder* ByteBufferAsCharBufferL::order() {
	$init($ByteOrder);
	return $ByteOrder::LITTLE_ENDIAN;
}

$ByteOrder* ByteBufferAsCharBufferL::charRegionOrder() {
	return order();
}

void clinit$ByteBufferAsCharBufferL($Class* class$) {
	ByteBufferAsCharBufferL::$assertionsDisabled = !ByteBufferAsCharBufferL::class$->desiredAssertionStatus();
}

ByteBufferAsCharBufferL::ByteBufferAsCharBufferL() {
}

$Class* ByteBufferAsCharBufferL::load$($String* name, bool initialize) {
	$loadClass(ByteBufferAsCharBufferL, name, initialize, &_ByteBufferAsCharBufferL_ClassInfo_, clinit$ByteBufferAsCharBufferL, allocate$ByteBufferAsCharBufferL);
	return class$;
}

$Class* ByteBufferAsCharBufferL::class$ = nullptr;

	} // nio
} // java