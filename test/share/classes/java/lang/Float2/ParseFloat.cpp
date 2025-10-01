#include <java/lang/Float2/ParseFloat.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef POSITIVE_INFINITY
#undef HALF
#undef MAX_VALUE
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace lang {
		namespace Float2 {

$FieldInfo _ParseFloat_FieldInfo_[] = {
	{"HALF", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParseFloat, HALF)},
	{"badStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ParseFloat, badStrings)},
	{"goodStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ParseFloat, goodStrings)},
	{"paddedBadStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ParseFloat, paddedBadStrings)},
	{"paddedGoodStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ParseFloat, paddedGoodStrings)},
	{}
};

$MethodInfo _ParseFloat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParseFloat::*)()>(&ParseFloat::init$))},
	{"check", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ParseFloat::check))},
	{"check", "(Ljava/lang/String;F)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,float)>(&ParseFloat::check))},
	{"fail", "(Ljava/lang/String;F)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,float)>(&ParseFloat::fail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ParseFloat::main)), "java.lang.Exception"},
	{"rudimentaryTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ParseFloat::rudimentaryTest))},
	{"testParsing", "([Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringArray*,bool)>(&ParseFloat::testParsing))},
	{"testPowers", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ParseFloat::testPowers))},
	{}
};

$ClassInfo _ParseFloat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Float2.ParseFloat",
	"java.lang.Object",
	nullptr,
	_ParseFloat_FieldInfo_,
	_ParseFloat_MethodInfo_
};

$Object* allocate$ParseFloat($Class* clazz) {
	return $of($alloc(ParseFloat));
}

$BigDecimal* ParseFloat::HALF = nullptr;
$StringArray* ParseFloat::badStrings = nullptr;
$StringArray* ParseFloat::goodStrings = nullptr;
$StringArray* ParseFloat::paddedBadStrings = nullptr;
$StringArray* ParseFloat::paddedGoodStrings = nullptr;

void ParseFloat::init$() {
}

void ParseFloat::fail($String* val, float n) {
	$init(ParseFloat);
	$throwNew($RuntimeException, $$str({"Float.parseFloat failed. String:"_s, val, " Result:"_s, $$str(n)}));
}

void ParseFloat::check($String* val) {
	$init(ParseFloat);
	float n = $Float::parseFloat(val);
	bool isNegativeN = n < 0 || n == 0 && 1 / n < 0;
	float na = $Math::abs(n);
	$var($String, s, $($nc(val)->trim())->toLowerCase());
	switch (s->charAt(s->length() - 1)) {
	case u'd':
		{}
	case u'f':
		{
			$assign(s, s->substring(0, s->length() - 1));
			break;
		}
	}
	bool isNegative = false;
	if (s->charAt(0) == u'+') {
		$assign(s, s->substring(1));
	} else if ($nc(s)->charAt(0) == u'-') {
		$assign(s, s->substring(1));
		isNegative = true;
	}
	if (s->equals("nan"_s)) {
		if (!$Float::isNaN(n)) {
			fail(val, n);
		}
		return;
	}
	if ($Float::isNaN(n)) {
		fail(val, n);
	}
	if (isNegativeN != isNegative) {
		fail(val, n);
	}
	if (s->equals("infinity"_s)) {
		if (na != $Float::POSITIVE_INFINITY) {
			fail(val, n);
		}
		return;
	}
	$var($BigDecimal, bd, nullptr);
	if (s->startsWith("0x"_s)) {
		$assign(s, s->substring(2));
		int32_t indP = s->indexOf((int32_t)u'p');
		int64_t exp = $Long::parseLong($(s->substring(indP + 1)));
		int32_t indD = s->indexOf((int32_t)u'.');
		$var($String, significand, nullptr);
		if (indD >= 0) {
			$var($String, var$0, $(s->substring(0, indD)));
			$assign(significand, $concat(var$0, $(s->substring(indD + 1, indP))));
			exp -= 4 * (indP - indD - 1);
		} else {
			$assign(significand, s->substring(0, indP));
		}
		$assign(bd, $new($BigDecimal, $$new($BigInteger, significand, 16)));
		if (exp >= 0) {
			$assign(bd, bd->multiply($($nc($($BigDecimal::valueOf((int64_t)2)))->pow((int32_t)exp))));
		} else {
			$assign(bd, bd->divide($($nc($($BigDecimal::valueOf((int64_t)2)))->pow((int32_t)-exp))));
		}
	} else {
		$assign(bd, $new($BigDecimal, s));
	}
	$var($BigDecimal, l, nullptr);
	$var($BigDecimal, u, nullptr);
	if ($Float::isInfinite(na)) {
		$assign(l, $$new($BigDecimal, (double)$Float::MAX_VALUE)->add($($$new($BigDecimal, (double)$Math::ulp($Float::MAX_VALUE))->multiply(ParseFloat::HALF))));
		$assign(u, nullptr);
	} else {
		$assign(l, $$new($BigDecimal, (double)na)->subtract($($$new($BigDecimal, (double)$Math::ulp(-$Math::nextUp(-na)))->multiply(ParseFloat::HALF))));
		$assign(u, $$new($BigDecimal, (double)na)->add($($$new($BigDecimal, (double)$Math::ulp(n))->multiply(ParseFloat::HALF))));
	}
	int32_t cmpL = $nc(bd)->compareTo(l);
	int32_t cmpU = u != nullptr ? bd->compareTo(u) : -1;
	if (((int32_t)($Float::floatToIntBits(n) & (uint32_t)1)) != 0) {
		if (cmpL <= 0 || cmpU >= 0) {
			fail(val, n);
		}
	} else if (cmpL < 0 || cmpU > 0) {
		fail(val, n);
	}
}

void ParseFloat::check($String* val, float expected) {
	$init(ParseFloat);
	float n = $Float::parseFloat(val);
	if (n != expected) {
		fail(val, n);
	}
	check(val);
}

void ParseFloat::rudimentaryTest() {
	$init(ParseFloat);
	$init($Float);
	check($$new($String, $$str({""_s, $$str($Float::MIN_VALUE)})), $Float::MIN_VALUE);
	check($$new($String, $$str({""_s, $$str($Float::MAX_VALUE)})), $Float::MAX_VALUE);
	check("10"_s, (float)10.0);
	check("10.0"_s, (float)10.0);
	check("10.01"_s, (float)10.01);
	check("-10"_s, (float)-10.0);
	check("-10.00"_s, (float)-10.0);
	check("-10.01"_s, (float)-10.01);
	check("144115196665790480"_s, 1.44115205E17f);
	check("144115196665790481"_s, 1.44115205E17f);
	check("0.050000002607703203"_s, 0.05f);
	check("0.050000002607703204"_s, 0.05f);
	check("0.050000002607703205"_s, 0.05f);
	check("0.050000002607703206"_s, 0.05f);
	check("0.050000002607703207"_s, 0.05f);
	check("0.050000002607703208"_s, 0.05f);
	check("0.050000002607703209"_s, 0.050000004f);
}

void ParseFloat::testParsing($StringArray* input, bool exceptionalInput) {
	$init(ParseFloat);
	for (int32_t i = 0; i < $nc(input)->length; ++i) {
		double d = 0.0;
		try {
			d = $Float::parseFloat(input->get(i));
			check(input->get(i));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, e, $catch());
			if (!exceptionalInput) {
				$throwNew($RuntimeException, $$str({"Float.parseFloat rejected good string `"_s, input->get(i), "\'."_s}));
			}
			break;
		}
		if (exceptionalInput) {
			$throwNew($RuntimeException, $$str({"Float.parseFloat accepted bad string `"_s, input->get(i), "\'."_s}));
		}
	}
}

void ParseFloat::testPowers() {
	$init(ParseFloat);
	for (int32_t i = -149; i <= +127; ++i) {
		float f = $Math::scalb(1.0f, i);
		$var($BigDecimal, f_BD, $new($BigDecimal, (double)f));
		$var($BigDecimal, lowerBound, f_BD->subtract($($$new($BigDecimal, (double)$Math::ulp(-$Math::nextUp(-f)))->multiply(ParseFloat::HALF))));
		$var($BigDecimal, upperBound, f_BD->add($($$new($BigDecimal, (double)$Math::ulp(f))->multiply(ParseFloat::HALF))));
		check($($nc(lowerBound)->toString()));
		check($($nc(upperBound)->toString()));
	}
	$init($Float);
	check($($nc($($$new($BigDecimal, (double)$Float::MAX_VALUE)->add($($$new($BigDecimal, (double)$Math::ulp($Float::MAX_VALUE))->multiply(ParseFloat::HALF)))))->toString()));
}

void ParseFloat::main($StringArray* args) {
	$init(ParseFloat);
	rudimentaryTest();
	testParsing(ParseFloat::goodStrings, false);
	testParsing(ParseFloat::paddedGoodStrings, false);
	testParsing(ParseFloat::badStrings, true);
	testParsing(ParseFloat::paddedBadStrings, true);
	testPowers();
}

void clinit$ParseFloat($Class* class$) {
	$assignStatic(ParseFloat::HALF, $BigDecimal::valueOf(0.5));
	$assignStatic(ParseFloat::badStrings, $new($StringArray, {
		""_s,
		"+"_s,
		"-"_s,
		"+e"_s,
		"-e"_s,
		"+e170"_s,
		"-e170"_s,
		"1234   e10"_s,
		"-1234   e10"_s,
		"1\u0007e1"_s,
		"1e\u00071"_s,
		"NaNf"_s,
		"NaNF"_s,
		"NaNd"_s,
		"NaND"_s,
		"-NaNf"_s,
		"-NaNF"_s,
		"-NaNd"_s,
		"-NaND"_s,
		"+NaNf"_s,
		"+NaNF"_s,
		"+NaNd"_s,
		"+NaND"_s,
		"Infinityf"_s,
		"InfinityF"_s,
		"Infinityd"_s,
		"InfinityD"_s,
		"-Infinityf"_s,
		"-InfinityF"_s,
		"-Infinityd"_s,
		"-InfinityD"_s,
		"+Infinityf"_s,
		"+InfinityF"_s,
		"+Infinityd"_s,
		"+InfinityD"_s,
		"NaNe10"_s,
		"-NaNe10"_s,
		"+NaNe10"_s,
		"Infinitye10"_s,
		"-Infinitye10"_s,
		"+Infinitye10"_s,
		u"\u0661e\u0661"_s,
		u"\u06f1e\u06f1"_s,
		u"\u0967e\u0967"_s
	}));
	$assignStatic(ParseFloat::goodStrings, $new($StringArray, {
		"NaN"_s,
		"+NaN"_s,
		"-NaN"_s,
		"Infinity"_s,
		"+Infinity"_s,
		"-Infinity"_s,
		"1.1e-23f"_s,
		".1e-23f"_s,
		"1e-23"_s,
		"1f"_s,
		"1"_s,
		"2"_s,
		"1234"_s,
		"-1234"_s,
		"+1234"_s,
		"2147483647"_s,
		"2147483648"_s,
		"-2147483648"_s,
		"-2147483649"_s,
		"16777215"_s,
		"16777216"_s,
		"16777217"_s,
		"-16777215"_s,
		"-16777216"_s,
		"-16777217"_s,
		"9007199254740991"_s,
		"9007199254740992"_s,
		"9007199254740993"_s,
		"-9007199254740991"_s,
		"-9007199254740992"_s,
		"-9007199254740993"_s,
		"9223372036854775807"_s,
		"9223372036854775808"_s,
		"9223372036854775809"_s,
		"-9223372036854775808"_s,
		"-9223372036854775809"_s,
		"-9223372036854775810"_s
	}));
	{
		$var($String, pad, " \t\n\r\f\u0001\u000b\u001f"_s);
		$assignStatic(ParseFloat::paddedBadStrings, $new($StringArray, $nc(ParseFloat::badStrings)->length));
		for (int32_t i = 0; i < $nc(ParseFloat::badStrings)->length; ++i) {
			$nc(ParseFloat::paddedBadStrings)->set(i, $$str({pad, $nc(ParseFloat::badStrings)->get(i), pad}));
		}
		$assignStatic(ParseFloat::paddedGoodStrings, $new($StringArray, $nc(ParseFloat::goodStrings)->length));
		for (int32_t i = 0; i < $nc(ParseFloat::goodStrings)->length; ++i) {
			$nc(ParseFloat::paddedGoodStrings)->set(i, $$str({pad, $nc(ParseFloat::goodStrings)->get(i), pad}));
		}
	}
}

ParseFloat::ParseFloat() {
}

$Class* ParseFloat::load$($String* name, bool initialize) {
	$loadClass(ParseFloat, name, initialize, &_ParseFloat_ClassInfo_, clinit$ParseFloat, allocate$ParseFloat);
	return class$;
}

$Class* ParseFloat::class$ = nullptr;

		} // Float2
	} // lang
} // java