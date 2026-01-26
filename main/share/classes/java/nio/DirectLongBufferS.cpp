#include <java/nio/DirectLongBufferS.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Reference.h>
#include <java/nio/Bits.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DirectLongBufferRS.h>
#include <java/nio/LongBuffer.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $DirectLongBufferRS = ::java::nio::DirectLongBufferRS;
using $LongBuffer = ::java::nio::LongBuffer;
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

$FieldInfo _DirectLongBufferS_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectLongBufferS, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectLongBufferS, ARRAY_BASE_OFFSET)},
	{"UNALIGNED", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DirectLongBufferS, UNALIGNED)},
	{"att", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DirectLongBufferS, att)},
	{}
};

$MethodInfo _DirectLongBufferS_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(DirectLongBufferS, init$, void, $DirectBuffer*, int32_t, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"address", "()J", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, address, int64_t)},
	{"asReadOnlyBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, asReadOnlyBuffer, $LongBuffer*)},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, attachment, $Object*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(DirectLongBufferS, base, $Object*)},
	{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, cleaner, $Cleaner*)},
	{"compact", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, compact, $LongBuffer*)},
	{"duplicate", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, duplicate, $LongBuffer*)},
	{"get", "()J", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, get, int64_t)},
	{"get", "(I)J", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, get, int64_t, int32_t)},
	{"isDirect", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, isReadOnly, bool)},
	{"ix", "(I)J", nullptr, $PRIVATE, $method(DirectLongBufferS, ix, int64_t, int32_t)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, order, $ByteOrder*)},
	{"put", "(J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, put, $LongBuffer*, int64_t)},
	{"put", "(IJ)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, put, $LongBuffer*, int32_t, int64_t)},
	{"slice", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, slice, $LongBuffer*)},
	{"slice", "(II)Ljava/nio/LongBuffer;", nullptr, $PUBLIC, $virtualMethod(DirectLongBufferS, slice, $LongBuffer*, int32_t, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectLongBufferS_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectLongBufferS",
	"java.nio.LongBuffer",
	"sun.nio.ch.DirectBuffer",
	_DirectLongBufferS_FieldInfo_,
	_DirectLongBufferS_MethodInfo_
};

$Object* allocate$DirectLongBufferS($Class* clazz) {
	return $of($alloc(DirectLongBufferS));
}

$String* DirectLongBufferS::toString() {
	 return this->$LongBuffer::toString();
}

int32_t DirectLongBufferS::hashCode() {
	 return this->$LongBuffer::hashCode();
}

bool DirectLongBufferS::equals(Object$* ob) {
	 return this->$LongBuffer::equals(ob);
}

$Object* DirectLongBufferS::clone() {
	 return this->$LongBuffer::clone();
}

void DirectLongBufferS::finalize() {
	this->$LongBuffer::finalize();
}

bool DirectLongBufferS::$assertionsDisabled = false;
int64_t DirectLongBufferS::ARRAY_BASE_OFFSET = 0;
bool DirectLongBufferS::UNALIGNED = false;

$Object* DirectLongBufferS::attachment() {
	return $of(this->att);
}

$Cleaner* DirectLongBufferS::cleaner() {
	return nullptr;
}

void DirectLongBufferS::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$LongBuffer::init$(mark, pos, lim, cap, segment);
	this->$Buffer::address = $nc(($cast($Buffer, db)))->address + off;
	$var($Object, attachment, $nc(db)->attachment());
	$set(this, att, attachment == nullptr ? $of(db) : attachment);
}

$Object* DirectLongBufferS::base() {
	return $of(nullptr);
}

$LongBuffer* DirectLongBufferS::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 3);
	if (!DirectLongBufferS::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectLongBufferS, this, -1, 0, rem, rem, off, this->segment);
}

$LongBuffer* DirectLongBufferS::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectLongBufferS, this, -1, 0, length, length, index << 3, this->segment);
}

$LongBuffer* DirectLongBufferS::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectLongBufferS, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$LongBuffer* DirectLongBufferS::asReadOnlyBuffer() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new($DirectLongBufferRS, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

int64_t DirectLongBufferS::address() {
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

int64_t DirectLongBufferS::ix(int32_t i) {
	return this->$Buffer::address + ((int64_t)i << 3);
}

int64_t DirectLongBufferS::get() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($Bits::swap($nc($Buffer::SCOPED_MEMORY_ACCESS)->getLong(var$3, nullptr, ix(nextGetIndex()))));
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

int64_t DirectLongBufferS::get(int32_t i) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($Bits::swap($nc($Buffer::SCOPED_MEMORY_ACCESS)->getLong(var$3, nullptr, ix(checkIndex(i)))));
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

$LongBuffer* DirectLongBufferS::put(int64_t x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = ix(nextPutIndex());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLong(var$1, nullptr, var$2, $Bits::swap((x)));
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$LongBuffer* DirectLongBufferS::put(int32_t i, int64_t x) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = ix(checkIndex(i));
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putLong(var$1, nullptr, var$2, $Bits::swap((x)));
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$LongBuffer* DirectLongBufferS::compact() {
	$useLocalCurrentObjectStackCache();
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectLongBufferS::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = ix(pos);
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->copyMemory(var$1, nullptr, nullptr, var$2, nullptr, ix(0), (int64_t)rem << 3);
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

bool DirectLongBufferS::isDirect() {
	return true;
}

bool DirectLongBufferS::isReadOnly() {
	return false;
}

$ByteOrder* DirectLongBufferS::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectLongBufferS($Class* class$) {
	DirectLongBufferS::$assertionsDisabled = !DirectLongBufferS::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($longs);
	DirectLongBufferS::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($longs));
	DirectLongBufferS::UNALIGNED = $Bits::unaligned();
}

DirectLongBufferS::DirectLongBufferS() {
}

$Class* DirectLongBufferS::load$($String* name, bool initialize) {
	$loadClass(DirectLongBufferS, name, initialize, &_DirectLongBufferS_ClassInfo_, clinit$DirectLongBufferS, allocate$DirectLongBufferS);
	return class$;
}

$Class* DirectLongBufferS::class$ = nullptr;

	} // nio
} // java