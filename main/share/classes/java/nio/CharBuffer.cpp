#include <java/nio/CharBuffer.h>

#include <java/io/Serializable.h>
#include <java/lang/Appendable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/nio/Bits.h>
#include <java/nio/Buffer.h>
#include <java/nio/BufferMismatch.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBufferSpliterator.h>
#include <java/nio/HeapCharBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/nio/StringCharBuffer.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/StreamSupport.h>
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
#undef SPLITERATOR_CHARACTERISTICS
#undef UNSAFE

using $Serializable = ::java::io::Serializable;
using $Appendable = ::java::lang::Appendable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Reference = ::java::lang::ref::Reference;
using $Bits = ::java::nio::Bits;
using $Buffer = ::java::nio::Buffer;
using $BufferMismatch = ::java::nio::BufferMismatch;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBufferSpliterator = ::java::nio::CharBufferSpliterator;
using $HeapCharBuffer = ::java::nio::HeapCharBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $StringCharBuffer = ::java::nio::StringCharBuffer;
using $Objects = ::java::util::Objects;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Supplier = ::java::util::function::Supplier;
using $IntStream = ::java::util::stream::IntStream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;
using $ScopedMemoryAccess = ::jdk::internal::misc::ScopedMemoryAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace nio {

class CharBuffer$$Lambda$lambda$chars$0 : public $Supplier {
	$class(CharBuffer$$Lambda$lambda$chars$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(CharBuffer* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$chars$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharBuffer$$Lambda$lambda$chars$0>());
	}
	CharBuffer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CharBuffer$$Lambda$lambda$chars$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CharBuffer$$Lambda$lambda$chars$0, inst$)},
	{}
};
$MethodInfo CharBuffer$$Lambda$lambda$chars$0::methodInfos[3] = {
	{"<init>", "(Ljava/nio/CharBuffer;)V", nullptr, $PUBLIC, $method(CharBuffer$$Lambda$lambda$chars$0, init$, void, CharBuffer*)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CharBuffer$$Lambda$lambda$chars$0, get, $Object*)},
	{}
};
$ClassInfo CharBuffer$$Lambda$lambda$chars$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.CharBuffer$$Lambda$lambda$chars$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* CharBuffer$$Lambda$lambda$chars$0::load$($String* name, bool initialize) {
	$loadClass(CharBuffer$$Lambda$lambda$chars$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharBuffer$$Lambda$lambda$chars$0::class$ = nullptr;

$FieldInfo _CharBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CharBuffer, $assertionsDisabled)},
	{"ARRAY_BASE_OFFSET", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CharBuffer, ARRAY_BASE_OFFSET)},
	{"hb", "[C", nullptr, $FINAL, $field(CharBuffer, hb)},
	{"offset", "I", nullptr, $FINAL, $field(CharBuffer, offset)},
	{"isReadOnly", "Z", nullptr, 0, $field(CharBuffer, isReadOnly$)},
	{}
};

$MethodInfo _CharBuffer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"duplicate", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(IIII[CILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(CharBuffer, init$, void, int32_t, int32_t, int32_t, int32_t, $chars*, int32_t, $MemorySegmentProxy*)},
	{"<init>", "(IIIILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(CharBuffer, init$, void, int32_t, int32_t, int32_t, int32_t, $MemorySegmentProxy*)},
	{"<init>", "([CJILjdk/internal/access/foreign/MemorySegmentProxy;)V", nullptr, 0, $method(CharBuffer, init$, void, $chars*, int64_t, int32_t, $MemorySegmentProxy*)},
	{"allocate", "(I)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $STATIC, $staticMethod(CharBuffer, allocate, CharBuffer*, int32_t)},
	{"append", "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, append, $Appendable*, $CharSequence*)},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, append, $Appendable*, $CharSequence*, int32_t, int32_t)},
	{"append", "(C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, append, $Appendable*, char16_t)},
	{"array", "()[C", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, array, $Object*)},
	{"arrayOffset", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, arrayOffset, int32_t)},
	{"asReadOnlyBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharBuffer, asReadOnlyBuffer, CharBuffer*)},
	{"base", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(CharBuffer, base, $Object*)},
	{"charAt", "(I)C", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, charAt, char16_t, int32_t)},
	{"charRegionOrder", "()Ljava/nio/ByteOrder;", nullptr, $ABSTRACT, $virtualMethod(CharBuffer, charRegionOrder, $ByteOrder*)},
	{"chars", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, chars, $IntStream*)},
	{"clear", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, clear, CharBuffer*)},
	{"compact", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharBuffer, compact, CharBuffer*)},
	{"compare", "(CC)I", nullptr, $PRIVATE | $STATIC, $staticMethod(CharBuffer, compare, int32_t, char16_t, char16_t)},
	{"compareTo", "(Ljava/nio/CharBuffer;)I", nullptr, $PUBLIC, $virtualMethod(CharBuffer, compareTo, int32_t, CharBuffer*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CharBuffer, compareTo, int32_t, Object$*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CharBuffer, equals, bool, Object$*)},
	{"flip", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, flip, CharBuffer*)},
	{"get", "()C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharBuffer, get, char16_t)},
	{"get", "(I)C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharBuffer, get, char16_t, int32_t)},
	{"get", "([CII)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, get, CharBuffer*, $chars*, int32_t, int32_t)},
	{"get", "([C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, get, CharBuffer*, $chars*)},
	{"get", "(I[CII)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, get, CharBuffer*, int32_t, $chars*, int32_t, int32_t)},
	{"get", "(I[C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, get, CharBuffer*, int32_t, $chars*)},
	{"getArray", "(I[CII)Ljava/nio/CharBuffer;", nullptr, $PRIVATE, $method(CharBuffer, getArray, CharBuffer*, int32_t, $chars*, int32_t, int32_t)},
	{"getUnchecked", "(I)C", nullptr, $ABSTRACT, $virtualMethod(CharBuffer, getUnchecked, char16_t, int32_t)},
	{"hasArray", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, hasArray, bool)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(CharBuffer, hashCode, int32_t)},
	{"isAddressable", "()Z", nullptr, 0, $virtualMethod(CharBuffer, isAddressable, bool)},
	{"isDirect", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEmpty", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, isEmpty, bool)},
	{"lambda$chars$0", "()Ljava/util/Spliterator$OfInt;", nullptr, $PRIVATE | $SYNTHETIC, $method(CharBuffer, lambda$chars$0, $Spliterator$OfInt*)},
	{"length", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, length, int32_t)},
	{"limit", "(I)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, limit, CharBuffer*, int32_t)},
	{"mark", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, mark, CharBuffer*)},
	{"mismatch", "(Ljava/nio/CharBuffer;)I", nullptr, $PUBLIC, $virtualMethod(CharBuffer, mismatch, int32_t, CharBuffer*)},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharBuffer, order, $ByteOrder*)},
	{"position", "(I)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, position, CharBuffer*, int32_t)},
	{"put", "(C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharBuffer, put, CharBuffer*, char16_t)},
	{"put", "(IC)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharBuffer, put, CharBuffer*, int32_t, char16_t)},
	{"put", "(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, put, CharBuffer*, CharBuffer*)},
	{"put", "(ILjava/nio/CharBuffer;II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, put, CharBuffer*, int32_t, CharBuffer*, int32_t, int32_t)},
	{"put", "([CII)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, put, CharBuffer*, $chars*, int32_t, int32_t)},
	{"put", "([C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL, $method(CharBuffer, put, CharBuffer*, $chars*)},
	{"put", "(I[CII)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, put, CharBuffer*, int32_t, $chars*, int32_t, int32_t)},
	{"put", "(I[C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, put, CharBuffer*, int32_t, $chars*)},
	{"put", "(Ljava/lang/String;II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, put, CharBuffer*, $String*, int32_t, int32_t)},
	{"put", "(Ljava/lang/String;)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL, $method(CharBuffer, put, CharBuffer*, $String*)},
	{"putArray", "(I[CII)Ljava/nio/CharBuffer;", nullptr, $PRIVATE, $method(CharBuffer, putArray, CharBuffer*, int32_t, $chars*, int32_t, int32_t)},
	{"putBuffer", "(ILjava/nio/CharBuffer;II)V", nullptr, 0, $virtualMethod(CharBuffer, putBuffer, void, int32_t, CharBuffer*, int32_t, int32_t)},
	{"read", "(Ljava/nio/CharBuffer;)I", nullptr, $PUBLIC, $virtualMethod(CharBuffer, read, int32_t, CharBuffer*), "java.io.IOException"},
	{"reset", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, reset, CharBuffer*)},
	{"rewind", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL, $virtualMethod(CharBuffer, rewind, CharBuffer*)},
	{"slice", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"slice", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CharBuffer, toString, $String*)},
	{"toString", "(II)Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(CharBuffer, toString, $String*, int32_t, int32_t)},
	{"wrap", "([CII)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $STATIC, $staticMethod(CharBuffer, wrap, CharBuffer*, $chars*, int32_t, int32_t)},
	{"wrap", "([C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $STATIC, $staticMethod(CharBuffer, wrap, CharBuffer*, $chars*)},
	{"wrap", "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $STATIC, $staticMethod(CharBuffer, wrap, CharBuffer*, $CharSequence*, int32_t, int32_t)},
	{"wrap", "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $STATIC, $staticMethod(CharBuffer, wrap, CharBuffer*, $CharSequence*)},
	{}
};

$ClassInfo _CharBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.CharBuffer",
	"java.nio.Buffer",
	"java.lang.Comparable,java.lang.Appendable,java.lang.CharSequence,java.lang.Readable",
	_CharBuffer_FieldInfo_,
	_CharBuffer_MethodInfo_,
	"Ljava/nio/Buffer;Ljava/lang/Comparable<Ljava/nio/CharBuffer;>;Ljava/lang/Appendable;Ljava/lang/CharSequence;Ljava/lang/Readable;"
};

$Object* allocate$CharBuffer($Class* clazz) {
	return $of($alloc(CharBuffer));
}

$Object* CharBuffer::clone() {
	 return this->$Buffer::clone();
}

void CharBuffer::finalize() {
	this->$Buffer::finalize();
}

bool CharBuffer::$assertionsDisabled = false;
int64_t CharBuffer::ARRAY_BASE_OFFSET = 0;

void CharBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $chars* hb, int32_t offset, $MemorySegmentProxy* segment) {
	$Buffer::init$(mark, pos, lim, cap, segment);
	$set(this, hb, hb);
	this->offset = offset;
}

void CharBuffer::init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $MemorySegmentProxy* segment) {
	CharBuffer::init$(mark, pos, lim, cap, nullptr, 0, segment);
}

void CharBuffer::init$($chars* hb, int64_t addr, int32_t cap, $MemorySegmentProxy* segment) {
	$Buffer::init$(addr, cap, segment);
	$set(this, hb, hb);
	this->offset = 0;
}

$Object* CharBuffer::base() {
	return $of(this->hb);
}

CharBuffer* CharBuffer::allocate(int32_t capacity) {
	$init(CharBuffer);
	if (capacity < 0) {
		$throw($(createCapacityException(capacity)));
	}
	return $new($HeapCharBuffer, capacity, capacity, nullptr);
}

CharBuffer* CharBuffer::wrap($chars* array, int32_t offset, int32_t length) {
	$init(CharBuffer);
	try {
		return $new($HeapCharBuffer, array, offset, length, nullptr);
	} catch ($IllegalArgumentException& x) {
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

CharBuffer* CharBuffer::wrap($chars* array) {
	$init(CharBuffer);
	return wrap(array, 0, $nc(array)->length);
}

int32_t CharBuffer::read(CharBuffer* target) {
	int32_t limit = this->limit();
	int32_t pos = position();
	int32_t remaining = limit - pos;
	if (!CharBuffer::$assertionsDisabled && !(remaining >= 0)) {
		$throwNew($AssertionError);
	}
	if (remaining <= 0) {
		return -1;
	}
	int32_t targetRemaining = $nc(target)->remaining();
	if (!CharBuffer::$assertionsDisabled && !(targetRemaining >= 0)) {
		$throwNew($AssertionError);
	}
	if (targetRemaining <= 0) {
		return 0;
	}
	int32_t n = $Math::min(remaining, targetRemaining);
	if (targetRemaining < remaining) {
		this->limit(pos + n);
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (n > 0) {
				target->put(this);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->limit(limit);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return n;
}

CharBuffer* CharBuffer::wrap($CharSequence* csq, int32_t start, int32_t end) {
	$init(CharBuffer);
	try {
		return $new($StringCharBuffer, csq, start, end);
	} catch ($IllegalArgumentException& x) {
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

CharBuffer* CharBuffer::wrap($CharSequence* csq) {
	$init(CharBuffer);
	return wrap(csq, 0, $nc(csq)->length());
}

CharBuffer* CharBuffer::get($chars* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	int32_t pos = position();
	if (length > limit() - pos) {
		$throwNew($BufferUnderflowException);
	}
	getArray(pos, dst, offset, length);
	position(pos + length);
	return this;
}

CharBuffer* CharBuffer::get($chars* dst) {
	return get(dst, 0, $nc(dst)->length);
}

CharBuffer* CharBuffer::get(int32_t index, $chars* dst, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(dst)->length);
	getArray(index, dst, offset, length);
	return this;
}

CharBuffer* CharBuffer::get(int32_t index, $chars* dst) {
	return get(index, dst, 0, $nc(dst)->length);
}

CharBuffer* CharBuffer::getArray(int32_t index, $chars* dst, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (isAddressable() && ((int64_t)length << 1) > $Bits::JNI_COPY_TO_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 1);
		int64_t dstOffset = CharBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 1);
		int64_t len = (int64_t)length << 1;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, nullptr, $(base()), bufAddr, dst, dstOffset, len, $Character::BYTES);
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

CharBuffer* CharBuffer::put(CharBuffer* src) {
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

CharBuffer* CharBuffer::put(int32_t index, CharBuffer* src, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->limit());
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	putBuffer(index, src, offset, length);
	return this;
}

void CharBuffer::putBuffer(int32_t pos, CharBuffer* src, int32_t srcPos, int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($Object, srcBase, $nc(src)->base());
	if (src->isAddressable()) {
		$var($Object, base, this->base());
		if (!CharBuffer::$assertionsDisabled && !(base != nullptr || isDirect())) {
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
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(var$1, $(scope()), srcBase, srcAddr, base, addr, len, $Character::BYTES);
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
	} else {
		$load($StringCharBuffer);
		if (!CharBuffer::$assertionsDisabled && !$StringCharBuffer::class$->isInstance(src)) {
			$throwNew($AssertionError);
		}
		int32_t posMax = pos + n;
		{
			int32_t i = pos;
			int32_t j = srcPos;
			for (; i < posMax; ++i, ++j) {
				put(i, src->get(j));
			}
		}
	}
}

CharBuffer* CharBuffer::put($chars* src, int32_t offset, int32_t length) {
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

CharBuffer* CharBuffer::put($chars* src) {
	return put(src, 0, $nc(src)->length);
}

CharBuffer* CharBuffer::put(int32_t index, $chars* src, int32_t offset, int32_t length) {
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	$Objects::checkFromIndexSize(index, length, limit());
	$Objects::checkFromIndexSize(offset, length, $nc(src)->length);
	putArray(index, src, offset, length);
	return this;
}

CharBuffer* CharBuffer::put(int32_t index, $chars* src) {
	return put(index, src, 0, $nc(src)->length);
}

CharBuffer* CharBuffer::putArray(int32_t index, $chars* src, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (isAddressable() && ((int64_t)length << 1) > $Bits::JNI_COPY_FROM_ARRAY_THRESHOLD) {
		int64_t bufAddr = this->address + ((int64_t)index << 1);
		int64_t srcOffset = CharBuffer::ARRAY_BASE_OFFSET + ((int64_t)offset << 1);
		int64_t len = (int64_t)length << 1;
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (order() != $ByteOrder::nativeOrder()) {
					$init($Buffer);
					$var($ScopedMemoryAccess$Scope, var$1, scope());
					$var($Object, var$2, $of(src));
					int64_t var$3 = srcOffset;
					$nc($Buffer::SCOPED_MEMORY_ACCESS)->copySwapMemory(nullptr, var$1, var$2, var$3, $(base()), bufAddr, len, $Character::BYTES);
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

CharBuffer* CharBuffer::put($String* src, int32_t start, int32_t end) {
	$Objects::checkFromIndexSize(start, end - start, $nc(src)->length());
	if (isReadOnly()) {
		$throwNew($ReadOnlyBufferException);
	}
	if (end - start > remaining()) {
		$throwNew($BufferOverflowException);
	}
	for (int32_t i = start; i < end; ++i) {
		this->put($nc(src)->charAt(i));
	}
	return this;
}

CharBuffer* CharBuffer::put($String* src) {
	return put(src, 0, $nc(src)->length());
}

bool CharBuffer::hasArray() {
	return (this->hb != nullptr) && !this->isReadOnly$;
}

$Object* CharBuffer::array() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return $of(this->hb);
}

int32_t CharBuffer::arrayOffset() {
	if (this->hb == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	if (this->isReadOnly$) {
		$throwNew($ReadOnlyBufferException);
	}
	return this->offset;
}

CharBuffer* CharBuffer::position(int32_t newPosition) {
	$Buffer::position(newPosition);
	return this;
}

CharBuffer* CharBuffer::limit(int32_t newLimit) {
	$Buffer::limit(newLimit);
	return this;
}

CharBuffer* CharBuffer::mark() {
	$Buffer::mark();
	return this;
}

CharBuffer* CharBuffer::reset() {
	$Buffer::reset();
	return this;
}

CharBuffer* CharBuffer::clear() {
	$Buffer::clear();
	return this;
}

CharBuffer* CharBuffer::flip() {
	$Buffer::flip();
	return this;
}

CharBuffer* CharBuffer::rewind() {
	$Buffer::rewind();
	return this;
}

bool CharBuffer::isAddressable() {
	return true;
}

int32_t CharBuffer::hashCode() {
	int32_t h = 1;
	int32_t p = position();
	for (int32_t i = limit() - 1; i >= p; --i) {
		h = 31 * h + (int32_t)get(i);
	}
	return h;
}

bool CharBuffer::equals(Object$* ob) {
	if ($equals(this, ob)) {
		return true;
	}
	if (!($instanceOf(CharBuffer, ob))) {
		return false;
	}
	$var(CharBuffer, that, $cast(CharBuffer, ob));
	int32_t thisPos = this->position();
	int32_t thisRem = this->limit() - thisPos;
	int32_t thatPos = $nc(that)->position();
	int32_t thatRem = that->limit() - thatPos;
	if (thisRem < 0 || thisRem != thatRem) {
		return false;
	}
	return $BufferMismatch::mismatch(this, thisPos, that, thatPos, thisRem) < 0;
}

int32_t CharBuffer::compareTo(CharBuffer* that) {
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
		char16_t var$0 = this->get(thisPos + i);
		return compare(var$0, that->get(thatPos + i));
	}
	return thisRem - thatRem;
}

int32_t CharBuffer::compare(char16_t x, char16_t y) {
	$init(CharBuffer);
	return $Character::compare(x, y);
}

int32_t CharBuffer::mismatch(CharBuffer* that) {
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

$String* CharBuffer::toString() {
	int32_t var$0 = position();
	return toString(var$0, limit());
}

int32_t CharBuffer::length() {
	return remaining();
}

bool CharBuffer::isEmpty() {
	return remaining() == 0;
}

char16_t CharBuffer::charAt(int32_t index) {
	int32_t var$0 = position();
	return get(var$0 + checkIndex(index, 1));
}

$Appendable* CharBuffer::append($CharSequence* csq) {
	if (csq == nullptr) {
		return put("null"_s);
	} else {
		return put($($nc(csq)->toString()));
	}
}

$Appendable* CharBuffer::append($CharSequence* csq, int32_t start, int32_t end) {
	$useLocalCurrentObjectStackCache();
	$var($CharSequence, cs, csq == nullptr ? static_cast<$CharSequence*>("null"_s) : csq);
	return put($($nc($($nc(cs)->subSequence(start, end)))->toString()));
}

$Appendable* CharBuffer::append(char16_t c) {
	return put(c);
}

$IntStream* CharBuffer::chars() {
	return $StreamSupport::intStream(static_cast<$Supplier*>($$new(CharBuffer$$Lambda$lambda$chars$0, this)), $Buffer::SPLITERATOR_CHARACTERISTICS, false);
}

int32_t CharBuffer::compareTo(Object$* that) {
	return this->compareTo($cast(CharBuffer, that));
}

$Spliterator$OfInt* CharBuffer::lambda$chars$0() {
	return $new($CharBufferSpliterator, this);
}

void clinit$CharBuffer($Class* class$) {
	CharBuffer::$assertionsDisabled = !CharBuffer::class$->desiredAssertionStatus();
	$init($Buffer);
	$load($chars);
	CharBuffer::ARRAY_BASE_OFFSET = $nc($Buffer::UNSAFE)->arrayBaseOffset($getClass($chars));
}

CharBuffer::CharBuffer() {
}

$Class* CharBuffer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CharBuffer$$Lambda$lambda$chars$0::classInfo$.name)) {
			return CharBuffer$$Lambda$lambda$chars$0::load$(name, initialize);
		}
	}
	$loadClass(CharBuffer, name, initialize, &_CharBuffer_ClassInfo_, clinit$CharBuffer, allocate$CharBuffer);
	return class$;
}

$Class* CharBuffer::class$ = nullptr;

	} // nio
} // java