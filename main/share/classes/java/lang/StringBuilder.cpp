#include <java/lang/StringBuilder.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/CharSequence.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringLatin1.h>
#include <java/lang/StringUTF16.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $StringLatin1 = ::java::lang::StringLatin1;
using $StringUTF16 = ::java::lang::StringUTF16;
using $IntStream = ::java::util::stream::IntStream;

namespace java {
	namespace lang {

$CompoundAttribute _StringBuilder_MethodAnnotations_init$0[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuilder_MethodAnnotations_init$1[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuilder_MethodAnnotations_init$2[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuilder_MethodAnnotations_append5[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuilder_MethodAnnotations_append12[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuilder_MethodAnnotations_append13[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringBuilder_MethodAnnotations_toString57[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _StringBuilder_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(StringBuilder, serialVersionUID)},
	{}
};

$MethodInfo _StringBuilder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringBuilder, init$, void), nullptr, nullptr, _StringBuilder_MethodAnnotations_init$0},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(StringBuilder, init$, void, int32_t), nullptr, nullptr, _StringBuilder_MethodAnnotations_init$1},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringBuilder, init$, void, $String*), nullptr, nullptr, _StringBuilder_MethodAnnotations_init$2},
	{"<init>", "(Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $method(StringBuilder, init$, void, $CharSequence*)},
	{"append", "(Ljava/lang/Object;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, Object$*)},
	{"append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, $String*), nullptr, nullptr, _StringBuilder_MethodAnnotations_append5},
	{"append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, $StringBuffer*)},
	{"append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, $CharSequence*)},
	{"append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, $CharSequence*, int32_t, int32_t)},
	{"append", "([C)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, $chars*)},
	{"append", "([CII)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, $chars*, int32_t, int32_t)},
	{"append", "(Z)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, bool)},
	{"append", "(C)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, char16_t), nullptr, nullptr, _StringBuilder_MethodAnnotations_append12},
	{"append", "(I)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, int32_t), nullptr, nullptr, _StringBuilder_MethodAnnotations_append13},
	{"append", "(J)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, int64_t)},
	{"append", "(F)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, float)},
	{"append", "(D)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, append, StringBuilder*, double)},
	{"appendCodePoint", "(I)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, appendCodePoint, StringBuilder*, int32_t)},
	{"capacity", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, capacity, int32_t)},
	{"charAt", "(I)C", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, charAt, char16_t, int32_t)},
	{"chars", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, chars, $IntStream*)},
	{"codePointAt", "(I)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, codePointAt, int32_t, int32_t)},
	{"codePointBefore", "(I)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, codePointBefore, int32_t, int32_t)},
	{"codePointCount", "(II)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, codePointCount, int32_t, int32_t, int32_t)},
	{"codePoints", "()Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, codePoints, $IntStream*)},
	{"compareTo", "(Ljava/lang/StringBuilder;)I", nullptr, $PUBLIC, $method(StringBuilder, compareTo, int32_t, StringBuilder*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, compareTo, int32_t, Object$*)},
	{"delete", "(II)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, delete$, StringBuilder*, int32_t, int32_t)},
	{"deleteCharAt", "(I)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, deleteCharAt, StringBuilder*, int32_t)},
	{"ensureCapacity", "(I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, ensureCapacity, void, int32_t)},
	{"getChars", "(II[CI)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, getChars, void, int32_t, int32_t, $chars*, int32_t)},
	{"indexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(StringBuilder, indexOf, int32_t, $String*)},
	{"indexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC, $virtualMethod(StringBuilder, indexOf, int32_t, $String*, int32_t)},
	{"insert", "(I[CII)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, $chars*, int32_t, int32_t)},
	{"insert", "(ILjava/lang/Object;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, Object$*)},
	{"insert", "(ILjava/lang/String;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, $String*)},
	{"insert", "(I[C)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, $chars*)},
	{"insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, $CharSequence*)},
	{"insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, $CharSequence*, int32_t, int32_t)},
	{"insert", "(IZ)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, bool)},
	{"insert", "(IC)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, char16_t)},
	{"insert", "(II)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, int32_t)},
	{"insert", "(IJ)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, int64_t)},
	{"insert", "(IF)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, float)},
	{"insert", "(ID)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, insert, StringBuilder*, int32_t, double)},
	{"lastIndexOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(StringBuilder, lastIndexOf, int32_t, $String*)},
	{"lastIndexOf", "(Ljava/lang/String;I)I", nullptr, $PUBLIC, $virtualMethod(StringBuilder, lastIndexOf, int32_t, $String*, int32_t)},
	{"length", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, length, int32_t)},
	{"offsetByCodePoints", "(II)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, offsetByCodePoints, int32_t, int32_t, int32_t)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(StringBuilder, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"replace", "(IILjava/lang/String;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, replace, StringBuilder*, int32_t, int32_t, $String*)},
	{"reverse", "()Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, reverse, StringBuilder*)},
	{"setCharAt", "(IC)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, setCharAt, void, int32_t, char16_t)},
	{"setLength", "(I)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, setLength, void, int32_t)},
	{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, subSequence, $CharSequence*, int32_t, int32_t)},
	{"substring", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, substring, $String*, int32_t, int32_t)},
	{"substring", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, substring, $String*, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringBuilder, toString, $String*), nullptr, nullptr, _StringBuilder_MethodAnnotations_toString57},
	{"trimToSize", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringBuilder, trimToSize, void)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(StringBuilder, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _StringBuilder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.StringBuilder",
	"java.lang.AbstractStringBuilder",
	"java.io.Serializable,java.lang.Comparable",
	_StringBuilder_FieldInfo_,
	_StringBuilder_MethodInfo_,
	"Ljava/lang/AbstractStringBuilder;Ljava/io/Serializable;Ljava/lang/Comparable<Ljava/lang/StringBuilder;>;Ljava/lang/CharSequence;"
};

$Object* allocate$StringBuilder($Class* clazz) {
	return $of($alloc(StringBuilder));
}

int32_t StringBuilder::hashCode() {
	 return this->$AbstractStringBuilder::hashCode();
}

bool StringBuilder::equals(Object$* obj) {
	 return this->$AbstractStringBuilder::equals(obj);
}

$Object* StringBuilder::clone() {
	 return this->$AbstractStringBuilder::clone();
}

void StringBuilder::finalize() {
	this->$AbstractStringBuilder::finalize();
}

void StringBuilder::init$() {
	$AbstractStringBuilder::init$(16);
}

void StringBuilder::init$(int32_t capacity) {
	$AbstractStringBuilder::init$(capacity);
}

void StringBuilder::init$($String* str) {
	$AbstractStringBuilder::init$(str);
}

void StringBuilder::init$($CharSequence* seq) {
	$AbstractStringBuilder::init$(seq);
}

int32_t StringBuilder::compareTo(StringBuilder* another) {
	return $AbstractStringBuilder::compareTo(another);
}

StringBuilder* StringBuilder::append(Object$* obj) {
	return append($($String::valueOf(obj)));
}

StringBuilder* StringBuilder::append($String* str) {
	$AbstractStringBuilder::append(str);
	return this;
}

StringBuilder* StringBuilder::append($StringBuffer* sb) {
	$AbstractStringBuilder::append(sb);
	return this;
}

StringBuilder* StringBuilder::append($CharSequence* s) {
	$AbstractStringBuilder::append(s);
	return this;
}

StringBuilder* StringBuilder::append($CharSequence* s, int32_t start, int32_t end) {
	$AbstractStringBuilder::append(s, start, end);
	return this;
}

StringBuilder* StringBuilder::append($chars* str) {
	$AbstractStringBuilder::append(str);
	return this;
}

StringBuilder* StringBuilder::append($chars* str, int32_t offset, int32_t len) {
	$AbstractStringBuilder::append(str, offset, len);
	return this;
}

StringBuilder* StringBuilder::append(bool b) {
	$AbstractStringBuilder::append(b);
	return this;
}

StringBuilder* StringBuilder::append(char16_t c) {
	$AbstractStringBuilder::append(c);
	return this;
}

StringBuilder* StringBuilder::append(int32_t i) {
	$AbstractStringBuilder::append(i);
	return this;
}

StringBuilder* StringBuilder::append(int64_t lng) {
	$AbstractStringBuilder::append(lng);
	return this;
}

StringBuilder* StringBuilder::append(float f) {
	$AbstractStringBuilder::append(f);
	return this;
}

StringBuilder* StringBuilder::append(double d) {
	$AbstractStringBuilder::append(d);
	return this;
}

StringBuilder* StringBuilder::appendCodePoint(int32_t codePoint) {
	$AbstractStringBuilder::appendCodePoint(codePoint);
	return this;
}

StringBuilder* StringBuilder::delete$(int32_t start, int32_t end) {
	$AbstractStringBuilder::delete$(start, end);
	return this;
}

StringBuilder* StringBuilder::deleteCharAt(int32_t index) {
	$AbstractStringBuilder::deleteCharAt(index);
	return this;
}

StringBuilder* StringBuilder::replace(int32_t start, int32_t end, $String* str) {
	$AbstractStringBuilder::replace(start, end, str);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t index, $chars* str, int32_t offset, int32_t len) {
	$AbstractStringBuilder::insert(index, str, offset, len);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t offset, Object$* obj) {
	$AbstractStringBuilder::insert(offset, obj);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t offset, $String* str) {
	$AbstractStringBuilder::insert(offset, str);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t offset, $chars* str) {
	$AbstractStringBuilder::insert(offset, str);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t dstOffset, $CharSequence* s) {
	$AbstractStringBuilder::insert(dstOffset, s);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t dstOffset, $CharSequence* s, int32_t start, int32_t end) {
	$AbstractStringBuilder::insert(dstOffset, s, start, end);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t offset, bool b) {
	$AbstractStringBuilder::insert(offset, b);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t offset, char16_t c) {
	$AbstractStringBuilder::insert(offset, c);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t offset, int32_t i) {
	$AbstractStringBuilder::insert(offset, i);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t offset, int64_t l) {
	$AbstractStringBuilder::insert(offset, l);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t offset, float f) {
	$AbstractStringBuilder::insert(offset, f);
	return this;
}

StringBuilder* StringBuilder::insert(int32_t offset, double d) {
	$AbstractStringBuilder::insert(offset, d);
	return this;
}

int32_t StringBuilder::indexOf($String* str) {
	return $AbstractStringBuilder::indexOf(str);
}

int32_t StringBuilder::indexOf($String* str, int32_t fromIndex) {
	return $AbstractStringBuilder::indexOf(str, fromIndex);
}

int32_t StringBuilder::lastIndexOf($String* str) {
	return $AbstractStringBuilder::lastIndexOf(str);
}

int32_t StringBuilder::lastIndexOf($String* str, int32_t fromIndex) {
	return $AbstractStringBuilder::lastIndexOf(str, fromIndex);
}

StringBuilder* StringBuilder::reverse() {
	$AbstractStringBuilder::reverse();
	return this;
}

$String* StringBuilder::toString() {
	return isLatin1() ? $StringLatin1::newString(this->value, 0, this->count) : $StringUTF16::newString(this->value, 0, this->count);
}

void StringBuilder::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeInt(this->count);
	$var($chars, val, $new($chars, capacity()));
	if (isLatin1()) {
		$StringLatin1::getChars(this->value, 0, this->count, val, 0);
	} else {
		$StringUTF16::getChars(this->value, 0, this->count, val, 0);
	}
	s->writeObject(val);
}

void StringBuilder::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	this->count = s->readInt();
	$var($chars, val, $cast($chars, s->readObject()));
	initBytes(val, 0, $nc(val)->length);
}

$IntStream* StringBuilder::codePoints() {
	return $AbstractStringBuilder::codePoints();
}

$IntStream* StringBuilder::chars() {
	return $AbstractStringBuilder::chars();
}

$String* StringBuilder::substring(int32_t start, int32_t end) {
	return $AbstractStringBuilder::substring(start, end);
}

$CharSequence* StringBuilder::subSequence(int32_t start, int32_t end) {
	return $AbstractStringBuilder::subSequence(start, end);
}

$String* StringBuilder::substring(int32_t start) {
	return $AbstractStringBuilder::substring(start);
}

void StringBuilder::setCharAt(int32_t index, char16_t ch) {
	$AbstractStringBuilder::setCharAt(index, ch);
}

void StringBuilder::getChars(int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {
	$AbstractStringBuilder::getChars(srcBegin, srcEnd, dst, dstBegin);
}

int32_t StringBuilder::offsetByCodePoints(int32_t index, int32_t codePointOffset) {
	return $AbstractStringBuilder::offsetByCodePoints(index, codePointOffset);
}

int32_t StringBuilder::codePointCount(int32_t beginIndex, int32_t endIndex) {
	return $AbstractStringBuilder::codePointCount(beginIndex, endIndex);
}

int32_t StringBuilder::codePointBefore(int32_t index) {
	return $AbstractStringBuilder::codePointBefore(index);
}

int32_t StringBuilder::codePointAt(int32_t index) {
	return $AbstractStringBuilder::codePointAt(index);
}

char16_t StringBuilder::charAt(int32_t index) {
	return $AbstractStringBuilder::charAt(index);
}

void StringBuilder::setLength(int32_t newLength) {
	$AbstractStringBuilder::setLength(newLength);
}

void StringBuilder::trimToSize() {
	$AbstractStringBuilder::trimToSize();
}

void StringBuilder::ensureCapacity(int32_t minimumCapacity) {
	$AbstractStringBuilder::ensureCapacity(minimumCapacity);
}

int32_t StringBuilder::capacity() {
	return $AbstractStringBuilder::capacity();
}

int32_t StringBuilder::length() {
	return $AbstractStringBuilder::length();
}

int32_t StringBuilder::compareTo(Object$* another) {
	return this->compareTo($cast(StringBuilder, another));
}

StringBuilder::StringBuilder() {
}

StringBuilder* StringBuilder::append(const char* s) {
	return static_cast<StringBuilder*>(append($cstr(s)));
}

$Class* StringBuilder::load$($String* name, bool initialize) {
	$loadClass(StringBuilder, name, initialize, &_StringBuilder_ClassInfo_, allocate$StringBuilder);
	return class$;
}

$Class* StringBuilder::class$ = nullptr;

	} // lang
} // java