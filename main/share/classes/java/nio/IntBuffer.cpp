#include <java/nio/IntBuffer.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Bits.h>
#include <java/nio/Buffer.h>
#include <java/nio/BufferMismatch.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/HeapIntBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_BASE_OFFSET
#undef BYTES
#undef JNI_COPY_FROM_ARRAY_THRESHOLD
#undef JNI_COPY_TO_ARRAY_THRESHOLD
#undef SCOPED_MEMORY_ACCESS
#undef UNSAFE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $BufferMismatch = ::java::nio::BufferMismatch;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteOrder = ::java::nio::ByteOrder;
using $HeapIntBuffer = ::java::nio::HeapIntBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _IntBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(IntBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntBuffer, ARRAY_BASE_OFFSET)},
	{"hb", "[I", nullptr, $FINAL, $field(IntBuffer, hb)},
	{"offset", "I", nullptr, $FINAL, $field(IntBuffer, offset)},
	{"isReadOnly", "Z", nullptr, 0, $field(IntBuffer, isReadOnly$)},
	{}
};

$MethodInfo _IntBuffer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"duplicate", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(IIII[IILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(IntBuffer::*)(int32_t,int32_t,int32_t,int32_t,$ints*,int32_t,$MemorySegmentProxy*)>(&IntBuffer::init$))},
	{"<init>", "(IIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(IntBuffer::*)(int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&IntBuffer::init$))},
	{"<init>", "([IJILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(IntBuffer::*)($ints*,int64_t,int32_t,$MemorySegmentProxy*)>(&IntBuffer::init$))},
	{"allocate", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntBuffer*(*)(int32_t)>(&IntBuffer::allocate))},
	{"array", "()[I", nullptr, $PUBLIC | $FINAL},
	{"arrayOffset", "()I", nullptr, $PUBLIC | $FINAL},
	{"asReadOnlyBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"clear", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $FINAL},
	{"compact", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"compare", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&IntBuffer::compare))},
	{"compareTo", "(Ljava/nio/IntBuffer;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"flip", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $FINAL},
	{"get", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "([III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"get", "([I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"get", "(I[III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"get", "(I[I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"getArray", "(I[III)Ljava/nio/IntBuffer;", nullptr, $PRIVATE, $method(static_cast<IntBuffer*(IntBuffer::*)(int32_t,$ints*,int32_t,int32_t)>(&IntBuffer::getArray))},
	{"hasArray", "()Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"limit", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $FINAL},
	{"mark", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $FINAL},
	{"mismatch", "(Ljava/nio/IntBuffer;)I", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $ABSTRACT},
	{"position", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $FINAL},
	{"put", "(I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/nio/IntBuffer;)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/IntBuffer;II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "([III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "([I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $FINAL, $method(static_cast<IntBuffer*(IntBuffer::*)($ints*)>(&IntBuffer::put))},
	{"put", "(I[III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"put", "(I[I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"putArray", "(I[III)Ljava/nio/IntBuffer;", nullptr, $PRIVATE, $method(static_cast<IntBuffer*(IntBuffer::*)(int32_t,$ints*,int32_t,int32_t)>(&IntBuffer::putArray))},
	{"putBuffer", "(ILjava/nio/IntBuffer;II)V", nullptr, 0},
	{"reset", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $FINAL},
	{"rewind", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $FINAL},
	{"slice", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"slice", "(II)Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wrap", "([III)Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntBuffer*(*)($ints*,int32_t,int32_t)>(&IntBuffer::wrap))},
	{"wrap", "([I)Ljava/nio/IntBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntBuffer*(*)($ints*)>(&IntBuffer::wrap))},
	{}
};

$ClassInfo _IntBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.IntBuffer",
	"java.nio.Buffer",
	"java.lang.Comparable",
	_IntBuffer_FieldInfo_,
	_IntBuffer_MethodInfo_,
	"Ljava/nio/Buffer;Ljava/lang/Comparable<Ljava/nio/IntBuffer;>;"
};

$Object* allocate$IntBuffer($Class* clazz) {
	return $of($alloc(IntBuffer));
}

$Object* IntBuffer::clone() {
	 return this->$Buffer::clone();
}

void IntBuffer::finalize() {
	this->$Buffer::finalize();
}

bool IntBuffer::$assertionsDisabled = false;
int64_t IntBuffer::ARRAY_BASE_OFFSET = 0;

void IntBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $ints* hb, int32_t offset, $MemorySegmentProxy* segment) {
	$Buffer::init$(mark, pos, lim, cap, segment);
	$set(this, hb, hb);
	this->offset = offset;
}

void IntBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $MemorySegmentProxy* segment) {
	IntBuffer::init$(mark, pos, lim, cap, nullptr, 0, segment);
}

void IntBuffer::init$($ints* hb, int64_t addr, int32_t cap, $MemorySegmentProxy* segment) {
	$Buffer::init$(addr, cap, segment);
	$set(this, hb, hb);
	this->offset = 0;
}

$Object* IntBuffer::base() {
	return $of(this->hb);
}

IntBuffer* IntBuffer::allocate(int32_t capacity) {
	$init(IntBuffer);
	if (capacity < 0) {
		$throw($(createCapacityException(capacity)));
	}
	return $new($HeapIntBuffer, capacity, capacity, nullptr);
}

IntBuffer* IntBuffer::wrap($ints* array, int32_t offset, int32_t length) {
	$init(IntBuffer);
	try {
		return $new($HeapIntBuffer, array, offset, length, nullptr);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, x, $catch());
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

IntBuffer* IntBuffer::wrap($ints* array) {
	$init(IntBuffer);
	return wrap(array, 0, $nc(array)->length);
}

IntBuffer* IntBuffer::get($ints* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	int32_t pos = position();
	if (length > limit() - pos) {
		$throwNew($BufferUnderflowException);
	}
	getArray(pos, dst, offset, length);
	position(pos + length);
	return this;
}

IntBuffer* IntBuffer::get($ints* dst) {
	return get(dst, 0, $nc(dst)->length);
}

IntBuffer* IntBuffer::get(int32_t index, $ints* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	getArray(index, dst, offset, length);
	return this;
}

IntBuffer* IntBuffer::get(int32_t index, $ints* dst) {
	return get(index, dst, 0, $nc(dst)->length);
}

IntBuffer* IntBuffer::getArray(int32_t index, $ints* dst, int32_t offset, int32_t length) {
	if (((int64_t)length << 2) > $Bits::JNI_COPY_TO_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 2);
		int64_t dstOffset = IntBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 2);
		int64_t len = (int64_t)length << 2;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, nullptr, $(base()), bufAddr, dst, dstOffset, len, $Integer::BYTES);
				} else {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$2, scope());
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copyMemory(var$2, nullptr, $(base()), bufAddr, dst, dstOffset, len);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$Reference::reachabilityFence(this);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		int32_t end = offset + length;
		{
			int32_t i = offset;
			int32_t j = index;
			for (; i < end; ++i, ++j) {
				$nc(dst)->set(i, get(j));
			}
		}
	}
	return this;
}

IntBuffer* IntBuffer::put(IntBuffer* src) {
	if (src == this) {
		$throw($(createSameBufferException()));
	}
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	int32_t srcPos = $nc(src)->position();
	int32_t srcLim = src->limit();
	int32_t srcRem = (srcPos <= srcLim ? srcLim - srcPos : 0);
	int32_t pos = position();
	int32_t lim = limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	if (srcRem > rem) {
		$throwNew($BufferOverflowException);
	}
	putBuffer(pos, src, srcPos, srcRem);
	position(pos + srcRem);
	src->position(srcPos + srcRem);
	return this;
}

IntBuffer* IntBuffer::put(int32_t index, IntBuffer* src, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->limit());
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	putBuffer(index, src, offset, length);
	return this;
}

void IntBuffer::putBuffer(int32_t pos, IntBuffer* src, int32_t srcPos, int32_t n) {
	$var($Object, srcBase, $nc(src)->base());
	if (!IntBuffer::$assertionsDisabled && !(srcBase != nullptr || src->isDirect())) {
		$throwNew($AssertionError);
	}
	$var($Object, base, this->base());
	if (!IntBuffer::$assertionsDisabled && !(base != nullptr || isDirect())) {
		$throwNew($AssertionError);
	}
	int64_t srcAddr = src->address + ((int64_t)srcPos << 2);
	int64_t addr = this->address + ((int64_t)pos << 2);
	int64_t len = (int64_t)n << 2;
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->order() != src->order()) {
				$init($Buffer);
				$var($ScopedMemoryAccess$Scope, var$1, src->scope());
				$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, $(scope()), srcBase, srcAddr, base, addr, len, $Integer::BYTES);
			} else {
				$init($Buffer);
				$var($ScopedMemoryAccess$Scope, var$2, src->scope());
				$nc($Buffer::SCOPED_MEMORY_ACCESS)->copyMemory(var$2, $(scope()), srcBase, srcAddr, base, addr, len);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$Reference::reachabilityFence(src);
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

IntBuffer* IntBuffer::put($ints* src, int32_t offset, int32_t length) {
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	int32_t pos = position();
	if (length > limit() - pos) {
		$throwNew($BufferOverflowException);
	}
	putArray(pos, src, offset, length);
	position(pos + length);
	return this;
}

IntBuffer* IntBuffer::put($ints* src) {
	return put(src, 0, $nc(src)->length);
}

IntBuffer* IntBuffer::put(int32_t index, $ints* src, int32_t offset, int32_t length) {
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	putArray(index, src, offset, length);
	return this;
}

IntBuffer* IntBuffer::put(int32_t index, $ints* src) {
	return put(index, src, 0, $nc(src)->length);
}

IntBuffer* IntBuffer::putArray(int32_t index, $ints* src, int32_t offset, int32_t length) {
	if (((int64_t)length << 2) > $Bits::JNI_COPY_FROM_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 2);
		int64_t srcOffset = IntBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 2);
		int64_t len = (int64_t)length << 2;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$var($Object, var$2, $of(src));
					int64_t var$3 = srcOffset;
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(nullptr, var$1, var$2, var$3, $(base()), bufAddr, len, $Integer::BYTES);
				} else {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$4, scope());
					$var($Object, var$5, $of(src));
					int64_t var$6 = srcOffset;
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copyMemory(nullptr, var$4, var$5, var$6, $(base()), bufAddr, len);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$Reference::reachabilityFence(this);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		int32_t end = offset + length;
		{
			int32_t i = offset;
			int32_t j = index;
			for (; i < end; ++i, ++j) {
				this->put(j, $nc(src)->get(i));
			}
		}
	}
	return this;
}

bool IntBuffer::hasArray() {
	return (this->hb != nullptr) && !this->isReadOnly$;
}

$Object* IntBuffer::array() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return $of(this->hb);
}

int32_t IntBuffer::arrayOffset() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return this->offset;
}

IntBuffer* IntBuffer::position(int32_t newPosition) {
	$Buffer::position(newPosition);
	return this;
}

IntBuffer* IntBuffer::limit(int32_t newLimit) {
	$Buffer::limit(newLimit);
	return this;
}

IntBuffer* IntBuffer::mark() {
	$Buffer::mark();
	return this;
}

IntBuffer* IntBuffer::reset() {
	$Buffer::reset();
	return this;
}

IntBuffer* IntBuffer::clear() {
	$Buffer::clear();
	return this;
}

IntBuffer* IntBuffer::flip() {
	$Buffer::flip();
	return this;
}

IntBuffer* IntBuffer::rewind() {
	$Buffer::rewind();
	return this;
}

$String* IntBuffer::toString() {
	$var($StringBuffer, sb, $new($StringBuffer));
	sb->append($($of(this)->getClass()->getName()));
	sb->append("[pos="_s);
	sb->append(position());
	sb->append(" lim="_s);
	sb->append(limit());
	sb->append(" cap="_s);
	sb->append(capacity());
	sb->append("]"_s);
	return sb->toString();
}

int32_t IntBuffer::hashCode() {
	int32_t h = 1;
	int32_t p = position();
	for (int32_t i = limit() - 1; i >= p; --i) {
		h = 31 * h + get(i);
	}
	return h;
}

bool IntBuffer::equals(Object$* ob) {
	if ($equals(this, ob)) {
		return true;
	}
	if (!($instanceOf(IntBuffer, ob))) {
		return false;
	}
	$var(IntBuffer, that, $cast(IntBuffer, ob));
	int32_t thisPos = this->position();
	int32_t thisRem = this->limit() - thisPos;
	int32_t thatPos = $nc(that)->position();
	int32_t thatRem = that->limit() - thatPos;
	if (thisRem < 0 || thisRem != thatRem) {
		return false;
	}
	return $BufferMismatch::mismatch(this, thisPos, that, thatPos, thisRem) < 0;
}

int32_t IntBuffer::compareTo(IntBuffer* that) {
	int32_t thisPos = this->position();
	int32_t thisRem = this->limit() - thisPos;
	int32_t thatPos = $nc(that)->position();
	int32_t thatRem = that->limit() - thatPos;
	int32_t length = $Math::min(thisRem, thatRem);
	if (length < 0) {
		return -1;
	}
	int32_t i = $BufferMismatch::mismatch(this, thisPos, that, thatPos, length);
	if (i >= 0) {
		int32_t var$0 = this->get(thisPos + i);
		return compare(var$0, that->get(thatPos + i));
	}
	return thisRem - thatRem;
}

int32_t IntBuffer::compare(int32_t x, int32_t y) {
	$init(IntBuffer);
	return $Integer::compare(x, y);
}

int32_t IntBuffer::mismatch(IntBuffer* that) {
	int32_t thisPos = this->position();
	int32_t thisRem = this->limit() - thisPos;
	int32_t thatPos = $nc(that)->position();
	int32_t thatRem = that->limit() - thatPos;
	int32_t length = $Math::min(thisRem, thatRem);
	if (length < 0) {
		return -1;
	}
	int32_t r = $BufferMismatch::mismatch(this, thisPos, that, thatPos, length);
	return (r == -1 && thisRem != thatRem) ? length : r;
}

int32_t IntBuffer::compareTo(Object$* that) {
	return this->compareTo($cast(IntBuffer, that));
}

void clinit$IntBuffer($Class* class$) {
	IntBuffer::$assertionsDisabled = !IntBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($ints);
	IntBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($ints));
}

IntBuffer::IntBuffer() {
}

$Class* IntBuffer::load$($String* name, bool initialize) {
	$loadClass(IntBuffer, name, initialize, &_IntBuffer_ClassInfo_, clinit$IntBuffer, allocate$IntBuffer);
	return class$;
}

$Class* IntBuffer::class$ = nullptr;

	} // nio
} // java