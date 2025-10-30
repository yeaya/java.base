#include <java/nio/LongBuffer.h>

#include <java/lang/AssertionError.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/Reference.h>
#include <java/nio/Bits.h>
#include <java/nio/Buffer.h>
#include <java/nio/BufferMismatch.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/HeapLongBuffer.h>
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
using $Long = ::java::lang::Long;
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
using $HeapLongBuffer = ::java::nio::HeapLongBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _LongBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LongBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LongBuffer, ARRAY_BASE_OFFSET)},
	{"hb", "[J", nullptr, $FINAL, $field(LongBuffer, hb)},
	{"offset", "I", nullptr, $FINAL, $field(LongBuffer, offset)},
	{"isReadOnly", "Z", nullptr, 0, $field(LongBuffer, isReadOnly$)},
	{}
};

$MethodInfo _LongBuffer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"duplicate", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(IIII[JILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(LongBuffer::*)(int32_t,int32_t,int32_t,int32_t,$longs*,int32_t,$MemorySegmentProxy*)>(&LongBuffer::init$))},
	{"<init>", "(IIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(LongBuffer::*)(int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&LongBuffer::init$))},
	{"<init>", "([JJILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(LongBuffer::*)($longs*,int64_t,int32_t,$MemorySegmentProxy*)>(&LongBuffer::init$))},
	{"allocate", "(I)Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongBuffer*(*)(int32_t)>(&LongBuffer::allocate))},
	{"array", "()[J", nullptr, $PUBLIC | $FINAL},
	{"arrayOffset", "()I", nullptr, $PUBLIC | $FINAL},
	{"asReadOnlyBuffer", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"clear", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $FINAL},
	{"compact", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"compare", "(JJ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int64_t,int64_t)>(&LongBuffer::compare))},
	{"compareTo", "(Ljava/nio/LongBuffer;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"flip", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $FINAL},
	{"get", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(I)J", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "([JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"get", "([J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"get", "(I[JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"get", "(I[J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"getArray", "(I[JII)Ljava/nio/LongBuffer;", nullptr, $PRIVATE, $method(static_cast<LongBuffer*(LongBuffer::*)(int32_t,$longs*,int32_t,int32_t)>(&LongBuffer::getArray))},
	{"hasArray", "()Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"limit", "(I)Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $FINAL},
	{"mark", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $FINAL},
	{"mismatch", "(Ljava/nio/LongBuffer;)I", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $ABSTRACT},
	{"position", "(I)Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $FINAL},
	{"put", "(J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(IJ)Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/LongBuffer;II)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "([JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "([J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $FINAL, $method(static_cast<LongBuffer*(LongBuffer::*)($longs*)>(&LongBuffer::put))},
	{"put", "(I[JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"put", "(I[J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC},
	{"putArray", "(I[JII)Ljava/nio/LongBuffer;", nullptr, $PRIVATE, $method(static_cast<LongBuffer*(LongBuffer::*)(int32_t,$longs*,int32_t,int32_t)>(&LongBuffer::putArray))},
	{"putBuffer", "(ILjava/nio/LongBuffer;II)V", nullptr, 0},
	{"reset", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $FINAL},
	{"rewind", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $FINAL},
	{"slice", "()Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"slice", "(II)Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wrap", "([JII)Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongBuffer*(*)($longs*,int32_t,int32_t)>(&LongBuffer::wrap))},
	{"wrap", "([J)Ljava/nio/LongBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongBuffer*(*)($longs*)>(&LongBuffer::wrap))},
	{}
};

$ClassInfo _LongBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.LongBuffer",
	"java.nio.Buffer",
	"java.lang.Comparable",
	_LongBuffer_FieldInfo_,
	_LongBuffer_MethodInfo_,
	"Ljava/nio/Buffer;Ljava/lang/Comparable<Ljava/nio/LongBuffer;>;"
};

$Object* allocate$LongBuffer($Class* clazz) {
	return $of($alloc(LongBuffer));
}

$Object* LongBuffer::clone() {
	 return this->$Buffer::clone();
}

void LongBuffer::finalize() {
	this->$Buffer::finalize();
}

bool LongBuffer::$assertionsDisabled = false;
int64_t LongBuffer::ARRAY_BASE_OFFSET = 0;

void LongBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $longs* hb, int32_t offset, $MemorySegmentProxy* segment) {
	$Buffer::init$(mark, pos, lim, cap, segment);
	$set(this, hb, hb);
	this->offset = offset;
}

void LongBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $MemorySegmentProxy* segment) {
	LongBuffer::init$(mark, pos, lim, cap, nullptr, 0, segment);
}

void LongBuffer::init$($longs* hb, int64_t addr, int32_t cap, $MemorySegmentProxy* segment) {
	$Buffer::init$(addr, cap, segment);
	$set(this, hb, hb);
	this->offset = 0;
}

$Object* LongBuffer::base() {
	return $of(this->hb);
}

LongBuffer* LongBuffer::allocate(int32_t capacity) {
	$init(LongBuffer);
	if (capacity < 0) {
		$throw($(createCapacityException(capacity)));
	}
	return $new($HeapLongBuffer, capacity, capacity, nullptr);
}

LongBuffer* LongBuffer::wrap($longs* array, int32_t offset, int32_t length) {
	$init(LongBuffer);
	try {
		return $new($HeapLongBuffer, array, offset, length, nullptr);
	} catch ($IllegalArgumentException& x) {
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

LongBuffer* LongBuffer::wrap($longs* array) {
	$init(LongBuffer);
	return wrap(array, 0, $nc(array)->length);
}

LongBuffer* LongBuffer::get($longs* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	int32_t pos = position();
	if (length > limit() - pos) {
		$throwNew($BufferUnderflowException);
	}
	getArray(pos, dst, offset, length);
	position(pos + length);
	return this;
}

LongBuffer* LongBuffer::get($longs* dst) {
	return get(dst, 0, $nc(dst)->length);
}

LongBuffer* LongBuffer::get(int32_t index, $longs* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	getArray(index, dst, offset, length);
	return this;
}

LongBuffer* LongBuffer::get(int32_t index, $longs* dst) {
	return get(index, dst, 0, $nc(dst)->length);
}

LongBuffer* LongBuffer::getArray(int32_t index, $longs* dst, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)length << 3) > $Bits::JNI_COPY_TO_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 3);
		int64_t dstOffset = LongBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 3);
		int64_t len = (int64_t)length << 3;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, nullptr, $(base()), bufAddr, dst, dstOffset, len, $Long::BYTES);
				} else {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$2, scope());
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copyMemory(var$2, nullptr, $(base()), bufAddr, dst, dstOffset, len);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
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

LongBuffer* LongBuffer::put(LongBuffer* src) {
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

LongBuffer* LongBuffer::put(int32_t index, LongBuffer* src, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->limit());
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	putBuffer(index, src, offset, length);
	return this;
}

void LongBuffer::putBuffer(int32_t pos, LongBuffer* src, int32_t srcPos, int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($Object, srcBase, $nc(src)->base());
	if (!LongBuffer::$assertionsDisabled && !(srcBase != nullptr || src->isDirect())) {
		$throwNew($AssertionError);
	}
	$var($Object, base, this->base());
	if (!LongBuffer::$assertionsDisabled && !(base != nullptr || isDirect())) {
		$throwNew($AssertionError);
	}
	int64_t srcAddr = src->address + ((int64_t)srcPos << 3);
	int64_t addr = this->address + ((int64_t)pos << 3);
	int64_t len = (int64_t)n << 3;
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->order() != src->order()) {
				$init($Buffer);
				$var($ScopedMemoryAccess$Scope, var$1, src->scope());
				$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, $(scope()), srcBase, srcAddr, base, addr, len, $Long::BYTES);
			} else {
				$init($Buffer);
				$var($ScopedMemoryAccess$Scope, var$2, src->scope());
				$nc($Buffer::SCOPED_MEMORY_ACCESS)->copyMemory(var$2, $(scope()), srcBase, srcAddr, base, addr, len);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$Reference::reachabilityFence(src);
			$Reference::reachabilityFence(this);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

LongBuffer* LongBuffer::put($longs* src, int32_t offset, int32_t length) {
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

LongBuffer* LongBuffer::put($longs* src) {
	return put(src, 0, $nc(src)->length);
}

LongBuffer* LongBuffer::put(int32_t index, $longs* src, int32_t offset, int32_t length) {
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	putArray(index, src, offset, length);
	return this;
}

LongBuffer* LongBuffer::put(int32_t index, $longs* src) {
	return put(index, src, 0, $nc(src)->length);
}

LongBuffer* LongBuffer::putArray(int32_t index, $longs* src, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)length << 3) > $Bits::JNI_COPY_FROM_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 3);
		int64_t srcOffset = LongBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 3);
		int64_t len = (int64_t)length << 3;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$var($Object, var$2, $of(src));
					int64_t var$3 = srcOffset;
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(nullptr, var$1, var$2, var$3, $(base()), bufAddr, len, $Long::BYTES);
				} else {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$4, scope());
					$var($Object, var$5, $of(src));
					int64_t var$6 = srcOffset;
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copyMemory(nullptr, var$4, var$5, var$6, $(base()), bufAddr, len);
				}
			} catch ($Throwable& var$7) {
				$assign(var$0, var$7);
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

bool LongBuffer::hasArray() {
	return (this->hb != nullptr) && !this->isReadOnly$;
}

$Object* LongBuffer::array() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return $of(this->hb);
}

int32_t LongBuffer::arrayOffset() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return this->offset;
}

LongBuffer* LongBuffer::position(int32_t newPosition) {
	$Buffer::position(newPosition);
	return this;
}

LongBuffer* LongBuffer::limit(int32_t newLimit) {
	$Buffer::limit(newLimit);
	return this;
}

LongBuffer* LongBuffer::mark() {
	$Buffer::mark();
	return this;
}

LongBuffer* LongBuffer::reset() {
	$Buffer::reset();
	return this;
}

LongBuffer* LongBuffer::clear() {
	$Buffer::clear();
	return this;
}

LongBuffer* LongBuffer::flip() {
	$Buffer::flip();
	return this;
}

LongBuffer* LongBuffer::rewind() {
	$Buffer::rewind();
	return this;
}

$String* LongBuffer::toString() {
	$useLocalCurrentObjectStackCache();
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

int32_t LongBuffer::hashCode() {
	int32_t h = 1;
	int32_t p = position();
	for (int32_t i = limit() - 1; i >= p; --i) {
		h = 31 * h + (int32_t)get(i);
	}
	return h;
}

bool LongBuffer::equals(Object$* ob) {
	if ($equals(this, ob)) {
		return true;
	}
	if (!($instanceOf(LongBuffer, ob))) {
		return false;
	}
	$var(LongBuffer, that, $cast(LongBuffer, ob));
	int32_t thisPos = this->position();
	int32_t thisRem = this->limit() - thisPos;
	int32_t thatPos = $nc(that)->position();
	int32_t thatRem = that->limit() - thatPos;
	if (thisRem < 0 || thisRem != thatRem) {
		return false;
	}
	return $BufferMismatch::mismatch(this, thisPos, that, thatPos, thisRem) < 0;
}

int32_t LongBuffer::compareTo(LongBuffer* that) {
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
		int64_t var$0 = this->get(thisPos + i);
		return compare(var$0, that->get(thatPos + i));
	}
	return thisRem - thatRem;
}

int32_t LongBuffer::compare(int64_t x, int64_t y) {
	$init(LongBuffer);
	return $Long::compare(x, y);
}

int32_t LongBuffer::mismatch(LongBuffer* that) {
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

int32_t LongBuffer::compareTo(Object$* that) {
	return this->compareTo($cast(LongBuffer, that));
}

void clinit$LongBuffer($Class* class$) {
	LongBuffer::$assertionsDisabled = !LongBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($longs);
	LongBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($longs));
}

LongBuffer::LongBuffer() {
}

$Class* LongBuffer::load$($String* name, bool initialize) {
	$loadClass(LongBuffer, name, initialize, &_LongBuffer_ClassInfo_, clinit$LongBuffer, allocate$LongBuffer);
	return class$;
}

$Class* LongBuffer::class$ = nullptr;

	} // nio
} // java