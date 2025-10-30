#include <java/lang/StringLatin1.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharacterDataLatin1.h>
#include <java/lang/ConditionalSpecialCasing.h>
#include <java/lang/Math.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/StringConcatHelper.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/StringLatin1$LinesSpliterator.h>
#include <java/lang/StringUTF16.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <java/util/Spliterator.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jcpp.h>

#undef ERROR

using $ArithmeticException = ::java::lang::ArithmeticException;
using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $CharacterDataLatin1 = ::java::lang::CharacterDataLatin1;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $ConditionalSpecialCasing = ::java::lang::ConditionalSpecialCasing;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $StringConcatHelper = ::java::lang::StringConcatHelper;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $StringLatin1$LinesSpliterator = ::java::lang::StringLatin1$LinesSpliterator;
using $StringUTF16 = ::java::lang::StringUTF16;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $Spliterator = ::java::util::Spliterator;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;

namespace java {
	namespace lang {

$CompoundAttribute _StringLatin1_MethodAnnotations_compareTo6[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringLatin1_MethodAnnotations_compareToUTF1610[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringLatin1_MethodAnnotations_equals13[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringLatin1_MethodAnnotations_indexOf20[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringLatin1_MethodAnnotations_indexOf21[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringLatin1_MethodAnnotations_indexOfChar22[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringLatin1_MethodAnnotations_inflate25[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringLatin1_MethodAnnotations_inflate26[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _StringLatin1_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StringLatin1, $assertionsDisabled)},
	{}
};

$MethodInfo _StringLatin1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StringLatin1::*)()>(&StringLatin1::init$))},
	{"canEncode", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&StringLatin1::canEncode))},
	{"charAt", "([BI)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)($bytes*,int32_t)>(&StringLatin1::charAt))},
	{"codePointAt", "([BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&StringLatin1::codePointAt))},
	{"codePointBefore", "([BI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&StringLatin1::codePointBefore))},
	{"codePointCount", "([BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&StringLatin1::codePointCount))},
	{"compareTo", "([B[B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*)>(&StringLatin1::compareTo)), nullptr, nullptr, _StringLatin1_MethodAnnotations_compareTo6},
	{"compareTo", "([B[BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*,int32_t,int32_t)>(&StringLatin1::compareTo))},
	{"compareToCI", "([B[B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*)>(&StringLatin1::compareToCI))},
	{"compareToCI_UTF16", "([B[B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*)>(&StringLatin1::compareToCI_UTF16))},
	{"compareToUTF16", "([B[B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*)>(&StringLatin1::compareToUTF16)), nullptr, nullptr, _StringLatin1_MethodAnnotations_compareToUTF1610},
	{"compareToUTF16", "([B[BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*,int32_t,int32_t)>(&StringLatin1::compareToUTF16))},
	{"compareToUTF16Values", "([B[BII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*,int32_t,int32_t)>(&StringLatin1::compareToUTF16Values))},
	{"equals", "([B[B)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($bytes*,$bytes*)>(&StringLatin1::equals)), nullptr, nullptr, _StringLatin1_MethodAnnotations_equals13},
	{"fillNull", "([BII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&StringLatin1::fillNull))},
	{"getBytes", "([BII[BI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t,$bytes*,int32_t)>(&StringLatin1::getBytes))},
	{"getChar", "([BI)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)($bytes*,int32_t)>(&StringLatin1::getChar))},
	{"getChars", "([BII[CI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t,$chars*,int32_t)>(&StringLatin1::getChars))},
	{"hashCode", "([B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*)>(&StringLatin1::hashCode))},
	{"indexOf", "([BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&StringLatin1::indexOf))},
	{"indexOf", "([B[B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*)>(&StringLatin1::indexOf)), nullptr, nullptr, _StringLatin1_MethodAnnotations_indexOf20},
	{"indexOf", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,$bytes*,int32_t,int32_t)>(&StringLatin1::indexOf)), nullptr, nullptr, _StringLatin1_MethodAnnotations_indexOf21},
	{"indexOfChar", "([BIII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t,int32_t)>(&StringLatin1::indexOfChar)), nullptr, nullptr, _StringLatin1_MethodAnnotations_indexOfChar22},
	{"indexOfNonWhitespace", "([B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*)>(&StringLatin1::indexOfNonWhitespace))},
	{"inflate", "([BII)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t,int32_t)>(&StringLatin1::inflate))},
	{"inflate", "([BI[CII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$chars*,int32_t,int32_t)>(&StringLatin1::inflate)), nullptr, nullptr, _StringLatin1_MethodAnnotations_inflate25},
	{"inflate", "([BI[BII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$bytes*,int32_t,int32_t)>(&StringLatin1::inflate)), nullptr, nullptr, _StringLatin1_MethodAnnotations_inflate26},
	{"lastIndexOf", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,$bytes*,int32_t,int32_t)>(&StringLatin1::lastIndexOf))},
	{"lastIndexOf", "([BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&StringLatin1::lastIndexOf))},
	{"lastIndexOfNonWhitespace", "([B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*)>(&StringLatin1::lastIndexOfNonWhitespace))},
	{"length", "([B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*)>(&StringLatin1::length))},
	{"lines", "([B)Ljava/util/stream/Stream;", "([B)Ljava/util/stream/Stream<Ljava/lang/String;>;", $STATIC, $method(static_cast<$Stream*(*)($bytes*)>(&StringLatin1::lines))},
	{"newString", "([BII)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*,int32_t,int32_t)>(&StringLatin1::newString))},
	{"putChar", "([BII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&StringLatin1::putChar))},
	{"regionMatchesCI", "([BI[BII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($bytes*,int32_t,$bytes*,int32_t,int32_t)>(&StringLatin1::regionMatchesCI))},
	{"regionMatchesCI_UTF16", "([BI[BII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($bytes*,int32_t,$bytes*,int32_t,int32_t)>(&StringLatin1::regionMatchesCI_UTF16))},
	{"replace", "([BCC)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*,char16_t,char16_t)>(&StringLatin1::replace))},
	{"replace", "([BI[BI[BI)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*,int32_t,$bytes*,int32_t,$bytes*,int32_t)>(&StringLatin1::replace))},
	{"strip", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&StringLatin1::strip))},
	{"stripLeading", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&StringLatin1::stripLeading))},
	{"stripTrailing", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&StringLatin1::stripTrailing))},
	{"toBytes", "([III)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($ints*,int32_t,int32_t)>(&StringLatin1::toBytes))},
	{"toBytes", "(C)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)(char16_t)>(&StringLatin1::toBytes))},
	{"toChars", "([B)[C", nullptr, $PUBLIC | $STATIC, $method(static_cast<$chars*(*)($bytes*)>(&StringLatin1::toChars))},
	{"toLowerCase", "(Ljava/lang/String;[BLjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$bytes*,$Locale*)>(&StringLatin1::toLowerCase))},
	{"toLowerCaseEx", "(Ljava/lang/String;[BILjava/util/Locale;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$bytes*,int32_t,$Locale*,bool)>(&StringLatin1::toLowerCaseEx))},
	{"toUpperCase", "(Ljava/lang/String;[BLjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$bytes*,$Locale*)>(&StringLatin1::toUpperCase))},
	{"toUpperCaseEx", "(Ljava/lang/String;[BILjava/util/Locale;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$bytes*,int32_t,$Locale*,bool)>(&StringLatin1::toUpperCaseEx))},
	{"trim", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&StringLatin1::trim))},
	{}
};

$InnerClassInfo _StringLatin1_InnerClassesInfo_[] = {
	{"java.lang.StringLatin1$CharsSpliterator", "java.lang.StringLatin1", "CharsSpliterator", $STATIC},
	{"java.lang.StringLatin1$LinesSpliterator", "java.lang.StringLatin1", "LinesSpliterator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _StringLatin1_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StringLatin1",
	"java.lang.Object",
	nullptr,
	_StringLatin1_FieldInfo_,
	_StringLatin1_MethodInfo_,
	nullptr,
	nullptr,
	_StringLatin1_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.StringLatin1$CharsSpliterator,java.lang.StringLatin1$LinesSpliterator"
};

$Object* allocate$StringLatin1($Class* clazz) {
	return $of($alloc(StringLatin1));
}

bool StringLatin1::$assertionsDisabled = false;

void StringLatin1::init$() {
}

char16_t StringLatin1::charAt($bytes* value, int32_t index) {
	if (index < 0 || index >= $nc(value)->length) {
		$throwNew($StringIndexOutOfBoundsException, index);
	}
	return (char16_t)((int32_t)($nc(value)->get(index) & (uint32_t)255));
}

bool StringLatin1::canEncode(int32_t cp) {
	return (int32_t)((uint32_t)cp >> 8) == 0;
}

int32_t StringLatin1::length($bytes* value) {
	return $nc(value)->length;
}

int32_t StringLatin1::codePointAt($bytes* value, int32_t index, int32_t end) {
	return (int32_t)($nc(value)->get(index) & (uint32_t)255);
}

int32_t StringLatin1::codePointBefore($bytes* value, int32_t index) {
	return (int32_t)($nc(value)->get(index - 1) & (uint32_t)255);
}

int32_t StringLatin1::codePointCount($bytes* value, int32_t beginIndex, int32_t endIndex) {
	return endIndex - beginIndex;
}

$chars* StringLatin1::toChars($bytes* value) {
	$var($chars, dst, $new($chars, $nc(value)->length));
	inflate(value, 0, dst, 0, value->length);
	return dst;
}

$bytes* StringLatin1::inflate($bytes* value, int32_t off, int32_t len) {
	$var($bytes, ret, $StringUTF16::newBytesFor(len));
	inflate(value, off, ret, 0, len);
	return ret;
}

void StringLatin1::getChars($bytes* value, int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {
	inflate(value, srcBegin, dst, dstBegin, srcEnd - srcBegin);
}

void StringLatin1::getBytes($bytes* value, int32_t srcBegin, int32_t srcEnd, $bytes* dst, int32_t dstBegin) {
	$System::arraycopy(value, srcBegin, dst, dstBegin, srcEnd - srcBegin);
}

bool StringLatin1::equals($bytes* value, $bytes* other) {
	if ($nc(value)->length == $nc(other)->length) {
		for (int32_t i = 0; i < value->length; ++i) {
			if (value->get(i) != other->get(i)) {
				return false;
			}
		}
		return true;
	}
	return false;
}

int32_t StringLatin1::compareTo($bytes* value, $bytes* other) {
	int32_t len1 = $nc(value)->length;
	int32_t len2 = $nc(other)->length;
	return compareTo(value, other, len1, len2);
}

int32_t StringLatin1::compareTo($bytes* value, $bytes* other, int32_t len1, int32_t len2) {
	int32_t lim = $Math::min(len1, len2);
	for (int32_t k = 0; k < lim; ++k) {
		if ($nc(value)->get(k) != $nc(other)->get(k)) {
			char16_t var$0 = getChar(value, k);
			return var$0 - getChar(other, k);
		}
	}
	return len1 - len2;
}

int32_t StringLatin1::compareToUTF16($bytes* value, $bytes* other) {
	int32_t len1 = length(value);
	int32_t len2 = $StringUTF16::length(other);
	return compareToUTF16Values(value, other, len1, len2);
}

int32_t StringLatin1::compareToUTF16($bytes* value, $bytes* other, int32_t len1, int32_t len2) {
	$String::checkOffset(len1, length(value));
	$String::checkOffset(len2, $StringUTF16::length(other));
	return compareToUTF16Values(value, other, len1, len2);
}

int32_t StringLatin1::compareToUTF16Values($bytes* value, $bytes* other, int32_t len1, int32_t len2) {
	int32_t lim = $Math::min(len1, len2);
	for (int32_t k = 0; k < lim; ++k) {
		char16_t c1 = getChar(value, k);
		char16_t c2 = $StringUTF16::getChar(other, k);
		if (c1 != c2) {
			return c1 - c2;
		}
	}
	return len1 - len2;
}

int32_t StringLatin1::compareToCI($bytes* value, $bytes* other) {
	int32_t len1 = $nc(value)->length;
	int32_t len2 = $nc(other)->length;
	int32_t lim = $Math::min(len1, len2);
	for (int32_t k = 0; k < lim; ++k) {
		if (value->get(k) != other->get(k)) {
			$init($CharacterDataLatin1);
			char16_t c1 = (char16_t)$nc($CharacterDataLatin1::instance)->toUpperCase(getChar(value, k));
			char16_t c2 = (char16_t)$nc($CharacterDataLatin1::instance)->toUpperCase(getChar(other, k));
			if (c1 != c2) {
				c1 = $Character::toLowerCase(c1);
				c2 = $Character::toLowerCase(c2);
				if (c1 != c2) {
					return c1 - c2;
				}
			}
		}
	}
	return len1 - len2;
}

int32_t StringLatin1::compareToCI_UTF16($bytes* value, $bytes* other) {
	int32_t len1 = length(value);
	int32_t len2 = $StringUTF16::length(other);
	int32_t lim = $Math::min(len1, len2);
	for (int32_t k = 0; k < lim; ++k) {
		char16_t c1 = getChar(value, k);
		char16_t c2 = $StringUTF16::getChar(other, k);
		if (c1 != c2) {
			$init($CharacterDataLatin1);
			c1 = (char16_t)$nc($CharacterDataLatin1::instance)->toUpperCase(c1);
			c2 = $Character::toUpperCase(c2);
			if (c1 != c2) {
				c1 = $Character::toLowerCase(c1);
				c2 = $Character::toLowerCase(c2);
				if (c1 != c2) {
					return c1 - c2;
				}
			}
		}
	}
	return len1 - len2;
}

int32_t StringLatin1::hashCode($bytes* value) {
	int32_t h = 0;
	{
		$var($bytes, arr$, value);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t v = arr$->get(i$);
			{
				h = 31 * h + ((int32_t)(v & (uint32_t)255));
			}
		}
	}
	return h;
}

int32_t StringLatin1::indexOf($bytes* value, int32_t ch, int32_t fromIndex) {
	if (!canEncode(ch)) {
		return -1;
	}
	int32_t max = $nc(value)->length;
	if (fromIndex < 0) {
		fromIndex = 0;
	} else if (fromIndex >= max) {
		return -1;
	}
	return indexOfChar(value, ch, fromIndex, max);
}

int32_t StringLatin1::indexOfChar($bytes* value, int32_t ch, int32_t fromIndex, int32_t max) {
	int8_t c = (int8_t)ch;
	for (int32_t i = fromIndex; i < max; ++i) {
		if ($nc(value)->get(i) == c) {
			return i;
		}
	}
	return -1;
}

int32_t StringLatin1::indexOf($bytes* value, $bytes* str) {
	if ($nc(str)->length == 0) {
		return 0;
	}
	if ($nc(value)->length == 0) {
		return -1;
	}
	return indexOf(value, $nc(value)->length, str, $nc(str)->length, 0);
}

int32_t StringLatin1::indexOf($bytes* value, int32_t valueCount, $bytes* str, int32_t strCount, int32_t fromIndex) {
	int8_t first = $nc(str)->get(0);
	int32_t max = (valueCount - strCount);
	for (int32_t i = fromIndex; i <= max; ++i) {
		if ($nc(value)->get(i) != first) {
			while (true) {
				bool var$0 = ++i <= max;
				if (!(var$0 && value->get(i) != first)) {
					break;
				}
				{
				}
			}
		}
		if (i <= max) {
			int32_t j = i + 1;
			int32_t end = j + strCount - 1;
			for (int32_t k = 1; j < end && $nc(value)->get(j) == str->get(k); ++j, ++k) {
			}
			if (j == end) {
				return i;
			}
		}
	}
	return -1;
}

int32_t StringLatin1::lastIndexOf($bytes* src, int32_t srcCount, $bytes* tgt, int32_t tgtCount, int32_t fromIndex) {
	int32_t min = tgtCount - 1;
	int32_t i = min + fromIndex;
	int32_t strLastIndex = tgtCount - 1;
	char16_t strLastChar = (char16_t)((int32_t)($nc(tgt)->get(strLastIndex) & (uint32_t)255));
	bool startSearchForLastChar$continue = false;
	while (true) {
		while (i >= min && ((int32_t)($nc(src)->get(i) & (uint32_t)255)) != strLastChar) {
			--i;
		}
		if (i < min) {
			return -1;
		}
		int32_t j = i - 1;
		int32_t start = j - strLastIndex;
		int32_t k = strLastIndex - 1;
		while (j > start) {
			if (((int32_t)($nc(src)->get(j--) & (uint32_t)255)) != ((int32_t)(tgt->get(k--) & (uint32_t)255))) {
				--i;
				startSearchForLastChar$continue = true;
				break;
			}
		}
		if (startSearchForLastChar$continue) {
			startSearchForLastChar$continue = false;
			continue;
		}
		return start + 1;
	}
}

int32_t StringLatin1::lastIndexOf($bytes* value, int32_t ch, int32_t fromIndex) {
	if (!canEncode(ch)) {
		return -1;
	}
	int32_t off = $Math::min(fromIndex, $nc(value)->length - 1);
	for (; off >= 0; --off) {
		if ($nc(value)->get(off) == (int8_t)ch) {
			return off;
		}
	}
	return -1;
}

$String* StringLatin1::replace($bytes* value, char16_t oldChar, char16_t newChar) {
	$useLocalCurrentObjectStackCache();
	if (canEncode(oldChar)) {
		int32_t len = $nc(value)->length;
		int32_t i = -1;
		while (++i < len) {
			if (value->get(i) == (int8_t)oldChar) {
				break;
			}
		}
		if (i < len) {
			if (canEncode(newChar)) {
				$var($bytes, buf, $StringConcatHelper::newArray(len));
				for (int32_t j = 0; j < i; ++j) {
					$nc(buf)->set(j, value->get(j));
				}
				while (i < len) {
					int8_t c = value->get(i);
					$nc(buf)->set(i, (c == (int8_t)oldChar) ? (int8_t)newChar : c);
					++i;
				}
				return $new($String, buf, (int8_t)0);
			} else {
				$var($bytes, buf, $StringUTF16::newBytesFor(len));
				inflate(value, 0, buf, 0, i);
				while (i < len) {
					char16_t c = (char16_t)((int32_t)(value->get(i) & (uint32_t)255));
					$StringUTF16::putChar(buf, i, (c == oldChar) ? newChar : c);
					++i;
				}
				return $new($String, buf, (int8_t)1);
			}
		}
	}
	return nullptr;
}

$String* StringLatin1::replace($bytes* value, int32_t valLen, $bytes* targ, int32_t targLen, $bytes* repl, int32_t replLen) {
	$useLocalCurrentObjectStackCache();
	if (!StringLatin1::$assertionsDisabled && !(targLen > 0)) {
		$throwNew($AssertionError);
	}
	int32_t i = 0;
	int32_t j = 0;
	int32_t p = 0;
	if (valLen == 0 || (i = indexOf(value, valLen, targ, targLen, 0)) < 0) {
		return nullptr;
	}
	$var($ints, pos, $new($ints, 16));
	pos->set(0, i);
	i += targLen;
	while ((j = indexOf(value, valLen, targ, targLen, i)) > 0) {
		if (++p == pos->length) {
			$assign(pos, $Arrays::copyOf(pos, $ArraysSupport::newLength(p, 1, p >> 1)));
		}
		pos->set(p, j);
		i = j + targLen;
	}
	int32_t resultLen = 0;
	try {
		resultLen = $Math::addExact(valLen, $Math::multiplyExact(++p, replLen - targLen));
	} catch ($ArithmeticException& ignored) {
		$throwNew($OutOfMemoryError, "Required length exceeds implementation limit"_s);
	}
	if (resultLen == 0) {
		return ""_s;
	}
	$var($bytes, result, $StringConcatHelper::newArray(resultLen));
	int32_t posFrom = 0;
	int32_t posTo = 0;
	for (int32_t q = 0; q < p; ++q) {
		int32_t nextPos = pos->get(q);
		while (posFrom < nextPos) {
			$nc(result)->set(posTo++, $nc(value)->get(posFrom++));
		}
		posFrom += targLen;
		for (int32_t k = 0; k < replLen; ++k) {
			$nc(result)->set(posTo++, $nc(repl)->get(k));
		}
	}
	while (posFrom < valLen) {
		$nc(result)->set(posTo++, $nc(value)->get(posFrom++));
	}
	return $new($String, result, (int8_t)0);
}

bool StringLatin1::regionMatchesCI($bytes* value, int32_t toffset, $bytes* other, int32_t ooffset, int32_t len) {
	int32_t last = toffset + len;
	while (toffset < last) {
		char16_t c1 = (char16_t)((int32_t)($nc(value)->get(toffset++) & (uint32_t)255));
		char16_t c2 = (char16_t)((int32_t)($nc(other)->get(ooffset++) & (uint32_t)255));
		if (c1 == c2) {
			continue;
		}
		$init($CharacterDataLatin1);
		int32_t u1 = $nc($CharacterDataLatin1::instance)->toUpperCase(c1);
		int32_t u2 = $nc($CharacterDataLatin1::instance)->toUpperCase(c2);
		if (u1 == u2) {
			continue;
		}
		int32_t var$0 = $Character::toLowerCase(u1);
		if (var$0 == $Character::toLowerCase(u2)) {
			continue;
		}
		return false;
	}
	return true;
}

bool StringLatin1::regionMatchesCI_UTF16($bytes* value, int32_t toffset, $bytes* other, int32_t ooffset, int32_t len) {
	int32_t last = toffset + len;
	while (toffset < last) {
		char16_t c1 = (char16_t)((int32_t)($nc(value)->get(toffset++) & (uint32_t)255));
		char16_t c2 = $StringUTF16::getChar(other, ooffset++);
		if (c1 == c2) {
			continue;
		}
		$init($CharacterDataLatin1);
		char16_t u1 = (char16_t)$nc($CharacterDataLatin1::instance)->toUpperCase(c1);
		char16_t u2 = $Character::toUpperCase(c2);
		if (u1 == u2) {
			continue;
		}
		char16_t var$0 = $Character::toLowerCase(u1);
		if (var$0 == $Character::toLowerCase(u2)) {
			continue;
		}
		return false;
	}
	return true;
}

$String* StringLatin1::toLowerCase($String* str, $bytes* value, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t first = 0;
	int32_t len = $nc(value)->length;
	for (first = 0; first < len; ++first) {
		int32_t cp = (int32_t)(value->get(first) & (uint32_t)255);
		$init($CharacterDataLatin1);
		if (cp != $nc($CharacterDataLatin1::instance)->toLowerCase(cp)) {
			break;
		}
	}
	if (first == len) {
		return str;
	}
	$var($String, lang, $nc(locale)->getLanguage());
	if (lang == "tr"_s || lang == "az"_s || lang == "lt"_s) {
		return toLowerCaseEx(str, value, first, locale, true);
	}
	$var($bytes, result, $new($bytes, len));
	$System::arraycopy(value, 0, result, 0, first);
	for (int32_t i = first; i < len; ++i) {
		int32_t cp = (int32_t)(value->get(i) & (uint32_t)255);
		$init($CharacterDataLatin1);
		cp = $nc($CharacterDataLatin1::instance)->toLowerCase(cp);
		if (!canEncode(cp)) {
			return toLowerCaseEx(str, value, first, locale, false);
		}
		result->set(i, (int8_t)cp);
	}
	return $new($String, result, (int8_t)0);
}

$String* StringLatin1::toLowerCaseEx($String* str, $bytes* value, int32_t first, $Locale* locale, bool localeDependent) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, result, $StringUTF16::newBytesFor($nc(value)->length));
	int32_t resultOffset = 0;
	for (int32_t i = 0; i < first; ++i) {
		$StringUTF16::putChar(result, resultOffset++, (int32_t)($nc(value)->get(i) & (uint32_t)255));
	}
	for (int32_t i = first; i < $nc(value)->length; ++i) {
		int32_t srcChar = (int32_t)(value->get(i) & (uint32_t)255);
		int32_t lowerChar = 0;
		$var($chars, lowerCharArray, nullptr);
		if (localeDependent) {
			lowerChar = $ConditionalSpecialCasing::toLowerCaseEx(str, i, locale);
		} else {
			$init($CharacterDataLatin1);
			lowerChar = $nc($CharacterDataLatin1::instance)->toLowerCase(srcChar);
		}
		if ($Character::isBmpCodePoint(lowerChar)) {
			$StringUTF16::putChar(result, resultOffset++, lowerChar);
		} else {
			if (lowerChar == $Character::ERROR) {
				$assign(lowerCharArray, $ConditionalSpecialCasing::toLowerCaseCharArray(str, i, locale));
			} else {
				$assign(lowerCharArray, $Character::toChars(lowerChar));
			}
			int32_t mapLen = $nc(lowerCharArray)->length;
			if (mapLen > 1) {
				$var($bytes, result2, $StringUTF16::newBytesFor(($nc(result)->length >> 1) + mapLen - 1));
				$System::arraycopy(result, 0, result2, 0, resultOffset << 1);
				$assign(result, result2);
			}
			for (int32_t x = 0; x < mapLen; ++x) {
				$StringUTF16::putChar(result, resultOffset++, lowerCharArray->get(x));
			}
		}
	}
	return $StringUTF16::newString(result, 0, resultOffset);
}

$String* StringLatin1::toUpperCase($String* str, $bytes* value, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t first = 0;
	int32_t len = $nc(value)->length;
	for (first = 0; first < len; ++first) {
		int32_t cp = (int32_t)(value->get(first) & (uint32_t)255);
		$init($CharacterDataLatin1);
		if (cp != $nc($CharacterDataLatin1::instance)->toUpperCaseEx(cp)) {
			break;
		}
	}
	if (first == len) {
		return str;
	}
	$var($String, lang, $nc(locale)->getLanguage());
	if (lang == "tr"_s || lang == "az"_s || lang == "lt"_s) {
		return toUpperCaseEx(str, value, first, locale, true);
	}
	$var($bytes, result, $new($bytes, len));
	$System::arraycopy(value, 0, result, 0, first);
	for (int32_t i = first; i < len; ++i) {
		int32_t cp = (int32_t)(value->get(i) & (uint32_t)255);
		$init($CharacterDataLatin1);
		cp = $nc($CharacterDataLatin1::instance)->toUpperCaseEx(cp);
		if (!canEncode(cp)) {
			return toUpperCaseEx(str, value, first, locale, false);
		}
		result->set(i, (int8_t)cp);
	}
	return $new($String, result, (int8_t)0);
}

$String* StringLatin1::toUpperCaseEx($String* str, $bytes* value, int32_t first, $Locale* locale, bool localeDependent) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, result, $StringUTF16::newBytesFor($nc(value)->length));
	int32_t resultOffset = 0;
	for (int32_t i = 0; i < first; ++i) {
		$StringUTF16::putChar(result, resultOffset++, (int32_t)($nc(value)->get(i) & (uint32_t)255));
	}
	for (int32_t i = first; i < $nc(value)->length; ++i) {
		int32_t srcChar = (int32_t)(value->get(i) & (uint32_t)255);
		int32_t upperChar = 0;
		$var($chars, upperCharArray, nullptr);
		if (localeDependent) {
			upperChar = $ConditionalSpecialCasing::toUpperCaseEx(str, i, locale);
		} else {
			$init($CharacterDataLatin1);
			upperChar = $nc($CharacterDataLatin1::instance)->toUpperCaseEx(srcChar);
		}
		if ($Character::isBmpCodePoint(upperChar)) {
			$StringUTF16::putChar(result, resultOffset++, upperChar);
		} else {
			if (upperChar == $Character::ERROR) {
				if (localeDependent) {
					$assign(upperCharArray, $ConditionalSpecialCasing::toUpperCaseCharArray(str, i, locale));
				} else {
					$init($CharacterDataLatin1);
					$assign(upperCharArray, $nc($CharacterDataLatin1::instance)->toUpperCaseCharArray(srcChar));
				}
			} else {
				$assign(upperCharArray, $Character::toChars(upperChar));
			}
			int32_t mapLen = $nc(upperCharArray)->length;
			if (mapLen > 1) {
				$var($bytes, result2, $StringUTF16::newBytesFor(($nc(result)->length >> 1) + mapLen - 1));
				$System::arraycopy(result, 0, result2, 0, resultOffset << 1);
				$assign(result, result2);
			}
			for (int32_t x = 0; x < mapLen; ++x) {
				$StringUTF16::putChar(result, resultOffset++, upperCharArray->get(x));
			}
		}
	}
	return $StringUTF16::newString(result, 0, resultOffset);
}

$String* StringLatin1::trim($bytes* value) {
	int32_t len = $nc(value)->length;
	int32_t st = 0;
	while ((st < len) && (((int32_t)(value->get(st) & (uint32_t)255)) <= u' ')) {
		++st;
	}
	while ((st < len) && (((int32_t)(value->get(len - 1) & (uint32_t)255)) <= u' ')) {
		--len;
	}
	return ((st > 0) || (len < value->length)) ? newString(value, st, len - st) : ($String*)nullptr;
}

int32_t StringLatin1::indexOfNonWhitespace($bytes* value) {
	int32_t length = $nc(value)->length;
	int32_t left = 0;
	while (left < length) {
		char16_t ch = getChar(value, left);
		$init($CharacterDataLatin1);
		if (ch != u' ' && ch != u'\t' && !$nc($CharacterDataLatin1::instance)->isWhitespace(ch)) {
			break;
		}
		++left;
	}
	return left;
}

int32_t StringLatin1::lastIndexOfNonWhitespace($bytes* value) {
	int32_t length = $nc(value)->length;
	int32_t right = length;
	while (0 < right) {
		char16_t ch = getChar(value, right - 1);
		$init($CharacterDataLatin1);
		if (ch != u' ' && ch != u'\t' && !$nc($CharacterDataLatin1::instance)->isWhitespace(ch)) {
			break;
		}
		--right;
	}
	return right;
}

$String* StringLatin1::strip($bytes* value) {
	int32_t left = indexOfNonWhitespace(value);
	if (left == $nc(value)->length) {
		return ""_s;
	}
	int32_t right = lastIndexOfNonWhitespace(value);
	bool ifChanged = (left > 0) || (right < $nc(value)->length);
	return ifChanged ? newString(value, left, right - left) : ($String*)nullptr;
}

$String* StringLatin1::stripLeading($bytes* value) {
	int32_t left = indexOfNonWhitespace(value);
	return (left != 0) ? newString(value, left, $nc(value)->length - left) : ($String*)nullptr;
}

$String* StringLatin1::stripTrailing($bytes* value) {
	int32_t right = lastIndexOfNonWhitespace(value);
	return (right != $nc(value)->length) ? newString(value, 0, right) : ($String*)nullptr;
}

$Stream* StringLatin1::lines($bytes* value) {
	return $StreamSupport::stream($($StringLatin1$LinesSpliterator::spliterator(value)), false);
}

void StringLatin1::putChar($bytes* val, int32_t index, int32_t c) {
	$nc(val)->set(index, (int8_t)(c));
}

char16_t StringLatin1::getChar($bytes* val, int32_t index) {
	return (char16_t)((int32_t)($nc(val)->get(index) & (uint32_t)255));
}

$bytes* StringLatin1::toBytes($ints* val, int32_t off, int32_t len) {
	$var($bytes, ret, $new($bytes, len));
	for (int32_t i = 0; i < len; ++i) {
		int32_t cp = $nc(val)->get(off++);
		if (!canEncode(cp)) {
			return nullptr;
		}
		ret->set(i, (int8_t)cp);
	}
	return ret;
}

$bytes* StringLatin1::toBytes(char16_t c) {
	return $new($bytes, {(int8_t)c});
}

$String* StringLatin1::newString($bytes* val, int32_t index, int32_t len) {
	if (len == 0) {
		return ""_s;
	}
	return $new($String, $($Arrays::copyOfRange(val, index, index + len)), (int8_t)0);
}

void StringLatin1::fillNull($bytes* val, int32_t index, int32_t end) {
	$Arrays::fill(val, index, end, (int8_t)0);
}

void StringLatin1::inflate($bytes* src, int32_t srcOff, $chars* dst, int32_t dstOff, int32_t len) {
	for (int32_t i = 0; i < len; ++i) {
		$nc(dst)->set(dstOff++, (char16_t)((int32_t)($nc(src)->get(srcOff++) & (uint32_t)255)));
	}
}

void StringLatin1::inflate($bytes* src, int32_t srcOff, $bytes* dst, int32_t dstOff, int32_t len) {
	$StringUTF16::inflate(src, srcOff, dst, dstOff, len);
}

void clinit$StringLatin1($Class* class$) {
	StringLatin1::$assertionsDisabled = !StringLatin1::class$->desiredAssertionStatus();
}

StringLatin1::StringLatin1() {
}

$Class* StringLatin1::load$($String* name, bool initialize) {
	$loadClass(StringLatin1, name, initialize, &_StringLatin1_ClassInfo_, clinit$StringLatin1, allocate$StringLatin1);
	return class$;
}

$Class* StringLatin1::class$ = nullptr;

	} // lang
} // java