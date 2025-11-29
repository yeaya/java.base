#include <java/nio/FloatBuffer.h>

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
#include <java/nio/HeapFloatBuffer.h>
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
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
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
using $HeapFloatBuffer = ::java::nio::HeapFloatBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _FloatBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FloatBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatBuffer, ARRAY_BASE_OFFSET)},
	{"hb", "[F", nullptr, $FINAL, $field(FloatBuffer, hb)},
	{"offset", "I", nullptr, $FINAL, $field(FloatBuffer, offset)},
	{"isReadOnly", "Z", nullptr, 0, $field(FloatBuffer, isReadOnly$)},
	{}
};

$MethodInfo _FloatBuffer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"duplicate", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(IIII[FILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(FloatBuffer::*)(int32_t,int32_t,int32_t,int32_t,$floats*,int32_t,$MemorySegmentProxy*)>(&FloatBuffer::init$))},
	{"<init>", "(IIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(FloatBuffer::*)(int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&FloatBuffer::init$))},
	{"<init>", "([FJILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(FloatBuffer::*)($floats*,int64_t,int32_t,$MemorySegmentProxy*)>(&FloatBuffer::init$))},
	{"allocate", "(I)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FloatBuffer*(*)(int32_t)>(&FloatBuffer::allocate))},
	{"array", "()[F", nullptr, $PUBLIC | $FINAL},
	{"arrayOffset", "()I", nullptr, $PUBLIC | $FINAL},
	{"asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"clear", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $FINAL},
	{"compact", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"compare", "(FF)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(float,float)>(&FloatBuffer::compare))},
	{"compareTo", "(Ljava/nio/FloatBuffer;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"flip", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $FINAL},
	{"get", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(I)F", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "([FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"get", "([F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"get", "(I[FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"get", "(I[F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"getArray", "(I[FII)Ljava/nio/FloatBuffer;", nullptr, $PRIVATE, $method(static_cast<FloatBuffer*(FloatBuffer::*)(int32_t,$floats*,int32_t,int32_t)>(&FloatBuffer::getArray))},
	{"hasArray", "()Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"limit", "(I)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $FINAL},
	{"mark", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $FINAL},
	{"mismatch", "(Ljava/nio/FloatBuffer;)I", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $ABSTRACT},
	{"position", "(I)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $FINAL},
	{"put", "(F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(IF)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/FloatBuffer;II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "([FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "([F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $FINAL, $method(static_cast<FloatBuffer*(FloatBuffer::*)($floats*)>(&FloatBuffer::put))},
	{"put", "(I[FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"put", "(I[F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC},
	{"putArray", "(I[FII)Ljava/nio/FloatBuffer;", nullptr, $PRIVATE, $method(static_cast<FloatBuffer*(FloatBuffer::*)(int32_t,$floats*,int32_t,int32_t)>(&FloatBuffer::putArray))},
	{"putBuffer", "(ILjava/nio/FloatBuffer;II)V", nullptr, 0},
	{"reset", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $FINAL},
	{"rewind", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $FINAL},
	{"slice", "()Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"slice", "(II)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wrap", "([FII)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FloatBuffer*(*)($floats*,int32_t,int32_t)>(&FloatBuffer::wrap))},
	{"wrap", "([F)Ljava/nio/FloatBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FloatBuffer*(*)($floats*)>(&FloatBuffer::wrap))},
	{}
};

$ClassInfo _FloatBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.FloatBuffer",
	"java.nio.Buffer",
	"java.lang.Comparable",
	_FloatBuffer_FieldInfo_,
	_FloatBuffer_MethodInfo_,
	"Ljava/nio/Buffer;Ljava/lang/Comparable<Ljava/nio/FloatBuffer;>;"
};

$Object* allocate$FloatBuffer($Class* clazz) {
	return $of($alloc(FloatBuffer));
}

$Object* FloatBuffer::clone() {
	 return this->$Buffer::clone();
}

void FloatBuffer::finalize() {
	this->$Buffer::finalize();
}

bool FloatBuffer::$assertionsDisabled = false;
int64_t FloatBuffer::ARRAY_BASE_OFFSET = 0;

void FloatBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $floats* hb, int32_t offset, $MemorySegmentProxy* segment) {
	$Buffer::init$(mark, pos, lim, cap, segment);
	$set(this, hb, hb);
	this->offset = offset;
}

void FloatBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $MemorySegmentProxy* segment) {
	FloatBuffer::init$(mark, pos, lim, cap, nullptr, 0, segment);
}

void FloatBuffer::init$($floats* hb, int64_t addr, int32_t cap, $MemorySegmentProxy* segment) {
	$Buffer::init$(addr, cap, segment);
	$set(this, hb, hb);
	this->offset = 0;
}

$Object* FloatBuffer::base() {
	return $of(this->hb);
}

FloatBuffer* FloatBuffer::allocate(int32_t capacity) {
	$init(FloatBuffer);
	if (capacity < 0) {
		$throw($(createCapacityException(capacity)));
	}
	return $new($HeapFloatBuffer, capacity, capacity, nullptr);
}

FloatBuffer* FloatBuffer::wrap($floats* array, int32_t offset, int32_t length) {
	$init(FloatBuffer);
	try {
		return $new($HeapFloatBuffer, array, offset, length, nullptr);
	} catch ($IllegalArgumentException& x) {
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

FloatBuffer* FloatBuffer::wrap($floats* array) {
	$init(FloatBuffer);
	return wrap(array, 0, $nc(array)->length);
}

FloatBuffer* FloatBuffer::get($floats* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	int32_t pos = position();
	if (length > limit() - pos) {
		$throwNew($BufferUnderflowException);
	}
	getArray(pos, dst, offset, length);
	position(pos + length);
	return this;
}

FloatBuffer* FloatBuffer::get($floats* dst) {
	return get(dst, 0, $nc(dst)->length);
}

FloatBuffer* FloatBuffer::get(int32_t index, $floats* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	getArray(index, dst, offset, length);
	return this;
}

FloatBuffer* FloatBuffer::get(int32_t index, $floats* dst) {
	return get(index, dst, 0, $nc(dst)->length);
}

FloatBuffer* FloatBuffer::getArray(int32_t index, $floats* dst, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)length << 2) > $Bits::JNI_COPY_TO_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 2);
		int64_t dstOffset = FloatBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 2);
		int64_t len = (int64_t)length << 2;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, nullptr, $(base()), bufAddr, dst, dstOffset, len, $Float::BYTES);
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

FloatBuffer* FloatBuffer::put(FloatBuffer* src) {
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

FloatBuffer* FloatBuffer::put(int32_t index, FloatBuffer* src, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->limit());
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	putBuffer(index, src, offset, length);
	return this;
}

void FloatBuffer::putBuffer(int32_t pos, FloatBuffer* src, int32_t srcPos, int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($Object, srcBase, $nc(src)->base());
	if (!FloatBuffer::$assertionsDisabled && !(srcBase != nullptr || src->isDirect())) {
		$throwNew($AssertionError);
	}
	$var($Object, base, this->base());
	if (!FloatBuffer::$assertionsDisabled && !(base != nullptr || isDirect())) {
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
				$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, $(scope()), srcBase, srcAddr, base, addr, len, $Float::BYTES);
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

FloatBuffer* FloatBuffer::put($floats* src, int32_t offset, int32_t length) {
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

FloatBuffer* FloatBuffer::put($floats* src) {
	return put(src, 0, $nc(src)->length);
}

FloatBuffer* FloatBuffer::put(int32_t index, $floats* src, int32_t offset, int32_t length) {
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	putArray(index, src, offset, length);
	return this;
}

FloatBuffer* FloatBuffer::put(int32_t index, $floats* src) {
	return put(index, src, 0, $nc(src)->length);
}

FloatBuffer* FloatBuffer::putArray(int32_t index, $floats* src, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)length << 2) > $Bits::JNI_COPY_FROM_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 2);
		int64_t srcOffset = FloatBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 2);
		int64_t len = (int64_t)length << 2;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$var($Object, var$2, $of(src));
					int64_t var$3 = srcOffset;
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(nullptr, var$1, var$2, var$3, $(base()), bufAddr, len, $Float::BYTES);
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

bool FloatBuffer::hasArray() {
	return (this->hb != nullptr) && !this->isReadOnly$;
}

$Object* FloatBuffer::array() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return $of(this->hb);
}

int32_t FloatBuffer::arrayOffset() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return this->offset;
}

FloatBuffer* FloatBuffer::position(int32_t newPosition) {
	$Buffer::position(newPosition);
	return this;
}

FloatBuffer* FloatBuffer::limit(int32_t newLimit) {
	$Buffer::limit(newLimit);
	return this;
}

FloatBuffer* FloatBuffer::mark() {
	$Buffer::mark();
	return this;
}

FloatBuffer* FloatBuffer::reset() {
	$Buffer::reset();
	return this;
}

FloatBuffer* FloatBuffer::clear() {
	$Buffer::clear();
	return this;
}

FloatBuffer* FloatBuffer::flip() {
	$Buffer::flip();
	return this;
}

FloatBuffer* FloatBuffer::rewind() {
	$Buffer::rewind();
	return this;
}

$String* FloatBuffer::toString() {
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

int32_t FloatBuffer::hashCode() {
	int32_t h = 1;
	int32_t p = position();
	for (int32_t i = limit() - 1; i >= p; --i) {
		h = 31 * h + $cast(int32_t, get(i));
	}
	return h;
}

bool FloatBuffer::equals(Object$* ob) {
	if ($equals(this, ob)) {
		return true;
	}
	if (!($instanceOf(FloatBuffer, ob))) {
		return false;
	}
	$var(FloatBuffer, that, $cast(FloatBuffer, ob));
	int32_t thisPos = this->position();
	int32_t thisRem = this->limit() - thisPos;
	int32_t thatPos = $nc(that)->position();
	int32_t thatRem = that->limit() - thatPos;
	if (thisRem < 0 || thisRem != thatRem) {
		return false;
	}
	return $BufferMismatch::mismatch(this, thisPos, that, thatPos, thisRem) < 0;
}

int32_t FloatBuffer::compareTo(FloatBuffer* that) {
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
		float var$0 = this->get(thisPos + i);
		return compare(var$0, that->get(thatPos + i));
	}
	return thisRem - thatRem;
}

int32_t FloatBuffer::compare(float x, float y) {
	$init(FloatBuffer);
	return ((x < y) ? -1 : (x > y) ? +1 : (x == y) ? 0 : $Float::isNaN(x) ? ($Float::isNaN(y) ? 0 : +1) : -1);
}

int32_t FloatBuffer::mismatch(FloatBuffer* that) {
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

int32_t FloatBuffer::compareTo(Object$* that) {
	return this->compareTo($cast(FloatBuffer, that));
}

void clinit$FloatBuffer($Class* class$) {
	FloatBuffer::$assertionsDisabled = !FloatBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($floats);
	FloatBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($floats));
}

FloatBuffer::FloatBuffer() {
}

$Class* FloatBuffer::load$($String* name, bool initialize) {
	$loadClass(FloatBuffer, name, initialize, &_FloatBuffer_ClassInfo_, clinit$FloatBuffer, allocate$FloatBuffer);
	return class$;
}

$Class* FloatBuffer::class$ = nullptr;

	} // nio
} // java