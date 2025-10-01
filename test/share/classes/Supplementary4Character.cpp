#include <Supplementary4Character.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_SUPPLEMENTARY
#undef MIN_CODE_POINT
#undef MAX_LOW
#undef MIN_HIGH
#undef MAX_HIGH
#undef MAX_VALUE
#undef MIN_VALUE
#undef MIN_LOW
#undef MIN_SUPPLEMENTARY
#undef MAX_CODE_POINT

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

$FieldInfo _Supplementary4Character_FieldInfo_[] = {
	{"MIN_HIGH", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Supplementary4Character, MIN_HIGH)},
	{"MAX_HIGH", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Supplementary4Character, MAX_HIGH)},
	{"MIN_LOW", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Supplementary4Character, MIN_LOW)},
	{"MAX_LOW", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Supplementary4Character, MAX_LOW)},
	{"MIN_CODE_POINT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Supplementary4Character, MIN_CODE_POINT)},
	{"MIN_SUPPLEMENTARY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Supplementary4Character, MIN_SUPPLEMENTARY)},
	{"MAX_SUPPLEMENTARY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Supplementary4Character, MAX_SUPPLEMENTARY)},
	{"At", "Z", nullptr, $STATIC | $FINAL, $constField(Supplementary4Character, At)},
	{"Before", "Z", nullptr, $STATIC | $FINAL, $constField(Supplementary4Character, Before)},
	{}
};

$MethodInfo _Supplementary4Character_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Supplementary4Character::*)()>(&Supplementary4Character::init$))},
	{"callCodePoint", "(ZLjava/lang/CharSequence;ILjava/lang/Class;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool,$CharSequence*,int32_t,$Class*)>(&Supplementary4Character::callCodePoint))},
	{"callCodePoint", "(Z[CILjava/lang/Class;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool,$chars*,int32_t,$Class*)>(&Supplementary4Character::callCodePoint))},
	{"callCodePoint", "(Z[CIILjava/lang/Class;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool,$chars*,int32_t,int32_t,$Class*)>(&Supplementary4Character::callCodePoint))},
	{"callCodePointCount", "(Ljava/lang/Object;IILjava/lang/Class;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,int32_t,int32_t,$Class*)>(&Supplementary4Character::callCodePointCount))},
	{"callOffsetByCodePoints", "(Ljava/lang/CharSequence;IILjava/lang/Class;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($CharSequence*,int32_t,int32_t,$Class*)>(&Supplementary4Character::callOffsetByCodePoints))},
	{"callOffsetByCodePoints", "([CIIIILjava/lang/Class;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($chars*,int32_t,int32_t,int32_t,int32_t,$Class*)>(&Supplementary4Character::callOffsetByCodePoints))},
	{"callToChars1", "(ILjava/lang/Class;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$Class*)>(&Supplementary4Character::callToChars1))},
	{"callToChars3", "(I[CILjava/lang/Class;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$chars*,int32_t,$Class*)>(&Supplementary4Character::callToChars3))},
	{"callToString", "(ILjava/lang/Class;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$Class*)>(&Supplementary4Character::callToString))},
	{"checkCodePointCount", "(Ljava/lang/Object;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,int32_t,int32_t)>(&Supplementary4Character::checkCodePointCount))},
	{"checkNewIndex", "(Ljava/lang/Object;III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,int32_t,int32_t,int32_t)>(&Supplementary4Character::checkNewIndex))},
	{"codePointCount", "(Ljava/lang/CharSequence;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($CharSequence*)>(&Supplementary4Character::codePointCount))},
	{"constantError", "(Ljava/lang/String;II)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,int32_t,int32_t)>(&Supplementary4Character::constantError))},
	{"getType", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&Supplementary4Character::getType))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Supplementary4Character::main))},
	{"test00", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Supplementary4Character::test00))},
	{"test01", "([C)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($chars*)>(&Supplementary4Character::test01))},
	{"test02", "(Ljava/lang/CharSequence;)V", nullptr, $STATIC, $method(static_cast<void(*)($CharSequence*)>(&Supplementary4Character::test02))},
	{"test03", "([C)V", nullptr, $STATIC, $method(static_cast<void(*)($chars*)>(&Supplementary4Character::test03))},
	{"test04", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&Supplementary4Character::test04))},
	{"test05", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&Supplementary4Character::test05))},
	{"test06", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Supplementary4Character::test06))},
	{"testCodePoint", "(Ljava/lang/String;[I)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$ints*)>(&Supplementary4Character::testCodePoint))},
	{"testConstants", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Supplementary4Character::testConstants))},
	{"testExceptions00", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Supplementary4Character::testExceptions00))},
	{"testExceptions01", "(Ljava/lang/CharSequence;)V", nullptr, $STATIC, $method(static_cast<void(*)($CharSequence*)>(&Supplementary4Character::testExceptions01))},
	{"testExceptions02", "([C)V", nullptr, $STATIC, $method(static_cast<void(*)($chars*)>(&Supplementary4Character::testExceptions02))},
	{"testUnpaired", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Supplementary4Character::testUnpaired))},
	{"toHexString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&Supplementary4Character::toHexString))},
	{"toHexString", "(Ljava/lang/String;[C)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$chars*)>(&Supplementary4Character::toHexString))},
	{}
};

$ClassInfo _Supplementary4Character_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Supplementary4Character",
	"java.lang.Object",
	nullptr,
	_Supplementary4Character_FieldInfo_,
	_Supplementary4Character_MethodInfo_
};

$Object* allocate$Supplementary4Character($Class* clazz) {
	return $of($alloc(Supplementary4Character));
}

void Supplementary4Character::init$() {
}

void Supplementary4Character::main($StringArray* args) {
	testConstants();
	test00();
	$var($chars, cu, $new($chars, (Supplementary4Character::MAX_SUPPLEMENTARY + 1) * 2));
	int32_t length = test01(cu);
	$var($String, str, $new($String, cu, 0, length));
	$assign(cu, nullptr);
	test02(str);
	test03($(str->toCharArray()));
	test04(str);
	test05(str);
	test06();
	testUnpaired();
	testExceptions00();
	testExceptions01(str);
	testExceptions02($(str->toCharArray()));
}

void Supplementary4Character::testConstants() {
}

void Supplementary4Character::constantError($String* name, int32_t value, int32_t expectedValue) {
	$var($String, var$0, $$str({"Character."_s, name, " has a wrong value: got "_s, $(toHexString(value)), ", expected "_s}));
	$throwNew($RuntimeException, $$concat(var$0, $(toHexString(expectedValue))));
}

void Supplementary4Character::test00() {
	for (int32_t cp = -Supplementary4Character::MAX_SUPPLEMENTARY; cp <= Supplementary4Character::MAX_SUPPLEMENTARY * 2; ++cp) {
		bool isValid = cp >= 0 && cp <= Supplementary4Character::MAX_SUPPLEMENTARY;
		if ($Character::isValidCodePoint(cp) != isValid) {
			$throwNew($RuntimeException, $$str({"isValidCodePoint failed with "_s, $(toHexString(cp))}));
		}
		bool isSupplementary = cp >= Supplementary4Character::MIN_SUPPLEMENTARY && cp <= Supplementary4Character::MAX_SUPPLEMENTARY;
		if ($Character::isSupplementaryCodePoint(cp) != isSupplementary) {
			$throwNew($RuntimeException, $$str({"isSupplementaryCodePoint failed with "_s, $(toHexString(cp))}));
		}
		int32_t len = $Character::charCount(cp);
		if (isValid) {
			if ((isSupplementary && len != 2) || (!isSupplementary && len != 1)) {
				$throwNew($RuntimeException, $$str({"wrong character length "_s, $$str(len), " for "_s, $(toHexString(cp))}));
			}
		} else if (len != 1 && len != 2) {
			$throwNew($RuntimeException, $$str({"wrong character length "_s, $$str(len), " for "_s, $(toHexString(cp))}));
		}
	}
}

int32_t Supplementary4Character::test01($chars* cu) {
	int32_t index = 0;
	for (int32_t i = 0; i <= $Character::MAX_VALUE; ++i) {
		$var($chars, u, $Character::toChars(i));
		if ($nc(u)->length != 1 || $nc(u)->get(0) != i) {
			$throwNew($RuntimeException, $$str({"wrong toChars(int) result for BMP: "_s, $(toHexString("u"_s, u))}));
		}
		int32_t n = $Character::toChars(i, cu, index);
		if (n != 1 || $nc(cu)->get(index) != i) {
			$throwNew($RuntimeException, $$str({"wrong toChars(int, char[], int) result for BMP: len="_s, $$str(n), ", cu["_s, $$str(index), "]="_s, $(toHexString(cu->get(index)))}));
		}
		bool isHigh = i >= Supplementary4Character::MIN_HIGH && i <= Supplementary4Character::MAX_HIGH;
		if ($Character::isHighSurrogate((char16_t)i) != isHigh) {
			$throwNew($RuntimeException, $$str({"wrong high-surrogate test for "_s, $(toHexString(i))}));
		}
		bool isLow = i >= Supplementary4Character::MIN_LOW && i <= Supplementary4Character::MAX_LOW;
		if ($Character::isLowSurrogate((char16_t)i) != isLow) {
			$throwNew($RuntimeException, $$str({"wrong low-surrogate test for "_s, $(toHexString(i))}));
		}
		if (!isHigh && !isLow) {
			++index;
		}
	}
	int32_t supplementary = Supplementary4Character::MIN_SUPPLEMENTARY;
	for (int32_t i = $Character::MAX_VALUE / 2; i <= $Character::MAX_VALUE; ++i) {
		char16_t hi = (char16_t)i;
		bool isHigh = $Character::isHighSurrogate(hi);
		for (int32_t j = $Character::MAX_VALUE / 2; j <= $Character::MAX_VALUE; ++j) {
			char16_t lo = (char16_t)j;
			bool isLow = $Character::isLowSurrogate(lo);
			bool isSurrogatePair = isHigh && isLow;
			if ($Character::isSurrogatePair(hi, lo) != isSurrogatePair) {
				$var($String, var$0, $$str({"wrong surrogate pair test for hi="_s, $(toHexString(hi)), ", lo="_s}));
				$throwNew($RuntimeException, $$concat(var$0, $(toHexString(lo))));
			}
			if (isSurrogatePair) {
				int32_t cp = $Character::toCodePoint(hi, lo);
				if (cp != supplementary) {
					$var($String, var$1, $$str({"wrong code point: got "_s, $(toHexString(cp)), ", expected="_s}));
					$throwNew($RuntimeException, $$concat(var$1, $(toHexString(supplementary))));
				}
				$var($chars, u, $Character::toChars(cp));
				if ($nc(u)->length != 2 || $nc(u)->get(0) != hi || $nc(u)->get(1) != lo) {
					$throwNew($RuntimeException, $$str({"wrong toChars(int) result for supplementary: "_s, $(toHexString("u"_s, u))}));
				}
				int32_t n = $Character::toChars(cp, cu, index);
				if (n != 2 || $nc(cu)->get(index) != hi || $nc(cu)->get(index + 1) != lo) {
					$var($String, var$2, $$str({"wrong toChars(int, char[], int) result for supplementary: len="_s, $$str(n), ", cu["_s, $$str(index), "]="_s, $(toHexString(cu->get(index))), ", cu["_s, $$str((index + 1)), "]="_s}));
					$throwNew($RuntimeException, $$concat(var$2, $(toHexString(cu->get(index + 1)))));
				}
				index += n;
				++supplementary;
			}
		}
	}
	if (supplementary != Supplementary4Character::MAX_SUPPLEMENTARY + 1) {
		$throwNew($RuntimeException, $$str({"wrong supplementary count (supplementary="_s, $(toHexString(supplementary)), ")"_s}));
	}
	int32_t nCodeUnits = $Character::MAX_VALUE + 1 - (Supplementary4Character::MAX_LOW - Supplementary4Character::MIN_HIGH + 1) + ((Supplementary4Character::MAX_SUPPLEMENTARY - Supplementary4Character::MIN_SUPPLEMENTARY + 1) * 2);
	if (index != nCodeUnits) {
		$throwNew($RuntimeException, $$str({"wrong number of code units: "_s, $$str(index), ", expected "_s, $$str(nCodeUnits)}));
	}
	return index;
}

void Supplementary4Character::test02($CharSequence* cs) {
	int32_t cp = 0;
	int32_t ch = 0;
	for (int32_t i = 0; i < $nc(cs)->length(); i += $Character::charCount(ch)) {
		ch = $Character::codePointAt(cs, i);
		if (ch != cp) {
			$var($String, var$0, $$str({"wrong codePointAt(CharSequence, "_s, $$str(i), ") value: got "_s, $(toHexString(ch)), ", expected "_s}));
			$throwNew($RuntimeException, $$concat(var$0, $(toHexString(cp))));
		}
		++cp;
		if (cp == Supplementary4Character::MIN_HIGH) {
			cp = Supplementary4Character::MAX_LOW + 1;
		}
	}
	--cp;
	for (int32_t i = $nc(cs)->length(); i > 0; i -= $Character::charCount(ch)) {
		ch = $Character::codePointBefore(cs, i);
		if (ch != cp) {
			$var($String, var$1, $$str({"codePointBefore(CharSequence, "_s, $$str(i), ") returned "_s, $(toHexString(ch)), ", expected "_s}));
			$throwNew($RuntimeException, $$concat(var$1, $(toHexString(cp))));
		}
		--cp;
		if (cp == Supplementary4Character::MAX_LOW) {
			cp = Supplementary4Character::MIN_HIGH - 1;
		}
	}
}

void Supplementary4Character::test03($chars* a) {
	int32_t cp = 0;
	int32_t ch = 0;
	for (int32_t i = 0; i < $nc(a)->length; i += $Character::charCount(ch)) {
		ch = $Character::codePointAt(a, i);
		if (ch != cp) {
			$var($String, var$0, $$str({"codePointAt(char[], "_s, $$str(i), ") returned "_s, $(toHexString(ch)), ", expected "_s}));
			$throwNew($RuntimeException, $$concat(var$0, $(toHexString(cp))));
		}
		int32_t x = $Character::codePointAt(a, i, i + 1);
		if (x != a->get(i)) {
			$throwNew($RuntimeException, $($String::format("codePointAt(char[], %d, %d) returned 0x%04x, expected 0x%04x\n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$($of($Integer::valueOf(i + 1))),
				$($of($Integer::valueOf(x))),
				$($of($Integer::valueOf((int32_t)a->get(i))))
			}))));
		}
		++cp;
		if (cp == Supplementary4Character::MIN_HIGH) {
			cp = Supplementary4Character::MAX_LOW + 1;
		}
	}
	--cp;
	for (int32_t i = $nc(a)->length; i > 0; i -= $Character::charCount(ch)) {
		ch = $Character::codePointBefore(a, i);
		if (ch != cp) {
			$var($String, var$1, $$str({"codePointBefore(char[], "_s, $$str(i), ") returned "_s, $(toHexString(ch)), ", expected "_s}));
			$throwNew($RuntimeException, $$concat(var$1, $(toHexString(cp))));
		}
		int32_t x = $Character::codePointBefore(a, i, i - 1);
		if (x != a->get(i - 1)) {
			$throwNew($RuntimeException, $($String::format("codePointAt(char[], %d, %d) returned 0x%04x, expected 0x%04x\n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$($of($Integer::valueOf(i - 1))),
				$($of($Integer::valueOf(x))),
				$($of($Integer::valueOf((int32_t)a->get(i - 1))))
			}))));
		}
		--cp;
		if (cp == Supplementary4Character::MAX_LOW) {
			cp = Supplementary4Character::MIN_HIGH - 1;
		}
	}
}

void Supplementary4Character::test04($String* str) {
	int32_t length = $nc(str)->length();
	$var($chars, a, str->toCharArray());
	for (int32_t i = 0; i <= length; i += 99, length -= 29999) {
		int32_t n = $Character::codePointCount(static_cast<$CharSequence*>(str), i, length);
		int32_t m = codePointCount($(str->substring(i, length)));
		checkCodePointCount(str, n, m);
		n = $Character::codePointCount(a, i, length - i);
		checkCodePointCount(a, n, m);
	}
	length = str->length();
	int32_t n = $Character::codePointCount(static_cast<$CharSequence*>(str), 0, 0);
	checkCodePointCount(str, n, 0);
	n = $Character::codePointCount(static_cast<$CharSequence*>(str), length, length);
	checkCodePointCount(str, n, 0);
	n = $Character::codePointCount(a, 0, 0);
	checkCodePointCount(a, n, 0);
	n = $Character::codePointCount(a, length, 0);
	checkCodePointCount(a, n, 0);
}

int32_t Supplementary4Character::codePointCount($CharSequence* seq) {
	int32_t n = 0;
	int32_t len = 0;
	for (int32_t i = 0; i < $nc(seq)->length(); i += len) {
		int32_t codepoint = $Character::codePointAt(seq, i);
		++n;
		len = $Character::charCount(codepoint);
	}
	return n;
}

void Supplementary4Character::checkCodePointCount(Object$* data, int32_t n, int32_t expected) {
	$var($String, type, getType(data));
	if (n != expected) {
		$throwNew($RuntimeException, $$str({"codePointCount("_s, type, "...) returned "_s, $$str(n), ", expected "_s, $$str(expected)}));
	}
}

void Supplementary4Character::test05($String* str) {
	int32_t length = $nc(str)->length();
	$var($chars, a, str->toCharArray());
	for (int32_t i = 0; i <= length; i += 99, length -= 29999) {
		int32_t nCodePoints = $Character::codePointCount(a, i, length - i);
		int32_t index = 0;
		int32_t expectedHighIndex = length;
		if (length < a->length) {
			int32_t cp = $Character::codePointAt(a, length - 1);
			if ($Character::isSupplementaryCodePoint(cp)) {
				++expectedHighIndex;
			}
		}
		index = $Character::offsetByCodePoints(str, i, nCodePoints);
		checkNewIndex(str, nCodePoints, index, expectedHighIndex);
		int32_t expectedLowIndex = i;
		if (i > 0) {
			int32_t cp = $Character::codePointBefore(a, i + 1);
			if ($Character::isSupplementaryCodePoint(cp)) {
				--expectedLowIndex;
			}
		}
		index = $Character::offsetByCodePoints(str, length, -nCodePoints);
		checkNewIndex(str, -nCodePoints, index, expectedLowIndex);
		int32_t start = $Math::max(0, i - 1);
		int32_t limit = $Math::min(a->length, length + 1);
		index = $Character::offsetByCodePoints(a, start, limit - start, i, nCodePoints);
		checkNewIndex(a, nCodePoints, index, expectedHighIndex);
		if (length != expectedHighIndex) {
			index = $Character::offsetByCodePoints(a, start, length - start, i, nCodePoints);
			checkNewIndex(a, nCodePoints, index, length);
		}
		index = $Character::offsetByCodePoints(a, start, limit - start, length, -nCodePoints);
		checkNewIndex(a, -nCodePoints, index, expectedLowIndex);
		if (i != expectedLowIndex) {
			index = $Character::offsetByCodePoints(a, i, limit - i, length, -nCodePoints);
			checkNewIndex(a, -nCodePoints, index, i);
		}
	}
	length = str->length();
	int32_t index = $Character::offsetByCodePoints(str, 0, 0);
	checkNewIndex(str, 0, index, 0);
	index = $Character::offsetByCodePoints(str, length, 0);
	checkNewIndex(str, 0, index, length);
	index = $Character::offsetByCodePoints(a, 0, 0, 0, 0);
	checkNewIndex(a, 0, index, 0);
	index = $Character::offsetByCodePoints(a, 0, length, 0, 0);
	checkNewIndex(a, 0, index, 0);
	index = $Character::offsetByCodePoints(a, 0, length, length, 0);
	checkNewIndex(a, 0, index, length);
	index = $Character::offsetByCodePoints(a, length, 0, length, 0);
	checkNewIndex(a, 0, index, length);
}

void Supplementary4Character::test06() {
	for (int32_t cp = $Character::MIN_CODE_POINT; cp <= $Character::MAX_CODE_POINT; ++cp) {
		$var($String, result, $Character::toString(cp));
		$var($String, expected, $new($String, $($Character::toChars(cp))));
		if (!$nc(result)->equals(expected)) {
			$throwNew($RuntimeException, $$str({"Wrong string is created. code point: "_s, $$str(cp), ", result: "_s, result, ", expected: "_s, expected}));
		}
	}
}

void Supplementary4Character::checkNewIndex(Object$* data, int32_t offset, int32_t result, int32_t expected) {
	$var($String, type, getType(data));
	$var($String, offsetType, (offset > 0) ? "positive"_s : (offset < 0) ? "negative"_s : "0"_s);
	if (result != expected) {
		$throwNew($RuntimeException, $$str({"offsetByCodePoints("_s, type, ", ...) ["_s, offsetType, " offset] returned "_s, $$str(result), ", expected "_s, $$str(expected)}));
	}
}

void Supplementary4Character::testUnpaired() {
	testCodePoint($cstr({0xD800}), $$new($ints, {0x0000D800}));
	testCodePoint($cstr({0xDC00}), $$new($ints, {0x0000DC00}));
	testCodePoint($cstr({'a', 0xD800}), $$new($ints, {
		(int32_t)u'a',
		0x0000D800
	}));
	testCodePoint($cstr({'a', 0xDC00}), $$new($ints, {
		(int32_t)u'a',
		0x0000DC00
	}));
	testCodePoint($cstr({0xD800, 'a'}), $$new($ints, {
		0x0000D800,
		(int32_t)u'a'
	}));
	testCodePoint($cstr({0xDBFF, 'a'}), $$new($ints, {
		0x0000DBFF,
		(int32_t)u'a'
	}));
	testCodePoint($cstr({'a', 0xD800, 0xD801}), $$new($ints, {
		(int32_t)u'a',
		0x0000D800,
		0x0000D801
	}));
	testCodePoint($cstr({'a', 0xD800, 'x', 0xDC00}), $$new($ints, {
		(int32_t)u'a',
		0x0000D800,
		(int32_t)u'x',
		0x0000DC00
	}));
	testCodePoint($cstr({0xDC00, 0xD800}), $$new($ints, {
		0x0000DC00,
		0x0000D800
	}));
	testCodePoint($cstr({0x10000, 0xDC00}), $$new($ints, {
		0x00010000,
		0x0000DC00
	}));
	testCodePoint($cstr({0xD800, 0x10000}), $$new($ints, {
		0x0000D800,
		0x00010000
	}));
	testCodePoint($cstr({0xD800, 0xD800, 0xD800, 0x10000, 0xDC00, 0xDC00, 0xDC00}), $$new($ints, {
		0x0000D800,
		0x0000D800,
		0x0000D800,
		0x00010000,
		0x0000DC00,
		0x0000DC00,
		0x0000DC00
	}));
}

void Supplementary4Character::testCodePoint($String* str, $ints* codepoints) {
	int32_t c = 0;
	int32_t j = 0;
	for (int32_t i = 0; i < $nc(str)->length(); i += $Character::charCount(c)) {
		c = $Character::codePointAt(static_cast<$CharSequence*>(str), i);
		if (c != $nc(codepoints)->get(j++)) {
			$var($String, var$0, $$str({"codePointAt(CharSequence, "_s, $$str(i), ") returned "_s, $(toHexString(c)), ", expected "_s}));
			$throwNew($RuntimeException, $$concat(var$0, $(toHexString(codepoints->get(j - 1)))));
		}
	}
	if (j != $nc(codepoints)->length) {
		$throwNew($RuntimeException, $$str({"j != codepoints.length after codePointAt(CharSequence, int) (j="_s, $$str(j), "), expected: "_s, $$str(codepoints->length)}));
	}
	j = $nc(codepoints)->length;
	for (int32_t i = $nc(str)->length(); i > 0; i -= $Character::charCount(c)) {
		c = $Character::codePointBefore(static_cast<$CharSequence*>(str), i);
		if (c != codepoints->get(--j)) {
			$var($String, var$1, $$str({"codePointBefore(CharSequence, "_s, $$str(i), ") returned "_s, $(toHexString(c)), ", expected "_s}));
			$throwNew($RuntimeException, $$concat(var$1, $(toHexString(codepoints->get(j)))));
		}
	}
	if (j != 0) {
		$throwNew($RuntimeException, $$str({"j != 0 after codePointBefore(CharSequence, int) (j="_s, $$str(j), ")"_s}));
	}
	$var($chars, a, str->toCharArray());
	j = 0;
	for (int32_t i = 0; i < a->length; i += $Character::charCount(c)) {
		c = $Character::codePointAt(a, i);
		if (c != codepoints->get(j++)) {
			$var($String, var$2, $$str({"codePointAt(char[], "_s, $$str(i), ") returned "_s, $(toHexString(c)), ", expected "_s}));
			$throwNew($RuntimeException, $$concat(var$2, $(toHexString(codepoints->get(j - 1)))));
		}
	}
	if (j != codepoints->length) {
		$throwNew($RuntimeException, $$str({"j != codepoints.length after codePointAt(char[], int) (j="_s, $$str(j), "), expected: "_s, $$str(codepoints->length)}));
	}
	j = codepoints->length;
	for (int32_t i = a->length; i > 0; i -= $Character::charCount(c)) {
		c = $Character::codePointBefore(a, i);
		if (c != codepoints->get(--j)) {
			$var($String, var$3, $$str({"codePointBefore(char[], "_s, $$str(i), ") returned "_s, $(toHexString(c)), ", expected "_s}));
			$throwNew($RuntimeException, $$concat(var$3, $(toHexString(codepoints->get(j)))));
		}
	}
	if (j != 0) {
		$throwNew($RuntimeException, $$str({"j != 0 after codePointBefore(char[], int) (j="_s, $$str(j), ")"_s}));
	}
	j = 0;
	for (int32_t i = 0; i < codepoints->length; ++i) {
		$assign(a, $Character::toChars(codepoints->get(i)));
		for (int32_t k = 0; k < $nc(a)->length; ++k) {
			if (str->charAt(j++) != a->get(k)) {
				$var($String, var$4, $$str({"toChars(int) returned "_s, $(toHexString("result"_s, a)), " from codepoint="_s}));
				$throwNew($RuntimeException, $$concat(var$4, $(toHexString(codepoints->get(i)))));
			}
		}
	}
	$assign(a, $new($chars, codepoints->length * 2));
	j = 0;
	for (int32_t i = 0; i < codepoints->length; ++i) {
		int32_t n = $Character::toChars(codepoints->get(i), a, j);
		j += n;
	}
	$var($String, s, $new($String, a, 0, j));
	if (!str->equals(s)) {
		$var($String, var$5, $$str({"toChars(int, char[], int) returned "_s, $(toHexString("dst"_s, $(s->toCharArray()))), ", expected "_s}));
		$throwNew($RuntimeException, $$concat(var$5, $(toHexString("data"_s, $(str->toCharArray())))));
	}
}

void Supplementary4Character::testExceptions00() {
	$load($IllegalArgumentException);
	callToChars1(-1, $IllegalArgumentException::class$);
	callToChars1(Supplementary4Character::MAX_SUPPLEMENTARY + 1, $IllegalArgumentException::class$);
	$load($NullPointerException);
	callToChars3(Supplementary4Character::MAX_SUPPLEMENTARY, nullptr, 0, $NullPointerException::class$);
	callToChars3(-Supplementary4Character::MIN_SUPPLEMENTARY, $$new($chars, 2), 0, $IllegalArgumentException::class$);
	callToChars3(Supplementary4Character::MAX_SUPPLEMENTARY + 1, $$new($chars, 2), 0, $IllegalArgumentException::class$);
	$load($IndexOutOfBoundsException);
	callToChars3(u'A', $$new($chars, 0), 0, $IndexOutOfBoundsException::class$);
	callToChars3(u'A', $$new($chars, 1), -1, $IndexOutOfBoundsException::class$);
	callToChars3(u'A', $$new($chars, 1), 1, $IndexOutOfBoundsException::class$);
	callToChars3(Supplementary4Character::MIN_SUPPLEMENTARY, $$new($chars, 0), 0, $IndexOutOfBoundsException::class$);
	callToChars3(Supplementary4Character::MIN_SUPPLEMENTARY, $$new($chars, 1), 0, $IndexOutOfBoundsException::class$);
	callToChars3(Supplementary4Character::MIN_SUPPLEMENTARY, $$new($chars, 2), -1, $IndexOutOfBoundsException::class$);
	callToChars3(Supplementary4Character::MIN_SUPPLEMENTARY, $$new($chars, 2), 1, $IndexOutOfBoundsException::class$);
	callToString($Character::MIN_CODE_POINT - 1, $IllegalArgumentException::class$);
	callToString($Character::MAX_CODE_POINT + 1, $IllegalArgumentException::class$);
}

void Supplementary4Character::testExceptions01($CharSequence* cs) {
	$var($CharSequence, nullSeq, nullptr);
	$load($NullPointerException);
	callCodePoint(Supplementary4Character::At, nullSeq, 0, $NullPointerException::class$);
	$load($IndexOutOfBoundsException);
	callCodePoint(Supplementary4Character::At, cs, -1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, cs, $nc(cs)->length(), $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, cs, $nc(cs)->length() * 3, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, nullSeq, 0, $NullPointerException::class$);
	callCodePoint(Supplementary4Character::Before, cs, -1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, cs, 0, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, cs, $nc(cs)->length() + 1, $IndexOutOfBoundsException::class$);
	callCodePointCount(nullSeq, 0, 0, $NullPointerException::class$);
	callCodePointCount(cs, -1, 1, $IndexOutOfBoundsException::class$);
	callCodePointCount(cs, 0, $nc(cs)->length() + 1, $IndexOutOfBoundsException::class$);
	callCodePointCount(cs, 3, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(nullSeq, 0, 0, $NullPointerException::class$);
	callOffsetByCodePoints(cs, -1, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(cs, $nc(cs)->length() + 1, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(cs, 0, $nc(cs)->length() * 2, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(cs, $nc(cs)->length(), 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(cs, 0, -1, $IndexOutOfBoundsException::class$);
	$var($CharSequence, var$0, cs);
	int32_t var$1 = $nc(cs)->length();
	callOffsetByCodePoints(var$0, var$1, -cs->length() * 2, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(cs, $nc(cs)->length(), $Integer::MIN_VALUE, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(cs, 0, $Integer::MAX_VALUE, $IndexOutOfBoundsException::class$);
}

void Supplementary4Character::testExceptions02($chars* a) {
	$var($chars, nullArray, nullptr);
	$load($NullPointerException);
	callCodePoint(Supplementary4Character::At, nullArray, 0, $NullPointerException::class$);
	$load($IndexOutOfBoundsException);
	callCodePoint(Supplementary4Character::At, a, -1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, a, $nc(a)->length, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, a, $nc(a)->length * 3, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, nullArray, 0, $NullPointerException::class$);
	callCodePoint(Supplementary4Character::Before, a, -1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, a, 0, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, a, $nc(a)->length + 1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, nullArray, 0, 1, $NullPointerException::class$);
	callCodePoint(Supplementary4Character::At, a, 0, -1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, a, 0, 0, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, a, 0, $nc(a)->length + 1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, a, 2, 1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, a, -1, 1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, a, $nc(a)->length, 1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::At, a, $nc(a)->length * 3, 1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, nullArray, 1, 0, $NullPointerException::class$);
	callCodePoint(Supplementary4Character::Before, a, 2, -1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, a, 2, 2, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, a, 2, 3, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, a, 2, $nc(a)->length, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, a, -1, -1, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, a, 0, 0, $IndexOutOfBoundsException::class$);
	callCodePoint(Supplementary4Character::Before, a, $nc(a)->length + 1, a->length - 1, $IndexOutOfBoundsException::class$);
	callCodePointCount(nullArray, 0, 0, $NullPointerException::class$);
	callCodePointCount(a, -1, 1, $IndexOutOfBoundsException::class$);
	callCodePointCount(a, 0, -1, $IndexOutOfBoundsException::class$);
	callCodePointCount(a, 0, $nc(a)->length + 1, $IndexOutOfBoundsException::class$);
	callCodePointCount(a, 1, $nc(a)->length, $IndexOutOfBoundsException::class$);
	callCodePointCount(a, $nc(a)->length, 1, $IndexOutOfBoundsException::class$);
	callCodePointCount(a, $nc(a)->length + 1, -1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(nullArray, 0, 0, 0, 0, $NullPointerException::class$);
	callOffsetByCodePoints(a, -1, $nc(a)->length, 1, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 0, $nc(a)->length + 1, 1, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 10, $nc(a)->length, 1, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 10, $nc(a)->length - 10, 1, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 10, 10, 21, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 20, -10, 15, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 10, 10, 15, 20, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 10, 10, 15, -20, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 0, $nc(a)->length, -1, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 0, $nc(a)->length, a->length + 1, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 0, $nc(a)->length, 0, a->length * 2, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 0, $nc(a)->length, a->length, 1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 0, $nc(a)->length, 0, -1, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 0, $nc(a)->length, a->length, -a->length * 2, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 0, $nc(a)->length, a->length, $Integer::MIN_VALUE, $IndexOutOfBoundsException::class$);
	callOffsetByCodePoints(a, 0, $nc(a)->length, 0, $Integer::MAX_VALUE, $IndexOutOfBoundsException::class$);
}

void Supplementary4Character::callToChars1(int32_t codePoint, $Class* expectedException) {
	try {
		$var($chars, a, $Character::toChars(codePoint));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Unspecified exception"_s, e);
	}
	$throwNew($RuntimeException, $$str({"toChars(int) didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4Character::callToChars3(int32_t codePoint, $chars* dst, int32_t index, $Class* expectedException) {
	try {
		int32_t n = $Character::toChars(codePoint, dst, index);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Unspecified exception"_s, e);
	}
	$throwNew($RuntimeException, $$str({"toChars(int,char[],int) didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4Character::callCodePoint(bool isAt, $CharSequence* cs, int32_t index, $Class* expectedException) {
	try {
		int32_t c = isAt ? $Character::codePointAt(cs, index) : $Character::codePointBefore(cs, index);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Unspecified exception"_s, e);
	}
	$throwNew($RuntimeException, $$str({"codePoint"_s, (isAt ? "At"_s : "Before"_s), " didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4Character::callCodePoint(bool isAt, $chars* a, int32_t index, $Class* expectedException) {
	try {
		int32_t c = isAt ? $Character::codePointAt(a, index) : $Character::codePointBefore(a, index);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Unspecified exception"_s, e);
	}
	$throwNew($RuntimeException, $$str({"codePoint"_s, (isAt ? "At"_s : "Before"_s), " didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4Character::callCodePoint(bool isAt, $chars* a, int32_t index, int32_t limit, $Class* expectedException) {
	try {
		int32_t c = isAt ? $Character::codePointAt(a, index, limit) : $Character::codePointBefore(a, index, limit);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Unspecified exception"_s, e);
	}
	$throwNew($RuntimeException, $$str({"codePoint"_s, (isAt ? "At"_s : "Before"_s), " didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4Character::callCodePointCount(Object$* data, int32_t beginIndex, int32_t endIndex, $Class* expectedException) {
	$var($String, type, getType(data));
	try {
		int32_t n = ($instanceOf($CharSequence, data)) ? $Character::codePointCount($cast($CharSequence, data), beginIndex, endIndex) : $Character::codePointCount($cast($chars, data), beginIndex, endIndex);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Unspecified exception"_s, e);
	}
	$throwNew($RuntimeException, $$str({"codePointCount("_s, type, "...) didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4Character::callOffsetByCodePoints($CharSequence* seq, int32_t index, int32_t offset, $Class* expectedException) {
	try {
		int32_t n = $Character::offsetByCodePoints(seq, index, offset);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Unspecified exception"_s, e);
	}
	$throwNew($RuntimeException, $$str({"offsetCodePointCounts(CharSequnce...) didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4Character::callOffsetByCodePoints($chars* a, int32_t start, int32_t count, int32_t index, int32_t offset, $Class* expectedException) {
	try {
		int32_t n = $Character::offsetByCodePoints(a, start, count, index, offset);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Unspecified exception"_s, e);
	}
	$throwNew($RuntimeException, $$str({"offsetCodePointCounts(char[]...) didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4Character::callToString(int32_t codePoint, $Class* expectedException) {
	try {
		$var($String, s, $Character::toString(codePoint));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Unspecified exception"_s, e);
	}
	$throwNew($RuntimeException, $$str({"toString(int) didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

$String* Supplementary4Character::getType(Object$* data) {
	return ($instanceOf($CharSequence, data)) ? "CharSequence"_s : "char[]"_s;
}

$String* Supplementary4Character::toHexString(int32_t c) {
	return $str({"0x"_s, $($Integer::toHexString(c))});
}

$String* Supplementary4Character::toHexString($String* name, $chars* a) {
	$var($StringBuffer, sb, $new($StringBuffer));
	for (int32_t i = 0; i < $nc(a)->length; ++i) {
		if (i > 0) {
			sb->append(", "_s);
		}
		sb->append(name)->append(u'[')->append(i)->append("]="_s);
		sb->append($(toHexString(a->get(i))));
	}
	return sb->toString();
}

Supplementary4Character::Supplementary4Character() {
}

$Class* Supplementary4Character::load$($String* name, bool initialize) {
	$loadClass(Supplementary4Character, name, initialize, &_Supplementary4Character_ClassInfo_, allocate$Supplementary4Character);
	return class$;
}

$Class* Supplementary4Character::class$ = nullptr;