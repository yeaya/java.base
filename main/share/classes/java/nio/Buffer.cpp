#include <java/nio/Buffer.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/nio/Buffer$1.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/InvalidMarkException.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef SCOPED_MEMORY_ACCESS
#undef SPLITERATOR_CHARACTERISTICS
#undef UNSAFE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer$1 = ::java::nio::Buffer$1;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $InvalidMarkException = ::java::nio::InvalidMarkException;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$CompoundAttribute _Buffer_MethodAnnotations_checkIndex6[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Buffer_MethodAnnotations_scope34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _Buffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Buffer, $assertionsDisabled)},
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $STATIC | $FINAL, $staticField(Buffer, UNSAFE)},
	{"SCOPED_MEMORY_ACCESS", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $STATIC | $FINAL, $staticField(Buffer, SCOPED_MEMORY_ACCESS)},
	{"SPLITERATOR_CHARACTERISTICS", "I", nullptr, $STATIC | $FINAL, $constField(Buffer, SPLITERATOR_CHARACTERISTICS)},
	{"mark", "I", nullptr, $PRIVATE, $field(Buffer, mark$)},
	{"position", "I", nullptr, $PRIVATE, $field(Buffer, position$)},
	{"limit", "I", nullptr, $PRIVATE, $field(Buffer, limit$)},
	{"capacity", "I", nullptr, $PRIVATE, $field(Buffer, capacity$)},
	{"address", "J", nullptr, 0, $field(Buffer, address)},
	{"segment", "Ljdk/internal/access/foreign/MemorySegmentProxy;", nullptr, $FINAL, $field(Buffer, segment)},
	{}
};

$MethodInfo _Buffer_MethodInfo_[] = {
	{"<init>", "(JILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(Buffer, init$, void, int64_t, int32_t, $MemorySegmentProxy*)},
	{"<init>", "(IIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(Buffer, init$, void, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"array", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Buffer, array, $Object*)},
	{"arrayOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Buffer, arrayOffset, int32_t)},
	{"base", "()Ljava/lang/Object;", nullptr, $ABSTRACT, $virtualMethod(Buffer, base, $Object*)},
	{"capacity", "()I", nullptr, $PUBLIC | $FINAL, $method(Buffer, capacity, int32_t)},
	{"checkIndex", "(I)I", nullptr, $FINAL, $method(Buffer, checkIndex, int32_t, int32_t), nullptr, nullptr, _Buffer_MethodAnnotations_checkIndex6},
	{"checkIndex", "(II)I", nullptr, $FINAL, $method(Buffer, checkIndex, int32_t, int32_t, int32_t)},
	{"checkScope", "()V", nullptr, $FINAL, $method(Buffer, checkScope, void)},
	{"clear", "()Ljava/nio/Buffer;", nullptr, $PUBLIC, $virtualMethod(Buffer, clear, Buffer*)},
	{"createCapacityException", "(I)Ljava/lang/IllegalArgumentException;", nullptr, $STATIC, $staticMethod(Buffer, createCapacityException, $IllegalArgumentException*, int32_t)},
	{"createLimitException", "(I)Ljava/lang/IllegalArgumentException;", nullptr, $PRIVATE, $method(Buffer, createLimitException, $IllegalArgumentException*, int32_t)},
	{"createPositionException", "(I)Ljava/lang/IllegalArgumentException;", nullptr, $PRIVATE, $method(Buffer, createPositionException, $IllegalArgumentException*, int32_t)},
	{"createSameBufferException", "()Ljava/lang/IllegalArgumentException;", nullptr, $STATIC, $staticMethod(Buffer, createSameBufferException, $IllegalArgumentException*)},
	{"discardMark", "()V", nullptr, $FINAL, $method(Buffer, discardMark, void)},
	{"duplicate", "()Ljava/nio/Buffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Buffer, duplicate, Buffer*)},
	{"flip", "()Ljava/nio/Buffer;", nullptr, $PUBLIC, $virtualMethod(Buffer, flip, Buffer*)},
	{"hasArray", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Buffer, hasArray, bool)},
	{"hasRemaining", "()Z", nullptr, $PUBLIC | $FINAL, $method(Buffer, hasRemaining, bool)},
	{"isDirect", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Buffer, isDirect, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Buffer, isReadOnly, bool)},
	{"limit", "()I", nullptr, $PUBLIC | $FINAL, $method(Buffer, limit, int32_t)},
	{"limit", "(I)Ljava/nio/Buffer;", nullptr, $PUBLIC, $virtualMethod(Buffer, limit, Buffer*, int32_t)},
	{"mark", "()Ljava/nio/Buffer;", nullptr, $PUBLIC, $virtualMethod(Buffer, mark, Buffer*)},
	{"markValue", "()I", nullptr, $FINAL, $method(Buffer, markValue, int32_t)},
	{"nextGetIndex", "()I", nullptr, $FINAL, $method(Buffer, nextGetIndex, int32_t)},
	{"nextGetIndex", "(I)I", nullptr, $FINAL, $method(Buffer, nextGetIndex, int32_t, int32_t)},
	{"nextPutIndex", "()I", nullptr, $FINAL, $method(Buffer, nextPutIndex, int32_t)},
	{"nextPutIndex", "(I)I", nullptr, $FINAL, $method(Buffer, nextPutIndex, int32_t, int32_t)},
	{"position", "()I", nullptr, $PUBLIC | $FINAL, $method(Buffer, position, int32_t)},
	{"position", "(I)Ljava/nio/Buffer;", nullptr, $PUBLIC, $virtualMethod(Buffer, position, Buffer*, int32_t)},
	{"remaining", "()I", nullptr, $PUBLIC | $FINAL, $method(Buffer, remaining, int32_t)},
	{"reset", "()Ljava/nio/Buffer;", nullptr, $PUBLIC, $virtualMethod(Buffer, reset, Buffer*)},
	{"rewind", "()Ljava/nio/Buffer;", nullptr, $PUBLIC, $virtualMethod(Buffer, rewind, Buffer*)},
	{"scope", "()Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $FINAL, $method(Buffer, scope, $ScopedMemoryAccess$Scope*), nullptr, nullptr, _Buffer_MethodAnnotations_scope34},
	{"slice", "()Ljava/nio/Buffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Buffer, slice, Buffer*)},
	{"slice", "(II)Ljava/nio/Buffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Buffer, slice, Buffer*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _Buffer_InnerClassesInfo_[] = {
	{"java.nio.Buffer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Buffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.Buffer",
	"java.lang.Object",
	nullptr,
	_Buffer_FieldInfo_,
	_Buffer_MethodInfo_,
	nullptr,
	nullptr,
	_Buffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.Buffer$1"
};

$Object* allocate$Buffer($Class* clazz) {
	return $of($alloc(Buffer));
}

bool Buffer::$assertionsDisabled = false;
$Unsafe* Buffer::UNSAFE = nullptr;
$ScopedMemoryAccess* Buffer::SCOPED_MEMORY_ACCESS = nullptr;

void Buffer::init$(int64_t addr, int32_t cap, $MemorySegmentProxy* segment) {
	this->mark$ = -1;
	this->position$ = 0;
	this->address = addr;
	this->capacity$ = cap;
	$set(this, segment, segment);
}

void Buffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $MemorySegmentProxy* segment) {
	$useLocalCurrentObjectStackCache();
	this->mark$ = -1;
	this->position$ = 0;
	if (cap < 0) {
		$throw($(createCapacityException(cap)));
	}
	this->capacity$ = cap;
	$set(this, segment, segment);
	limit(lim);
	position(pos);
	if (mark >= 0) {
		if (mark > pos) {
			$throwNew($IllegalArgumentException, $$str({"mark > position: ("_s, $$str(mark), " > "_s, $$str(pos), ")"_s}));
		}
		this->mark$ = mark;
	}
}

$IllegalArgumentException* Buffer::createSameBufferException() {
	$init(Buffer);
	return $new($IllegalArgumentException, "The source buffer is this buffer"_s);
}

$IllegalArgumentException* Buffer::createCapacityException(int32_t capacity) {
	$init(Buffer);
	$useLocalCurrentObjectStackCache();
	if (!Buffer::$assertionsDisabled && !(capacity < 0)) {
		$throwNew($AssertionError, $of("capacity expected to be negative"_s));
	}
	return $new($IllegalArgumentException, $$str({"capacity < 0: ("_s, $$str(capacity), " < 0)"_s}));
}

int32_t Buffer::capacity() {
	return this->capacity$;
}

int32_t Buffer::position() {
	return this->position$;
}

Buffer* Buffer::position(int32_t newPosition) {
	if ((newPosition > this->limit$) | (newPosition < 0)) {
		$throw($(createPositionException(newPosition)));
	}
	if (this->mark$ > newPosition) {
		this->mark$ = -1;
	}
	this->position$ = newPosition;
	return this;
}

$IllegalArgumentException* Buffer::createPositionException(int32_t newPosition) {
	$useLocalCurrentObjectStackCache();
	$var($String, msg, nullptr);
	if (newPosition > this->limit$) {
		$assign(msg, $str({"newPosition > limit: ("_s, $$str(newPosition), " > "_s, $$str(this->limit$), ")"_s}));
	} else {
		if (!Buffer::$assertionsDisabled && !(newPosition < 0)) {
			$throwNew($AssertionError, $of("newPosition expected to be negative"_s));
		}
		$assign(msg, $str({"newPosition < 0: ("_s, $$str(newPosition), " < 0)"_s}));
	}
	return $new($IllegalArgumentException, msg);
}

int32_t Buffer::limit() {
	return this->limit$;
}

Buffer* Buffer::limit(int32_t newLimit) {
	if ((newLimit > this->capacity$) | (newLimit < 0)) {
		$throw($(createLimitException(newLimit)));
	}
	this->limit$ = newLimit;
	if (this->position$ > newLimit) {
		this->position$ = newLimit;
	}
	if (this->mark$ > newLimit) {
		this->mark$ = -1;
	}
	return this;
}

$IllegalArgumentException* Buffer::createLimitException(int32_t newLimit) {
	$useLocalCurrentObjectStackCache();
	$var($String, msg, nullptr);
	if (newLimit > this->capacity$) {
		$assign(msg, $str({"newLimit > capacity: ("_s, $$str(newLimit), " > "_s, $$str(this->capacity$), ")"_s}));
	} else {
		if (!Buffer::$assertionsDisabled && !(newLimit < 0)) {
			$throwNew($AssertionError, $of("newLimit expected to be negative"_s));
		}
		$assign(msg, $str({"newLimit < 0: ("_s, $$str(newLimit), " < 0)"_s}));
	}
	return $new($IllegalArgumentException, msg);
}

Buffer* Buffer::mark() {
	this->mark$ = this->position$;
	return this;
}

Buffer* Buffer::reset() {
	int32_t m = this->mark$;
	if (m < 0) {
		$throwNew($InvalidMarkException);
	}
	this->position$ = m;
	return this;
}

Buffer* Buffer::clear() {
	this->position$ = 0;
	this->limit$ = this->capacity$;
	this->mark$ = -1;
	return this;
}

Buffer* Buffer::flip() {
	this->limit$ = this->position$;
	this->position$ = 0;
	this->mark$ = -1;
	return this;
}

Buffer* Buffer::rewind() {
	this->position$ = 0;
	this->mark$ = -1;
	return this;
}

int32_t Buffer::remaining() {
	int32_t rem = this->limit$ - this->position$;
	return rem > 0 ? rem : 0;
}

bool Buffer::hasRemaining() {
	return this->position$ < this->limit$;
}

int32_t Buffer::nextGetIndex() {
	int32_t p = this->position$;
	if (p >= this->limit$) {
		$throwNew($BufferUnderflowException);
	}
	this->position$ = p + 1;
	return p;
}

int32_t Buffer::nextGetIndex(int32_t nb) {
	int32_t p = this->position$;
	if (this->limit$ - p < nb) {
		$throwNew($BufferUnderflowException);
	}
	this->position$ = p + nb;
	return p;
}

int32_t Buffer::nextPutIndex() {
	int32_t p = this->position$;
	if (p >= this->limit$) {
		$throwNew($BufferOverflowException);
	}
	this->position$ = p + 1;
	return p;
}

int32_t Buffer::nextPutIndex(int32_t nb) {
	int32_t p = this->position$;
	if (this->limit$ - p < nb) {
		$throwNew($BufferOverflowException);
	}
	this->position$ = p + nb;
	return p;
}

int32_t Buffer::checkIndex(int32_t i) {
	if ((i < 0) || (i >= this->limit$)) {
		$throwNew($IndexOutOfBoundsException);
	}
	return i;
}

int32_t Buffer::checkIndex(int32_t i, int32_t nb) {
	if ((i < 0) || (nb > this->limit$ - i)) {
		$throwNew($IndexOutOfBoundsException);
	}
	return i;
}

int32_t Buffer::markValue() {
	return this->mark$;
}

void Buffer::discardMark() {
	this->mark$ = -1;
}

$ScopedMemoryAccess$Scope* Buffer::scope() {
	if (this->segment != nullptr) {
		return $nc(this->segment)->scope();
	} else {
		return nullptr;
	}
}

void Buffer::checkScope() {
	$var($ScopedMemoryAccess$Scope, scope, this->scope());
	if (scope != nullptr) {
		scope->checkValidState();
	}
}

void clinit$Buffer($Class* class$) {
	Buffer::$assertionsDisabled = !Buffer::class$->desiredAssertionStatus();
	$assignStatic(Buffer::UNSAFE, $Unsafe::getUnsafe());
	$assignStatic(Buffer::SCOPED_MEMORY_ACCESS, $ScopedMemoryAccess::getScopedMemoryAccess());
	{
		$SharedSecrets::setJavaNioAccess($$new($Buffer$1));
	}
}

Buffer::Buffer() {
}

$Class* Buffer::load$($String* name, bool initialize) {
	$loadClass(Buffer, name, initialize, &_Buffer_ClassInfo_, clinit$Buffer, allocate$Buffer);
	return class$;
}

$Class* Buffer::class$ = nullptr;

	} // nio
} // java