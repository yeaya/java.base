#include <java/nio/StringCharBuffer.h>

#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/nio/Buffer.h>
#include <java/nio/BufferMismatch.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <java/util/Objects.h>
#include <jdk/internal/access/foreign/MemorySegmentProxy.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufferMismatch = ::java::nio::BufferMismatch;
using $ByteOrder = ::java::nio::ByteOrder;
using $CharBuffer = ::java::nio::CharBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;
using $Objects = ::java::util::Objects;
using $MemorySegmentProxy = ::jdk::internal::access::foreign::MemorySegmentProxy;

namespace java {
	namespace nio {

$FieldInfo _StringCharBuffer_FieldInfo_[] = {
	{"str", "Ljava/lang/CharSequence;", nullptr, 0, $field(StringCharBuffer, str)},
	{}
};

$MethodInfo _StringCharBuffer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/CharSequence;II)V", nullptr, 0, $method(static_cast<void(StringCharBuffer::*)($CharSequence*,int32_t,int32_t)>(&StringCharBuffer::init$))},
	{"<init>", "(Ljava/lang/CharSequence;IIIII)V", nullptr, $PRIVATE, $method(static_cast<void(StringCharBuffer::*)($CharSequence*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&StringCharBuffer::init$))},
	{"asReadOnlyBuffer", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"charRegionOrder", "()Ljava/nio/ByteOrder;", nullptr, 0},
	{"compact", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL},
	{"compareTo", "(Ljava/nio/CharBuffer;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"duplicate", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "()C", nullptr, $PUBLIC | $FINAL},
	{"get", "(I)C", nullptr, $PUBLIC | $FINAL},
	{"getUnchecked", "(I)C", nullptr, 0},
	{"isAddressable", "()Z", nullptr, 0},
	{"isDirect", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $FINAL},
	{"order", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC},
	{"put", "(C)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL},
	{"put", "(IC)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL},
	{"slice", "()Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"slice", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC},
	{"subSequence", "(II)Ljava/nio/CharBuffer;", nullptr, $PUBLIC | $FINAL},
	{"toString", "(II)Ljava/lang/String;", nullptr, $FINAL},
	{}
};

$ClassInfo _StringCharBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.StringCharBuffer",
	"java.nio.CharBuffer",
	nullptr,
	_StringCharBuffer_FieldInfo_,
	_StringCharBuffer_MethodInfo_
};

$Object* allocate$StringCharBuffer($Class* clazz) {
	return $of($alloc(StringCharBuffer));
}

void StringCharBuffer::init$($CharSequence* s, int32_t start, int32_t end) {
	$CharBuffer::init$(-1, start, end, $nc(s)->length(), nullptr);
	int32_t n = $nc(s)->length();
	$Objects::checkFromToIndex(start, end, n);
	$set(this, str, s);
	this->$CharBuffer::isReadOnly$ = true;
}

$CharBuffer* StringCharBuffer::slice() {
	int32_t pos = this->position();
	int32_t lim = this->limit();
	int32_t rem = (pos <= lim ? lim - pos : 0);
	return $new(StringCharBuffer, this->str, -1, 0, rem, rem, this->offset + pos);
}

$CharBuffer* StringCharBuffer::slice(int32_t index, int32_t length) {
	$Objects::checkFromIndexSize(index, length, limit());
	return $new(StringCharBuffer, this->str, -1, 0, length, length, this->offset + index);
}

void StringCharBuffer::init$($CharSequence* s, int32_t mark, int32_t pos, int32_t limit, int32_t cap, int32_t offset) {
	$CharBuffer::init$(mark, pos, limit, cap, nullptr, offset, nullptr);
	$set(this, str, s);
	this->$CharBuffer::isReadOnly$ = true;
}

$CharBuffer* StringCharBuffer::duplicate() {
	$var($CharSequence, var$0, this->str);
	int32_t var$1 = markValue();
	int32_t var$2 = position();
	int32_t var$3 = limit();
	return $new(StringCharBuffer, var$0, var$1, var$2, var$3, capacity(), this->offset);
}

$CharBuffer* StringCharBuffer::asReadOnlyBuffer() {
	return duplicate();
}

char16_t StringCharBuffer::get() {
	return $nc(this->str)->charAt(nextGetIndex() + this->offset);
}

char16_t StringCharBuffer::get(int32_t index) {
	return $nc(this->str)->charAt(checkIndex(index) + this->offset);
}

char16_t StringCharBuffer::getUnchecked(int32_t index) {
	return $nc(this->str)->charAt(index + this->offset);
}

$CharBuffer* StringCharBuffer::put(char16_t c) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* StringCharBuffer::put(int32_t index, char16_t c) {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

$CharBuffer* StringCharBuffer::compact() {
	$throwNew($ReadOnlyBufferException);
	$shouldNotReachHere();
}

bool StringCharBuffer::isReadOnly() {
	return true;
}

$String* StringCharBuffer::toString(int32_t start, int32_t end) {
	return $nc($($nc(this->str)->subSequence(start + this->offset, end + this->offset)))->toString();
}

$CharSequence* StringCharBuffer::subSequence(int32_t start, int32_t end) {
	try {
		int32_t pos = position();
		$var($CharSequence, var$0, this->str);
		int32_t var$1 = pos + checkIndex(start, pos);
		int32_t var$2 = pos + checkIndex(end, pos);
		return $new(StringCharBuffer, var$0, -1, var$1, var$2, capacity(), this->offset);
	} catch ($IllegalArgumentException& x) {
		$throwNew($IndexOutOfBoundsException);
	}
	$shouldNotReachHere();
}

bool StringCharBuffer::isDirect() {
	return false;
}

$ByteOrder* StringCharBuffer::order() {
	return $ByteOrder::nativeOrder();
}

$ByteOrder* StringCharBuffer::charRegionOrder() {
	return nullptr;
}

bool StringCharBuffer::isAddressable() {
	return false;
}

bool StringCharBuffer::equals(Object$* ob) {
	if ($equals(this, ob)) {
		return true;
	}
	$var($CharBuffer, that, nullptr);
	bool var$0 = $instanceOf($CharBuffer, ob);
	if (var$0) {
		$assign(that, $cast($CharBuffer, ob));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	int32_t thisPos = this->position();
	int32_t thisRem = this->limit() - thisPos;
	int32_t thatPos = $nc(that)->position();
	int32_t thatRem = that->limit() - thatPos;
	if (thisRem < 0 || thisRem != thatRem) {
		return false;
	}
	return $BufferMismatch::mismatch(static_cast<$CharBuffer*>(this), thisPos, that, thatPos, thisRem) < 0;
}

int32_t StringCharBuffer::compareTo($CharBuffer* that) {
	int32_t thisPos = this->position();
	int32_t thisRem = this->limit() - thisPos;
	int32_t thatPos = $nc(that)->position();
	int32_t thatRem = that->limit() - thatPos;
	int32_t length = $Math::min(thisRem, thatRem);
	if (length < 0) {
		return -1;
	}
	int32_t i = $BufferMismatch::mismatch(static_cast<$CharBuffer*>(this), thisPos, that, thatPos, length);
	if (i >= 0) {
		char16_t var$0 = this->get(thisPos + i);
		return $Character::compare(var$0, that->get(thatPos + i));
	}
	return thisRem - thatRem;
}

int32_t StringCharBuffer::compareTo(Object$* that) {
	return this->compareTo($cast($CharBuffer, that));
}

StringCharBuffer::StringCharBuffer() {
}

$Class* StringCharBuffer::load$($String* name, bool initialize) {
	$loadClass(StringCharBuffer, name, initialize, &_StringCharBuffer_ClassInfo_, allocate$StringCharBuffer);
	return class$;
}

$Class* StringCharBuffer::class$ = nullptr;

	} // nio
} // java