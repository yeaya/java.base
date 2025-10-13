#include <java/nio/DirectIntBufferS.h>

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
#include <java/nio/DirectIntBufferRS.h>
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
using $DirectIntBufferRS = ::java::nio::DirectIntBufferRS;
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

$FieldInfo _DirectIntBufferS_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectIntBufferS, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectIntBufferS, ARRAY_BASE_OFFSET)},
	{"UNALIGNED", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DirectIntBufferS, UNALIGNED)},
	{"att", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DirectIntBufferS, att)},
	{}
};

$MethodInfo _DirectIntBufferS_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectIntBufferS::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectIntBufferS::init$))},
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
	{"ix", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DirectIntBufferS::*)(int32_t)>(&DirectIntBufferS::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectIntBufferS_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectIntBufferS",
	"java.nio.IntBuffer",
	"sun.nio.ch.DirectBuffer",
	_DirectIntBufferS_FieldInfo_,
	_DirectIntBufferS_MethodInfo_
};

$Object* allocate$DirectIntBufferS($Class* clazz) {
	return $of($alloc(DirectIntBufferS));
}

$String* DirectIntBufferS::toString() {
	 return this->$IntBuffer::toString();
}

int32_t DirectIntBufferS::hashCode() {
	 return this->$IntBuffer::hashCode();
}

bool DirectIntBufferS::equals(Object$* ob) {
	 return this->$IntBuffer::equals(ob);
}

$Object* DirectIntBufferS::clone() {
	 return this->$IntBuffer::clone();
}

void DirectIntBufferS::finalize() {
	this->$IntBuffer::finalize();
}

bool DirectIntBufferS::$assertionsDisabled = false;
int64_t DirectIntBufferS::ARRAY_BASE_OFFSET = 0;
bool DirectIntBufferS::UNALIGNED = false;

$Object* DirectIntBufferS::attachment() {
	return $of(this->att);
}

$Cleaner* DirectIntBufferS::cleaner() {
	return nullptr;
}

void DirectIntBufferS::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$IntBuffer::init$(mark, pos, lim, cap, segment);
	this->$Buffer::address = $nc(($cast($Buffer, db)))->address + off;
	$var($Object, attachment, $nc(db)->attachment());
	$set(this, att, attachment == nullptr ? $of(db) : attachment);
}

$Object* DirectIntBufferS::base() {
	return $of(nullptr);
}

$IntBuffer* DirectIntBufferS::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 2);
	if (!DirectIntBufferS::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectIntBufferS, this, -1, 0, rem, rem, off, this->segment);
}

$IntBuffer* DirectIntBufferS::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectIntBufferS, this, -1, 0, length, length, index << 2, this->segment);
}

$IntBuffer* DirectIntBufferS::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectIntBufferS, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$IntBuffer* DirectIntBufferS::asReadOnlyBuffer() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new($DirectIntBufferRS, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

int64_t DirectIntBufferS::address() {
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

int64_t DirectIntBufferS::ix(int32_t i) {
	return this->$Buffer::address + ((int64_t)i << 2);
}

int32_t DirectIntBufferS::get() {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($Bits::swap($nc($Buffer::SCOPED_MEMORY_ACCESS)->getInt(var$3, nullptr, ix(nextGetIndex()))));
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

int32_t DirectIntBufferS::get(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($Bits::swap($nc($Buffer::SCOPED_MEMORY_ACCESS)->getInt(var$3, nullptr, ix(checkIndex(i)))));
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

$IntBuffer* DirectIntBufferS::put(int32_t x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = ix(nextPutIndex());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putInt(var$1, nullptr, var$2, $Bits::swap((x)));
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

$IntBuffer* DirectIntBufferS::put(int32_t i, int32_t x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			int64_t var$2 = ix(checkIndex(i));
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putInt(var$1, nullptr, var$2, $Bits::swap((x)));
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

$IntBuffer* DirectIntBufferS::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectIntBufferS::$assertionsDisabled && !(pos <= lim)) {
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

bool DirectIntBufferS::isDirect() {
	return true;
}

bool DirectIntBufferS::isReadOnly() {
	return false;
}

$ByteOrder* DirectIntBufferS::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectIntBufferS($Class* class$) {
	DirectIntBufferS::$assertionsDisabled = !DirectIntBufferS::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($ints);
	DirectIntBufferS::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($ints));
	DirectIntBufferS::UNALIGNED = $Bits::unaligned();
}

DirectIntBufferS::DirectIntBufferS() {
}

$Class* DirectIntBufferS::load$($String* name, bool initialize) {
	$loadClass(DirectIntBufferS, name, initialize, &_DirectIntBufferS_ClassInfo_, clinit$DirectIntBufferS, allocate$DirectIntBufferS);
	return class$;
}

$Class* DirectIntBufferS::class$ = nullptr;

	} // nio
} // java