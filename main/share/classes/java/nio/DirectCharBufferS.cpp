#include <java/nio/DirectCharBufferS.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Bits.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/DirectCharBufferRS.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/ref/Cleaner.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef ARRAY_BASE_OFFSET
#undef LITTLE_ENDIAN
#undef UNALIGNED
#undef UNSAFE
#undef SCOPED_MEMORY_ACCESS

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBuffer = ::java::nio::CharBuffer;
using $DirectCharBufferRS = ::java::nio::DirectCharBufferRS;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $ScopedMemoryAccess$Scope$ScopedAccessError = ::jdk::internal::misc::ScopedMemoryAccess$Scope$ScopedAccessError;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Cleaner = ::jdk::internal::ref::Cleaner;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace nio {

$FieldInfo _DirectCharBufferS_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectCharBufferS, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectCharBufferS, ARRAY_BASE_OFFSET)},
	{"UNALIGNED", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DirectCharBufferS, UNALIGNED)},
	{"att", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DirectCharBufferS, att)},
	{}
};

$MethodInfo _DirectCharBufferS_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectCharBufferS::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectCharBufferS::init$))},
	{"address", "()J", nullptr, $PUBLIC},
	{"asReadOnlyBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"charRegionOrder", "()Ljava/nio/ByteOrder;", nullptr, 0},
	{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"get", "()C", nullptr, $PUBLIC},
	{"get", "(I)C", nullptr, $PUBLIC},
	{"getUnchecked", "(I)C", nullptr, 0},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DirectCharBufferS::*)(int32_t)>(&DirectCharBufferS::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"put", "(IC)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"subSequence", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectCharBufferS_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectCharBufferS",
	"java.nio.CharBuffer",
	"sun.nio.ch.DirectBuffer",
	_DirectCharBufferS_FieldInfo_,
	_DirectCharBufferS_MethodInfo_
};

$Object* allocate$DirectCharBufferS($Class* clazz) {
	return $of($alloc(DirectCharBufferS));
}

int32_t DirectCharBufferS::hashCode() {
	 return this->$CharBuffer::hashCode();
}

bool DirectCharBufferS::equals(Object$* ob) {
	 return this->$CharBuffer::equals(ob);
}

$String* DirectCharBufferS::toString() {
	 return this->$CharBuffer::toString();
}

$Object* DirectCharBufferS::clone() {
	 return this->$CharBuffer::clone();
}

void DirectCharBufferS::finalize() {
	this->$CharBuffer::finalize();
}

bool DirectCharBufferS::$assertionsDisabled = false;
int64_t DirectCharBufferS::ARRAY_BASE_OFFSET = 0;
bool DirectCharBufferS::UNALIGNED = false;

$Object* DirectCharBufferS::attachment() {
	return $of(this->att);
}

$Cleaner* DirectCharBufferS::cleaner() {
	return nullptr;
}

void DirectCharBufferS::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$CharBuffer::init$(mark, pos, lim, cap, segment);
	this->$Buffer::address = $nc(($cast($Buffer, db)))->address + off;
	$var($Object, attachment, $nc(db)->attachment());
	$set(this, att, attachment == nullptr ? $of(db) : attachment);
}

$Object* DirectCharBufferS::base() {
	return $of(nullptr);
}

$CharBuffer* DirectCharBufferS::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 1);
	if (!DirectCharBufferS::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectCharBufferS, this, -1, 0, rem, rem, off, this->segment);
}

$CharBuffer* DirectCharBufferS::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectCharBufferS, this, -1, 0, length, length, index << 1, this->segment);
}

$CharBuffer* DirectCharBufferS::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectCharBufferS, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$CharBuffer* DirectCharBufferS::asReadOnlyBuffer() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new($DirectCharBufferRS, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

int64_t DirectCharBufferS::address() {
	$var($ScopedMemoryAccess$Scope, scope, this->scope());
	if (scope != nullptr) {
		if (scope->ownerThread() == nullptr) {
			$throwNew($UnsupportedOperationException, "ByteBuffer derived from shared segments not supported"_s);
		}
		try {
			scope->checkValidState();
		} catch ($ScopedMemoryAccess$Scope$ScopedAccessError&) {
			$var($ScopedMemoryAccess$Scope$ScopedAccessError, e, $catch());
			$throwNew($IllegalStateException, "This segment is already closed"_s);
		}
	}
	return this->$Buffer::address;
}

int64_t DirectCharBufferS::ix(int32_t i) {
	return this->$Buffer::address + ((int64_t)i << 1);
}

char16_t DirectCharBufferS::get() {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($Bits::swap($nc($Buffer::SCOPED_MEMORY_ACCESS)->getChar(var$3, nullptr, ix(nextGetIndex()))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t DirectCharBufferS::get(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($Bits::swap($nc($Buffer::SCOPED_MEMORY_ACCESS)->getChar(var$3, nullptr, ix(checkIndex(i)))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t DirectCharBufferS::getUnchecked(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			var$2 = ($Bits::swap($nc($Buffer::SCOPED_MEMORY_ACCESS)->getChar(nullptr, nullptr, ix(i))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$CharBuffer* DirectCharBufferS::put(char16_t x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = ix(nextPutIndex());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putChar(var$1, nullptr, var$2, $Bits::swap((x)));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$CharBuffer* DirectCharBufferS::put(int32_t i, char16_t x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = ix(checkIndex(i));
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putChar(var$1, nullptr, var$2, $Bits::swap((x)));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$CharBuffer* DirectCharBufferS::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectCharBufferS::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = ix(pos);
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->copyMemory(var$1, nullptr, nullptr, var$2, nullptr, ix(0), (int64_t)rem << 1);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	position(rem);
	limit(capacity());
	discardMark();
	return this;
}

bool DirectCharBufferS::isDirect() {
	return true;
}

bool DirectCharBufferS::isReadOnly() {
	return false;
}

$String* DirectCharBufferS::toString(int32_t start, int32_t end) {
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
	} catch ($StringIndexOutOfBoundsException&) {
		$var($StringIndexOutOfBoundsException, x, $catch());
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

$CharSequence* DirectCharBufferS::subSequence(int32_t start, int32_t end) {
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectCharBufferS::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	pos = (pos <= lim ? pos : lim);
	int32_t len = lim - pos;
	$Objects::checkFromToIndex(start, end, len);
	return $new(DirectCharBufferS, this, -1, pos + start, pos + end, capacity(), this->offset, this->segment);
}

$ByteOrder* DirectCharBufferS::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

$ByteOrder* DirectCharBufferS::charRegionOrder() {
	return order();
}

void clinit$DirectCharBufferS($Class* class$) {
	DirectCharBufferS::$assertionsDisabled = !DirectCharBufferS::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($chars);
	DirectCharBufferS::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($chars));
	DirectCharBufferS::UNALIGNED = $Bits::unaligned();
}

DirectCharBufferS::DirectCharBufferS() {
}

$Class* DirectCharBufferS::load$($String* name, bool initialize) {
	$loadClass(DirectCharBufferS, name, initialize, &_DirectCharBufferS_ClassInfo_, clinit$DirectCharBufferS, allocate$DirectCharBufferS);
	return class$;
}

$Class* DirectCharBufferS::class$ = nullptr;

	} // nio
} // java