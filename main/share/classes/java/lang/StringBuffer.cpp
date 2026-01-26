#include <java/lang/StringBuffer.h>

#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/CharSequence.h>
#include <java/lang/StringLatin1.h>
#include <java/lang/StringUTF16.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

#undef TYPE

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringLatin1 = ::java::lang::StringLatin1;
using $StringUTF16 = ::java::lang::StringUTF16;
using $IntStream = ::java::util::stream::IntStream;

namespace java {
	namespace lang {

$CompoundAttribute _StringBuffer_MethodAnnotations_init$0[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuffer_MethodAnnotations_init$1[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuffer_MethodAnnotations_init$2[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuffer_MethodAnnotations_append5[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuffer_MethodAnnotations_append13[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuffer_MethodAnnotations_append14[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuffer_MethodAnnotations_toString59[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _StringBuffer_FieldInfo_[] = {
	{"toStringCache", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(StringBuffer, toStringCache)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(StringBuffer, serialVersionUID)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringBuffer, serialPersistentFields)},
	{}
};

$MethodInfo _StringBuffer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringBuffer, init$, void), nullptr, nullptr, _StringBuffer_MethodAnnotations_init$0},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(StringBuffer, init$, void, int32_t), nullptr, nullptr, _StringBuffer_MethodAnnotations_init$1},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringBuffer, init$, void, $String*), nullptr, nullptr, _StringBuffer_MethodAnnotations_init$2},
	{"<init>", "(Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $method(StringBuffer, init$, void, $CharSequence*)},
	{"append", "(Ljava/lang/Object;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, Object$*)},
	{"append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, $String*), nullptr, nullptr, _StringBuffer_MethodAnnotations_append5},
	{"append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, StringBuffer*)},
	{"append", "(Ljava/lang/AbstractStringBuilder;)Ljava/lang/StringBuffer;", nullptr, $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, $AbstractStringBuilder*)},
	{"append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, $CharSequence*)},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, $CharSequence*, int32_t, int32_t)},
	{"append", "([C)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, $chars*)},
	{"append", "([CII)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, $chars*, int32_t, int32_t)},
	{"append", "(Z)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, bool)},
	{"append", "(C)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, char16_t), nullptr, nullptr, _StringBuffer_MethodAnnotations_append13},
	{"append", "(I)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, int32_t), nullptr, nullptr, _StringBuffer_MethodAnnotations_append14},
	{"append", "(J)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, int64_t)},
	{"append", "(F)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, float)},
	{"append", "(D)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, append, StringBuffer*, double)},
	{"appendCodePoint", "(I)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, appendCodePoint, StringBuffer*, int32_t)},
	{"capacity", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, capacity, int32_t)},
	{"charAt", "(I)C", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, charAt, char16_t, int32_t)},
	{"chars", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuffer, chars, $IntStream*)},
	{"codePointAt", "(I)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, codePointAt, int32_t, int32_t)},
	{"codePointBefore", "(I)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, codePointBefore, int32_t, int32_t)},
	{"codePointCount", "(II)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, codePointCount, int32_t, int32_t, int32_t)},
	{"codePoints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuffer, codePoints, $IntStream*)},
	{"compareTo", "(Ljava/lang/StringBuffer;)I", nullptr, $PUBLIC | $SYNCHRONIZED, $method(StringBuffer, compareTo, int32_t, StringBuffer*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuffer, compareTo, int32_t, Object$*)},
	{"delete", "(II)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, delete$, StringBuffer*, int32_t, int32_t)},
	{"deleteCharAt", "(I)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, deleteCharAt, StringBuffer*, int32_t)},
	{"ensureCapacity", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, ensureCapacity, void, int32_t)},
	{"getBytes", "([BIB)V", nullptr, $SYNCHRONIZED, $virtualMethod(StringBuffer, getBytes, void, $bytes*, int32_t, int8_t)},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, getChars, void, int32_t, int32_t, $chars*, int32_t)},
	{"indexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(StringBuffer, indexOf, int32_t, $String*)},
	{"indexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, indexOf, int32_t, $String*, int32_t)},
	{"insert", "(I[CII)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, $chars*, int32_t, int32_t)},
	{"insert", "(ILjava/lang/Object;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, Object$*)},
	{"insert", "(ILjava/lang/String;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, $String*)},
	{"insert", "(I[C)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, $chars*)},
	{"insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, $CharSequence*)},
	{"insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, $CharSequence*, int32_t, int32_t)},
	{"insert", "(IZ)Ljava/lang/StringBuffer;", nullptr, $PUBLIC, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, bool)},
	{"insert", "(IC)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, char16_t)},
	{"insert", "(II)Ljava/lang/StringBuffer;", nullptr, $PUBLIC, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, int32_t)},
	{"insert", "(IJ)Ljava/lang/StringBuffer;", nullptr, $PUBLIC, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, int64_t)},
	{"insert", "(IF)Ljava/lang/StringBuffer;", nullptr, $PUBLIC, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, float)},
	{"insert", "(ID)Ljava/lang/StringBuffer;", nullptr, $PUBLIC, $virtualMethod(StringBuffer, insert, StringBuffer*, int32_t, double)},
	{"lastIndexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(StringBuffer, lastIndexOf, int32_t, $String*)},
	{"lastIndexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, lastIndexOf, int32_t, $String*, int32_t)},
	{"length", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, length, int32_t)},
	{"offsetByCodePoints", "(II)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, offsetByCodePoints, int32_t, int32_t, int32_t)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(StringBuffer, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"replace", "(IILjava/lang/String;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, replace, StringBuffer*, int32_t, int32_t, $String*)},
	{"reverse", "()Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, reverse, StringBuffer*)},
	{"setCharAt", "(IC)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, setCharAt, void, int32_t, char16_t)},
	{"setLength", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, setLength, void, int32_t)},
	{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, subSequence, $CharSequence*, int32_t, int32_t)},
	{"substring", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, substring, $String*, int32_t)},
	{"substring", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, substring, $String*, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, toString, $String*), nullptr, nullptr, _StringBuffer_MethodAnnotations_toString59},
	{"trimToSize", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(StringBuffer, trimToSize, void)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(StringBuffer, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _StringBuffer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.StringBuffer",
	"java.lang.AbstractStringBuilder",
	"java.io.Serializable,java.lang.Comparable",
	_StringBuffer_FieldInfo_,
	_StringBuffer_MethodInfo_,
	"Ljava/lang/AbstractStringBuilder;Ljava/io/Serializable;Ljava/lang/Comparable<Ljava/lang/StringBuffer;>;Ljava/lang/CharSequence;"
};

$Object* allocate$StringBuffer($Class* clazz) {
	return $of($alloc(StringBuffer));
}

int32_t StringBuffer::hashCode() {
	 return this->$AbstractStringBuilder::hashCode();
}

bool StringBuffer::equals(Object$* obj) {
	 return this->$AbstractStringBuilder::equals(obj);
}

$Object* StringBuffer::clone() {
	 return this->$AbstractStringBuilder::clone();
}

void StringBuffer::finalize() {
	this->$AbstractStringBuilder::finalize();
}

$ObjectStreamFieldArray* StringBuffer::serialPersistentFields = nullptr;

void StringBuffer::init$() {
	$AbstractStringBuilder::init$(16);
}

void StringBuffer::init$(int32_t capacity) {
	$AbstractStringBuilder::init$(capacity);
}

void StringBuffer::init$($String* str) {
	$AbstractStringBuilder::init$(str);
}

void StringBuffer::init$($CharSequence* seq) {
	$AbstractStringBuilder::init$(seq);
}

int32_t StringBuffer::compareTo(StringBuffer* another) {
	$synchronized(this) {
		return $AbstractStringBuilder::compareTo(another);
	}
}

int32_t StringBuffer::length() {
	$synchronized(this) {
		return this->count;
	}
}

int32_t StringBuffer::capacity() {
	$synchronized(this) {
		return $AbstractStringBuilder::capacity();
	}
}

void StringBuffer::ensureCapacity(int32_t minimumCapacity) {
	$synchronized(this) {
		$AbstractStringBuilder::ensureCapacity(minimumCapacity);
	}
}

void StringBuffer::trimToSize() {
	$synchronized(this) {
		$AbstractStringBuilder::trimToSize();
	}
}

void StringBuffer::setLength(int32_t newLength) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::setLength(newLength);
	}
}

char16_t StringBuffer::charAt(int32_t index) {
	$synchronized(this) {
		return $AbstractStringBuilder::charAt(index);
	}
}

int32_t StringBuffer::codePointAt(int32_t index) {
	$synchronized(this) {
		return $AbstractStringBuilder::codePointAt(index);
	}
}

int32_t StringBuffer::codePointBefore(int32_t index) {
	$synchronized(this) {
		return $AbstractStringBuilder::codePointBefore(index);
	}
}

int32_t StringBuffer::codePointCount(int32_t beginIndex, int32_t endIndex) {
	$synchronized(this) {
		return $AbstractStringBuilder::codePointCount(beginIndex, endIndex);
	}
}

int32_t StringBuffer::offsetByCodePoints(int32_t index, int32_t codePointOffset) {
	$synchronized(this) {
		return $AbstractStringBuilder::offsetByCodePoints(index, codePointOffset);
	}
}

void StringBuffer::getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {
	$synchronized(this) {
		$AbstractStringBuilder::getChars(srcBegin, srcEnd, dst, dstBegin);
	}
}

void StringBuffer::setCharAt(int32_t index, char16_t ch) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::setCharAt(index, ch);
	}
}

StringBuffer* StringBuffer::append(Object$* obj) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append($($String::valueOf(obj)));
		return this;
	}
}

StringBuffer* StringBuffer::append($String* str) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(str);
		return this;
	}
}

StringBuffer* StringBuffer::append(StringBuffer* sb) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(sb);
		return this;
	}
}

StringBuffer* StringBuffer::append($AbstractStringBuilder* asb) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(asb);
		return this;
	}
}

StringBuffer* StringBuffer::append($CharSequence* s) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(s);
		return this;
	}
}

StringBuffer* StringBuffer::append($CharSequence* s, int32_t start, int32_t end) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(s, start, end);
		return this;
	}
}

StringBuffer* StringBuffer::append($chars* str) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(str);
		return this;
	}
}

StringBuffer* StringBuffer::append($chars* str, int32_t offset, int32_t len) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(str, offset, len);
		return this;
	}
}

StringBuffer* StringBuffer::append(bool b) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(b);
		return this;
	}
}

StringBuffer* StringBuffer::append(char16_t c) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(c);
		return this;
	}
}

StringBuffer* StringBuffer::append(int32_t i) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(i);
		return this;
	}
}

StringBuffer* StringBuffer::appendCodePoint(int32_t codePoint) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::appendCodePoint(codePoint);
		return this;
	}
}

StringBuffer* StringBuffer::append(int64_t lng) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(lng);
		return this;
	}
}

StringBuffer* StringBuffer::append(float f) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(f);
		return this;
	}
}

StringBuffer* StringBuffer::append(double d) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::append(d);
		return this;
	}
}

StringBuffer* StringBuffer::delete$(int32_t start, int32_t end) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::delete$(start, end);
		return this;
	}
}

StringBuffer* StringBuffer::deleteCharAt(int32_t index) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::deleteCharAt(index);
		return this;
	}
}

StringBuffer* StringBuffer::replace(int32_t start, int32_t end, $String* str) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::replace(start, end, str);
		return this;
	}
}

$String* StringBuffer::substring(int32_t start) {
	$synchronized(this) {
		return substring(start, this->count);
	}
}

$CharSequence* StringBuffer::subSequence(int32_t start, int32_t end) {
	$synchronized(this) {
		return $AbstractStringBuilder::substring(start, end);
	}
}

$String* StringBuffer::substring(int32_t start, int32_t end) {
	$synchronized(this) {
		return $AbstractStringBuilder::substring(start, end);
	}
}

StringBuffer* StringBuffer::insert(int32_t index, $chars* str, int32_t offset, int32_t len) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::insert(index, str, offset, len);
		return this;
	}
}

StringBuffer* StringBuffer::insert(int32_t offset, Object$* obj) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::insert(offset, $($String::valueOf(obj)));
		return this;
	}
}

StringBuffer* StringBuffer::insert(int32_t offset, $String* str) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::insert(offset, str);
		return this;
	}
}

StringBuffer* StringBuffer::insert(int32_t offset, $chars* str) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::insert(offset, str);
		return this;
	}
}

StringBuffer* StringBuffer::insert(int32_t dstOffset, $CharSequence* s) {
	$AbstractStringBuilder::insert(dstOffset, s);
	return this;
}

StringBuffer* StringBuffer::insert(int32_t dstOffset, $CharSequence* s, int32_t start, int32_t end) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::insert(dstOffset, s, start, end);
		return this;
	}
}

StringBuffer* StringBuffer::insert(int32_t offset, bool b) {
	$AbstractStringBuilder::insert(offset, b);
	return this;
}

StringBuffer* StringBuffer::insert(int32_t offset, char16_t c) {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::insert(offset, c);
		return this;
	}
}

StringBuffer* StringBuffer::insert(int32_t offset, int32_t i) {
	$AbstractStringBuilder::insert(offset, i);
	return this;
}

StringBuffer* StringBuffer::insert(int32_t offset, int64_t l) {
	$AbstractStringBuilder::insert(offset, l);
	return this;
}

StringBuffer* StringBuffer::insert(int32_t offset, float f) {
	$AbstractStringBuilder::insert(offset, f);
	return this;
}

StringBuffer* StringBuffer::insert(int32_t offset, double d) {
	$AbstractStringBuilder::insert(offset, d);
	return this;
}

int32_t StringBuffer::indexOf($String* str) {
	return $AbstractStringBuilder::indexOf(str);
}

int32_t StringBuffer::indexOf($String* str, int32_t fromIndex) {
	$synchronized(this) {
		return $AbstractStringBuilder::indexOf(str, fromIndex);
	}
}

int32_t StringBuffer::lastIndexOf($String* str) {
	return lastIndexOf(str, this->count);
}

int32_t StringBuffer::lastIndexOf($String* str, int32_t fromIndex) {
	$synchronized(this) {
		return $AbstractStringBuilder::lastIndexOf(str, fromIndex);
	}
}

StringBuffer* StringBuffer::reverse() {
	$synchronized(this) {
		$set(this, toStringCache, nullptr);
		$AbstractStringBuilder::reverse();
		return this;
	}
}

$String* StringBuffer::toString() {
	$synchronized(this) {
		if (this->toStringCache == nullptr) {
			return $set(this, toStringCache, isLatin1() ? $StringLatin1::newString(this->value, 0, this->count) : $StringUTF16::newString(this->value, 0, this->count));
		}
		return $new($String, this->toStringCache);
	}
}

void StringBuffer::writeObject($ObjectOutputStream* s) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ObjectOutputStream$PutField, fields, $nc(s)->putFields());
		$var($chars, val, $new($chars, capacity()));
		if (isLatin1()) {
			$StringLatin1::getChars(this->value, 0, this->count, val, 0);
		} else {
			$StringUTF16::getChars(this->value, 0, this->count, val, 0);
		}
		$nc(fields)->put("value"_s, $of(val));
		fields->put("count"_s, this->count);
		fields->put("shared"_s, false);
		s->writeFields();
	}
}

void StringBuffer::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$var($chars, val, $cast($chars, $nc(fields)->get("value"_s, ($Object*)nullptr)));
	initBytes(val, 0, $nc(val)->length);
	this->count = fields->get("count"_s, 0);
}

void StringBuffer::getBytes($bytes* dst, int32_t dstBegin, int8_t coder) {
	$synchronized(this) {
		$AbstractStringBuilder::getBytes(dst, dstBegin, coder);
	}
}

$IntStream* StringBuffer::codePoints() {
	return $AbstractStringBuilder::codePoints();
}

$IntStream* StringBuffer::chars() {
	return $AbstractStringBuilder::chars();
}

int32_t StringBuffer::compareTo(Object$* another) {
	return this->compareTo($cast(StringBuffer, another));
}

void clinit$StringBuffer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($chars);
	$init($Integer);
	$init($Boolean);
	$assignStatic(StringBuffer::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "value"_s, $getClass($chars)),
		$$new($ObjectStreamField, "count"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "shared"_s, $Boolean::TYPE)
	}));
}

StringBuffer::StringBuffer() {
}

StringBuffer* StringBuffer::append(const char* s) {
	return append($$str(s));
}

$Class* StringBuffer::load$($String* name, bool initialize) {
	$loadClass(StringBuffer, name, initialize, &_StringBuffer_ClassInfo_, clinit$StringBuffer, allocate$StringBuffer);
	return class$;
}

$Class* StringBuffer::class$ = nullptr;

	} // lang
} // java