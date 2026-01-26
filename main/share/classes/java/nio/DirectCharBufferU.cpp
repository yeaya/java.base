#include <java/nio/DirectCharBufferU.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Reference.h>
#include <java/nio/Bits.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/DirectCharBufferRU.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/ref/Cleaner.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#undef ARRAY_BASE_OFFSET
#undef BIG_ENDIAN
#undef LITTLE_ENDIAN
#undef SCOPED_MEMORY_ACCESS
#undef UNALIGNED
#undef UNSAFE

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
using $DirectCharBufferRU = ::java::nio::DirectCharBufferRU;
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

$FieldInfo _DirectCharBufferU_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectCharBufferU, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectCharBufferU, ARRAY_BASE_OFFSET)},
	{"UNALIGNED", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DirectCharBufferU, UNALIGNED)},
	{"att", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DirectCharBufferU, att)},
	{}
};

$MethodInfo _DirectCharBufferU_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(DirectCharBufferU, init$, void, $DirectBuffer*, int32_t, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"address", "()J", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, address, int64_t)},
	{"asReadOnlyBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, asReadOnlyBuffer, $CharBuffer*)},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, attachment, $Object*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(DirectCharBufferU, base, $Object*)},
	{"charRegionOrder", "()Ljava/nio/ByteOrder;", nullptr, 0, $virtualMethod(DirectCharBufferU, charRegionOrder, $ByteOrder*)},
	{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, cleaner, $Cleaner*)},
	{"compact", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, compact, $CharBuffer*)},
	{"duplicate", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, duplicate, $CharBuffer*)},
	{"get", "()C", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, get, char16_t)},
	{"get", "(I)C", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, get, char16_t, int32_t)},
	{"getUnchecked", "(I)C", nullptr, 0, $virtualMethod(DirectCharBufferU, getUnchecked, char16_t, int32_t)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, isReadOnly, bool)},
	{"ix", "(I)J", nullptr, $PRIVATE, $method(DirectCharBufferU, ix, int64_t, int32_t)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, order, $ByteOrder*)},
	{"put", "(C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, put, $CharBuffer*, char16_t)},
	{"put", "(IC)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, put, $CharBuffer*, int32_t, char16_t)},
	{"slice", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, slice, $CharBuffer*)},
	{"slice", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, slice, $CharBuffer*, int32_t, int32_t)},
	{"subSequence", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, subSequence, $CharSequence*, int32_t, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DirectCharBufferU, toString, $String*, int32_t, int32_t)},
	{}
};

$ClassInfo _DirectCharBufferU_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectCharBufferU",
	"java.nio.CharBuffer",
	"sun.nio.ch.DirectBuffer",
	_DirectCharBufferU_FieldInfo_,
	_DirectCharBufferU_MethodInfo_
};

$Object* allocate$DirectCharBufferU($Class* clazz) {
	return $of($alloc(DirectCharBufferU));
}

int32_t DirectCharBufferU::hashCode() {
	 return this->$CharBuffer::hashCode();
}

bool DirectCharBufferU::equals(Object$* ob) {
	 return this->$CharBuffer::equals(ob);
}

$String* DirectCharBufferU::toString() {
	 return this->$CharBuffer::toString();
}

$Object* DirectCharBufferU::clone() {
	 return this->$CharBuffer::clone();
}

void DirectCharBufferU::finalize() {
	this->$CharBuffer::finalize();
}

bool DirectCharBufferU::$assertionsDisabled = false;
int64_t DirectCharBufferU::ARRAY_BASE_OFFSET = 0;
bool DirectCharBufferU::UNALIGNED = false;

$Object* DirectCharBufferU::attachment() {
	return $of(this->att);
}

$Cleaner* DirectCharBufferU::cleaner() {
	return nullptr;
}

void DirectCharBufferU::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$CharBuffer::init$(mark, pos, lim, cap, segment);
	this->$Buffer::address = $nc(($cast($Buffer, db)))->address + off;
	$var($Object, attachment, $nc(db)->attachment());
	$set(this, att, attachment == nullptr ? $of(db) : attachment);
}

$Object* DirectCharBufferU::base() {
	return $of(nullptr);
}

$CharBuffer* DirectCharBufferU::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 1);
	if (!DirectCharBufferU::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectCharBufferU, this, -1, 0, rem, rem, off, this->segment);
}

$CharBuffer* DirectCharBufferU::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectCharBufferU, this, -1, 0, length, length, index << 1, this->segment);
}

$CharBuffer* DirectCharBufferU::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectCharBufferU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$CharBuffer* DirectCharBufferU::asReadOnlyBuffer() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new($DirectCharBufferRU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

int64_t DirectCharBufferU::address() {
	$var($ScopedMemoryAccess$Scope, scope, this->scope());
	if (scope != nullptr) {
		if (scope->ownerThread() == nullptr) {
			$throwNew($UnsupportedOperationException, "ByteBuffer derived from shared segments not supported"_s);
		}
		try {
			scope->checkValidState();
		} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& e) {
			$throwNew($IllegalStateException, "This segment is already closed"_s);
		}
	}
	return this->$Buffer::address;
}

int64_t DirectCharBufferU::ix(int32_t i) {
	return this->$Buffer::address + ((int64_t)i << 1);
}

char16_t DirectCharBufferU::get() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getChar(var$3, nullptr, ix(nextGetIndex())));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
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

char16_t DirectCharBufferU::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getChar(var$3, nullptr, ix(checkIndex(i))));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
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

char16_t DirectCharBufferU::getUnchecked(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getChar(nullptr, nullptr, ix(i)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
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

$CharBuffer* DirectCharBufferU::put(char16_t x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putChar(var$1, nullptr, ix(nextPutIndex()), (x));
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$CharBuffer* DirectCharBufferU::put(int32_t i, char16_t x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putChar(var$1, nullptr, ix(checkIndex(i)), (x));
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$CharBuffer* DirectCharBufferU::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectCharBufferU::$assertionsDisabled && !(pos <= lim)) {
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
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
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

bool DirectCharBufferU::isDirect() {
	return true;
}

bool DirectCharBufferU::isReadOnly() {
	return false;
}

$String* DirectCharBufferU::toString(int32_t start, int32_t end) {
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

$CharSequence* DirectCharBufferU::subSequence(int32_t start, int32_t end) {
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectCharBufferU::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	pos = (pos <= lim ? pos : lim);
	int32_t len = lim - pos;
	$Objects::checkFromToIndex(start, end, len);
	return $new(DirectCharBufferU, this, -1, pos + start, pos + end, capacity(), this->offset, this->segment);
}

$ByteOrder* DirectCharBufferU::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() != $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

$ByteOrder* DirectCharBufferU::charRegionOrder() {
	return order();
}

void clinit$DirectCharBufferU($Class* class$) {
	DirectCharBufferU::$assertionsDisabled = !DirectCharBufferU::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($chars);
	DirectCharBufferU::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($chars));
	DirectCharBufferU::UNALIGNED = $Bits::unaligned();
}

DirectCharBufferU::DirectCharBufferU() {
}

$Class* DirectCharBufferU::load$($String* name, bool initialize) {
	$loadClass(DirectCharBufferU, name, initialize, &_DirectCharBufferU_ClassInfo_, clinit$DirectCharBufferU, allocate$DirectCharBufferU);
	return class$;
}

$Class* DirectCharBufferU::class$ = nullptr;

	} // nio
} // java