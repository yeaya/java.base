#include <java/lang/AbstractStringBuilder.h>

#include <java/io/Serializable.h>
#include <java/lang/Appendable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NegativeArraySizeException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/StringLatin1$CharsSpliterator.h>
#include <java/lang/StringLatin1.h>
#include <java/lang/StringUTF16$CharsSpliterator.h>
#include <java/lang/StringUTF16$CodePointsSpliterator.h>
#include <java/lang/StringUTF16.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/StreamSupport.h>
#include <jdk/internal/math/FloatingDecimal.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jcpp.h>

#undef COMPACT_STRINGS
#undef EMPTYVALUE
#undef MAX_ARRAY_SIZE
#undef MAX_VALUE
#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $Serializable = ::java::io::Serializable;
using $Appendable = ::java::lang::Appendable;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NegativeArraySizeException = ::java::lang::NegativeArraySizeException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $StringBuffer = ::java::lang::StringBuffer;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $StringLatin1 = ::java::lang::StringLatin1;
using $StringLatin1$CharsSpliterator = ::java::lang::StringLatin1$CharsSpliterator;
using $StringUTF16 = ::java::lang::StringUTF16;
using $StringUTF16$CharsSpliterator = ::java::lang::StringUTF16$CharsSpliterator;
using $StringUTF16$CodePointsSpliterator = ::java::lang::StringUTF16$CodePointsSpliterator;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Supplier = ::java::util::function::Supplier;
using $IntStream = ::java::util::stream::IntStream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $FloatingDecimal = ::jdk::internal::math::FloatingDecimal;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;

namespace java {
	namespace lang {

class AbstractStringBuilder$$Lambda$lambda$chars$0 : public $Supplier {
	$class(AbstractStringBuilder$$Lambda$lambda$chars$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(AbstractStringBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$chars$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbstractStringBuilder$$Lambda$lambda$chars$0>());
	}
	AbstractStringBuilder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AbstractStringBuilder$$Lambda$lambda$chars$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AbstractStringBuilder$$Lambda$lambda$chars$0, inst$)},
	{}
};
$MethodInfo AbstractStringBuilder$$Lambda$lambda$chars$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/AbstractStringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractStringBuilder$$Lambda$lambda$chars$0::*)(AbstractStringBuilder*)>(&AbstractStringBuilder$$Lambda$lambda$chars$0::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AbstractStringBuilder$$Lambda$lambda$chars$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.AbstractStringBuilder$$Lambda$lambda$chars$0",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* AbstractStringBuilder$$Lambda$lambda$chars$0::load$($String* name, bool initialize) {
	$loadClass(AbstractStringBuilder$$Lambda$lambda$chars$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbstractStringBuilder$$Lambda$lambda$chars$0::class$ = nullptr;

class AbstractStringBuilder$$Lambda$lambda$codePoints$1$1 : public $Supplier {
	$class(AbstractStringBuilder$$Lambda$lambda$codePoints$1$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$(AbstractStringBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->lambda$codePoints$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AbstractStringBuilder$$Lambda$lambda$codePoints$1$1>());
	}
	AbstractStringBuilder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AbstractStringBuilder$$Lambda$lambda$codePoints$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AbstractStringBuilder$$Lambda$lambda$codePoints$1$1, inst$)},
	{}
};
$MethodInfo AbstractStringBuilder$$Lambda$lambda$codePoints$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/AbstractStringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractStringBuilder$$Lambda$lambda$codePoints$1$1::*)(AbstractStringBuilder*)>(&AbstractStringBuilder$$Lambda$lambda$codePoints$1$1::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo AbstractStringBuilder$$Lambda$lambda$codePoints$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.AbstractStringBuilder$$Lambda$lambda$codePoints$1$1",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* AbstractStringBuilder$$Lambda$lambda$codePoints$1$1::load$($String* name, bool initialize) {
	$loadClass(AbstractStringBuilder$$Lambda$lambda$codePoints$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AbstractStringBuilder$$Lambda$lambda$codePoints$1$1::class$ = nullptr;

$FieldInfo _AbstractStringBuilder_FieldInfo_[] = {
	{"value", "[B", nullptr, 0, $field(AbstractStringBuilder, value)},
	{"coder", "B", nullptr, 0, $field(AbstractStringBuilder, coder)},
	{"count", "I", nullptr, 0, $field(AbstractStringBuilder, count)},
	{"EMPTYVALUE", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractStringBuilder, EMPTYVALUE)},
	{"MAX_ARRAY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractStringBuilder, MAX_ARRAY_SIZE)},
	{}
};

$MethodInfo _AbstractStringBuilder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AbstractStringBuilder::*)()>(&AbstractStringBuilder::init$))},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(AbstractStringBuilder::*)(int32_t)>(&AbstractStringBuilder::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AbstractStringBuilder::*)($String*)>(&AbstractStringBuilder::init$))},
	{"<init>", "(Ljava/lang/CharSequence;)V", nullptr, 0, $method(static_cast<void(AbstractStringBuilder::*)($CharSequence*)>(&AbstractStringBuilder::init$))},
	{"append", "(Ljava/lang/Object;)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "(Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "(Ljava/lang/StringBuffer;)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "(Ljava/lang/AbstractStringBuilder;)Ljava/lang/AbstractStringBuilder;", nullptr, 0},
	{"append", "(Ljava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "([C)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "([CII)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "(Z)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "(C)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "(I)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "(J)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "(F)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"append", "(D)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"appendChars", "([CII)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(AbstractStringBuilder::*)($chars*,int32_t,int32_t)>(&AbstractStringBuilder::appendChars))},
	{"appendChars", "(Ljava/lang/String;II)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(AbstractStringBuilder::*)($String*,int32_t,int32_t)>(&AbstractStringBuilder::appendChars))},
	{"appendChars", "(Ljava/lang/CharSequence;II)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(AbstractStringBuilder::*)($CharSequence*,int32_t,int32_t)>(&AbstractStringBuilder::appendChars))},
	{"appendCodePoint", "(I)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"appendNull", "()Ljava/lang/AbstractStringBuilder;", nullptr, $PRIVATE, $method(static_cast<AbstractStringBuilder*(AbstractStringBuilder::*)()>(&AbstractStringBuilder::appendNull))},
	{"capacity", "()I", nullptr, $PUBLIC},
	{"charAt", "(I)C", nullptr, $PUBLIC},
	{"chars", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"checkRange", "(III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&AbstractStringBuilder::checkRange))},
	{"checkRangeSIOOBE", "(III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&AbstractStringBuilder::checkRangeSIOOBE))},
	{"codePointAt", "(I)I", nullptr, $PUBLIC},
	{"codePointBefore", "(I)I", nullptr, $PUBLIC},
	{"codePointCount", "(II)I", nullptr, $PUBLIC},
	{"codePoints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/AbstractStringBuilder;)I", nullptr, 0},
	{"delete", "(II)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"deleteCharAt", "(I)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"ensureCapacity", "(I)V", nullptr, $PUBLIC},
	{"ensureCapacityInternal", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractStringBuilder::*)(int32_t)>(&AbstractStringBuilder::ensureCapacityInternal))},
	{"getBytes", "([BIB)V", nullptr, 0},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC},
	{"getCoder", "()B", nullptr, $FINAL, $method(static_cast<int8_t(AbstractStringBuilder::*)()>(&AbstractStringBuilder::getCoder))},
	{"getValue", "()[B", nullptr, $FINAL, $method(static_cast<$bytes*(AbstractStringBuilder::*)()>(&AbstractStringBuilder::getValue))},
	{"indexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"indexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"inflate", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractStringBuilder::*)()>(&AbstractStringBuilder::inflate))},
	{"initBytes", "([CII)V", nullptr, 0},
	{"insert", "(I[CII)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(ILjava/lang/Object;)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(ILjava/lang/String;)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(I[C)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(ILjava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(ILjava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(IZ)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(IC)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(II)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(IJ)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(IF)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"insert", "(ID)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"isLatin1", "()Z", nullptr, $FINAL, $method(static_cast<bool(AbstractStringBuilder::*)()>(&AbstractStringBuilder::isLatin1))},
	{"lambda$chars$0", "()Ljava/util/Spliterator$OfInt;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Spliterator$OfInt*(AbstractStringBuilder::*)()>(&AbstractStringBuilder::lambda$chars$0))},
	{"lambda$codePoints$1", "()Ljava/util/Spliterator$OfInt;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Spliterator$OfInt*(AbstractStringBuilder::*)()>(&AbstractStringBuilder::lambda$codePoints$1))},
	{"lastIndexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"length", "()I", nullptr, $PUBLIC},
	{"newCapacity", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AbstractStringBuilder::*)(int32_t)>(&AbstractStringBuilder::newCapacity))},
	{"offsetByCodePoints", "(II)I", nullptr, $PUBLIC},
	{"putCharsAt", "(I[CII)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(AbstractStringBuilder::*)(int32_t,$chars*,int32_t,int32_t)>(&AbstractStringBuilder::putCharsAt))},
	{"putCharsAt", "(ILjava/lang/CharSequence;II)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(AbstractStringBuilder::*)(int32_t,$CharSequence*,int32_t,int32_t)>(&AbstractStringBuilder::putCharsAt))},
	{"putStringAt", "(ILjava/lang/String;II)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractStringBuilder::*)(int32_t,$String*,int32_t,int32_t)>(&AbstractStringBuilder::putStringAt))},
	{"putStringAt", "(ILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractStringBuilder::*)(int32_t,$String*)>(&AbstractStringBuilder::putStringAt))},
	{"replace", "(IILjava/lang/String;)Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"reverse", "()Ljava/lang/AbstractStringBuilder;", nullptr, $PUBLIC},
	{"setCharAt", "(IC)V", nullptr, $PUBLIC},
	{"setLength", "(I)V", nullptr, $PUBLIC},
	{"shift", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractStringBuilder::*)(int32_t,int32_t)>(&AbstractStringBuilder::shift))},
	{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"substring", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"substring", "(II)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"trimToSize", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractStringBuilder_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.AbstractStringBuilder",
	"java.lang.Object",
	"java.lang.Appendable,java.lang.CharSequence",
	_AbstractStringBuilder_FieldInfo_,
	_AbstractStringBuilder_MethodInfo_
};

$Object* allocate$AbstractStringBuilder($Class* clazz) {
	return $of($alloc(AbstractStringBuilder));
}

$String* AbstractStringBuilder::toString() {
	 return this->$Appendable::toString();
}

int32_t AbstractStringBuilder::hashCode() {
	 return this->$Appendable::hashCode();
}

bool AbstractStringBuilder::equals(Object$* obj) {
	 return this->$Appendable::equals(obj);
}

$Object* AbstractStringBuilder::clone() {
	 return this->$Appendable::clone();
}

void AbstractStringBuilder::finalize() {
	this->$Appendable::finalize();
}

$bytes* AbstractStringBuilder::EMPTYVALUE = nullptr;

void AbstractStringBuilder::init$() {
	$set(this, value, AbstractStringBuilder::EMPTYVALUE);
}

void AbstractStringBuilder::init$(int32_t capacity) {
	$init($String);
	if ($String::COMPACT_STRINGS) {
		$set(this, value, $new($bytes, capacity));
		this->coder = (int8_t)0;
	} else {
		$set(this, value, $StringUTF16::newBytesFor(capacity));
		this->coder = (int8_t)1;
	}
}

void AbstractStringBuilder::init$($String* str) {
	int32_t length = $nc(str)->length();
	int32_t capacity = (length < $Integer::MAX_VALUE - 16) ? length + 16 : $Integer::MAX_VALUE;
	int8_t initCoder = str->coder();
	this->coder = initCoder;
	$set(this, value, (initCoder == (int8_t)0) ? $new($bytes, capacity) : $StringUTF16::newBytesFor(capacity));
	append(str);
}

void AbstractStringBuilder::init$($CharSequence* seq) {
	int32_t length = $nc(seq)->length();
	if (length < 0) {
		$throwNew($NegativeArraySizeException, $$str({"Negative length: "_s, $$str(length)}));
	}
	int32_t capacity = (length < $Integer::MAX_VALUE - 16) ? length + 16 : $Integer::MAX_VALUE;
	int8_t initCoder = 0;
	$init($String);
	if ($String::COMPACT_STRINGS) {
		if ($instanceOf(AbstractStringBuilder, seq)) {
			initCoder = $nc(($cast(AbstractStringBuilder, seq)))->getCoder();
		} else if ($instanceOf($String, seq)) {
			initCoder = $nc(($cast($String, seq)))->coder();
		} else {
			initCoder = (int8_t)0;
		}
	} else {
		initCoder = (int8_t)1;
	}
	this->coder = initCoder;
	$set(this, value, (initCoder == (int8_t)0) ? $new($bytes, capacity) : $StringUTF16::newBytesFor(capacity));
	append(seq);
}

int32_t AbstractStringBuilder::compareTo(AbstractStringBuilder* another) {
	if (this == another) {
		return 0;
	}
	$var($bytes, val1, this->value);
	$var($bytes, val2, $nc(another)->value);
	int32_t count1 = this->count;
	int32_t count2 = another->count;
	if (this->coder == another->coder) {
		return isLatin1() ? $StringLatin1::compareTo(val1, val2, count1, count2) : $StringUTF16::compareTo(val1, val2, count1, count2);
	}
	return isLatin1() ? $StringLatin1::compareToUTF16(val1, val2, count1, count2) : $StringUTF16::compareToLatin1(val1, val2, count1, count2);
}

int32_t AbstractStringBuilder::length() {
	return this->count;
}

int32_t AbstractStringBuilder::capacity() {
	return $sr($nc(this->value)->length, this->coder);
}

void AbstractStringBuilder::ensureCapacity(int32_t minimumCapacity) {
	if (minimumCapacity > 0) {
		ensureCapacityInternal(minimumCapacity);
	}
}

void AbstractStringBuilder::ensureCapacityInternal(int32_t minimumCapacity) {
	int32_t oldCapacity = $sr($nc(this->value)->length, this->coder);
	if (minimumCapacity - oldCapacity > 0) {
		$set(this, value, $Arrays::copyOf(this->value, $sl(newCapacity(minimumCapacity), this->coder)));
	}
}

int32_t AbstractStringBuilder::newCapacity(int32_t minCapacity) {
	int32_t oldLength = $nc(this->value)->length;
	int32_t newLength = $sl(minCapacity, this->coder);
	int32_t growth = newLength - oldLength;
	int32_t length = $ArraysSupport::newLength(oldLength, growth, oldLength + ($sl(2, this->coder)));
	if (length == $Integer::MAX_VALUE) {
		$throwNew($OutOfMemoryError, "Required length exceeds implementation limit"_s);
	}
	return $sr(length, this->coder);
}

void AbstractStringBuilder::inflate() {
	if (!isLatin1()) {
		return;
	}
	$var($bytes, buf, $StringUTF16::newBytesFor($nc(this->value)->length));
	$StringLatin1::inflate(this->value, 0, buf, 0, this->count);
	$set(this, value, buf);
	this->coder = (int8_t)1;
}

void AbstractStringBuilder::trimToSize() {
	int32_t length = $sl(this->count, this->coder);
	if (length < $nc(this->value)->length) {
		$set(this, value, $Arrays::copyOf(this->value, length));
	}
}

void AbstractStringBuilder::setLength(int32_t newLength) {
	if (newLength < 0) {
		$throwNew($StringIndexOutOfBoundsException, newLength);
	}
	ensureCapacityInternal(newLength);
	if (this->count < newLength) {
		if (isLatin1()) {
			$StringLatin1::fillNull(this->value, this->count, newLength);
		} else {
			$StringUTF16::fillNull(this->value, this->count, newLength);
		}
	}
	this->count = newLength;
}

char16_t AbstractStringBuilder::charAt(int32_t index) {
	$String::checkIndex(index, this->count);
	if (isLatin1()) {
		return (char16_t)((int32_t)($nc(this->value)->get(index) & (uint32_t)255));
	}
	return $StringUTF16::charAt(this->value, index);
}

int32_t AbstractStringBuilder::codePointAt(int32_t index) {
	int32_t count = this->count;
	$var($bytes, value, this->value);
	$String::checkIndex(index, count);
	if (isLatin1()) {
		return (int32_t)($nc(value)->get(index) & (uint32_t)255);
	}
	return $StringUTF16::codePointAtSB(value, index, count);
}

int32_t AbstractStringBuilder::codePointBefore(int32_t index) {
	int32_t i = index - 1;
	if (i < 0 || i >= this->count) {
		$throwNew($StringIndexOutOfBoundsException, index);
	}
	if (isLatin1()) {
		return (int32_t)($nc(this->value)->get(i) & (uint32_t)255);
	}
	return $StringUTF16::codePointBeforeSB(this->value, index);
}

int32_t AbstractStringBuilder::codePointCount(int32_t beginIndex, int32_t endIndex) {
	if (beginIndex < 0 || endIndex > this->count || beginIndex > endIndex) {
		$throwNew($IndexOutOfBoundsException);
	}
	if (isLatin1()) {
		return endIndex - beginIndex;
	}
	return $StringUTF16::codePointCountSB(this->value, beginIndex, endIndex);
}

int32_t AbstractStringBuilder::offsetByCodePoints(int32_t index, int32_t codePointOffset) {
	if (index < 0 || index > this->count) {
		$throwNew($IndexOutOfBoundsException);
	}
	return $Character::offsetByCodePoints(this, index, codePointOffset);
}

void AbstractStringBuilder::getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {
	checkRangeSIOOBE(srcBegin, srcEnd, this->count);
	int32_t n = srcEnd - srcBegin;
	checkRange(dstBegin, dstBegin + n, $nc(dst)->length);
	if (isLatin1()) {
		$StringLatin1::getChars(this->value, srcBegin, srcEnd, dst, dstBegin);
	} else {
		$StringUTF16::getChars(this->value, srcBegin, srcEnd, dst, dstBegin);
	}
}

void AbstractStringBuilder::setCharAt(int32_t index, char16_t ch) {
	$String::checkIndex(index, this->count);
	bool var$0 = isLatin1();
	if (var$0 && $StringLatin1::canEncode(ch)) {
		$nc(this->value)->set(index, (int8_t)ch);
	} else {
		if (isLatin1()) {
			inflate();
		}
		$StringUTF16::putCharSB(this->value, index, ch);
	}
}

AbstractStringBuilder* AbstractStringBuilder::append(Object$* obj) {
	return append($($String::valueOf(obj)));
}

AbstractStringBuilder* AbstractStringBuilder::append($String* str) {
	if (str == nullptr) {
		return appendNull();
	}
	int32_t len = $nc(str)->length();
	ensureCapacityInternal(this->count + len);
	putStringAt(this->count, str);
	this->count += len;
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append($StringBuffer* sb) {
	return this->append(static_cast<AbstractStringBuilder*>(sb));
}

AbstractStringBuilder* AbstractStringBuilder::append(AbstractStringBuilder* asb) {
	if (asb == nullptr) {
		return appendNull();
	}
	int32_t len = $nc(asb)->length();
	ensureCapacityInternal(this->count + len);
	int8_t var$0 = getCoder();
	if (var$0 != asb->getCoder()) {
		inflate();
	}
	asb->getBytes(this->value, this->count, this->coder);
	this->count += len;
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append($CharSequence* s) {
	if (s == nullptr) {
		return appendNull();
	}
	if ($instanceOf($String, s)) {
		return this->append($cast($String, s));
	}
	if ($instanceOf(AbstractStringBuilder, s)) {
		return this->append($cast(AbstractStringBuilder, s));
	}
	return this->append(s, 0, $nc(s)->length());
}

AbstractStringBuilder* AbstractStringBuilder::appendNull() {
	ensureCapacityInternal(this->count + 4);
	int32_t count = this->count;
	$var($bytes, val, this->value);
	if (isLatin1()) {
		$nc(val)->set(count++, (int8_t)u'n');
		val->set(count++, (int8_t)u'u');
		val->set(count++, (int8_t)u'l');
		val->set(count++, (int8_t)u'l');
	} else {
		count = $StringUTF16::putCharsAt(val, count, u'n', u'u', u'l', u'l');
	}
	this->count = count;
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append($CharSequence* s$renamed, int32_t start, int32_t end) {
	$var($CharSequence, s, s$renamed);
	if (s == nullptr) {
		$assign(s, "null"_s);
	}
	checkRange(start, end, $nc(s)->length());
	int32_t len = end - start;
	ensureCapacityInternal(this->count + len);
	if ($instanceOf($String, s)) {
		appendChars($cast($String, s), start, end);
	} else {
		appendChars(s, start, end);
	}
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append($chars* str) {
	int32_t len = $nc(str)->length;
	ensureCapacityInternal(this->count + len);
	appendChars(str, 0, len);
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append($chars* str, int32_t offset, int32_t len) {
	int32_t end = offset + len;
	checkRange(offset, end, $nc(str)->length);
	ensureCapacityInternal(this->count + len);
	appendChars(str, offset, end);
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append(bool b) {
	ensureCapacityInternal(this->count + (b ? 4 : 5));
	int32_t count = this->count;
	$var($bytes, val, this->value);
	if (isLatin1()) {
		if (b) {
			$nc(val)->set(count++, (int8_t)u't');
			val->set(count++, (int8_t)u'r');
			val->set(count++, (int8_t)u'u');
			val->set(count++, (int8_t)u'e');
		} else {
			$nc(val)->set(count++, (int8_t)u'f');
			val->set(count++, (int8_t)u'a');
			val->set(count++, (int8_t)u'l');
			val->set(count++, (int8_t)u's');
			val->set(count++, (int8_t)u'e');
		}
	} else if (b) {
		count = $StringUTF16::putCharsAt(val, count, u't', u'r', u'u', u'e');
	} else {
		count = $StringUTF16::putCharsAt(val, count, u'f', u'a', u'l', u's', u'e');
	}
	this->count = count;
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append(char16_t c) {
	ensureCapacityInternal(this->count + 1);
	bool var$0 = isLatin1();
	if (var$0 && $StringLatin1::canEncode(c)) {
		$nc(this->value)->set(this->count++, (int8_t)c);
	} else {
		if (isLatin1()) {
			inflate();
		}
		$StringUTF16::putCharSB(this->value, this->count++, c);
	}
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append(int32_t i) {
	int32_t count = this->count;
	int32_t spaceNeeded = count + $Integer::stringSize(i);
	ensureCapacityInternal(spaceNeeded);
	if (isLatin1()) {
		$Integer::getChars(i, spaceNeeded, this->value);
	} else {
		$StringUTF16::getChars(i, count, spaceNeeded, this->value);
	}
	this->count = spaceNeeded;
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append(int64_t l) {
	int32_t count = this->count;
	int32_t spaceNeeded = count + $Long::stringSize(l);
	ensureCapacityInternal(spaceNeeded);
	if (isLatin1()) {
		$Long::getChars(l, spaceNeeded, this->value);
	} else {
		$StringUTF16::getChars(l, count, spaceNeeded, this->value);
	}
	this->count = spaceNeeded;
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append(float f) {
	$FloatingDecimal::appendTo(f, static_cast<$Appendable*>(this));
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::append(double d) {
	$FloatingDecimal::appendTo(d, static_cast<$Appendable*>(this));
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::delete$(int32_t start, int32_t end) {
	int32_t count = this->count;
	if (end > count) {
		end = count;
	}
	checkRangeSIOOBE(start, end, count);
	int32_t len = end - start;
	if (len > 0) {
		shift(end, -len);
		this->count = count - len;
	}
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::appendCodePoint(int32_t codePoint) {
	if ($Character::isBmpCodePoint(codePoint)) {
		return append((char16_t)codePoint);
	}
	return append($($Character::toChars(codePoint)));
}

AbstractStringBuilder* AbstractStringBuilder::deleteCharAt(int32_t index) {
	$String::checkIndex(index, this->count);
	shift(index + 1, -1);
	--this->count;
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::replace(int32_t start, int32_t end, $String* str) {
	int32_t count = this->count;
	if (end > count) {
		end = count;
	}
	checkRangeSIOOBE(start, end, count);
	int32_t len = $nc(str)->length();
	int32_t newCount = count + len - (end - start);
	ensureCapacityInternal(newCount);
	shift(end, newCount - count);
	this->count = newCount;
	putStringAt(start, str);
	return this;
}

$String* AbstractStringBuilder::substring(int32_t start) {
	return substring(start, this->count);
}

$CharSequence* AbstractStringBuilder::subSequence(int32_t start, int32_t end) {
	return substring(start, end);
}

$String* AbstractStringBuilder::substring(int32_t start, int32_t end) {
	checkRangeSIOOBE(start, end, this->count);
	if (isLatin1()) {
		return $StringLatin1::newString(this->value, start, end - start);
	}
	return $StringUTF16::newString(this->value, start, end - start);
}

void AbstractStringBuilder::shift(int32_t offset, int32_t n) {
	$System::arraycopy(this->value, $sl(offset, this->coder), this->value, $sl(offset + n, this->coder), $sl(this->count - offset, this->coder));
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t index, $chars* str, int32_t offset, int32_t len) {
	$String::checkOffset(index, this->count);
	checkRangeSIOOBE(offset, offset + len, $nc(str)->length);
	ensureCapacityInternal(this->count + len);
	shift(index, len);
	this->count += len;
	putCharsAt(index, str, offset, offset + len);
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t offset, Object$* obj) {
	return insert(offset, $($String::valueOf(obj)));
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t offset, $String* str$renamed) {
	$var($String, str, str$renamed);
	$String::checkOffset(offset, this->count);
	if (str == nullptr) {
		$assign(str, "null"_s);
	}
	int32_t len = $nc(str)->length();
	ensureCapacityInternal(this->count + len);
	shift(offset, len);
	this->count += len;
	putStringAt(offset, str);
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t offset, $chars* str) {
	$String::checkOffset(offset, this->count);
	int32_t len = $nc(str)->length;
	ensureCapacityInternal(this->count + len);
	shift(offset, len);
	this->count += len;
	putCharsAt(offset, str, 0, len);
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t dstOffset, $CharSequence* s$renamed) {
	$var($CharSequence, s, s$renamed);
	if (s == nullptr) {
		$assign(s, "null"_s);
	}
	return this->insert(dstOffset, s, 0, $nc(s)->length());
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t dstOffset, $CharSequence* s$renamed, int32_t start, int32_t end) {
	$var($CharSequence, s, s$renamed);
	if (s == nullptr) {
		$assign(s, "null"_s);
	}
	$String::checkOffset(dstOffset, this->count);
	checkRange(start, end, $nc(s)->length());
	int32_t len = end - start;
	ensureCapacityInternal(this->count + len);
	shift(dstOffset, len);
	this->count += len;
	if ($instanceOf($String, s)) {
		putStringAt(dstOffset, $cast($String, s), start, end);
	} else {
		putCharsAt(dstOffset, s, start, end);
	}
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t offset, bool b) {
	return insert(offset, $($String::valueOf(b)));
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t offset, char16_t c) {
	$String::checkOffset(offset, this->count);
	ensureCapacityInternal(this->count + 1);
	shift(offset, 1);
	this->count += 1;
	bool var$0 = isLatin1();
	if (var$0 && $StringLatin1::canEncode(c)) {
		$nc(this->value)->set(offset, (int8_t)c);
	} else {
		if (isLatin1()) {
			inflate();
		}
		$StringUTF16::putCharSB(this->value, offset, c);
	}
	return this;
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t offset, int32_t i) {
	return insert(offset, $($String::valueOf(i)));
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t offset, int64_t l) {
	return insert(offset, $($String::valueOf(l)));
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t offset, float f) {
	return insert(offset, $($String::valueOf(f)));
}

AbstractStringBuilder* AbstractStringBuilder::insert(int32_t offset, double d) {
	return insert(offset, $($String::valueOf(d)));
}

int32_t AbstractStringBuilder::indexOf($String* str) {
	return indexOf(str, 0);
}

int32_t AbstractStringBuilder::indexOf($String* str, int32_t fromIndex) {
	return $String::indexOf(this->value, this->coder, this->count, str, fromIndex);
}

int32_t AbstractStringBuilder::lastIndexOf($String* str) {
	return lastIndexOf(str, this->count);
}

int32_t AbstractStringBuilder::lastIndexOf($String* str, int32_t fromIndex) {
	return $String::lastIndexOf(this->value, this->coder, this->count, str, fromIndex);
}

AbstractStringBuilder* AbstractStringBuilder::reverse() {
	$var($bytes, val, this->value);
	int32_t count = this->count;
	int32_t n = count - 1;
	if (isLatin1()) {
		for (int32_t j = (n - 1) >> 1; j >= 0; --j) {
			int32_t k = n - j;
			int8_t cj = $nc(val)->get(j);
			val->set(j, val->get(k));
			val->set(k, cj);
		}
	} else {
		$StringUTF16::reverse(val, count);
	}
	return this;
}

$IntStream* AbstractStringBuilder::chars() {
	return $StreamSupport::intStream(static_cast<$Supplier*>($$new(AbstractStringBuilder$$Lambda$lambda$chars$0, this)), ($Spliterator::ORDERED | $Spliterator::SIZED) | $Spliterator::SUBSIZED, false);
}

$IntStream* AbstractStringBuilder::codePoints() {
	return $StreamSupport::intStream(static_cast<$Supplier*>($$new(AbstractStringBuilder$$Lambda$lambda$codePoints$1$1, this)), $Spliterator::ORDERED, false);
}

$bytes* AbstractStringBuilder::getValue() {
	return this->value;
}

void AbstractStringBuilder::getBytes($bytes* dst, int32_t dstBegin, int8_t coder) {
	if (this->coder == coder) {
		$System::arraycopy(this->value, 0, dst, $sl(dstBegin, coder), $sl(this->count, coder));
	} else {
		$StringLatin1::inflate(this->value, 0, dst, dstBegin, this->count);
	}
}

void AbstractStringBuilder::initBytes($chars* value, int32_t off, int32_t len) {
	$init($String);
	if ($String::COMPACT_STRINGS) {
		$set(this, value, $StringUTF16::compress(value, off, len));
		if (this->value != nullptr) {
			this->coder = (int8_t)0;
			return;
		}
	}
	this->coder = (int8_t)1;
	$set(this, value, $StringUTF16::toBytes(value, off, len));
}

int8_t AbstractStringBuilder::getCoder() {
	$init($String);
	return $String::COMPACT_STRINGS ? this->coder : (int8_t)1;
}

bool AbstractStringBuilder::isLatin1() {
	$init($String);
	return $String::COMPACT_STRINGS && this->coder == (int8_t)0;
}

void AbstractStringBuilder::putCharsAt(int32_t index, $chars* s, int32_t off, int32_t end) {
	if (isLatin1()) {
		$var($bytes, val, this->value);
		{
			int32_t i = off;
			int32_t j = index;
			for (; i < end; ++i) {
				char16_t c = $nc(s)->get(i);
				if ($StringLatin1::canEncode(c)) {
					$nc(val)->set(j++, (int8_t)c);
				} else {
					inflate();
					$StringUTF16::putCharsSB(this->value, j, s, i, end);
					return;
				}
			}
		}
	} else {
		$StringUTF16::putCharsSB(this->value, index, s, off, end);
	}
}

void AbstractStringBuilder::putCharsAt(int32_t index, $CharSequence* s, int32_t off, int32_t end) {
	if (isLatin1()) {
		$var($bytes, val, this->value);
		{
			int32_t i = off;
			int32_t j = index;
			for (; i < end; ++i) {
				char16_t c = $nc(s)->charAt(i);
				if ($StringLatin1::canEncode(c)) {
					$nc(val)->set(j++, (int8_t)c);
				} else {
					inflate();
					$StringUTF16::putCharsSB(this->value, j, s, i, end);
					return;
				}
			}
		}
	} else {
		$StringUTF16::putCharsSB(this->value, index, s, off, end);
	}
}

void AbstractStringBuilder::putStringAt(int32_t index, $String* str, int32_t off, int32_t end) {
	int8_t var$0 = getCoder();
	if (var$0 != $nc(str)->coder()) {
		inflate();
	}
	$nc(str)->getBytes(this->value, off, index, this->coder, end - off);
}

void AbstractStringBuilder::putStringAt(int32_t index, $String* str) {
	putStringAt(index, str, 0, $nc(str)->length());
}

void AbstractStringBuilder::appendChars($chars* s, int32_t off, int32_t end) {
	int32_t count = this->count;
	if (isLatin1()) {
		$var($bytes, val, this->value);
		{
			int32_t i = off;
			int32_t j = count;
			for (; i < end; ++i) {
				char16_t c = $nc(s)->get(i);
				if ($StringLatin1::canEncode(c)) {
					$nc(val)->set(j++, (int8_t)c);
				} else {
					this->count = (count = j);
					inflate();
					$StringUTF16::putCharsSB(this->value, j, s, i, end);
					this->count = count + end - i;
					return;
				}
			}
		}
	} else {
		$StringUTF16::putCharsSB(this->value, count, s, off, end);
	}
	this->count = count + end - off;
}

void AbstractStringBuilder::appendChars($String* s, int32_t off, int32_t end) {
	if (isLatin1()) {
		if ($nc(s)->isLatin1()) {
			$System::arraycopy($(s->value()), off, this->value, this->count, end - off);
		} else {
			$var($bytes, val, this->value);
			{
				int32_t i = off;
				int32_t j = this->count;
				for (; i < end; ++i) {
					char16_t c = s->charAt(i);
					if ($StringLatin1::canEncode(c)) {
						$nc(val)->set(j++, (int8_t)c);
					} else {
						this->count = j;
						inflate();
						$System::arraycopy($(s->value()), i << (int8_t)1, this->value, j << (int8_t)1, (end - i) << (int8_t)1);
						this->count += end - i;
						return;
					}
				}
			}
		}
	} else if ($nc(s)->isLatin1()) {
		$StringUTF16::putCharsSB(this->value, this->count, static_cast<$CharSequence*>(s), off, end);
	} else {
		$System::arraycopy($(s->value()), off << (int8_t)1, this->value, this->count << (int8_t)1, (end - off) << (int8_t)1);
	}
	this->count += end - off;
}

void AbstractStringBuilder::appendChars($CharSequence* s, int32_t off, int32_t end) {
	if (isLatin1()) {
		$var($bytes, val, this->value);
		{
			int32_t i = off;
			int32_t j = this->count;
			for (; i < end; ++i) {
				char16_t c = $nc(s)->charAt(i);
				if ($StringLatin1::canEncode(c)) {
					$nc(val)->set(j++, (int8_t)c);
				} else {
					this->count = j;
					inflate();
					$StringUTF16::putCharsSB(this->value, j, s, i, end);
					this->count += end - i;
					return;
				}
			}
		}
	} else {
		$StringUTF16::putCharsSB(this->value, this->count, s, off, end);
	}
	this->count += end - off;
}

void AbstractStringBuilder::checkRange(int32_t start, int32_t end, int32_t len) {
	$init(AbstractStringBuilder);
	if (start < 0 || start > end || end > len) {
		$throwNew($IndexOutOfBoundsException, $$str({"start "_s, $$str(start), ", end "_s, $$str(end), ", length "_s, $$str(len)}));
	}
}

void AbstractStringBuilder::checkRangeSIOOBE(int32_t start, int32_t end, int32_t len) {
	$init(AbstractStringBuilder);
	if (start < 0 || start > end || end > len) {
		$throwNew($StringIndexOutOfBoundsException, $$str({"start "_s, $$str(start), ", end "_s, $$str(end), ", length "_s, $$str(len)}));
	}
}

$Spliterator$OfInt* AbstractStringBuilder::lambda$codePoints$1() {
	$var($bytes, val, this->value);
	int32_t count = this->count;
	int8_t coder = this->coder;
	return coder == (int8_t)0 ? static_cast<$Spliterator$OfInt*>($new($StringLatin1$CharsSpliterator, val, 0, count, 0)) : static_cast<$Spliterator$OfInt*>($new($StringUTF16$CodePointsSpliterator, val, 0, count, 0));
}

$Spliterator$OfInt* AbstractStringBuilder::lambda$chars$0() {
	$var($bytes, val, this->value);
	int32_t count = this->count;
	int8_t coder = this->coder;
	return coder == (int8_t)0 ? static_cast<$Spliterator$OfInt*>($new($StringLatin1$CharsSpliterator, val, 0, count, 0)) : static_cast<$Spliterator$OfInt*>($new($StringUTF16$CharsSpliterator, val, 0, count, 0));
}

void clinit$AbstractStringBuilder($Class* class$) {
	$assignStatic(AbstractStringBuilder::EMPTYVALUE, $new($bytes, 0));
}

AbstractStringBuilder::AbstractStringBuilder() {
}

$Class* AbstractStringBuilder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AbstractStringBuilder$$Lambda$lambda$chars$0::classInfo$.name)) {
			return AbstractStringBuilder$$Lambda$lambda$chars$0::load$(name, initialize);
		}
		if (name->equals(AbstractStringBuilder$$Lambda$lambda$codePoints$1$1::classInfo$.name)) {
			return AbstractStringBuilder$$Lambda$lambda$codePoints$1$1::load$(name, initialize);
		}
	}
	$loadClass(AbstractStringBuilder, name, initialize, &_AbstractStringBuilder_ClassInfo_, clinit$AbstractStringBuilder, allocate$AbstractStringBuilder);
	return class$;
}

$Class* AbstractStringBuilder::class$ = nullptr;

	} // lang
} // java