#include <java/nio/DirectFloatBufferU.h>

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
#include <java/nio/DirectFloatBufferRU.h>
#include <java/nio/FloatBuffer.h>
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
using $DirectFloatBufferRU = ::java::nio::DirectFloatBufferRU;
using $FloatBuffer = ::java::nio::FloatBuffer;
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

$FieldInfo _DirectFloatBufferU_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DirectFloatBufferU, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DirectFloatBufferU, ARRAY_BASE_OFFSET)},
	{"UNALIGNED", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DirectFloatBufferU, UNALIGNED)},
	{"att", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DirectFloatBufferU, att)},
	{}
};

$MethodInfo _DirectFloatBufferU_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/nio/ch/DirectBuffer;IIIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DirectFloatBufferU::*)($DirectBuffer*,int32_t,int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DirectFloatBufferU::init$))},
	{"address", "()J", nullptr, $PUBLIC},
	{"asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"attachment", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"cleaner", "()Ljdk/internal/ref/Cleaner;", nullptr, $PUBLIC},
	{"compact", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"duplicate", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"get", "()F", nullptr, $PUBLIC},
	{"get", "(I)F", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"ix", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DirectFloatBufferU::*)(int32_t)>(&DirectFloatBufferU::ix))},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "(IF)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"slice", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DirectFloatBufferU_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.DirectFloatBufferU",
	"java.nio.FloatBuffer",
	"sun.nio.ch.DirectBuffer",
	_DirectFloatBufferU_FieldInfo_,
	_DirectFloatBufferU_MethodInfo_
};

$Object* allocate$DirectFloatBufferU($Class* clazz) {
	return $of($alloc(DirectFloatBufferU));
}

$String* DirectFloatBufferU::toString() {
	 return this->$FloatBuffer::toString();
}

int32_t DirectFloatBufferU::hashCode() {
	 return this->$FloatBuffer::hashCode();
}

bool DirectFloatBufferU::equals(Object$* ob) {
	 return this->$FloatBuffer::equals(ob);
}

$Object* DirectFloatBufferU::clone() {
	 return this->$FloatBuffer::clone();
}

void DirectFloatBufferU::finalize() {
	this->$FloatBuffer::finalize();
}

bool DirectFloatBufferU::$assertionsDisabled = false;
int64_t DirectFloatBufferU::ARRAY_BASE_OFFSET = 0;
bool DirectFloatBufferU::UNALIGNED = false;

$Object* DirectFloatBufferU::attachment() {
	return $of(this->att);
}

$Cleaner* DirectFloatBufferU::cleaner() {
	return nullptr;
}

void DirectFloatBufferU::init$($DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, $MemorySegmentProxy* segment) {
	$FloatBuffer::init$(mark, pos, lim, cap, segment);
	this->$Buffer::address = $nc(($cast($Buffer, db)))->address + off;
	$var($Object, attachment, $nc(db)->attachment());
	$set(this, att, attachment == nullptr ? $of(db) : attachment);
}

$Object* DirectFloatBufferU::base() {
	return $of(nullptr);
}

$FloatBuffer* DirectFloatBufferU::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	int32_t off = (pos << 2);
	if (!DirectFloatBufferU::$assertionsDisabled && !(off >= 0)) {
		$throwNew($AssertionError);
	}
	return $new(DirectFloatBufferU, this, -1, 0, rem, rem, off, this->segment);
}

$FloatBuffer* DirectFloatBufferU::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(DirectFloatBufferU, this, -1, 0, length, length, index << 2, this->segment);
}

$FloatBuffer* DirectFloatBufferU::duplicate() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new(DirectFloatBufferU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

$FloatBuffer* DirectFloatBufferU::asReadOnlyBuffer() {
	int32_t var$0 = this->markValue();
	int32_t var$1 = this->position();
	int32_t var$2 = this->limit();
	return $new($DirectFloatBufferRU, this, var$0, var$1, var$2, this->capacity(), 0, this->segment);
}

int64_t DirectFloatBufferU::address() {
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

int64_t DirectFloatBufferU::ix(int32_t i) {
	return this->$Buffer::address + ((int64_t)i << 2);
}

float DirectFloatBufferU::get() {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getFloat(var$3, nullptr, ix(nextGetIndex())));
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

float DirectFloatBufferU::get(int32_t i) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$3, scope());
			var$2 = ($nc($Buffer::SCOPED_MEMORY_ACCESS)->getFloat(var$3, nullptr, ix(checkIndex(i))));
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

$FloatBuffer* DirectFloatBufferU::put(float x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putFloat(var$1, nullptr, ix(nextPutIndex()), (x));
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

$FloatBuffer* DirectFloatBufferU::put(int32_t i, float x) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($Buffer);
			$var($ScopedMemoryAccess$Scope, var$1, scope());
			$nc($Buffer::SCOPED_MEMORY_ACCESS)->putFloat(var$1, nullptr, ix(checkIndex(i)), (x));
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

$FloatBuffer* DirectFloatBufferU::compact() {
	int32_t pos = position();
	int32_t lim = limit();
	if (!DirectFloatBufferU::$assertionsDisabled && !(pos <= lim)) {
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

bool DirectFloatBufferU::isDirect() {
	return true;
}

bool DirectFloatBufferU::isReadOnly() {
	return false;
}

$ByteOrder* DirectFloatBufferU::order() {
	$init($ByteOrder);
	return (($ByteOrder::nativeOrder() != $ByteOrder::BIG_ENDIAN) ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
}

void clinit$DirectFloatBufferU($Class* class$) {
	DirectFloatBufferU::$assertionsDisabled = !DirectFloatBufferU::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($floats);
	DirectFloatBufferU::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($floats));
	DirectFloatBufferU::UNALIGNED = $Bits::unaligned();
}

DirectFloatBufferU::DirectFloatBufferU() {
}

$Class* DirectFloatBufferU::load$($String* name, bool initialize) {
	$loadClass(DirectFloatBufferU, name, initialize, &_DirectFloatBufferU_ClassInfo_, clinit$DirectFloatBufferU, allocate$DirectFloatBufferU);
	return class$;
}

$Class* DirectFloatBufferU::class$ = nullptr;

	} // nio
} // java