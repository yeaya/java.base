#include <Supplementary4String.h>

#include <java/lang/CharSequence.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <jcpp.h>

#undef FIRST
#undef LAST
#undef MAX_CODE_POINT

using $intArray2 = $Array<int32_t, 2>;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;

$FieldInfo _Supplementary4String_FieldInfo_[] = {
	{"input", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Supplementary4String, input)},
	{"golden1", "[[I", nullptr, $STATIC | $FINAL, $staticField(Supplementary4String, golden1)},
	{"golden2", "[[I", nullptr, $STATIC | $FINAL, $staticField(Supplementary4String, golden2)},
	{"golden3", "[[I", nullptr, $STATIC | $FINAL, $staticField(Supplementary4String, golden3)},
	{"At", "Z", nullptr, $STATIC | $FINAL, $constField(Supplementary4String, At)},
	{"Before", "Z", nullptr, $STATIC | $FINAL, $constField(Supplementary4String, Before)},
	{"FIRST", "Z", nullptr, $STATIC | $FINAL, $constField(Supplementary4String, FIRST)},
	{"LAST", "Z", nullptr, $STATIC | $FINAL, $constField(Supplementary4String, LAST)},
	{}
};

$MethodInfo _Supplementary4String_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Supplementary4String, init$, void)},
	{"check", "(ZLjava/lang/String;)V", nullptr, $STATIC, $staticMethod(Supplementary4String, check, void, bool, $String*)},
	{"check", "(ZLjava/lang/String;II)V", nullptr, $STATIC, $staticMethod(Supplementary4String, check, void, bool, $String*, int32_t, int32_t)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Supplementary4String, main, void, $StringArray*)},
	{"test1", "()V", nullptr, $STATIC, $staticMethod(Supplementary4String, test1, void)},
	{"test10", "()V", nullptr, $STATIC, $staticMethod(Supplementary4String, test10, void)},
	{"test2", "()V", nullptr, $STATIC, $staticMethod(Supplementary4String, test2, void)},
	{"test3", "()V", nullptr, $STATIC, $staticMethod(Supplementary4String, test3, void)},
	{"test4", "()V", nullptr, $STATIC, $staticMethod(Supplementary4String, test4, void)},
	{"test5", "()V", nullptr, $STATIC, $staticMethod(Supplementary4String, test5, void)},
	{"test6", "()V", nullptr, $STATIC, $staticMethod(Supplementary4String, test6, void)},
	{"test7", "()V", nullptr, $STATIC, $staticMethod(Supplementary4String, test7, void)},
	{"test8", "()V", nullptr, $STATIC, $staticMethod(Supplementary4String, test8, void)},
	{"test9", "()V", nullptr, $STATIC, $staticMethod(Supplementary4String, test9, void)},
	{"testCodePoint", "(ZLjava/lang/String;II)V", nullptr, $STATIC, $staticMethod(Supplementary4String, testCodePoint, void, bool, $String*, int32_t, int32_t)},
	{"testCodePoint", "(ZLjava/lang/String;I)V", nullptr, $STATIC, $staticMethod(Supplementary4String, testCodePoint, void, bool, $String*, int32_t)},
	{"testCodePointCount", "(Ljava/lang/String;IILjava/lang/Class;)V", nullptr, $STATIC, $staticMethod(Supplementary4String, testCodePointCount, void, $String*, int32_t, int32_t, $Class*)},
	{"testIndexOf", "(Ljava/lang/String;II)V", nullptr, $STATIC, $staticMethod(Supplementary4String, testIndexOf, void, $String*, int32_t, int32_t)},
	{"testIndexOf", "(Ljava/lang/String;III)I", nullptr, $STATIC, $staticMethod(Supplementary4String, testIndexOf, int32_t, $String*, int32_t, int32_t, int32_t)},
	{"testIndexOf2", "(Ljava/lang/String;II)V", nullptr, $STATIC, $staticMethod(Supplementary4String, testIndexOf2, void, $String*, int32_t, int32_t)},
	{"testLastIndexOf", "(Ljava/lang/String;II)V", nullptr, $STATIC, $staticMethod(Supplementary4String, testLastIndexOf, void, $String*, int32_t, int32_t)},
	{"testLastIndexOf", "(Ljava/lang/String;III)I", nullptr, $STATIC, $staticMethod(Supplementary4String, testLastIndexOf, int32_t, $String*, int32_t, int32_t, int32_t)},
	{"testLastIndexOf2", "(Ljava/lang/String;II)V", nullptr, $STATIC, $staticMethod(Supplementary4String, testLastIndexOf2, void, $String*, int32_t, int32_t)},
	{"testNewString", "([IIILjava/lang/Class;)V", nullptr, $STATIC, $staticMethod(Supplementary4String, testNewString, void, $ints*, int32_t, int32_t, $Class*)},
	{"testOffsetByCodePoints", "(Ljava/lang/String;IILjava/lang/Class;)V", nullptr, $STATIC, $staticMethod(Supplementary4String, testOffsetByCodePoints, void, $String*, int32_t, int32_t, $Class*)},
	{"toHexString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Supplementary4String, toHexString, $String*, int32_t)},
	{}
};

$ClassInfo _Supplementary4String_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Supplementary4String",
	"java.lang.Object",
	nullptr,
	_Supplementary4String_FieldInfo_,
	_Supplementary4String_MethodInfo_
};

$Object* allocate$Supplementary4String($Class* clazz) {
	return $of($alloc(Supplementary4String));
}

$StringArray* Supplementary4String::input = nullptr;
$intArray2* Supplementary4String::golden1 = nullptr;
$intArray2* Supplementary4String::golden2 = nullptr;
$intArray2* Supplementary4String::golden3 = nullptr;

void Supplementary4String::init$() {
}

void Supplementary4String::main($StringArray* args) {
	$init(Supplementary4String);
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
}

void Supplementary4String::test1() {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Supplementary4String::input)->length; ++i) {
		$var($String, s, $nc(Supplementary4String::input)->get(i));
		testCodePoint(Supplementary4String::At, s, 0, $nc($nc(Supplementary4String::golden1)->get(0))->get(i));
		testCodePoint(Supplementary4String::At, s, 9, $nc($nc(Supplementary4String::golden1)->get(1))->get(i));
		testCodePoint(Supplementary4String::At, s, $nc(s)->length() - 1, $nc($nc(Supplementary4String::golden1)->get(2))->get(i));
		testCodePoint(Supplementary4String::At, $($nc(s)->substring(17)), 0, $nc($nc(Supplementary4String::golden1)->get(3))->get(i));
		testCodePoint(Supplementary4String::At, s, -1);
		testCodePoint(Supplementary4String::At, s, $nc(s)->length());
	}
}

void Supplementary4String::test2() {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Supplementary4String::input)->length; ++i) {
		$var($String, s, $nc(Supplementary4String::input)->get(i));
		testCodePoint(Supplementary4String::Before, s, 1, $nc($nc(Supplementary4String::golden2)->get(0))->get(i));
		testCodePoint(Supplementary4String::Before, s, 13, $nc($nc(Supplementary4String::golden2)->get(1))->get(i));
		testCodePoint(Supplementary4String::Before, s, $nc(s)->length(), $nc($nc(Supplementary4String::golden2)->get(2))->get(i));
		testCodePoint(Supplementary4String::Before, $($nc(s)->substring(1)), 1, $nc($nc(Supplementary4String::golden2)->get(3))->get(i));
		testCodePoint(Supplementary4String::Before, s, 0);
		testCodePoint(Supplementary4String::Before, s, $nc(s)->length() + 1);
	}
}

void Supplementary4String::test3() {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Supplementary4String::input)->length; ++i) {
		$var($String, s, $nc(Supplementary4String::input)->get(i));
		testIndexOf(s, $nc($nc(Supplementary4String::golden3)->get(i))->get(0), $nc($nc(Supplementary4String::golden3)->get(i))->get(2));
		testIndexOf(s, u'Z', -1);
		testIndexOf(s, 0x0000DB98, -1);
		testIndexOf(s, 0x0000DE76, -1);
		testIndexOf(s, 0x00012345, -1);
		testIndexOf(s, -1, -1);
		testIndexOf(s, 0x00110000, -1);
	}
}

void Supplementary4String::test4() {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Supplementary4String::input)->length; ++i) {
		$var($String, s, $nc(Supplementary4String::input)->get(i));
		int32_t ch = $nc($nc(Supplementary4String::golden3)->get(i))->get(0);
		int32_t fromIndex = 0;
		for (int32_t j = 2; j < $nc($nc(Supplementary4String::golden3)->get(i))->length; ++j) {
			fromIndex = testIndexOf(s, fromIndex, ch, $nc($nc(Supplementary4String::golden3)->get(i))->get(j)) + 1;
		}
		testIndexOf(s, -1, ch, $nc($nc(Supplementary4String::golden3)->get(i))->get(2));
		testIndexOf(s, $nc(s)->length(), ch, $nc($nc(Supplementary4String::golden3)->get(i))->get($nc($nc(Supplementary4String::golden3)->get(i))->length - 1));
		testIndexOf(s, 0, u'Z', -1);
		testIndexOf(s, 0, 0x0000DB98, -1);
		testIndexOf(s, 0, 0x0000DE76, -1);
		testIndexOf(s, 0, 0x00012345, -1);
		testIndexOf(s, 0, -1, -1);
		testIndexOf(s, 0, 0x00110000, -1);
	}
}

void Supplementary4String::test5() {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Supplementary4String::input)->length; ++i) {
		$var($String, s, $nc(Supplementary4String::input)->get(i));
		testLastIndexOf(s, $nc($nc(Supplementary4String::golden3)->get(i))->get(0), $nc($nc(Supplementary4String::golden3)->get(i))->get($nc($nc(Supplementary4String::golden3)->get(i))->length - 2));
		testLastIndexOf(s, u'Z', -1);
		testLastIndexOf(s, 0x0000DB98, -1);
		testLastIndexOf(s, 0x0000DE76, -1);
		testLastIndexOf(s, 0x00012345, -1);
		testLastIndexOf(s, -1, -1);
		testLastIndexOf(s, 0x00110000, -1);
	}
}

void Supplementary4String::test6() {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Supplementary4String::input)->length; ++i) {
		$var($String, s, $nc(Supplementary4String::input)->get(i));
		int32_t ch = $nc($nc(Supplementary4String::golden3)->get(i))->get(0);
		int32_t len = $nc(s)->length();
		int32_t fromIndex = len - 1;
		for (int32_t j = $nc($nc(Supplementary4String::golden3)->get(i))->length - 2; j > 0; --j) {
			fromIndex = testLastIndexOf(s, fromIndex, ch, $nc($nc(Supplementary4String::golden3)->get(i))->get(j)) - 1;
		}
		testLastIndexOf(s, -1, ch, $nc($nc(Supplementary4String::golden3)->get(i))->get(1));
		testLastIndexOf(s, len, ch, $nc($nc(Supplementary4String::golden3)->get(i))->get($nc($nc(Supplementary4String::golden3)->get(i))->length - 2));
		testLastIndexOf(s, len, u'Z', -1);
		testLastIndexOf(s, len, 0x0000DB98, -1);
		testLastIndexOf(s, len, 0x0000DE76, -1);
		testLastIndexOf(s, len, 0x00012345, -1);
		testLastIndexOf(s, len, -1, -1);
		testLastIndexOf(s, len, 0x00110000, -1);
	}
}

void Supplementary4String::test7() {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Supplementary4String::input)->length; ++i) {
		$var($String, s, $nc(Supplementary4String::input)->get(i));
		int32_t nCodePoints = 0;
		int32_t c = 0;
		for (int32_t j = 0; j < $nc(s)->length(); j += $Character::charCount(c)) {
			c = s->codePointAt(j);
			++nCodePoints;
		}
		$var($ints, codePoints, $new($ints, nCodePoints));
		int32_t count = 0;
		int32_t mid = 0;
		int32_t offset = 0;
		for (int32_t j = 0; j < $nc(s)->length(); j += $Character::charCount(c)) {
			if (mid == 0 && j >= s->length() / 2) {
				mid = j;
				offset = count;
			}
			c = s->codePointAt(j);
			codePoints->set(count++, c);
		}
		$var($String, cps, $new($String, codePoints, 0, count));
		check(!$nc(s)->equals(cps), $$str({"new String(int[]...) with input["_s, $$str(i), "]"_s}));
		$assign(cps, $new($String, codePoints, 0, offset));
		check(!$($nc(s)->substring(0, mid))->equals(cps), $$str({"first half: new String(int[]...) with input["_s, $$str(i), "]"_s}));
		$assign(cps, $new($String, codePoints, offset, count - offset));
		check(!$($nc(s)->substring(mid))->equals(cps), $$str({"second half: new String(int[]...) with input["_s, $$str(i), "]"_s}));
		$load($NullPointerException);
		testNewString(nullptr, 0, count, $NullPointerException::class$);
		$load($IndexOutOfBoundsException);
		testNewString(codePoints, -1, count, $IndexOutOfBoundsException::class$);
		testNewString(codePoints, 0, count + 1, $IndexOutOfBoundsException::class$);
		testNewString(codePoints, offset, count, $IndexOutOfBoundsException::class$);
		testNewString(codePoints, offset, -1, $IndexOutOfBoundsException::class$);
		testNewString(codePoints, count, 1, $IndexOutOfBoundsException::class$);
		codePoints->set(offset, -1);
		$load($IllegalArgumentException);
		testNewString(codePoints, 0, count, $IllegalArgumentException::class$);
		codePoints->set(offset, $Character::MAX_CODE_POINT + 1);
		testNewString(codePoints, 0, count, $IllegalArgumentException::class$);
	}
	{
		$var($ints, x, $new($ints, $Character::MAX_CODE_POINT));
		for (int32_t i = 0; i < x->length; ++i) {
			if (i != 0x0000DBFF) {
				x->set(i, i);
			}
		}
		$var($String, s, $new($String, x, 0, x->length));
		check(s->codePointCount(0, s->length()) != x->length, "s.codePointCount(0, s.length()) != x.length"_s);
		check(s->length() <= x->length, "s.length() <= x.length"_s);
		{
			int32_t i = 0;
			int32_t j = 0;
			for (; i < x->length; ++i) {
				int32_t c = s->codePointAt(j);
				check(c != x->get(i), "c != x[i]"_s);
				j += $Character::charCount(c);
			}
		}
	}
}

void Supplementary4String::test8() {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Supplementary4String::input)->length; ++i) {
		$var($String, str, $nc(Supplementary4String::input)->get(i));
		int32_t length = $nc(str)->length();
		for (int32_t j = 0; j <= length; ++j) {
			int32_t result = str->codePointCount(j, length);
			int32_t expected = $Character::codePointCount(static_cast<$CharSequence*>(str), j, length);
			check(result != expected, $$str({"codePointCount(input["_s, $$str(i), "], "_s, $$str(j), ", "_s, $$str(length), ")"_s}), result, expected);
			$var($String, substr, str->substring(j, length));
			result = substr->codePointCount(0, substr->length());
			check(result != expected, $$str({"substring:codePointCount(input["_s, $$str(i), "], "_s, $$str(j), ", "_s, $$str(length), ")"_s}), result, expected);
		}
		for (int32_t j = length; j >= 0; --j) {
			int32_t result = str->codePointCount(0, j);
			int32_t expected = $Character::codePointCount(static_cast<$CharSequence*>(str), 0, j);
			check(result != expected, $$str({"codePointCount(input["_s, $$str(i), "], 0, "_s, $$str(j), ")"_s}), result, expected);
			$var($String, substr, str->substring(0, j));
			result = substr->codePointCount(0, substr->length());
			check(result != expected, $$str({"substring:codePointCount(input["_s, $$str(i), "], 0, "_s, $$str(j), ")"_s}), result, expected);
		}
		$load($NullPointerException);
		testCodePointCount(nullptr, 0, 0, $NullPointerException::class$);
		$load($IndexOutOfBoundsException);
		testCodePointCount(str, -1, length, $IndexOutOfBoundsException::class$);
		testCodePointCount(str, 0, length + 1, $IndexOutOfBoundsException::class$);
		testCodePointCount(str, length, length - 1, $IndexOutOfBoundsException::class$);
	}
}

void Supplementary4String::test9() {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(Supplementary4String::input)->length; ++i) {
		$var($String, str, $nc(Supplementary4String::input)->get(i));
		int32_t length = $nc(str)->length();
		for (int32_t j = 0; j <= length; ++j) {
			int32_t nCodePoints = $Character::codePointCount(static_cast<$CharSequence*>(str), j, length);
			int32_t result = str->offsetByCodePoints(j, nCodePoints);
			check(result != length, $$str({"offsetByCodePoints(input["_s, $$str(i), "], "_s, $$str(j), ", "_s, $$str(nCodePoints), ")"_s}), result, length);
			result = str->offsetByCodePoints(length, -nCodePoints);
			int32_t expected = j;
			if (j > 0 && j < length) {
				int32_t cp = str->codePointBefore(j + 1);
				if ($Character::isSupplementaryCodePoint(cp)) {
					--expected;
				}
			}
			check(result != expected, $$str({"offsetByCodePoints(input["_s, $$str(i), "], "_s, $$str(j), ", "_s, $$str((-nCodePoints)), ")"_s}), result, expected);
		}
		for (int32_t j = length; j >= 0; --j) {
			int32_t nCodePoints = $Character::codePointCount(static_cast<$CharSequence*>(str), 0, j);
			int32_t result = str->offsetByCodePoints(0, nCodePoints);
			int32_t expected = j;
			if (j > 0 && j < length) {
				int32_t cp = str->codePointAt(j - 1);
				if ($Character::isSupplementaryCodePoint(cp)) {
					++expected;
				}
			}
			check(result != expected, $$str({"offsetByCodePoints(input["_s, $$str(i), "], 0, "_s, $$str(nCodePoints), ")"_s}), result, expected);
			result = str->offsetByCodePoints(j, -nCodePoints);
			check(result != 0, $$str({"offsetByCodePoints(input["_s, $$str(i), "], "_s, $$str(j), ", "_s, $$str((-nCodePoints)), ")"_s}), result, 0);
		}
		$load($NullPointerException);
		testOffsetByCodePoints(nullptr, 0, 0, $NullPointerException::class$);
		$load($IndexOutOfBoundsException);
		testOffsetByCodePoints(str, -1, length, $IndexOutOfBoundsException::class$);
		testOffsetByCodePoints(str, 0, length + 1, $IndexOutOfBoundsException::class$);
		testOffsetByCodePoints(str, 1, -2, $IndexOutOfBoundsException::class$);
		testOffsetByCodePoints(str, length, length - 1, $IndexOutOfBoundsException::class$);
		testOffsetByCodePoints(str, length, -(length + 1), $IndexOutOfBoundsException::class$);
	}
}

void Supplementary4String::test10() {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	$var($String, header, $cstr({'H', 0xD800, 'e', 0xDFFF, 'a', 0x10FC00, 'd', 'e', 'r', '<'}));
	for (int32_t i = 0; i < $nc(Supplementary4String::input)->length; ++i) {
		$var($String, wholeString, $str({header, $nc(Supplementary4String::input)->get(i)}));
		$var($String, str, $nc(wholeString)->substring(header->length()));
		int32_t length = str->length();
		for (int32_t j = 0; j <= length; ++j) {
			int32_t nCodePoints = $Character::codePointCount(static_cast<$CharSequence*>(str), j, length);
			int32_t result = str->offsetByCodePoints(j, nCodePoints);
			check(result != length, $$str({"offsetByCodePoints(input["_s, $$str(i), "], "_s, $$str(j), ", "_s, $$str(nCodePoints), ")"_s}), result, length);
			result = str->offsetByCodePoints(length, -nCodePoints);
			int32_t expected = j;
			if (j > 0 && j < length) {
				int32_t cp = str->codePointBefore(j + 1);
				if ($Character::isSupplementaryCodePoint(cp)) {
					--expected;
				}
			}
			check(result != expected, $$str({"offsetByCodePoints(input["_s, $$str(i), "], "_s, $$str(j), ", "_s, $$str((-nCodePoints)), ")"_s}), result, expected);
		}
		for (int32_t j = length; j >= 0; --j) {
			int32_t nCodePoints = $Character::codePointCount(static_cast<$CharSequence*>(str), 0, j);
			int32_t result = str->offsetByCodePoints(0, nCodePoints);
			int32_t expected = j;
			if (j > 0 && j < length) {
				int32_t cp = str->codePointAt(j - 1);
				if ($Character::isSupplementaryCodePoint(cp)) {
					++expected;
				}
			}
			check(result != expected, $$str({"offsetByCodePoints(input["_s, $$str(i), "], 0, "_s, $$str(nCodePoints), ")"_s}), result, expected);
			result = str->offsetByCodePoints(j, -nCodePoints);
			check(result != 0, $$str({"offsetByCodePoints(input["_s, $$str(i), "], "_s, $$str(j), ", "_s, $$str((-nCodePoints)), ")"_s}), result, 0);
		}
	}
}

void Supplementary4String::testCodePoint(bool isAt, $String* s, int32_t index, int32_t expected) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	int32_t c = isAt ? $nc(s)->codePointAt(index) : s->codePointBefore(index);
	check(c != expected, $$str({"codePoint"_s, (isAt ? "At"_s : "Before"_s), "("_s, $$str(index), ") for <"_s, s, ">"_s}), c, expected);
}

void Supplementary4String::testCodePoint(bool isAt, $String* s, int32_t index) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	bool exceptionOccurred = false;
	try {
		int32_t c = isAt ? $nc(s)->codePointAt(index) : s->codePointBefore(index);
	} catch ($StringIndexOutOfBoundsException& e) {
		exceptionOccurred = true;
	}
	check(!exceptionOccurred, $$str({"codePoint"_s, (isAt ? "At"_s : "Before"_s), "("_s, $$str(index), ") for <"_s, s, "> should throw StringIndexOutOfBoundsPointerException."_s}));
}

void Supplementary4String::testIndexOf($String* s, int32_t c, int32_t expected) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	testIndexOf2(s, c, expected);
	if ($nc(s)->indexOf(c) != -1) {
		testIndexOf2($$str({s, $$str((char16_t)c)}), c, expected);
		if ($Character::isSupplementaryCodePoint(c)) {
			$var($chars, surrogates, $Character::toChars(c));
			testIndexOf2($$str({s, $$new($String, surrogates)}), c, expected);
			testIndexOf2($$str({s, $$str($nc(surrogates)->get(0))}), c, expected);
			testIndexOf2($$str({s, $$str($nc(surrogates)->get(1))}), c, expected);
			testIndexOf2($$str({$$new($String, surrogates), s}), c, 0);
			testIndexOf2($$str({$$str($nc(surrogates)->get(0)), s}), c, expected + 1);
			testIndexOf2($$str({$$str($nc(surrogates)->get(1)), s}), c, expected + 1);
		}
	}
}

void Supplementary4String::testIndexOf2($String* s, int32_t c, int32_t expected) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(s)->indexOf(c);
	check(index != expected, $$str({"indexOf("_s, $(toHexString(c)), ") for <"_s, s, ">"_s}), index, expected);
}

void Supplementary4String::testLastIndexOf($String* s, int32_t c, int32_t expected) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	testLastIndexOf2(s, c, expected);
	if ($nc(s)->lastIndexOf(c) != -1) {
		testLastIndexOf2($$str({$$str((char16_t)c), s}), c, expected + 1);
		if ($Character::isSupplementaryCodePoint(c)) {
			$var($chars, surrogates, $Character::toChars(c));
			$var($String, var$0, $str({s, $$new($String, surrogates)}));
			int32_t var$1 = c;
			testLastIndexOf2(var$0, var$1, s->length());
			testLastIndexOf2($$str({s, $$str($nc(surrogates)->get(0))}), c, expected);
			testLastIndexOf2($$str({s, $$str($nc(surrogates)->get(1))}), c, expected);
			testLastIndexOf2($$str({$$new($String, surrogates), s}), c, expected + 2);
			testLastIndexOf2($$str({$$str($nc(surrogates)->get(0)), s}), c, expected + 1);
			testLastIndexOf2($$str({$$str($nc(surrogates)->get(1)), s}), c, expected + 1);
		}
	}
}

void Supplementary4String::testLastIndexOf2($String* s, int32_t c, int32_t expected) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(s)->lastIndexOf(c);
	check(index != expected, $$str({"lastIndexOf("_s, $(toHexString(c)), ") for <"_s, s, ">"_s}), index, expected);
}

int32_t Supplementary4String::testIndexOf($String* s, int32_t fromIndex, int32_t c, int32_t expected) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(s)->indexOf(c, fromIndex);
	check(index != expected, $$str({"indexOf("_s, $(toHexString(c)), ", "_s, $$str(fromIndex), ") for <"_s, s, ">"_s}), index, expected);
	return index;
}

int32_t Supplementary4String::testLastIndexOf($String* s, int32_t fromIndex, int32_t c, int32_t expected) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(s)->lastIndexOf(c, fromIndex);
	check(index != expected, $$str({"lastIndexOf("_s, $(toHexString(c)), ", "_s, $$str(fromIndex), ") for <"_s, s, ">"_s}), index, expected);
	return index;
}

void Supplementary4String::testNewString($ints* codePoints, int32_t offset, int32_t count, $Class* expectedException) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, s, $new($String, codePoints, offset, count));
	} catch ($Exception& e) {
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Error: Unexpected exception"_s, e);
	}
	check(true, $$str({"new String(int[]...) didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4String::testCodePointCount($String* str, int32_t beginIndex, int32_t endIndex, $Class* expectedException) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	try {
		int32_t n = $nc(str)->codePointCount(beginIndex, endIndex);
	} catch ($Exception& e) {
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Error: Unexpected exception"_s, e);
	}
	check(true, $$str({"codePointCount() didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4String::testOffsetByCodePoints($String* str, int32_t index, int32_t offset, $Class* expectedException) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	try {
		int32_t n = $nc(str)->offsetByCodePoints(index, offset);
	} catch ($Exception& e) {
		if ($nc(expectedException)->isInstance(e)) {
			return;
		}
		$throwNew($RuntimeException, "Error: Unexpected exception"_s, e);
	}
	check(true, $$str({"offsetByCodePoints() didn\'t throw "_s, $($nc(expectedException)->getName())}));
}

void Supplementary4String::check(bool err, $String* msg) {
	$init(Supplementary4String);
	if (err) {
		$throwNew($RuntimeException, $$str({"Error: "_s, msg}));
	}
}

void Supplementary4String::check(bool err, $String* s, int32_t got, int32_t expected) {
	$init(Supplementary4String);
	$useLocalCurrentObjectStackCache();
	if (err) {
		$var($String, var$0, $$str({"Error: "_s, s, " returned an unexpected value. got "_s, $(toHexString(got)), ", expected "_s}));
		$throwNew($RuntimeException, $$concat(var$0, $(toHexString(expected))));
	}
}

$String* Supplementary4String::toHexString(int32_t c) {
	$init(Supplementary4String);
	return $str({"0x"_s, $($Integer::toHexString(c))});
}

void clinit$Supplementary4String($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Supplementary4String::input, $new($StringArray, {
		$cstr({'a', 'b', 'c', 0x10000, 'd', 'e', 'f', 0xD800, 0xD800, 'a', 'b', 0x10000, 'c', 'd', 'e', 'f', 'a', 0xDC00, 'b', 'c', 'd', 'e', 'f'}),
		$cstr({0xD800, 'd', 'e', 'f', 'g', 0xD800, 'h', 'i', 'j', 0x10000, 'k', 'l', 'm', 0xDC00, 'n', 'o', 'p', 0xDC00, 0xD800, 'r', 't', 0xDC00}),
		$cstr({0xDC00, 'a', 'b', 'c', 'd', 0x10FFFF, 'e', 'f', 'g', 'h', 0x10000, '9', 'i', 'k', 0xDC00, 0xDC00, 'l', 'm', 0xDC00, 'n', 'o', 0xD800}),
		$cstr({0x10000, '!', '#', '$', 0xD800, '%', '&', 0x10000, ';', '+', 0xDC00, '<', '>', ';', '=', '^', 0xDC00, '\\', '@', 0x10000}),
		$cstr({0xE0200, 'a', 'b', 'c', 0xDE01, 0xDB40, 'd', 'e', 0xE0202, 'f', 0xE0203, 'g', 'h', 'i', 0xE0202}),
		$cstr({0x10000, 0x10001, 0x10002, 0x10003, 0x10004, 0x10005, 0x10006, 0x10007, 0x10008, 0x10008, 0x10009, 0x1000A, 0x1000B, 0x1000C, 0x1000D, 0x1000A, 0x1000F, 0x10010})
	}));
	$assignStatic(Supplementary4String::golden1, $new($intArray2, {
		$$new($ints, {
			(int32_t)u'a',
			0x0000D800,
			0x0000DC00,
			0x00010000,
			0x000E0200,
			0x00010000
		}),
		$$new($ints, {
			0x0000D800,
			0x00010000,
			(int32_t)u'g',
			0x0000DC00,
			0x000E0202,
			0x0000DC04
		}),
		$$new($ints, {
			(int32_t)u'f',
			0x0000DC00,
			0x0000D800,
			0x0000DC00,
			0x0000DE02,
			0x0000DC10
		}),
		$$new($ints, {
			(int32_t)u'f',
			(int32_t)u'p',
			0x0000DC00,
			(int32_t)u'^',
			0x000E0202,
			0x0000DC08
		})
	}));
	$assignStatic(Supplementary4String::golden2, $new($intArray2, {
		$$new($ints, {
			(int32_t)u'a',
			0x0000D800,
			0x0000DC00,
			0x0000D800,
			0x0000DB40,
			0x0000D800
		}),
		$$new($ints, {
			0x0000D800,
			(int32_t)u'l',
			0x00010000,
			0x0000DC00,
			0x0000DB40,
			0x0000D800
		}),
		$$new($ints, {
			(int32_t)u'f',
			0x0000DC00,
			0x0000D800,
			0x00010000,
			0x000E0202,
			0x00010010
		}),
		$$new($ints, {
			(int32_t)u'b',
			(int32_t)u'd',
			(int32_t)u'a',
			0x0000DC00,
			0x0000DE00,
			0x0000DC00
		})
	}));
	$assignStatic(Supplementary4String::golden3, $new($intArray2, {
		$$new($ints, {
			(int32_t)u'b',
			-1,
			1,
			11,
			20,
			-1
		}),
		$$new($ints, {
			0x0000D800,
			-1,
			0,
			5,
			9,
			19,
			-1
		}),
		$$new($ints, {
			0x0000DC00,
			-1,
			0,
			12,
			16,
			17,
			20,
			-1
		}),
		$$new($ints, {
			0x00010000,
			-1,
			0,
			8,
			21,
			-1
		}),
		$$new($ints, {
			0x000E0202,
			-1,
			9,
			17,
			-1
		}),
		$$new($ints, {
			0x0001000A,
			-1,
			22,
			30,
			-1
		})
	}));
}

Supplementary4String::Supplementary4String() {
}

$Class* Supplementary4String::load$($String* name, bool initialize) {
	$loadClass(Supplementary4String, name, initialize, &_Supplementary4String_ClassInfo_, clinit$Supplementary4String, allocate$Supplementary4String);
	return class$;
}

$Class* Supplementary4String::class$ = nullptr;