#include <java/nio/DirectIntBufferU.h>

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
#include <java/nio/DirectIntBufferRU.h>
#include <java/nio/IntBuffer.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $DirectIntBufferRU = ::java::nio::DirectIntBufferRU;
using $IntBuffer = ::java::nio::IntBuffer;
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

$FieldInfo _DirectIntBufferU_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectIntBufferU, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectIntBufferU, ARRAY_BASE_OFFSET)},
	{"UNALIGNED", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DirectIntBufferU, UNALIGNED)},
	{"att", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DirectIntBufferU, att)},
	{}
};

$MethodInfo _DirectIntBufferU_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectIntBufferU::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectIntBufferU::init$))},
	{"address", "()J", nullptr, $PUBLIC},
	{"asReadOnlyBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"get", "()I", nullptr, $PUBLIC},
	{"get", "(I)I", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DirectIntBufferU::*)(int32_t)>(&DirectIntBufferU::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectIntBufferU_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectIntBufferU",
	"java.nio.IntBuffer",
	"sun.nio.ch.DirectBuffer",
	_DirectIntBufferU_FieldInfo_,
	_DirectIntBufferU_MethodInfo_
};

$Object* allocate$DirectIntBufferU($Class* clazz) {
	return $of($alloc(DirectIntBufferU));
}

$String* DirectIntBufferU::toString() {
	 return this->$IntBuffer::toString();
}

int32_t DirectIntBufferU::hashCode() {
	 return this->$IntBuffer::hashCode();
}

bool DirectIntBufferU::equals(Object$* ob) {
	 return this->$IntBuffer::equals(ob);
}

$Object* DirectIntBufferU::clone() {
	 return this->$IntBuffer::clone();
}

void DirectIntBufferU::finalize() {
	this->$IntBuffer::finalize();
}

bool DirectIntBufferU::$assertionsDisabled = false;
int64_t DirectIntBufferU::ARRAY_BASE_OFFSET = 0;
bool DirectIntBufferU::UNALIGNED = false;

$Object* DirectIntBufferU::attachment() {
	return $of(this->att);
}

$Cleaner* DirectIntBufferU::cleaner() {
	return nullptr;
}

void DirectIntBufferU::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$IntBuffer::init$(mark, pos, lim, cap, segment);
	this->$Buffer::address = $nc(($cast($Buffer, db)))->address + off;
	$var($Object, attachment, $nc(db)->attachment());
	$set(this, att, attachment == nullptr ? $of(db) : attachment);
}

$Object* DirectIntBufferU::base() {
	return $of(nullptr);
}

$IntBuffer* DirectIntBufferU::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 2);
	if (!DirectIntBufferU::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectIntBufferU, this, -1, 0, rem, rem, off, this->segment);
}

$IntBuffer* DirectIntBufferU::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectIntBufferU, this, -1, 0, length, length, index << 2, this->segment);
}

$IntBuffer* DirectIntBufferU::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectIntBufferU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$IntBuffer* DirectIntBufferU::asReadOnlyBuffer() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new($DirectIntBufferRU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

int64_t DirectIntBufferU::address() {
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

int64_t DirectIntBufferU::ix(int32_t i) {
	return this->$Buffer::address + ((int64_t)i << 2);
}

int32_t DirectIntBufferU::get() {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getInt(var$3, nullptr, ix(nextGetIndex())));
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

int32_t DirectIntBufferU::get(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getInt(var$3, nullptr, ix(checkIndex(i))));
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

$IntBuffer* DirectIntBufferU::put(int32_t x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putInt(var$1, nullptr, ix(nextPutIndex()), (x));
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

$IntBuffer* DirectIntBufferU::put(int32_t i, int32_t x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putInt(var$1, nullptr, ix(checkIndex(i)), (x));
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

$IntBuffer* DirectIntBufferU::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectIntBufferU::$assertionsDisabled && !(pos <= lim)) {
		$throwNew($AssertionError);
	}
	int32_t rem = (pos <= lim ? lim - pos : 0);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = ix(pos);
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->copyMemory(var$1, nullptr, nullptr, var$2, nullptr, ix(0), (int64_t)rem << 2);
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

bool DirectIntBufferU::isDirect() {
	return true;
}

bool DirectIntBufferU::isReadOnly() {
	return false;
}

$ByteOrder* DirectIntBufferU::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() != $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectIntBufferU($Class* class$) {
	DirectIntBufferU::$assertionsDisabled = !DirectIntBufferU::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($ints);
	DirectIntBufferU::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($ints));
	DirectIntBufferU::UNALIGNED = $Bits::unaligned();
}

DirectIntBufferU::DirectIntBufferU() {
}

$Class* DirectIntBufferU::load$($String* name, bool initialize) {
	$loadClass(DirectIntBufferU, name, initialize, &_DirectIntBufferU_ClassInfo_, clinit$DirectIntBufferU, allocate$DirectIntBufferU);
	return class$;
}

$Class* DirectIntBufferU::class$ = nullptr;

	} // nio
} // java