#include <java/nio/ShortBuffer.h>

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
#include <java/nio/HeapShortBuffer.h>
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
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $StringBuffer = ::java::lang::StringBuffer;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $BufferMismatch = ::java::nio::BufferMismatch;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteOrder = ::java::nio::ByteOrder;
using $HeapShortBuffer = ::java::nio::HeapShortBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

$FieldInfo _ShortBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ShortBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ShortBuffer, ARRAY_BASE_OFFSET)},
	{"hb", "[S", nullptr, $FINAL, $field(ShortBuffer, hb)},
	{"offset", "I", nullptr, $FINAL, $field(ShortBuffer, offset)},
	{"isReadOnly", "Z", nullptr, 0, $field(ShortBuffer, isReadOnly$)},
	{}
};

$MethodInfo _ShortBuffer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"duplicate", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(IIII[SILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ShortBuffer::*)(int32_t,int32_t,int32_t,int32_t,$shorts*,int32_t,$MemorySegmentProxy*)>(&ShortBuffer::init$))},
	{"<init>", "(IIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ShortBuffer::*)(int32_t,int32_t,int32_t,int32_t,$MemorySegmentProxy*)>(&ShortBuffer::init$))},
	{"<init>", "([SJILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(static_cast<void(ShortBuffer::*)($shorts*,int64_t,int32_t,$MemorySegmentProxy*)>(&ShortBuffer::init$))},
	{"allocate", "(I)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ShortBuffer*(*)(int32_t)>(&ShortBuffer::allocate))},
	{"array", "()[S", nullptr, $PUBLIC | $FINAL},
	{"arrayOffset", "()I", nullptr, $PUBLIC | $FINAL},
	{"asReadOnlyBuffer", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"base", "()Ljava/lang/Object;", nullptr, 0},
	{"clear", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $FINAL},
	{"compact", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"compare", "(SS)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int16_t,int16_t)>(&ShortBuffer::compare))},
	{"compareTo", "(Ljava/nio/ShortBuffer;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"flip", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $FINAL},
	{"get", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(I)S", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "([SII)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"get", "([S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"get", "(I[SII)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"get", "(I[S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"getArray", "(I[SII)Ljava/nio/ShortBuffer;", nullptr, $PRIVATE, $method(static_cast<ShortBuffer*(ShortBuffer::*)(int32_t,$shorts*,int32_t,int32_t)>(&ShortBuffer::getArray))},
	{"hasArray", "()Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDirect", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"limit", "(I)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $FINAL},
	{"mark", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $FINAL},
	{"mismatch", "(Ljava/nio/ShortBuffer;)I", nullptr, $PUBLIC},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $ABSTRACT},
	{"position", "(I)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $FINAL},
	{"put", "(S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(IS)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/nio/ShortBuffer;)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "(ILjava/nio/ShortBuffer;II)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "([SII)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "([S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $FINAL, $method(static_cast<ShortBuffer*(ShortBuffer::*)($shorts*)>(&ShortBuffer::put))},
	{"put", "(I[SII)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"put", "(I[S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC},
	{"putArray", "(I[SII)Ljava/nio/ShortBuffer;", nullptr, $PRIVATE, $method(static_cast<ShortBuffer*(ShortBuffer::*)(int32_t,$shorts*,int32_t,int32_t)>(&ShortBuffer::putArray))},
	{"putBuffer", "(ILjava/nio/ShortBuffer;II)V", nullptr, 0},
	{"reset", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $FINAL},
	{"rewind", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $FINAL},
	{"slice", "()Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"slice", "(II)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wrap", "([SII)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ShortBuffer*(*)($shorts*,int32_t,int32_t)>(&ShortBuffer::wrap))},
	{"wrap", "([S)Ljava/nio/ShortBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ShortBuffer*(*)($shorts*)>(&ShortBuffer::wrap))},
	{}
};

$ClassInfo _ShortBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.ShortBuffer",
	"java.nio.Buffer",
	"java.lang.Comparable",
	_ShortBuffer_FieldInfo_,
	_ShortBuffer_MethodInfo_,
	"Ljava/nio/Buffer;Ljava/lang/Comparable<Ljava/nio/ShortBuffer;>;"
};

$Object* allocate$ShortBuffer($Class* clazz) {
	return $of($alloc(ShortBuffer));
}

$Object* ShortBuffer::clone() {
	 return this->$Buffer::clone();
}

void ShortBuffer::finalize() {
	this->$Buffer::finalize();
}

bool ShortBuffer::$assertionsDisabled = false;
int64_t ShortBuffer::ARRAY_BASE_OFFSET = 0;

void ShortBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $shorts* hb, int32_t offset, $MemorySegmentProxy* segment) {
	$Buffer::init$(mark, pos, lim, cap, segment);
	$set(this, hb, hb);
	this->offset = offset;
}

void ShortBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $MemorySegmentProxy* segment) {
	ShortBuffer::init$(mark, pos, lim, cap, nullptr, 0, segment);
}

void ShortBuffer::init$($shorts* hb, int64_t addr, int32_t cap, $MemorySegmentProxy* segment) {
	$Buffer::init$(addr, cap, segment);
	$set(this, hb, hb);
	this->offset = 0;
}

$Object* ShortBuffer::base() {
	return $of(this->hb);
}

ShortBuffer* ShortBuffer::allocate(int32_t capacity) {
	$init(ShortBuffer);
	if (capacity < 0) {
		$throw($(createCapacityException(capacity)));
	}
	return $new($HeapShortBuffer, capacity, capacity, nullptr);
}

ShortBuffer* ShortBuffer::wrap($shorts* array, int32_t offset, int32_t length) {
	$init(ShortBuffer);
	try {
		return $new($HeapShortBuffer, array, offset, length, nullptr);
	} catch ($IllegalArgumentException& x) {
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

ShortBuffer* ShortBuffer::wrap($shorts* array) {
	$init(ShortBuffer);
	return wrap(array, 0, $nc(array)->length);
}

ShortBuffer* ShortBuffer::get($shorts* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	int32_t pos = position();
	if (length > limit() - pos) {
		$throwNew($BufferUnderflowException);
	}
	getArray(pos, dst, offset, length);
	position(pos + length);
	return this;
}

ShortBuffer* ShortBuffer::get($shorts* dst) {
	return get(dst, 0, $nc(dst)->length);
}

ShortBuffer* ShortBuffer::get(int32_t index, $shorts* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	getArray(index, dst, offset, length);
	return this;
}

ShortBuffer* ShortBuffer::get(int32_t index, $shorts* dst) {
	return get(index, dst, 0, $nc(dst)->length);
}

ShortBuffer* ShortBuffer::getArray(int32_t index, $shorts* dst, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)length << 1) > $Bits::JNI_COPY_TO_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 1);
		int64_t dstOffset = ShortBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 1);
		int64_t len = (int64_t)length << 1;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, nullptr, $(base()), bufAddr, dst, dstOffset, len, $Short::BYTES);
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

ShortBuffer* ShortBuffer::put(ShortBuffer* src) {
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

ShortBuffer* ShortBuffer::put(int32_t index, ShortBuffer* src, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->limit());
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	putBuffer(index, src, offset, length);
	return this;
}

void ShortBuffer::putBuffer(int32_t pos, ShortBuffer* src, int32_t srcPos, int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($Object, srcBase, $nc(src)->base());
	if (!ShortBuffer::$assertionsDisabled && !(srcBase != nullptr || src->isDirect())) {
		$throwNew($AssertionError);
	}
	$var($Object, base, this->base());
	if (!ShortBuffer::$assertionsDisabled && !(base != nullptr || isDirect())) {
		$throwNew($AssertionError);
	}
	int64_t srcAddr = src->address + ((int64_t)srcPos << 1);
	int64_t addr = this->address + ((int64_t)pos << 1);
	int64_t len = (int64_t)n << 1;
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->order() != src->order()) {
				$init($Buffer);
				$var($ScopedMemoryAccess$Scope, var$1, src->scope());
				$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, $(scope()), srcBase, srcAddr, base, addr, len, $Short::BYTES);
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

ShortBuffer* ShortBuffer::put($shorts* src, int32_t offset, int32_t length) {
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

ShortBuffer* ShortBuffer::put($shorts* src) {
	return put(src, 0, $nc(src)->length);
}

ShortBuffer* ShortBuffer::put(int32_t index, $shorts* src, int32_t offset, int32_t length) {
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	putArray(index, src, offset, length);
	return this;
}

ShortBuffer* ShortBuffer::put(int32_t index, $shorts* src) {
	return put(index, src, 0, $nc(src)->length);
}

ShortBuffer* ShortBuffer::putArray(int32_t index, $shorts* src, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (((int64_t)length << 1) > $Bits::JNI_COPY_FROM_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 1);
		int64_t srcOffset = ShortBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 1);
		int64_t len = (int64_t)length << 1;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$var($Object, var$2, $of(src));
					int64_t var$3 = srcOffset;
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(nullptr, var$1, var$2, var$3, $(base()), bufAddr, len, $Short::BYTES);
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

bool ShortBuffer::hasArray() {
	return (this->hb != nullptr) && !this->isReadOnly$;
}

$Object* ShortBuffer::array() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return $of(this->hb);
}

int32_t ShortBuffer::arrayOffset() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return this->offset;
}

ShortBuffer* ShortBuffer::position(int32_t newPosition) {
	$Buffer::position(newPosition);
	return this;
}

ShortBuffer* ShortBuffer::limit(int32_t newLimit) {
	$Buffer::limit(newLimit);
	return this;
}

ShortBuffer* ShortBuffer::mark() {
	$Buffer::mark();
	return this;
}

ShortBuffer* ShortBuffer::reset() {
	$Buffer::reset();
	return this;
}

ShortBuffer* ShortBuffer::clear() {
	$Buffer::clear();
	return this;
}

ShortBuffer* ShortBuffer::flip() {
	$Buffer::flip();
	return this;
}

ShortBuffer* ShortBuffer::rewind() {
	$Buffer::rewind();
	return this;
}

$String* ShortBuffer::toString() {
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

int32_t ShortBuffer::hashCode() {
	int32_t h = 1;
	int32_t p = position();
	for (int32_t i = limit() - 1; i >= p; --i) {
		h = 31 * h + (int32_t)get(i);
	}
	return h;
}

bool ShortBuffer::equals(Object$* ob) {
	if ($equals(this, ob)) {
		return true;
	}
	if (!($instanceOf(ShortBuffer, ob))) {
		return false;
	}
	$var(ShortBuffer, that, $cast(ShortBuffer, ob));
	int32_t thisPos = this->position();
	int32_t thisRem = this->limit() - thisPos;
	int32_t thatPos = $nc(that)->position();
	int32_t thatRem = that->limit() - thatPos;
	if (thisRem < 0 || thisRem != thatRem) {
		return false;
	}
	return $BufferMismatch::mismatch(this, thisPos, that, thatPos, thisRem) < 0;
}

int32_t ShortBuffer::compareTo(ShortBuffer* that) {
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
		int16_t var$0 = this->get(thisPos + i);
		return compare(var$0, that->get(thatPos + i));
	}
	return thisRem - thatRem;
}

int32_t ShortBuffer::compare(int16_t x, int16_t y) {
	$init(ShortBuffer);
	return $Short::compare(x, y);
}

int32_t ShortBuffer::mismatch(ShortBuffer* that) {
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

int32_t ShortBuffer::compareTo(Object$* that) {
	return this->compareTo($cast(ShortBuffer, that));
}

void clinit$ShortBuffer($Class* class$) {
	ShortBuffer::$assertionsDisabled = !ShortBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($shorts);
	ShortBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($shorts));
}

ShortBuffer::ShortBuffer() {
}

$Class* ShortBuffer::load$($String* name, bool initialize) {
	$loadClass(ShortBuffer, name, initialize, &_ShortBuffer_ClassInfo_, clinit$ShortBuffer, allocate$ShortBuffer);
	return class$;
}

$Class* ShortBuffer::class$ = nullptr;

	} // nio
} // java