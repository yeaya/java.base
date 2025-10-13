#include <java/nio/DirectDoubleBufferU.h>

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
#include <java/nio/DirectDoubleBufferRU.h>
#include <java/nio/DoubleBuffer.h>
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
using $DirectDoubleBufferRU = ::java::nio::DirectDoubleBufferRU;
using $DoubleBuffer = ::java::nio::DoubleBuffer;
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

$FieldInfo _DirectDoubleBufferU_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectDoubleBufferU, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectDoubleBufferU, ARRAY_BASE_OFFSET)},
	{"UNALIGNED", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DirectDoubleBufferU, UNALIGNED)},
	{"att", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DirectDoubleBufferU, att)},
	{}
};

$MethodInfo _DirectDoubleBufferU_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectDoubleBufferU::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectDoubleBufferU::init$))},
	{"address", "()J", nullptr, $PUBLIC},
	{"asReadOnlyBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"get", "()D", nullptr, $PUBLIC},
	{"get", "(I)D", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DirectDoubleBufferU::*)(int32_t)>(&DirectDoubleBufferU::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "(ID)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectDoubleBufferU_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectDoubleBufferU",
	"java.nio.DoubleBuffer",
	"sun.nio.ch.DirectBuffer",
	_DirectDoubleBufferU_FieldInfo_,
	_DirectDoubleBufferU_MethodInfo_
};

$Object* allocate$DirectDoubleBufferU($Class* clazz) {
	return $of($alloc(DirectDoubleBufferU));
}

$String* DirectDoubleBufferU::toString() {
	 return this->$DoubleBuffer::toString();
}

int32_t DirectDoubleBufferU::hashCode() {
	 return this->$DoubleBuffer::hashCode();
}

bool DirectDoubleBufferU::equals(Object$* ob) {
	 return this->$DoubleBuffer::equals(ob);
}

$Object* DirectDoubleBufferU::clone() {
	 return this->$DoubleBuffer::clone();
}

void DirectDoubleBufferU::finalize() {
	this->$DoubleBuffer::finalize();
}

bool DirectDoubleBufferU::$assertionsDisabled = false;
int64_t DirectDoubleBufferU::ARRAY_BASE_OFFSET = 0;
bool DirectDoubleBufferU::UNALIGNED = false;

$Object* DirectDoubleBufferU::attachment() {
	return $of(this->att);
}

$Cleaner* DirectDoubleBufferU::cleaner() {
	return nullptr;
}

void DirectDoubleBufferU::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$DoubleBuffer::init$(mark, pos, lim, cap, segment);
	this->$Buffer::address = $nc(($cast($Buffer, db)))->address + off;
	$var($Object, attachment, $nc(db)->attachment());
	$set(this, att, attachment == nullptr ? $of(db) : attachment);
}

$Object* DirectDoubleBufferU::base() {
	return $of(nullptr);
}

$DoubleBuffer* DirectDoubleBufferU::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 3);
	if (!DirectDoubleBufferU::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectDoubleBufferU, this, -1, 0, rem, rem, off, this->segment);
}

$DoubleBuffer* DirectDoubleBufferU::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectDoubleBufferU, this, -1, 0, length, length, index << 3, this->segment);
}

$DoubleBuffer* DirectDoubleBufferU::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectDoubleBufferU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$DoubleBuffer* DirectDoubleBufferU::asReadOnlyBuffer() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new($DirectDoubleBufferRU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

int64_t DirectDoubleBufferU::address() {
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

int64_t DirectDoubleBufferU::ix(int32_t i) {
	return this->$Buffer::address + ((int64_t)i << 3);
}

double DirectDoubleBufferU::get() {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getDouble(var$3, nullptr, ix(nextGetIndex())));
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

double DirectDoubleBufferU::get(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getDouble(var$3, nullptr, ix(checkIndex(i))));
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

$DoubleBuffer* DirectDoubleBufferU::put(double x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putDouble(var$1, nullptr, ix(nextPutIndex()), (x));
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

$DoubleBuffer* DirectDoubleBufferU::put(int32_t i, double x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putDouble(var$1, nullptr, ix(checkIndex(i)), (x));
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

$DoubleBuffer* DirectDoubleBufferU::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectDoubleBufferU::$assertionsDisabled && !(pos <= lim)) {
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

bool DirectDoubleBufferU::isDirect() {
	return true;
}

bool DirectDoubleBufferU::isReadOnly() {
	return false;
}

$ByteOrder* DirectDoubleBufferU::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() != $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectDoubleBufferU($Class* class$) {
	DirectDoubleBufferU::$assertionsDisabled = !DirectDoubleBufferU::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($doubles);
	DirectDoubleBufferU::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($doubles));
	DirectDoubleBufferU::UNALIGNED = $Bits::unaligned();
}

DirectDoubleBufferU::DirectDoubleBufferU() {
}

$Class* DirectDoubleBufferU::load$($String* name, bool initialize) {
	$loadClass(DirectDoubleBufferU, name, initialize, &_DirectDoubleBufferU_ClassInfo_, clinit$DirectDoubleBufferU, allocate$DirectDoubleBufferU);
	return class$;
}

$Class* DirectDoubleBufferU::class$ = nullptr;

	} // nio
} // java