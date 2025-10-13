#include <java/nio/DirectShortBufferU.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Bits.h>
#include <java/nio/Buffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/DirectShortBufferRU.h>
#include <java/nio/ShortBuffer.h>
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
using $DirectShortBufferRU = ::java::nio::DirectShortBufferRU;
using $ShortBuffer = ::java::nio::ShortBuffer;
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

$FieldInfo _DirectShortBufferU_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectShortBufferU, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectShortBufferU, ARRAY_BASE_OFFSET)},
	{"UNALIGNED", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DirectShortBufferU, UNALIGNED)},
	{"att", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DirectShortBufferU, att)},
	{}
};

$MethodInfo _DirectShortBufferU_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectShortBufferU::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectShortBufferU::init$))},
	{"address", "()J", nullptr, $PUBLIC},
	{"asReadOnlyBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"get", "()S", nullptr, $PUBLIC},
	{"get", "(I)S", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DirectShortBufferU::*)(int32_t)>(&DirectShortBufferU::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "(IS)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectShortBufferU_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectShortBufferU",
	"java.nio.ShortBuffer",
	"sun.nio.ch.DirectBuffer",
	_DirectShortBufferU_FieldInfo_,
	_DirectShortBufferU_MethodInfo_
};

$Object* allocate$DirectShortBufferU($Class* clazz) {
	return $of($alloc(DirectShortBufferU));
}

$String* DirectShortBufferU::toString() {
	 return this->$ShortBuffer::toString();
}

int32_t DirectShortBufferU::hashCode() {
	 return this->$ShortBuffer::hashCode();
}

bool DirectShortBufferU::equals(Object$* ob) {
	 return this->$ShortBuffer::equals(ob);
}

$Object* DirectShortBufferU::clone() {
	 return this->$ShortBuffer::clone();
}

void DirectShortBufferU::finalize() {
	this->$ShortBuffer::finalize();
}

bool DirectShortBufferU::$assertionsDisabled = false;
int64_t DirectShortBufferU::ARRAY_BASE_OFFSET = 0;
bool DirectShortBufferU::UNALIGNED = false;

$Object* DirectShortBufferU::attachment() {
	return $of(this->att);
}

$Cleaner* DirectShortBufferU::cleaner() {
	return nullptr;
}

void DirectShortBufferU::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$ShortBuffer::init$(mark, pos, lim, cap, segment);
	this->$Buffer::address = $nc(($cast($Buffer, db)))->address + off;
	$var($Object, attachment, $nc(db)->attachment());
	$set(this, att, attachment == nullptr ? $of(db) : attachment);
}

$Object* DirectShortBufferU::base() {
	return $of(nullptr);
}

$ShortBuffer* DirectShortBufferU::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 1);
	if (!DirectShortBufferU::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectShortBufferU, this, -1, 0, rem, rem, off, this->segment);
}

$ShortBuffer* DirectShortBufferU::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectShortBufferU, this, -1, 0, length, length, index << 1, this->segment);
}

$ShortBuffer* DirectShortBufferU::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectShortBufferU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$ShortBuffer* DirectShortBufferU::asReadOnlyBuffer() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new($DirectShortBufferRU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

int64_t DirectShortBufferU::address() {
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

int64_t DirectShortBufferU::ix(int32_t i) {
	return this->$Buffer::address + ((int64_t)i << 1);
}

int16_t DirectShortBufferU::get() {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getShort(var$3, nullptr, ix(nextGetIndex())));
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

int16_t DirectShortBufferU::get(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getShort(var$3, nullptr, ix(checkIndex(i))));
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

$ShortBuffer* DirectShortBufferU::put(int16_t x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putShort(var$1, nullptr, ix(nextPutIndex()), (x));
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

$ShortBuffer* DirectShortBufferU::put(int32_t i, int16_t x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putShort(var$1, nullptr, ix(checkIndex(i)), (x));
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

$ShortBuffer* DirectShortBufferU::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectShortBufferU::$assertionsDisabled && !(pos <= lim)) {
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

bool DirectShortBufferU::isDirect() {
	return true;
}

bool DirectShortBufferU::isReadOnly() {
	return false;
}

$ByteOrder* DirectShortBufferU::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() != $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectShortBufferU($Class* class$) {
	DirectShortBufferU::$assertionsDisabled = !DirectShortBufferU::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($shorts);
	DirectShortBufferU::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($shorts));
	DirectShortBufferU::UNALIGNED = $Bits::unaligned();
}

DirectShortBufferU::DirectShortBufferU() {
}

$Class* DirectShortBufferU::load$($String* name, bool initialize) {
	$loadClass(DirectShortBufferU, name, initialize, &_DirectShortBufferU_ClassInfo_, clinit$DirectShortBufferU, allocate$DirectShortBufferU);
	return class$;
}

$Class* DirectShortBufferU::class$ = nullptr;

	} // nio
} // java