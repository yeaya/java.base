#include <java/nio/DoubleBuffer.h>

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
#include <java/nio/HeapDoubleBuffer.h>
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
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $BufferMismatch = ::java::nio::BufferMismatch;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteOrder = ::java::nio::ByteOrder;
using $HeapDoubleBuffer = ::java::nio::HeapDoubleBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _DoubleBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DoubleBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DoubleBuffer, ARRAY_BASE_OFFSET)},
	{"hb", "[D", nullptr, $FINAL, $field(DoubleBuffer, hb)},
	{"offset", "I", nullptr, $FINAL, $field(DoubleBuffer, offset)},
	{"isReadOnly", "Z", nullptr, 0, $field(DoubleBuffer, isReadOnly$)},
	{}
};

$MethodInfo _DoubleBuffer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"duplicate", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(IIII[DILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DoubleBuffer::*)(int32_t,int32_t,int32_t,int32_t,$doubles*,int32_t,$MemorySegmentProxy*)>(&DoubleBuffer::init$))},
	{"<init>", "(IIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DoubleBuffer::*)(int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&DoubleBuffer::init$))},
	{"<init>", "([DJILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(DoubleBuffer::*)($doubles*,int64_t,int32_t,$MemorySegmentProxy*)>(&DoubleBuffer::init$))},
	{"allocate", "(I)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DoubleBuffer*(*)(int32_t)>(&DoubleBuffer::allocate))},
	{"array", "()[D", nullptr, $PUBLIC | $FINAL},
	{"arrayOffset", "()I", nullptr, $PUBLIC | $FINAL},
	{"asReadOnlyBuffer", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"clear", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $FINAL},
	{"compact", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"compare", "(DD)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(double,double)>(&DoubleBuffer::compare))},
	{"compareTo", "(Ljava/nio/DoubleBuffer;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"flip", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $FINAL},
	{"get", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(I)D", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "([DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"get", "([D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"get", "(I[DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"get", "(I[D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"getArray", "(I[DII)Ljava/nio/DoubleBuffer;", nullptr, $PRIVATE, $method(static_cast<DoubleBuffer*(DoubleBuffer::*)(int32_t,$doubles*,int32_t,int32_t)>(&DoubleBuffer::getArray))},
	{"hasArray", "()Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"limit", "(I)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $FINAL},
	{"mark", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $FINAL},
	{"mismatch", "(Ljava/nio/DoubleBuffer;)I", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $ABSTRACT},
	{"position", "(I)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $FINAL},
	{"put", "(D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(ID)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/DoubleBuffer;II)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "([DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "([D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $FINAL, $method(static_cast<DoubleBuffer*(DoubleBuffer::*)($doubles*)>(&DoubleBuffer::put))},
	{"put", "(I[DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"put", "(I[D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC},
	{"putArray", "(I[DII)Ljava/nio/DoubleBuffer;", nullptr, $PRIVATE, $method(static_cast<DoubleBuffer*(DoubleBuffer::*)(int32_t,$doubles*,int32_t,int32_t)>(&DoubleBuffer::putArray))},
	{"putBuffer", "(ILjava/nio/DoubleBuffer;II)V", nullptr, 0},
	{"reset", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $FINAL},
	{"rewind", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $FINAL},
	{"slice", "()Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"slice", "(II)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wrap", "([DII)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DoubleBuffer*(*)($doubles*,int32_t,int32_t)>(&DoubleBuffer::wrap))},
	{"wrap", "([D)Ljava/nio/DoubleBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DoubleBuffer*(*)($doubles*)>(&DoubleBuffer::wrap))},
	{}
};

$ClassInfo _DoubleBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.DoubleBuffer",
	"java.nio.Buffer",
	"java.lang.Comparable",
	_DoubleBuffer_FieldInfo_,
	_DoubleBuffer_MethodInfo_,
	"Ljava/nio/Buffer;Ljava/lang/Comparable<Ljava/nio/DoubleBuffer;>;"
};

$Object* allocate$DoubleBuffer($Class* clazz) {
	return $of($alloc(DoubleBuffer));
}

$Object* DoubleBuffer::clone() {
	 return this->$Buffer::clone();
}

void DoubleBuffer::finalize() {
	this->$Buffer::finalize();
}

bool DoubleBuffer::$assertionsDisabled = false;
int64_t DoubleBuffer::ARRAY_BASE_OFFSET = 0;

void DoubleBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $doubles* hb, int32_t offset, $MemorySegmentProxy* segment) {
	$Buffer::init$(mark, pos, lim, cap, segment);
	$set(this, hb, hb);
	this->offset = offset;
}

void DoubleBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $MemorySegmentProxy* segment) {
	DoubleBuffer::init$(mark, pos, lim, cap, nullptr, 0, segment);
}

void DoubleBuffer::init$($doubles* hb, int64_t addr, int32_t cap, $MemorySegmentProxy* segment) {
	$Buffer::init$(addr, cap, segment);
	$set(this, hb, hb);
	this->offset = 0;
}

$Object* DoubleBuffer::base() {
	return $of(this->hb);
}

DoubleBuffer* DoubleBuffer::allocate(int32_t capacity) {
	$init(DoubleBuffer);
	if (capacity < 0) {
		$throw($(createCapacityException(capacity)));
	}
	return $new($HeapDoubleBuffer, capacity, capacity, nullptr);
}

DoubleBuffer* DoubleBuffer::wrap($doubles* array, int32_t offset, int32_t length) {
	$init(DoubleBuffer);
	try {
		return $new($HeapDoubleBuffer, array, offset, length, nullptr);
	} catch ($IllegalArgumentException& x) {
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

DoubleBuffer* DoubleBuffer::wrap($doubles* array) {
	$init(DoubleBuffer);
	return wrap(array, 0, $nc(array)->length);
}

DoubleBuffer* DoubleBuffer::get($doubles* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	int32_t pos = position();
	if (length > limit() - pos) {
		$throwNew($BufferUnderflowException);
	}
	getArray(pos, dst, offset, length);
	position(pos + length);
	return this;
}

DoubleBuffer* DoubleBuffer::get($doubles* dst) {
	return get(dst, 0, $nc(dst)->length);
}

DoubleBuffer* DoubleBuffer::get(int32_t index, $doubles* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	getArray(index, dst, offset, length);
	return this;
}

DoubleBuffer* DoubleBuffer::get(int32_t index, $doubles* dst) {
	return get(index, dst, 0, $nc(dst)->length);
}

DoubleBuffer* DoubleBuffer::getArray(int32_t index, $doubles* dst, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)length << 3) > $Bits::JNI_COPY_TO_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 3);
		int64_t dstOffset = DoubleBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 3);
		int64_t len = (int64_t)length << 3;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, nullptr, $(base()), bufAddr, dst, dstOffset, len, $Double::BYTES);
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

DoubleBuffer* DoubleBuffer::put(DoubleBuffer* src) {
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

DoubleBuffer* DoubleBuffer::put(int32_t index, DoubleBuffer* src, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->limit());
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	putBuffer(index, src, offset, length);
	return this;
}

void DoubleBuffer::putBuffer(int32_t pos, DoubleBuffer* src, int32_t srcPos, int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($Object, srcBase, $nc(src)->base());
	if (!DoubleBuffer::$assertionsDisabled && !(srcBase != nullptr || src->isDirect())) {
		$throwNew($AssertionError);
	}
	$var($Object, base, this->base());
	if (!DoubleBuffer::$assertionsDisabled && !(base != nullptr || isDirect())) {
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
				$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, $(scope()), srcBase, srcAddr, base, addr, len, $Double::BYTES);
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

DoubleBuffer* DoubleBuffer::put($doubles* src, int32_t offset, int32_t length) {
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

DoubleBuffer* DoubleBuffer::put($doubles* src) {
	return put(src, 0, $nc(src)->length);
}

DoubleBuffer* DoubleBuffer::put(int32_t index, $doubles* src, int32_t offset, int32_t length) {
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	putArray(index, src, offset, length);
	return this;
}

DoubleBuffer* DoubleBuffer::put(int32_t index, $doubles* src) {
	return put(index, src, 0, $nc(src)->length);
}

DoubleBuffer* DoubleBuffer::putArray(int32_t index, $doubles* src, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)length << 3) > $Bits::JNI_COPY_FROM_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 3);
		int64_t srcOffset = DoubleBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 3);
		int64_t len = (int64_t)length << 3;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$var($Object, var$2, $of(src));
					int64_t var$3 = srcOffset;
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(nullptr, var$1, var$2, var$3, $(base()), bufAddr, len, $Double::BYTES);
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

bool DoubleBuffer::hasArray() {
	return (this->hb != nullptr) && !this->isReadOnly$;
}

$Object* DoubleBuffer::array() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return $of(this->hb);
}

int32_t DoubleBuffer::arrayOffset() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return this->offset;
}

DoubleBuffer* DoubleBuffer::position(int32_t newPosition) {
	$Buffer::position(newPosition);
	return this;
}

DoubleBuffer* DoubleBuffer::limit(int32_t newLimit) {
	$Buffer::limit(newLimit);
	return this;
}

DoubleBuffer* DoubleBuffer::mark() {
	$Buffer::mark();
	return this;
}

DoubleBuffer* DoubleBuffer::reset() {
	$Buffer::reset();
	return this;
}

DoubleBuffer* DoubleBuffer::clear() {
	$Buffer::clear();
	return this;
}

DoubleBuffer* DoubleBuffer::flip() {
	$Buffer::flip();
	return this;
}

DoubleBuffer* DoubleBuffer::rewind() {
	$Buffer::rewind();
	return this;
}

$String* DoubleBuffer::toString() {
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

int32_t DoubleBuffer::hashCode() {
	int32_t h = 1;
	int32_t p = position();
	for (int32_t i = limit() - 1; i >= p; --i) {
		h = 31 * h + $cast(int32_t, get(i));
	}
	return h;
}

bool DoubleBuffer::equals(Object$* ob) {
	if ($equals(this, ob)) {
		return true;
	}
	if (!($instanceOf(DoubleBuffer, ob))) {
		return false;
	}
	$var(DoubleBuffer, that, $cast(DoubleBuffer, ob));
	int32_t thisPos = this->position();
	int32_t thisRem = this->limit() - thisPos;
	int32_t thatPos = $nc(that)->position();
	int32_t thatRem = that->limit() - thatPos;
	if (thisRem < 0 || thisRem != thatRem) {
		return false;
	}
	return $BufferMismatch::mismatch(this, thisPos, that, thatPos, thisRem) < 0;
}

int32_t DoubleBuffer::compareTo(DoubleBuffer* that) {
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
		double var$0 = this->get(thisPos + i);
		return compare(var$0, that->get(thatPos + i));
	}
	return thisRem - thatRem;
}

int32_t DoubleBuffer::compare(double x, double y) {
	$init(DoubleBuffer);
	return ((x < y) ? -1 : (x > y) ? +1 : (x == y) ? 0 : $Double::isNaN(x) ? ($Double::isNaN(y) ? 0 : +1) : -1);
}

int32_t DoubleBuffer::mismatch(DoubleBuffer* that) {
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

int32_t DoubleBuffer::compareTo(Object$* that) {
	return this->compareTo($cast(DoubleBuffer, that));
}

void clinit$DoubleBuffer($Class* class$) {
	DoubleBuffer::$assertionsDisabled = !DoubleBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($doubles);
	DoubleBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($doubles));
}

DoubleBuffer::DoubleBuffer() {
}

$Class* DoubleBuffer::load$($String* name, bool initialize) {
	$loadClass(DoubleBuffer, name, initialize, &_DoubleBuffer_ClassInfo_, clinit$DoubleBuffer, allocate$DoubleBuffer);
	return class$;
}

$Class* DoubleBuffer::class$ = nullptr;

	} // nio
} // java