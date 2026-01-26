#include <java/lang/StringUTF16.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ConditionalSpecialCasing.h>
#include <java/lang/Math.h>
#include <java/lang/NegativeArraySizeException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/StringLatin1.h>
#include <java/lang/StringUTF16$LinesSpliterator.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <java/util/Spliterator.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jcpp.h>

#undef COMPACT_STRINGS
#undef ERROR
#undef HI_BYTE_SHIFT
#undef LO_BYTE_SHIFT
#undef MAX_LENGTH
#undef MIN_SUPPLEMENTARY_CODE_POINT
#undef MIN_VALUE

using $ArithmeticException = ::java::lang::ArithmeticException;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $ConditionalSpecialCasing = ::java::lang::ConditionalSpecialCasing;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NegativeArraySizeException = ::java::lang::NegativeArraySizeException;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $StringLatin1 = ::java::lang::StringLatin1;
using $StringUTF16$LinesSpliterator = ::java::lang::StringUTF16$LinesSpliterator;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $Spliterator = ::java::util::Spliterator;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;

namespace java {
	namespace lang {

$CompoundAttribute _StringUTF16_MethodAnnotations_compareTo17[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_compareToLatin122[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_compress27[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_compress28[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_equals31[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_getChar34[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_getChars35[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_indexOf42[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_indexOf43[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_indexOfChar44[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_indexOfLatin146[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_indexOfLatin147[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_putChar63[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringUTF16_MethodAnnotations_toBytes79[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _StringUTF16_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StringUTF16, $assertionsDisabled)},
	{"HI_BYTE_SHIFT", "I", nullptr, $STATIC | $FINAL, $staticField(StringUTF16, HI_BYTE_SHIFT)},
	{"LO_BYTE_SHIFT", "I", nullptr, $STATIC | $FINAL, $staticField(StringUTF16, LO_BYTE_SHIFT)},
	{"MAX_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(StringUTF16, MAX_LENGTH)},
	{}
};

$MethodInfo _StringUTF16_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(StringUTF16, init$, void)},
	{"charAt", "([BI)C", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, charAt, char16_t, $bytes*, int32_t)},
	{"checkBoundsBeginEnd", "(II[B)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, checkBoundsBeginEnd, void, int32_t, int32_t, $bytes*)},
	{"checkBoundsOffCount", "(II[B)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, checkBoundsOffCount, void, int32_t, int32_t, $bytes*)},
	{"checkIndex", "(I[B)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, checkIndex, void, int32_t, $bytes*)},
	{"checkOffset", "(I[B)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, checkOffset, void, int32_t, $bytes*)},
	{"codePointAt", "([BIIZ)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, codePointAt, int32_t, $bytes*, int32_t, int32_t, bool)},
	{"codePointAt", "([BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, codePointAt, int32_t, $bytes*, int32_t, int32_t)},
	{"codePointAtSB", "([BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, codePointAtSB, int32_t, $bytes*, int32_t, int32_t)},
	{"codePointBefore", "([BIZ)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, codePointBefore, int32_t, $bytes*, int32_t, bool)},
	{"codePointBefore", "([BI)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, codePointBefore, int32_t, $bytes*, int32_t)},
	{"codePointBeforeSB", "([BI)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, codePointBeforeSB, int32_t, $bytes*, int32_t)},
	{"codePointCount", "([BIIZ)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, codePointCount, int32_t, $bytes*, int32_t, int32_t, bool)},
	{"codePointCount", "([BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, codePointCount, int32_t, $bytes*, int32_t, int32_t)},
	{"codePointCountSB", "([BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, codePointCountSB, int32_t, $bytes*, int32_t, int32_t)},
	{"codePointIncluding", "([BIIII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, codePointIncluding, int32_t, $bytes*, int32_t, int32_t, int32_t, int32_t)},
	{"compareCodePointCI", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, compareCodePointCI, int32_t, int32_t, int32_t)},
	{"compareTo", "([B[B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, compareTo, int32_t, $bytes*, $bytes*), nullptr, nullptr, _StringUTF16_MethodAnnotations_compareTo17},
	{"compareTo", "([B[BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, compareTo, int32_t, $bytes*, $bytes*, int32_t, int32_t)},
	{"compareToCI", "([B[B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, compareToCI, int32_t, $bytes*, $bytes*)},
	{"compareToCIImpl", "([BII[BII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, compareToCIImpl, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t, int32_t)},
	{"compareToCI_Latin1", "([B[B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, compareToCI_Latin1, int32_t, $bytes*, $bytes*)},
	{"compareToLatin1", "([B[B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, compareToLatin1, int32_t, $bytes*, $bytes*), nullptr, nullptr, _StringUTF16_MethodAnnotations_compareToLatin122},
	{"compareToLatin1", "([B[BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, compareToLatin1, int32_t, $bytes*, $bytes*, int32_t, int32_t)},
	{"compareValues", "([B[BII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, compareValues, int32_t, $bytes*, $bytes*, int32_t, int32_t)},
	{"compress", "([CII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, compress, $bytes*, $chars*, int32_t, int32_t)},
	{"compress", "([BII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, compress, $bytes*, $bytes*, int32_t, int32_t)},
	{"compress", "([CI[BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, compress, int32_t, $chars*, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, _StringUTF16_MethodAnnotations_compress27},
	{"compress", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, compress, int32_t, $bytes*, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, _StringUTF16_MethodAnnotations_compress28},
	{"contentEquals", "([B[BI)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, contentEquals, bool, $bytes*, $bytes*, int32_t)},
	{"contentEquals", "([BLjava/lang/CharSequence;I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, contentEquals, bool, $bytes*, $CharSequence*, int32_t)},
	{"equals", "([B[B)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, equals, bool, $bytes*, $bytes*), nullptr, nullptr, _StringUTF16_MethodAnnotations_equals31},
	{"fillNull", "([BII)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, fillNull, void, $bytes*, int32_t, int32_t)},
	{"getBytes", "([BII[BI)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, getBytes, void, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"getChar", "([BI)C", nullptr, $STATIC, $staticMethod(StringUTF16, getChar, char16_t, $bytes*, int32_t), nullptr, nullptr, _StringUTF16_MethodAnnotations_getChar34},
	{"getChars", "([BII[CI)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, getChars, void, $bytes*, int32_t, int32_t, $chars*, int32_t), nullptr, nullptr, _StringUTF16_MethodAnnotations_getChars35},
	{"getChars", "(III[B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, getChars, int32_t, int32_t, int32_t, int32_t, $bytes*)},
	{"getChars", "(JII[B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, getChars, int32_t, int64_t, int32_t, int32_t, $bytes*)},
	{"getChars", "(II[B)I", nullptr, $STATIC, $staticMethod(StringUTF16, getChars, int32_t, int32_t, int32_t, $bytes*)},
	{"getChars", "(JI[B)I", nullptr, $STATIC, $staticMethod(StringUTF16, getChars, int32_t, int64_t, int32_t, $bytes*)},
	{"hashCode", "([B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, hashCode, int32_t, $bytes*)},
	{"indexOf", "([BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, indexOf, int32_t, $bytes*, int32_t, int32_t)},
	{"indexOf", "([B[B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, indexOf, int32_t, $bytes*, $bytes*), nullptr, nullptr, _StringUTF16_MethodAnnotations_indexOf42},
	{"indexOf", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, indexOf, int32_t, $bytes*, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, _StringUTF16_MethodAnnotations_indexOf43},
	{"indexOfChar", "([BIII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, indexOfChar, int32_t, $bytes*, int32_t, int32_t, int32_t), nullptr, nullptr, _StringUTF16_MethodAnnotations_indexOfChar44},
	{"indexOfCharUnsafe", "([BIII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, indexOfCharUnsafe, int32_t, $bytes*, int32_t, int32_t, int32_t)},
	{"indexOfLatin1", "([B[B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, indexOfLatin1, int32_t, $bytes*, $bytes*), nullptr, nullptr, _StringUTF16_MethodAnnotations_indexOfLatin146},
	{"indexOfLatin1", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, indexOfLatin1, int32_t, $bytes*, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, _StringUTF16_MethodAnnotations_indexOfLatin147},
	{"indexOfLatin1Unsafe", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, indexOfLatin1Unsafe, int32_t, $bytes*, int32_t, $bytes*, int32_t, int32_t)},
	{"indexOfNonWhitespace", "([B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, indexOfNonWhitespace, int32_t, $bytes*)},
	{"indexOfSupplementary", "([BIII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, indexOfSupplementary, int32_t, $bytes*, int32_t, int32_t, int32_t)},
	{"indexOfUnsafe", "([BI[BII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, indexOfUnsafe, int32_t, $bytes*, int32_t, $bytes*, int32_t, int32_t)},
	{"inflate", "([BI[BII)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, inflate, void, $bytes*, int32_t, $bytes*, int32_t, int32_t)},
	{"isBigEndian", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(StringUTF16, isBigEndian, bool)},
	{"lastIndexOf", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, lastIndexOf, int32_t, $bytes*, int32_t, $bytes*, int32_t, int32_t)},
	{"lastIndexOf", "([BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, lastIndexOf, int32_t, $bytes*, int32_t, int32_t)},
	{"lastIndexOfLatin1", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, lastIndexOfLatin1, int32_t, $bytes*, int32_t, $bytes*, int32_t, int32_t)},
	{"lastIndexOfNonWhitespace", "([B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, lastIndexOfNonWhitespace, int32_t, $bytes*)},
	{"lastIndexOfSupplementary", "([BII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, lastIndexOfSupplementary, int32_t, $bytes*, int32_t, int32_t)},
	{"length", "([B)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, length, int32_t, $bytes*)},
	{"lines", "([B)Ljava/util/stream/Stream;", "([B)Ljava/util/stream/Stream<Ljava/lang/String;>;", $STATIC, $staticMethod(StringUTF16, lines, $Stream*, $bytes*)},
	{"newBytesFor", "(I)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, newBytesFor, $bytes*, int32_t)},
	{"newString", "([BII)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, newString, $String*, $bytes*, int32_t, int32_t)},
	{"putChar", "([BII)V", nullptr, $STATIC, $staticMethod(StringUTF16, putChar, void, $bytes*, int32_t, int32_t), nullptr, nullptr, _StringUTF16_MethodAnnotations_putChar63},
	{"putCharSB", "([BII)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, putCharSB, void, $bytes*, int32_t, int32_t)},
	{"putChars", "([BI[CII)V", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, putChars, void, $bytes*, int32_t, $chars*, int32_t, int32_t)},
	{"putCharsAt", "([BICCCC)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, putCharsAt, int32_t, $bytes*, int32_t, char16_t, char16_t, char16_t, char16_t)},
	{"putCharsAt", "([BICCCCC)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, putCharsAt, int32_t, $bytes*, int32_t, char16_t, char16_t, char16_t, char16_t, char16_t)},
	{"putCharsSB", "([BI[CII)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, putCharsSB, void, $bytes*, int32_t, $chars*, int32_t, int32_t)},
	{"putCharsSB", "([BILjava/lang/CharSequence;II)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, putCharsSB, void, $bytes*, int32_t, $CharSequence*, int32_t, int32_t)},
	{"regionMatchesCI", "([BI[BII)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, regionMatchesCI, bool, $bytes*, int32_t, $bytes*, int32_t, int32_t)},
	{"regionMatchesCI_Latin1", "([BI[BII)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, regionMatchesCI_Latin1, bool, $bytes*, int32_t, $bytes*, int32_t, int32_t)},
	{"replace", "([BCC)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, replace, $String*, $bytes*, char16_t, char16_t)},
	{"replace", "([BIZ[BIZ[BIZ)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, replace, $String*, $bytes*, int32_t, bool, $bytes*, int32_t, bool, $bytes*, int32_t, bool)},
	{"reverse", "([BI)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, reverse, void, $bytes*, int32_t)},
	{"reverseAllValidSurrogatePairs", "([BI)V", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, reverseAllValidSurrogatePairs, void, $bytes*, int32_t)},
	{"strip", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, strip, $String*, $bytes*)},
	{"stripLeading", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, stripLeading, $String*, $bytes*)},
	{"stripTrailing", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, stripTrailing, $String*, $bytes*)},
	{"toBytes", "([CII)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, toBytes, $bytes*, $chars*, int32_t, int32_t), nullptr, nullptr, _StringUTF16_MethodAnnotations_toBytes79},
	{"toBytes", "([III)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, toBytes, $bytes*, $ints*, int32_t, int32_t)},
	{"toBytes", "(C)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, toBytes, $bytes*, char16_t)},
	{"toBytesSupplementary", "(I)[B", nullptr, $STATIC, $staticMethod(StringUTF16, toBytesSupplementary, $bytes*, int32_t)},
	{"toChars", "([B)[C", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, toChars, $chars*, $bytes*)},
	{"toLowerCase", "(Ljava/lang/String;[BLjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, toLowerCase, $String*, $String*, $bytes*, $Locale*)},
	{"toLowerCaseEx", "(Ljava/lang/String;[B[BILjava/util/Locale;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, toLowerCaseEx, $String*, $String*, $bytes*, $bytes*, int32_t, $Locale*, bool)},
	{"toUpperCase", "(Ljava/lang/String;[BLjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, toUpperCase, $String*, $String*, $bytes*, $Locale*)},
	{"toUpperCaseEx", "(Ljava/lang/String;[B[BILjava/util/Locale;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(StringUTF16, toUpperCaseEx, $String*, $String*, $bytes*, $bytes*, int32_t, $Locale*, bool)},
	{"trim", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, trim, $String*, $bytes*)},
	{}
};

#define _METHOD_INDEX_isBigEndian 53

$InnerClassInfo _StringUTF16_InnerClassesInfo_[] = {
	{"java.lang.StringUTF16$CodePointsSpliterator", "java.lang.StringUTF16", "CodePointsSpliterator", $STATIC},
	{"java.lang.StringUTF16$CharsSpliterator", "java.lang.StringUTF16", "CharsSpliterator", $STATIC},
	{"java.lang.StringUTF16$LinesSpliterator", "java.lang.StringUTF16", "LinesSpliterator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _StringUTF16_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StringUTF16",
	"java.lang.Object",
	nullptr,
	_StringUTF16_FieldInfo_,
	_StringUTF16_MethodInfo_,
	nullptr,
	nullptr,
	_StringUTF16_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.StringUTF16$CodePointsSpliterator,java.lang.StringUTF16$CharsSpliterator,java.lang.StringUTF16$LinesSpliterator"
};

$Object* allocate$StringUTF16($Class* clazz) {
	return $of($alloc(StringUTF16));
}

bool StringUTF16::$assertionsDisabled = false;
int32_t StringUTF16::HI_BYTE_SHIFT = 0;
int32_t StringUTF16::LO_BYTE_SHIFT = 0;

void StringUTF16::init$() {
}

$bytes* StringUTF16::newBytesFor(int32_t len) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	if (len < 0) {
		$throwNew($NegativeArraySizeException);
	}
	if (len > StringUTF16::MAX_LENGTH) {
		$throwNew($OutOfMemoryError, $$str({"UTF16 String size is "_s, $$str(len), ", should be less than "_s, $$str(StringUTF16::MAX_LENGTH)}));
	}
	return $new($bytes, len << 1);
}

void StringUTF16::putChar($bytes* val, int32_t index, int32_t c) {
	$init(StringUTF16);
	if (!StringUTF16::$assertionsDisabled && !(index >= 0 && index < length(val))) {
		$throwNew($AssertionError, $of("Trusted caller missed bounds check"_s));
	}
	index <<= 1;
	$nc(val)->set(index++, (int8_t)($sr(c, StringUTF16::HI_BYTE_SHIFT)));
	val->set(index, (int8_t)($sr(c, StringUTF16::LO_BYTE_SHIFT)));
}

char16_t StringUTF16::getChar($bytes* val, int32_t index) {
	$init(StringUTF16);
	if (!StringUTF16::$assertionsDisabled && !(index >= 0 && index < length(val))) {
		$throwNew($AssertionError, $of("Trusted caller missed bounds check"_s));
	}
	index <<= 1;
	int32_t var$0 = ($sl((int32_t)($nc(val)->get(index++) & (uint32_t)255), StringUTF16::HI_BYTE_SHIFT));
	return (char16_t)(var$0 | ($sl((int32_t)(val->get(index) & (uint32_t)255), StringUTF16::LO_BYTE_SHIFT)));
}

int32_t StringUTF16::length($bytes* value) {
	$init(StringUTF16);
	return $nc(value)->length >> 1;
}

int32_t StringUTF16::codePointAt($bytes* value, int32_t index, int32_t end, bool checked) {
	$init(StringUTF16);
	if (!StringUTF16::$assertionsDisabled && !(index < end)) {
		$throwNew($AssertionError);
	}
	if (checked) {
		checkIndex(index, value);
	}
	char16_t c1 = getChar(value, index);
	if ($Character::isHighSurrogate(c1) && ++index < end) {
		if (checked) {
			checkIndex(index, value);
		}
		char16_t c2 = getChar(value, index);
		if ($Character::isLowSurrogate(c2)) {
			return $Character::toCodePoint(c1, c2);
		}
	}
	return c1;
}

int32_t StringUTF16::codePointAt($bytes* value, int32_t index, int32_t end) {
	$init(StringUTF16);
	return codePointAt(value, index, end, false);
}

int32_t StringUTF16::codePointBefore($bytes* value, int32_t index, bool checked) {
	$init(StringUTF16);
	--index;
	if (checked) {
		checkIndex(index, value);
	}
	char16_t c2 = getChar(value, index);
	if ($Character::isLowSurrogate(c2) && index > 0) {
		--index;
		if (checked) {
			checkIndex(index, value);
		}
		char16_t c1 = getChar(value, index);
		if ($Character::isHighSurrogate(c1)) {
			return $Character::toCodePoint(c1, c2);
		}
	}
	return c2;
}

int32_t StringUTF16::codePointBefore($bytes* value, int32_t index) {
	$init(StringUTF16);
	return codePointBefore(value, index, false);
}

int32_t StringUTF16::codePointCount($bytes* value, int32_t beginIndex, int32_t endIndex, bool checked) {
	$init(StringUTF16);
	if (!StringUTF16::$assertionsDisabled && !(beginIndex <= endIndex)) {
		$throwNew($AssertionError);
	}
	int32_t count = endIndex - beginIndex;
	int32_t i = beginIndex;
	if (checked && i < endIndex) {
		checkBoundsBeginEnd(i, endIndex, value);
	}
	for (; i < endIndex - 1;) {
		bool var$0 = $Character::isHighSurrogate(getChar(value, i++));
		if (var$0 && $Character::isLowSurrogate(getChar(value, i))) {
			--count;
			++i;
		}
	}
	return count;
}

int32_t StringUTF16::codePointCount($bytes* value, int32_t beginIndex, int32_t endIndex) {
	$init(StringUTF16);
	return codePointCount(value, beginIndex, endIndex, false);
}

$chars* StringUTF16::toChars($bytes* value) {
	$init(StringUTF16);
	$var($chars, dst, $new($chars, $nc(value)->length >> 1));
	getChars(value, 0, dst->length, dst, 0);
	return dst;
}

$bytes* StringUTF16::toBytes($chars* value, int32_t off, int32_t len) {
	$init(StringUTF16);
	$var($bytes, val, newBytesFor(len));
	for (int32_t i = 0; i < len; ++i) {
		putChar(val, i, $nc(value)->get(off));
		++off;
	}
	return val;
}

$bytes* StringUTF16::compress($chars* val, int32_t off, int32_t len) {
	$init(StringUTF16);
	$var($bytes, ret, $new($bytes, len));
	if (compress(val, off, ret, 0, len) == len) {
		return ret;
	}
	return nullptr;
}

$bytes* StringUTF16::compress($bytes* val, int32_t off, int32_t len) {
	$init(StringUTF16);
	$var($bytes, ret, $new($bytes, len));
	if (compress(val, off, ret, 0, len) == len) {
		return ret;
	}
	return nullptr;
}

int32_t StringUTF16::compress($chars* src, int32_t srcOff, $bytes* dst, int32_t dstOff, int32_t len) {
	$init(StringUTF16);
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = $nc(src)->get(srcOff);
		if (c > 255) {
			len = 0;
			break;
		}
		$nc(dst)->set(dstOff, (int8_t)c);
		++srcOff;
		++dstOff;
	}
	return len;
}

int32_t StringUTF16::compress($bytes* src, int32_t srcOff, $bytes* dst, int32_t dstOff, int32_t len) {
	$init(StringUTF16);
	checkBoundsOffCount(srcOff, len, src);
	for (int32_t i = 0; i < len; ++i) {
		char16_t c = getChar(src, srcOff);
		if (c > 255) {
			len = 0;
			break;
		}
		$nc(dst)->set(dstOff, (int8_t)c);
		++srcOff;
		++dstOff;
	}
	return len;
}

$bytes* StringUTF16::toBytes($ints* val, int32_t index, int32_t len) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	int32_t end = index + len;
	int32_t n = len;
	for (int32_t i = index; i < end; ++i) {
		int32_t cp = $nc(val)->get(i);
		if ($Character::isBmpCodePoint(cp)) {
			continue;
		} else if ($Character::isValidCodePoint(cp)) {
			++n;
		} else {
			$throwNew($IllegalArgumentException, $($Integer::toString(cp)));
		}
	}
	$var($bytes, buf, newBytesFor(n));
	{
		int32_t i = index;
		int32_t j = 0;
		for (; i < end; ++i, ++j) {
			int32_t cp = $nc(val)->get(i);
			if ($Character::isBmpCodePoint(cp)) {
				putChar(buf, j, cp);
			} else {
				putChar(buf, j++, $Character::highSurrogate(cp));
				putChar(buf, j, $Character::lowSurrogate(cp));
			}
		}
	}
	return buf;
}

$bytes* StringUTF16::toBytes(char16_t c) {
	$init(StringUTF16);
	$var($bytes, result, $new($bytes, 2));
	putChar(result, 0, c);
	return result;
}

$bytes* StringUTF16::toBytesSupplementary(int32_t cp) {
	$init(StringUTF16);
	$var($bytes, result, $new($bytes, 4));
	putChar(result, 0, $Character::highSurrogate(cp));
	putChar(result, 1, $Character::lowSurrogate(cp));
	return result;
}

void StringUTF16::getChars($bytes* value, int32_t srcBegin, int32_t srcEnd, $chars* dst, int32_t dstBegin) {
	$init(StringUTF16);
	if (srcBegin < srcEnd) {
		checkBoundsOffCount(srcBegin, srcEnd - srcBegin, value);
	}
	for (int32_t i = srcBegin; i < srcEnd; ++i) {
		$nc(dst)->set(dstBegin++, getChar(value, i));
	}
}

void StringUTF16::getBytes($bytes* value, int32_t srcBegin, int32_t srcEnd, $bytes* dst, int32_t dstBegin) {
	$init(StringUTF16);
	srcBegin <<= 1;
	srcEnd <<= 1;
	for (int32_t i = srcBegin + ($sr(1, StringUTF16::LO_BYTE_SHIFT)); i < srcEnd; i += 2) {
		$nc(dst)->set(dstBegin++, $nc(value)->get(i));
	}
}

bool StringUTF16::equals($bytes* value, $bytes* other) {
	$init(StringUTF16);
	if ($nc(value)->length == $nc(other)->length) {
		int32_t len = value->length >> 1;
		for (int32_t i = 0; i < len; ++i) {
			char16_t var$0 = getChar(value, i);
			if (var$0 != getChar(other, i)) {
				return false;
			}
		}
		return true;
	}
	return false;
}

int32_t StringUTF16::compareTo($bytes* value, $bytes* other) {
	$init(StringUTF16);
	int32_t len1 = length(value);
	int32_t len2 = length(other);
	return compareValues(value, other, len1, len2);
}

int32_t StringUTF16::compareTo($bytes* value, $bytes* other, int32_t len1, int32_t len2) {
	$init(StringUTF16);
	checkOffset(len1, value);
	checkOffset(len2, other);
	return compareValues(value, other, len1, len2);
}

int32_t StringUTF16::compareValues($bytes* value, $bytes* other, int32_t len1, int32_t len2) {
	$init(StringUTF16);
	int32_t lim = $Math::min(len1, len2);
	for (int32_t k = 0; k < lim; ++k) {
		char16_t c1 = getChar(value, k);
		char16_t c2 = getChar(other, k);
		if (c1 != c2) {
			return c1 - c2;
		}
	}
	return len1 - len2;
}

int32_t StringUTF16::compareToLatin1($bytes* value, $bytes* other) {
	$init(StringUTF16);
	return -$StringLatin1::compareToUTF16(other, value);
}

int32_t StringUTF16::compareToLatin1($bytes* value, $bytes* other, int32_t len1, int32_t len2) {
	$init(StringUTF16);
	return -$StringLatin1::compareToUTF16(other, value, len2, len1);
}

int32_t StringUTF16::compareToCI($bytes* value, $bytes* other) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	$var($bytes, var$0, value);
	int32_t var$1 = length(value);
	$var($bytes, var$2, other);
	return compareToCIImpl(var$0, 0, var$1, var$2, 0, length(other));
}

int32_t StringUTF16::compareToCIImpl($bytes* value, int32_t toffset, int32_t tlen, $bytes* other, int32_t ooffset, int32_t olen) {
	$init(StringUTF16);
	int32_t tlast = toffset + tlen;
	int32_t olast = ooffset + olen;
	if (!StringUTF16::$assertionsDisabled && !(toffset >= 0 && ooffset >= 0)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(tlast <= length(value))) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(olast <= length(other))) {
		$throwNew($AssertionError);
	}
	{
		int32_t k1 = toffset;
		int32_t k2 = ooffset;
		for (; k1 < tlast && k2 < olast; ++k1, ++k2) {
			int32_t cp1 = (int32_t)getChar(value, k1);
			int32_t cp2 = (int32_t)getChar(other, k2);
			if (cp1 == cp2 || compareCodePointCI(cp1, cp2) == 0) {
				continue;
			}
			cp1 = codePointIncluding(value, cp1, k1, toffset, tlast);
			if (cp1 < 0) {
				++k1;
				cp1 = -cp1;
			}
			cp2 = codePointIncluding(other, cp2, k2, ooffset, olast);
			if (cp2 < 0) {
				++k2;
				cp2 = -cp2;
			}
			int32_t diff = compareCodePointCI(cp1, cp2);
			if (diff != 0) {
				return diff;
			}
		}
	}
	return tlen - olen;
}

int32_t StringUTF16::compareCodePointCI(int32_t cp1, int32_t cp2) {
	$init(StringUTF16);
	cp1 = $Character::toUpperCase(cp1);
	cp2 = $Character::toUpperCase(cp2);
	if (cp1 != cp2) {
		cp1 = $Character::toLowerCase(cp1);
		cp2 = $Character::toLowerCase(cp2);
		if (cp1 != cp2) {
			return cp1 - cp2;
		}
	}
	return 0;
}

int32_t StringUTF16::codePointIncluding($bytes* ba, int32_t cp, int32_t index, int32_t start, int32_t end) {
	$init(StringUTF16);
	if (!$Character::isSurrogate((char16_t)cp)) {
		return cp;
	}
	if ($Character::isLowSurrogate((char16_t)cp)) {
		if (index > start) {
			char16_t c = getChar(ba, index - 1);
			if ($Character::isHighSurrogate(c)) {
				return $Character::toCodePoint(c, (char16_t)cp);
			}
		}
	} else if (index + 1 < end) {
		char16_t c = getChar(ba, index + 1);
		if ($Character::isLowSurrogate(c)) {
			return -$Character::toCodePoint((char16_t)cp, c);
		}
	}
	return cp;
}

int32_t StringUTF16::compareToCI_Latin1($bytes* value, $bytes* other) {
	$init(StringUTF16);
	return -$StringLatin1::compareToCI_UTF16(other, value);
}

int32_t StringUTF16::hashCode($bytes* value) {
	$init(StringUTF16);
	int32_t h = 0;
	int32_t length = $nc(value)->length >> 1;
	for (int32_t i = 0; i < length; ++i) {
		h = 31 * h + getChar(value, i);
	}
	return h;
}

int32_t StringUTF16::indexOf($bytes* value, int32_t ch, int32_t fromIndex) {
	$init(StringUTF16);
	int32_t max = $nc(value)->length >> 1;
	if (fromIndex < 0) {
		fromIndex = 0;
	} else if (fromIndex >= max) {
		return -1;
	}
	if (ch < $Character::MIN_SUPPLEMENTARY_CODE_POINT) {
		return indexOfChar(value, ch, fromIndex, max);
	} else {
		return indexOfSupplementary(value, ch, fromIndex, max);
	}
}

int32_t StringUTF16::indexOf($bytes* value, $bytes* str) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	if ($nc(str)->length == 0) {
		return 0;
	}
	if ($nc(value)->length < $nc(str)->length) {
		return -1;
	}
	$var($bytes, var$0, value);
	int32_t var$1 = length(value);
	$var($bytes, var$2, str);
	return indexOfUnsafe(var$0, var$1, var$2, length(str), 0);
}

int32_t StringUTF16::indexOf($bytes* value, int32_t valueCount, $bytes* str, int32_t strCount, int32_t fromIndex) {
	$init(StringUTF16);
	checkBoundsBeginEnd(fromIndex, valueCount, value);
	checkBoundsBeginEnd(0, strCount, str);
	return indexOfUnsafe(value, valueCount, str, strCount, fromIndex);
}

int32_t StringUTF16::indexOfUnsafe($bytes* value, int32_t valueCount, $bytes* str, int32_t strCount, int32_t fromIndex) {
	$init(StringUTF16);
	if (!StringUTF16::$assertionsDisabled && !(fromIndex >= 0)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(strCount > 0)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(strCount <= length(str))) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(valueCount >= strCount)) {
		$throwNew($AssertionError);
	}
	char16_t first = getChar(str, 0);
	int32_t max = (valueCount - strCount);
	for (int32_t i = fromIndex; i <= max; ++i) {
		if (getChar(value, i) != first) {
			while (true) {
				bool var$0 = ++i <= max;
				if (!(var$0 && getChar(value, i) != first)) {
					break;
				}
				{
				}
			}
		}
		if (i <= max) {
			int32_t j = i + 1;
			int32_t end = j + strCount - 1;
			{
				int32_t k = 1;
				for (;; ++j, ++k) {
					bool var$1 = j < end;
					if (var$1) {
						char16_t var$2 = getChar(value, j);
						var$1 = var$2 == getChar(str, k);
					}
					if (!(var$1)) {
						break;
					}
					{
					}
				}
			}
			if (j == end) {
				return i;
			}
		}
	}
	return -1;
}

int32_t StringUTF16::indexOfLatin1($bytes* value, $bytes* str) {
	$init(StringUTF16);
	if ($nc(str)->length == 0) {
		return 0;
	}
	if (length(value) < $nc(str)->length) {
		return -1;
	}
	return indexOfLatin1Unsafe(value, length(value), str, $nc(str)->length, 0);
}

int32_t StringUTF16::indexOfLatin1($bytes* src, int32_t srcCount, $bytes* tgt, int32_t tgtCount, int32_t fromIndex) {
	$init(StringUTF16);
	checkBoundsBeginEnd(fromIndex, srcCount, src);
	$String::checkBoundsBeginEnd(0, tgtCount, $nc(tgt)->length);
	return indexOfLatin1Unsafe(src, srcCount, tgt, tgtCount, fromIndex);
}

int32_t StringUTF16::indexOfLatin1Unsafe($bytes* src, int32_t srcCount, $bytes* tgt, int32_t tgtCount, int32_t fromIndex) {
	$init(StringUTF16);
	if (!StringUTF16::$assertionsDisabled && !(fromIndex >= 0)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(tgtCount > 0)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(tgtCount <= $nc(tgt)->length)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(srcCount >= tgtCount)) {
		$throwNew($AssertionError);
	}
	char16_t first = (char16_t)((int32_t)($nc(tgt)->get(0) & (uint32_t)255));
	int32_t max = (srcCount - tgtCount);
	for (int32_t i = fromIndex; i <= max; ++i) {
		if (getChar(src, i) != first) {
			while (true) {
				bool var$0 = ++i <= max;
				if (!(var$0 && getChar(src, i) != first)) {
					break;
				}
				{
				}
			}
		}
		if (i <= max) {
			int32_t j = i + 1;
			int32_t end = j + tgtCount - 1;
			for (int32_t k = 1; j < end && getChar(src, j) == ((int32_t)(tgt->get(k) & (uint32_t)255)); ++j, ++k) {
			}
			if (j == end) {
				return i;
			}
		}
	}
	return -1;
}

int32_t StringUTF16::indexOfChar($bytes* value, int32_t ch, int32_t fromIndex, int32_t max) {
	$init(StringUTF16);
	checkBoundsBeginEnd(fromIndex, max, value);
	return indexOfCharUnsafe(value, ch, fromIndex, max);
}

int32_t StringUTF16::indexOfCharUnsafe($bytes* value, int32_t ch, int32_t fromIndex, int32_t max) {
	$init(StringUTF16);
	for (int32_t i = fromIndex; i < max; ++i) {
		if (getChar(value, i) == ch) {
			return i;
		}
	}
	return -1;
}

int32_t StringUTF16::indexOfSupplementary($bytes* value, int32_t ch, int32_t fromIndex, int32_t max) {
	$init(StringUTF16);
	if ($Character::isValidCodePoint(ch)) {
		char16_t hi = $Character::highSurrogate(ch);
		char16_t lo = $Character::lowSurrogate(ch);
		checkBoundsBeginEnd(fromIndex, max, value);
		for (int32_t i = fromIndex; i < max - 1; ++i) {
			bool var$0 = getChar(value, i) == hi;
			if (var$0 && getChar(value, i + 1) == lo) {
				return i;
			}
		}
	}
	return -1;
}

int32_t StringUTF16::lastIndexOf($bytes* src, int32_t srcCount, $bytes* tgt, int32_t tgtCount, int32_t fromIndex) {
	$init(StringUTF16);
	if (!StringUTF16::$assertionsDisabled && !(fromIndex >= 0)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(tgtCount > 0)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(tgtCount <= length(tgt))) {
		$throwNew($AssertionError);
	}
	int32_t min = tgtCount - 1;
	int32_t i = min + fromIndex;
	int32_t strLastIndex = tgtCount - 1;
	checkIndex(strLastIndex, tgt);
	char16_t strLastChar = getChar(tgt, strLastIndex);
	checkIndex(i, src);
	bool startSearchForLastChar$continue = false;
	while (true) {
		while (i >= min && getChar(src, i) != strLastChar) {
			--i;
		}
		if (i < min) {
			return -1;
		}
		int32_t j = i - 1;
		int32_t start = j - strLastIndex;
		int32_t k = strLastIndex - 1;
		while (j > start) {
			char16_t var$0 = getChar(src, j--);
			if (var$0 != getChar(tgt, k--)) {
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

int32_t StringUTF16::lastIndexOf($bytes* value, int32_t ch, int32_t fromIndex) {
	$init(StringUTF16);
	if (ch < $Character::MIN_SUPPLEMENTARY_CODE_POINT) {
		int32_t i = $Math::min(fromIndex, ($nc(value)->length >> 1) - 1);
		for (; i >= 0; --i) {
			if (getChar(value, i) == ch) {
				return i;
			}
		}
		return -1;
	} else {
		return lastIndexOfSupplementary(value, ch, fromIndex);
	}
}

int32_t StringUTF16::lastIndexOfSupplementary($bytes* value, int32_t ch, int32_t fromIndex) {
	$init(StringUTF16);
	if ($Character::isValidCodePoint(ch)) {
		char16_t hi = $Character::highSurrogate(ch);
		char16_t lo = $Character::lowSurrogate(ch);
		int32_t i = $Math::min(fromIndex, ($nc(value)->length >> 1) - 2);
		for (; i >= 0; --i) {
			bool var$0 = getChar(value, i) == hi;
			if (var$0 && getChar(value, i + 1) == lo) {
				return i;
			}
		}
	}
	return -1;
}

$String* StringUTF16::replace($bytes* value, char16_t oldChar, char16_t newChar) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(value)->length >> 1;
	int32_t i = -1;
	while (++i < len) {
		if (getChar(value, i) == oldChar) {
			break;
		}
	}
	if (i < len) {
		$var($bytes, buf, $new($bytes, value->length));
		for (int32_t j = 0; j < i; ++j) {
			putChar(buf, j, getChar(value, j));
		}
		while (i < len) {
			char16_t c = getChar(value, i);
			putChar(buf, i, c == oldChar ? newChar : c);
			++i;
		}
		bool var$0 = $String::COMPACT_STRINGS && !$StringLatin1::canEncode(oldChar);
		if (var$0 && $StringLatin1::canEncode(newChar)) {
			$var($bytes, val, compress(buf, 0, len));
			if (val != nullptr) {
				return $new($String, val, (int8_t)0);
			}
		}
		return $new($String, buf, (int8_t)1);
	}
	return nullptr;
}

$String* StringUTF16::replace($bytes* value, int32_t valLen, bool valLat1, $bytes* targ, int32_t targLen, bool targLat1, $bytes* repl, int32_t replLen, bool replLat1) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	if (!StringUTF16::$assertionsDisabled && !(targLen > 0)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(!valLat1 || !targLat1 || !replLat1)) {
		$throwNew($AssertionError);
	}
	if ($String::COMPACT_STRINGS && valLat1 && !targLat1) {
		return nullptr;
	}
	int32_t i = ($String::COMPACT_STRINGS && valLat1) ? $StringLatin1::indexOf(value, targ) : ($String::COMPACT_STRINGS && targLat1) ? indexOfLatin1(value, targ) : indexOf(value, targ);
	if (i < 0) {
		return nullptr;
	}
	int32_t j = 0;
	int32_t p = 0;
	$var($ints, pos, $new($ints, 16));
	pos->set(0, i);
	i += targLen;
	while ((j = (($String::COMPACT_STRINGS && valLat1) ? $StringLatin1::indexOf(value, valLen, targ, targLen, i) : ($String::COMPACT_STRINGS && targLat1) ? indexOfLatin1(value, valLen, targ, targLen, i) : indexOf(value, valLen, targ, targLen, i))) > 0) {
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
	$var($bytes, result, newBytesFor(resultLen));
	int32_t posFrom = 0;
	int32_t posTo = 0;
	for (int32_t q = 0; q < p; ++q) {
		int32_t nextPos = pos->get(q);
		if ($String::COMPACT_STRINGS && valLat1) {
			while (posFrom < nextPos) {
				char16_t c = (char16_t)((int32_t)($nc(value)->get(posFrom++) & (uint32_t)255));
				putChar(result, posTo++, c);
			}
		} else {
			while (posFrom < nextPos) {
				putChar(result, posTo++, getChar(value, posFrom++));
			}
		}
		posFrom += targLen;
		if ($String::COMPACT_STRINGS && replLat1) {
			for (int32_t k = 0; k < replLen; ++k) {
				char16_t c = (char16_t)((int32_t)($nc(repl)->get(k) & (uint32_t)255));
				putChar(result, posTo++, c);
			}
		} else {
			for (int32_t k = 0; k < replLen; ++k) {
				putChar(result, posTo++, getChar(repl, k));
			}
		}
	}
	if ($String::COMPACT_STRINGS && valLat1) {
		while (posFrom < valLen) {
			char16_t c = (char16_t)((int32_t)($nc(value)->get(posFrom++) & (uint32_t)255));
			putChar(result, posTo++, c);
		}
	} else {
		while (posFrom < valLen) {
			putChar(result, posTo++, getChar(value, posFrom++));
		}
	}
	if ($String::COMPACT_STRINGS && replLat1 && !targLat1) {
		$var($bytes, lat1Result, compress(result, 0, resultLen));
		if (lat1Result != nullptr) {
			return $new($String, lat1Result, (int8_t)0);
		}
	}
	return $new($String, result, (int8_t)1);
}

bool StringUTF16::regionMatchesCI($bytes* value, int32_t toffset, $bytes* other, int32_t ooffset, int32_t len) {
	$init(StringUTF16);
	return compareToCIImpl(value, toffset, len, other, ooffset, len) == 0;
}

bool StringUTF16::regionMatchesCI_Latin1($bytes* value, int32_t toffset, $bytes* other, int32_t ooffset, int32_t len) {
	$init(StringUTF16);
	return $StringLatin1::regionMatchesCI_UTF16(other, ooffset, value, toffset, len);
}

$String* StringUTF16::toLowerCase($String* str, $bytes* value, $Locale* locale) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t first = 0;
	bool hasSurr = false;
	int32_t len = $nc(value)->length >> 1;
	for (first = 0; first < len; ++first) {
		int32_t cp = (int32_t)getChar(value, first);
		if ($Character::isSurrogate((char16_t)cp)) {
			hasSurr = true;
			break;
		}
		if (cp != $Character::toLowerCase(cp)) {
			break;
		}
	}
	if (first == len) {
		return str;
	}
	$var($bytes, result, $new($bytes, value->length));
	$System::arraycopy(value, 0, result, 0, first << 1);
	$var($String, lang, $nc(locale)->getLanguage());
	if (lang == "tr"_s || lang == "az"_s || lang == "lt"_s) {
		return toLowerCaseEx(str, value, result, first, locale, true);
	}
	if (hasSurr) {
		return toLowerCaseEx(str, value, result, first, locale, false);
	}
	int32_t bits = 0;
	for (int32_t i = first; i < len; ++i) {
		int32_t cp = (int32_t)getChar(value, i);
		if (cp == (char16_t)0x3A3 || $Character::isSurrogate((char16_t)cp)) {
			return toLowerCaseEx(str, value, result, i, locale, false);
		}
		if (cp == (char16_t)0x130) {
			return toLowerCaseEx(str, value, result, i, locale, true);
		}
		cp = $Character::toLowerCase(cp);
		if (!$Character::isBmpCodePoint(cp)) {
			return toLowerCaseEx(str, value, result, i, locale, false);
		}
		bits |= cp;
		putChar(result, i, cp);
	}
	if (bits > 255) {
		return $new($String, result, (int8_t)1);
	} else {
		return newString(result, 0, len);
	}
}

$String* StringUTF16::toLowerCaseEx($String* str, $bytes* value, $bytes* result$renamed, int32_t first, $Locale* locale, bool localeDependent) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	$var($bytes, result, result$renamed);
	if (!StringUTF16::$assertionsDisabled && !($nc(result)->length == $nc(value)->length)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(first >= 0)) {
		$throwNew($AssertionError);
	}
	int32_t resultOffset = first;
	int32_t length = $nc(value)->length >> 1;
	int32_t srcCount = 0;
	for (int32_t i = first; i < length; i += srcCount) {
		int32_t srcChar = getChar(value, i);
		int32_t lowerChar = 0;
		$var($chars, lowerCharArray, nullptr);
		srcCount = 1;
		if ($Character::isSurrogate((char16_t)srcChar)) {
			srcChar = codePointAt(value, i, length);
			srcCount = $Character::charCount(srcChar);
		}
		if (localeDependent || srcChar == (char16_t)0x3A3 || srcChar == (char16_t)0x130) {
			lowerChar = $ConditionalSpecialCasing::toLowerCaseEx(str, i, locale);
		} else {
			lowerChar = $Character::toLowerCase(srcChar);
		}
		if ($Character::isBmpCodePoint(lowerChar)) {
			putChar(result, resultOffset++, lowerChar);
		} else {
			if (lowerChar == $Character::ERROR) {
				$assign(lowerCharArray, $ConditionalSpecialCasing::toLowerCaseCharArray(str, i, locale));
			} else {
				$assign(lowerCharArray, $Character::toChars(lowerChar));
			}
			int32_t mapLen = $nc(lowerCharArray)->length;
			if (mapLen > srcCount) {
				$var($bytes, result2, newBytesFor(($nc(result)->length >> 1) + mapLen - srcCount));
				$System::arraycopy(result, 0, result2, 0, resultOffset << 1);
				$assign(result, result2);
			}
			if (!StringUTF16::$assertionsDisabled && !(resultOffset >= 0)) {
				$throwNew($AssertionError);
			}
			if (!StringUTF16::$assertionsDisabled && !(resultOffset + mapLen <= StringUTF16::length(result))) {
				$throwNew($AssertionError);
			}
			for (int32_t x = 0; x < mapLen; ++x) {
				putChar(result, resultOffset++, lowerCharArray->get(x));
			}
		}
	}
	return newString(result, 0, resultOffset);
}

$String* StringUTF16::toUpperCase($String* str, $bytes* value, $Locale* locale) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t first = 0;
	bool hasSurr = false;
	int32_t len = $nc(value)->length >> 1;
	for (first = 0; first < len; ++first) {
		int32_t cp = (int32_t)getChar(value, first);
		if ($Character::isSurrogate((char16_t)cp)) {
			hasSurr = true;
			break;
		}
		if (cp != $Character::toUpperCaseEx(cp)) {
			break;
		}
	}
	if (first == len) {
		return str;
	}
	$var($bytes, result, $new($bytes, value->length));
	$System::arraycopy(value, 0, result, 0, first << 1);
	$var($String, lang, $nc(locale)->getLanguage());
	if (lang == "tr"_s || lang == "az"_s || lang == "lt"_s) {
		return toUpperCaseEx(str, value, result, first, locale, true);
	}
	if (hasSurr) {
		return toUpperCaseEx(str, value, result, first, locale, false);
	}
	int32_t bits = 0;
	for (int32_t i = first; i < len; ++i) {
		int32_t cp = (int32_t)getChar(value, i);
		if ($Character::isSurrogate((char16_t)cp)) {
			return toUpperCaseEx(str, value, result, i, locale, false);
		}
		cp = $Character::toUpperCaseEx(cp);
		if (!$Character::isBmpCodePoint(cp)) {
			return toUpperCaseEx(str, value, result, i, locale, false);
		}
		bits |= cp;
		putChar(result, i, cp);
	}
	if (bits > 255) {
		return $new($String, result, (int8_t)1);
	} else {
		return newString(result, 0, len);
	}
}

$String* StringUTF16::toUpperCaseEx($String* str, $bytes* value, $bytes* result$renamed, int32_t first, $Locale* locale, bool localeDependent) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	$var($bytes, result, result$renamed);
	if (!StringUTF16::$assertionsDisabled && !($nc(result)->length == $nc(value)->length)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(first >= 0)) {
		$throwNew($AssertionError);
	}
	int32_t resultOffset = first;
	int32_t length = $nc(value)->length >> 1;
	int32_t srcCount = 0;
	for (int32_t i = first; i < length; i += srcCount) {
		int32_t srcChar = getChar(value, i);
		int32_t upperChar = 0;
		$var($chars, upperCharArray, nullptr);
		srcCount = 1;
		if ($Character::isSurrogate((char16_t)srcChar)) {
			srcChar = codePointAt(value, i, length);
			srcCount = $Character::charCount(srcChar);
		}
		if (localeDependent) {
			upperChar = $ConditionalSpecialCasing::toUpperCaseEx(str, i, locale);
		} else {
			upperChar = $Character::toUpperCaseEx(srcChar);
		}
		if ($Character::isBmpCodePoint(upperChar)) {
			putChar(result, resultOffset++, upperChar);
		} else {
			if (upperChar == $Character::ERROR) {
				if (localeDependent) {
					$assign(upperCharArray, $ConditionalSpecialCasing::toUpperCaseCharArray(str, i, locale));
				} else {
					$assign(upperCharArray, $Character::toUpperCaseCharArray(srcChar));
				}
			} else {
				$assign(upperCharArray, $Character::toChars(upperChar));
			}
			int32_t mapLen = $nc(upperCharArray)->length;
			if (mapLen > srcCount) {
				$var($bytes, result2, newBytesFor(($nc(result)->length >> 1) + mapLen - srcCount));
				$System::arraycopy(result, 0, result2, 0, resultOffset << 1);
				$assign(result, result2);
			}
			if (!StringUTF16::$assertionsDisabled && !(resultOffset >= 0)) {
				$throwNew($AssertionError);
			}
			if (!StringUTF16::$assertionsDisabled && !(resultOffset + mapLen <= StringUTF16::length(result))) {
				$throwNew($AssertionError);
			}
			for (int32_t x = 0; x < mapLen; ++x) {
				putChar(result, resultOffset++, upperCharArray->get(x));
			}
		}
	}
	return newString(result, 0, resultOffset);
}

$String* StringUTF16::trim($bytes* value) {
	$init(StringUTF16);
	int32_t length = $nc(value)->length >> 1;
	int32_t len = length;
	int32_t st = 0;
	while (st < len && getChar(value, st) <= u' ') {
		++st;
	}
	while (st < len && getChar(value, len - 1) <= u' ') {
		--len;
	}
	return ((st > 0) || (len < length)) ? $new($String, $($Arrays::copyOfRange(value, st << 1, len << 1)), (int8_t)1) : ($String*)nullptr;
}

int32_t StringUTF16::indexOfNonWhitespace($bytes* value) {
	$init(StringUTF16);
	int32_t length = $nc(value)->length >> 1;
	int32_t left = 0;
	while (left < length) {
		int32_t codepoint = codePointAt(value, left, length);
		if (codepoint != u' ' && codepoint != u'\t' && !$Character::isWhitespace(codepoint)) {
			break;
		}
		left += $Character::charCount(codepoint);
	}
	return left;
}

int32_t StringUTF16::lastIndexOfNonWhitespace($bytes* value) {
	$init(StringUTF16);
	int32_t length = (int32_t)((uint32_t)$nc(value)->length >> 1);
	int32_t right = length;
	while (0 < right) {
		int32_t codepoint = codePointBefore(value, right);
		if (codepoint != u' ' && codepoint != u'\t' && !$Character::isWhitespace(codepoint)) {
			break;
		}
		right -= $Character::charCount(codepoint);
	}
	return right;
}

$String* StringUTF16::strip($bytes* value) {
	$init(StringUTF16);
	int32_t length = (int32_t)((uint32_t)$nc(value)->length >> 1);
	int32_t left = indexOfNonWhitespace(value);
	if (left == length) {
		return ""_s;
	}
	int32_t right = lastIndexOfNonWhitespace(value);
	bool ifChanged = (left > 0) || (right < length);
	return ifChanged ? newString(value, left, right - left) : ($String*)nullptr;
}

$String* StringUTF16::stripLeading($bytes* value) {
	$init(StringUTF16);
	int32_t length = (int32_t)((uint32_t)$nc(value)->length >> 1);
	int32_t left = indexOfNonWhitespace(value);
	return (left != 0) ? newString(value, left, length - left) : ($String*)nullptr;
}

$String* StringUTF16::stripTrailing($bytes* value) {
	$init(StringUTF16);
	int32_t length = (int32_t)((uint32_t)$nc(value)->length >> 1);
	int32_t right = lastIndexOfNonWhitespace(value);
	return (right != length) ? newString(value, 0, right) : ($String*)nullptr;
}

$Stream* StringUTF16::lines($bytes* value) {
	$init(StringUTF16);
	return $StreamSupport::stream($($StringUTF16$LinesSpliterator::spliterator(value)), false);
}

void StringUTF16::putChars($bytes* val, int32_t index, $chars* str, int32_t off, int32_t end) {
	$init(StringUTF16);
	while (off < end) {
		putChar(val, index++, $nc(str)->get(off++));
	}
}

$String* StringUTF16::newString($bytes* val, int32_t index, int32_t len) {
	$init(StringUTF16);
	$useLocalCurrentObjectStackCache();
	if (len == 0) {
		return ""_s;
	}
	if ($String::COMPACT_STRINGS) {
		$var($bytes, buf, compress(val, index, len));
		if (buf != nullptr) {
			return $new($String, buf, (int8_t)0);
		}
	}
	int32_t last = index + len;
	return $new($String, $($Arrays::copyOfRange(val, index << 1, last << 1)), (int8_t)1);
}

void StringUTF16::fillNull($bytes* val, int32_t index, int32_t end) {
	$init(StringUTF16);
	$Arrays::fill(val, index << 1, end << 1, (int8_t)0);
}

void StringUTF16::putCharSB($bytes* val, int32_t index, int32_t c) {
	$init(StringUTF16);
	checkIndex(index, val);
	putChar(val, index, c);
}

void StringUTF16::putCharsSB($bytes* val, int32_t index, $chars* ca, int32_t off, int32_t end) {
	$init(StringUTF16);
	checkBoundsBeginEnd(index, index + end - off, val);
	putChars(val, index, ca, off, end);
}

void StringUTF16::putCharsSB($bytes* val, int32_t index, $CharSequence* s, int32_t off, int32_t end) {
	$init(StringUTF16);
	checkBoundsBeginEnd(index, index + end - off, val);
	for (int32_t i = off; i < end; ++i) {
		putChar(val, index++, $nc(s)->charAt(i));
	}
}

int32_t StringUTF16::codePointAtSB($bytes* val, int32_t index, int32_t end) {
	$init(StringUTF16);
	return codePointAt(val, index, end, true);
}

int32_t StringUTF16::codePointBeforeSB($bytes* val, int32_t index) {
	$init(StringUTF16);
	return codePointBefore(val, index, true);
}

int32_t StringUTF16::codePointCountSB($bytes* val, int32_t beginIndex, int32_t endIndex) {
	$init(StringUTF16);
	return codePointCount(val, beginIndex, endIndex, true);
}

int32_t StringUTF16::getChars(int32_t i, int32_t begin, int32_t end, $bytes* value) {
	$init(StringUTF16);
	checkBoundsBeginEnd(begin, end, value);
	int32_t pos = getChars(i, end, value);
	if (!StringUTF16::$assertionsDisabled && !(begin == pos)) {
		$throwNew($AssertionError);
	}
	return pos;
}

int32_t StringUTF16::getChars(int64_t l, int32_t begin, int32_t end, $bytes* value) {
	$init(StringUTF16);
	checkBoundsBeginEnd(begin, end, value);
	int32_t pos = getChars(l, end, value);
	if (!StringUTF16::$assertionsDisabled && !(begin == pos)) {
		$throwNew($AssertionError);
	}
	return pos;
}

bool StringUTF16::contentEquals($bytes* v1, $bytes* v2, int32_t len) {
	$init(StringUTF16);
	checkBoundsOffCount(0, len, v2);
	for (int32_t i = 0; i < len; ++i) {
		if ((char16_t)((int32_t)($nc(v1)->get(i) & (uint32_t)255)) != getChar(v2, i)) {
			return false;
		}
	}
	return true;
}

bool StringUTF16::contentEquals($bytes* value, $CharSequence* cs, int32_t len) {
	$init(StringUTF16);
	checkOffset(len, value);
	for (int32_t i = 0; i < len; ++i) {
		char16_t var$0 = getChar(value, i);
		if (var$0 != $nc(cs)->charAt(i)) {
			return false;
		}
	}
	return true;
}

int32_t StringUTF16::putCharsAt($bytes* value, int32_t i, char16_t c1, char16_t c2, char16_t c3, char16_t c4) {
	$init(StringUTF16);
	int32_t end = i + 4;
	checkBoundsBeginEnd(i, end, value);
	putChar(value, i++, c1);
	putChar(value, i++, c2);
	putChar(value, i++, c3);
	putChar(value, i++, c4);
	if (!StringUTF16::$assertionsDisabled && !(i == end)) {
		$throwNew($AssertionError);
	}
	return end;
}

int32_t StringUTF16::putCharsAt($bytes* value, int32_t i, char16_t c1, char16_t c2, char16_t c3, char16_t c4, char16_t c5) {
	$init(StringUTF16);
	int32_t end = i + 5;
	checkBoundsBeginEnd(i, end, value);
	putChar(value, i++, c1);
	putChar(value, i++, c2);
	putChar(value, i++, c3);
	putChar(value, i++, c4);
	putChar(value, i++, c5);
	if (!StringUTF16::$assertionsDisabled && !(i == end)) {
		$throwNew($AssertionError);
	}
	return end;
}

char16_t StringUTF16::charAt($bytes* value, int32_t index) {
	$init(StringUTF16);
	checkIndex(index, value);
	return getChar(value, index);
}

void StringUTF16::reverse($bytes* val, int32_t count) {
	$init(StringUTF16);
	checkOffset(count, val);
	int32_t n = count - 1;
	bool hasSurrogates = false;
	for (int32_t j = (n - 1) >> 1; j >= 0; --j) {
		int32_t k = n - j;
		char16_t cj = getChar(val, j);
		char16_t ck = getChar(val, k);
		putChar(val, j, ck);
		putChar(val, k, cj);
		bool var$0 = $Character::isSurrogate(cj);
		if (var$0 || $Character::isSurrogate(ck)) {
			hasSurrogates = true;
		}
	}
	if (hasSurrogates) {
		reverseAllValidSurrogatePairs(val, count);
	}
}

void StringUTF16::reverseAllValidSurrogatePairs($bytes* val, int32_t count) {
	$init(StringUTF16);
	for (int32_t i = 0; i < count - 1; ++i) {
		char16_t c2 = getChar(val, i);
		if ($Character::isLowSurrogate(c2)) {
			char16_t c1 = getChar(val, i + 1);
			if ($Character::isHighSurrogate(c1)) {
				putChar(val, i++, c1);
				putChar(val, i, c2);
			}
		}
	}
}

void StringUTF16::inflate($bytes* src, int32_t srcOff, $bytes* dst, int32_t dstOff, int32_t len) {
	$init(StringUTF16);
	checkBoundsOffCount(dstOff, len, dst);
	for (int32_t i = 0; i < len; ++i) {
		putChar(dst, dstOff++, (int32_t)($nc(src)->get(srcOff++) & (uint32_t)255));
	}
}

int32_t StringUTF16::lastIndexOfLatin1($bytes* src, int32_t srcCount, $bytes* tgt, int32_t tgtCount, int32_t fromIndex) {
	$init(StringUTF16);
	if (!StringUTF16::$assertionsDisabled && !(fromIndex >= 0)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(tgtCount > 0)) {
		$throwNew($AssertionError);
	}
	if (!StringUTF16::$assertionsDisabled && !(tgtCount <= $nc(tgt)->length)) {
		$throwNew($AssertionError);
	}
	int32_t min = tgtCount - 1;
	int32_t i = min + fromIndex;
	int32_t strLastIndex = tgtCount - 1;
	char16_t strLastChar = (char16_t)((int32_t)($nc(tgt)->get(strLastIndex) & (uint32_t)255));
	checkIndex(i, src);
	bool startSearchForLastChar$continue = false;
	while (true) {
		while (i >= min && getChar(src, i) != strLastChar) {
			--i;
		}
		if (i < min) {
			return -1;
		}
		int32_t j = i - 1;
		int32_t start = j - strLastIndex;
		int32_t k = strLastIndex - 1;
		while (j > start) {
			if (getChar(src, j--) != ((int32_t)(tgt->get(k--) & (uint32_t)255))) {
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

bool StringUTF16::isBigEndian() {
	uint32_t endianTest = 0xff000000;
	return ((char*)(&endianTest))[0] != 0;
}

int32_t StringUTF16::getChars(int32_t i, int32_t index, $bytes* buf) {
	$init(StringUTF16);
	int32_t q = 0;
	int32_t r = 0;
	int32_t charPos = index;
	bool negative = (i < 0);
	if (!negative) {
		i = -i;
	}
	while (i <= -100) {
		q = i / 100;
		r = (q * 100) - i;
		i = q;
		$init($Integer);
		putChar(buf, --charPos, $nc($Integer::DigitOnes)->get(r));
		putChar(buf, --charPos, $nc($Integer::DigitTens)->get(r));
	}
	q = i / 10;
	r = (q * 10) - i;
	putChar(buf, --charPos, u'0' + r);
	if (q < 0) {
		putChar(buf, --charPos, u'0' - q);
	}
	if (negative) {
		putChar(buf, --charPos, u'-');
	}
	return charPos;
}

int32_t StringUTF16::getChars(int64_t i, int32_t index, $bytes* buf) {
	$init(StringUTF16);
	int64_t q = 0;
	int32_t r = 0;
	int32_t charPos = index;
	bool negative = (i < 0);
	if (!negative) {
		i = -i;
	}
	while (i <= $Integer::MIN_VALUE) {
		q = i / 100;
		r = (int32_t)((q * 100) - i);
		i = q;
		$init($Integer);
		putChar(buf, --charPos, $nc($Integer::DigitOnes)->get(r));
		putChar(buf, --charPos, $nc($Integer::DigitTens)->get(r));
	}
	int32_t q2 = 0;
	int32_t i2 = (int32_t)i;
	while (i2 <= -100) {
		q2 = i2 / 100;
		r = (q2 * 100) - i2;
		i2 = q2;
		$init($Integer);
		putChar(buf, --charPos, $nc($Integer::DigitOnes)->get(r));
		putChar(buf, --charPos, $nc($Integer::DigitTens)->get(r));
	}
	q2 = i2 / 10;
	r = (q2 * 10) - i2;
	putChar(buf, --charPos, u'0' + r);
	if (q2 < 0) {
		putChar(buf, --charPos, u'0' - q2);
	}
	if (negative) {
		putChar(buf, --charPos, u'-');
	}
	return charPos;
}

void StringUTF16::checkIndex(int32_t off, $bytes* val) {
	$init(StringUTF16);
	$String::checkIndex(off, length(val));
}

void StringUTF16::checkOffset(int32_t off, $bytes* val) {
	$init(StringUTF16);
	$String::checkOffset(off, length(val));
}

void StringUTF16::checkBoundsBeginEnd(int32_t begin, int32_t end, $bytes* val) {
	$init(StringUTF16);
	$String::checkBoundsBeginEnd(begin, end, length(val));
}

void StringUTF16::checkBoundsOffCount(int32_t offset, int32_t count, $bytes* val) {
	$init(StringUTF16);
	$String::checkBoundsOffCount(offset, count, length(val));
}

void clinit$StringUTF16($Class* class$) {
	StringUTF16::$assertionsDisabled = !StringUTF16::class$->desiredAssertionStatus();
	{
		if (StringUTF16::isBigEndian()) {
			StringUTF16::HI_BYTE_SHIFT = 8;
			StringUTF16::LO_BYTE_SHIFT = 0;
		} else {
			StringUTF16::HI_BYTE_SHIFT = 0;
			StringUTF16::LO_BYTE_SHIFT = 8;
		}
	}
}

StringUTF16::StringUTF16() {
}

$Class* StringUTF16::load$($String* name, bool initialize) {
	$loadClass(StringUTF16, name, initialize, &_StringUTF16_ClassInfo_, clinit$StringUTF16, allocate$StringUTF16);
	return class$;
}

$Class* StringUTF16::class$ = nullptr;

	} // lang
} // java