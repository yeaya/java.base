#include <ParseDouble.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef HALF
#undef MAX_VALUE
#undef MIN_VALUE
#undef POSITIVE_INFINITY
#undef TWO

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

$FieldInfo _ParseDouble_FieldInfo_[] = {
	{"HALF", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ParseDouble, HALF)},
	{"badStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ParseDouble, badStrings)},
	{"goodStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ParseDouble, goodStrings)},
	{"paddedBadStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ParseDouble, paddedBadStrings)},
	{"paddedGoodStrings", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ParseDouble, paddedGoodStrings)},
	{}
};

$MethodInfo _ParseDouble_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParseDouble::*)()>(&ParseDouble::init$))},
	{"check", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&ParseDouble::check))},
	{"check", "(Ljava/lang/String;D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,double)>(&ParseDouble::check))},
	{"fail", "(Ljava/lang/String;D)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,double)>(&ParseDouble::fail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ParseDouble::main)), "java.lang.Exception"},
	{"rudimentaryTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ParseDouble::rudimentaryTest))},
	{"testParsing", "([Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringArray*,bool)>(&ParseDouble::testParsing))},
	{"testPowers", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ParseDouble::testPowers))},
	{"testRegex", "([Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringArray*,bool)>(&ParseDouble::testRegex))},
	{"testStrictness", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ParseDouble::testStrictness))},
	{"testSubnormalPowers", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ParseDouble::testSubnormalPowers))},
	{}
};

$ClassInfo _ParseDouble_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ParseDouble",
	"java.lang.Object",
	nullptr,
	_ParseDouble_FieldInfo_,
	_ParseDouble_MethodInfo_
};

$Object* allocate$ParseDouble($Class* clazz) {
	return $of($alloc(ParseDouble));
}

$BigDecimal* ParseDouble::HALF = nullptr;
$StringArray* ParseDouble::badStrings = nullptr;
$StringArray* ParseDouble::goodStrings = nullptr;
$StringArray* ParseDouble::paddedBadStrings = nullptr;
$StringArray* ParseDouble::paddedGoodStrings = nullptr;

void ParseDouble::init$() {
}

void ParseDouble::fail($String* val, double n) {
	$init(ParseDouble);
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({"Double.parseDouble failed. String:"_s, val, " Result:"_s, $$str(n)}));
}

void ParseDouble::check($String* val) {
	$init(ParseDouble);
	$useLocalCurrentObjectStackCache();
	double n = $Double::parseDouble(val);
	bool isNegativeN = n < 0 || n == 0 && 1 / n < 0;
	double na = $Math::abs(n);
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
	} else if (s->charAt(0) == u'-') {
		$assign(s, s->substring(1));
		isNegative = true;
	}
	if (s->equals("nan"_s)) {
		if (!$Double::isNaN(n)) {
			fail(val, n);
		}
		return;
	}
	if ($Double::isNaN(n)) {
		fail(val, n);
	}
	if (isNegativeN != isNegative) {
		fail(val, n);
	}
	if (s->equals("infinity"_s)) {
		if (na != $Double::POSITIVE_INFINITY) {
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
	if ($Double::isInfinite(na)) {
		$assign(l, $$new($BigDecimal, $Double::MAX_VALUE)->add($($$new($BigDecimal, $Math::ulp($Double::MAX_VALUE))->multiply(ParseDouble::HALF))));
		$assign(u, nullptr);
	} else {
		$assign(l, $$new($BigDecimal, na)->subtract($($$new($BigDecimal, $Math::ulp($Math::nextUp(-na)))->multiply(ParseDouble::HALF))));
		$assign(u, $$new($BigDecimal, na)->add($($$new($BigDecimal, $Math::ulp(n))->multiply(ParseDouble::HALF))));
	}
	int32_t cmpL = $nc(bd)->compareTo(l);
	int32_t cmpU = u != nullptr ? bd->compareTo(u) : -1;
	if (((int64_t)($Double::doubleToLongBits(n) & (uint64_t)(int64_t)1)) != 0) {
		if (cmpL <= 0 || cmpU >= 0) {
			fail(val, n);
		}
	} else if (cmpL < 0 || cmpU > 0) {
		fail(val, n);
	}
}

void ParseDouble::check($String* val, double expected) {
	$init(ParseDouble);
	double n = $Double::parseDouble(val);
	if (n != expected) {
		fail(val, n);
	}
	check(val);
}

void ParseDouble::rudimentaryTest() {
	$init(ParseDouble);
	$useLocalCurrentObjectStackCache();
	$init($Double);
	check($$new($String, $$str({""_s, $$str($Double::MIN_VALUE)})), $Double::MIN_VALUE);
	check($$new($String, $$str({""_s, $$str($Double::MAX_VALUE)})), $Double::MAX_VALUE);
	check("10"_s, 10.0);
	check("10.0"_s, 10.0);
	check("10.01"_s, 10.01);
	check("-10"_s, -10.0);
	check("-10.00"_s, -10.0);
	check("-10.01"_s, -10.01);
}

void ParseDouble::testParsing($StringArray* input, bool exceptionalInput) {
	$init(ParseDouble);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(input)->length; ++i) {
		double d = 0.0;
		try {
			d = $Double::parseDouble(input->get(i));
			check(input->get(i));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, e, $catch());
			if (!exceptionalInput) {
				$throwNew($RuntimeException, $$str({"Double.parseDouble rejected good string `"_s, input->get(i), "\'."_s}));
			}
			break;
		}
		if (exceptionalInput) {
			$throwNew($RuntimeException, $$str({"Double.parseDouble accepted bad string `"_s, input->get(i), "\'."_s}));
		}
	}
}

void ParseDouble::testRegex($StringArray* input, bool exceptionalInput) {
	$init(ParseDouble);
	$useLocalCurrentObjectStackCache();
	$var($String, Digits, "(\\p{Digit}+)"_s);
	$var($String, HexDigits, "(\\p{XDigit}+)"_s);
	$var($String, Exp, $str({"[eE][+-]?"_s, Digits}));
	$var($String, fpRegex, $str({"[\\x00-\\x20]*[+-]?(NaN|Infinity|(((("_s, Digits, "(\\.)?("_s, Digits, "?)("_s, Exp, ")?)|(\\.("_s, Digits, ")("_s, Exp, ")?))|(((0[xX]"_s, HexDigits, "(\\.)?)|(0[xX]"_s, HexDigits, "?(\\.)"_s, HexDigits, 
	"))[pP][+-]?"_s, Digits, "))[fFdD]?))[\\x00-\\x20]*"_s}));
	$var($Pattern, fpPattern, $Pattern::compile(fpRegex));
	for (int32_t i = 0; i < $nc(input)->length; ++i) {
		$var($Matcher, m, $nc(fpPattern)->matcher(input->get(i)));
		if ($nc(m)->matches() != !exceptionalInput) {
			$throwNew($RuntimeException, $$str({"Regular expression "_s, (exceptionalInput ? "accepted bad"_s : "rejected good"_s), " string `"_s, input->get(i), "\'."_s}));
		}
	}
}

void ParseDouble::testSubnormalPowers() {
	$init(ParseDouble);
	$useLocalCurrentObjectStackCache();
	bool failed = false;
	$var($BigDecimal, TWO, $BigDecimal::valueOf((int64_t)2));
	$init($Double);
	$var($BigDecimal, ulp_BD, $new($BigDecimal, $Double::MIN_VALUE));
	for (int32_t i = -1073; i <= -1022; ++i) {
		double d = $Math::scalb(1.0, i);
		$var($BigDecimal, d_BD, $new($BigDecimal, d));
		$var($BigDecimal, lowerBound, d_BD->subtract($(ulp_BD->divide(TWO))));
		$var($BigDecimal, upperBound, d_BD->add($(ulp_BD->divide(TWO))));
		double convertedLowerBound = $Double::parseDouble($($nc(lowerBound)->toString()));
		double convertedUpperBound = $Double::parseDouble($($nc(upperBound)->toString()));
		if (convertedLowerBound != d) {
			failed = true;
			$init($System);
			$nc($System::out)->printf("2^%d lowerBound converts as %a %s%n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$($of($Double::valueOf(convertedLowerBound))),
				$of(lowerBound)
			}));
		}
		if (convertedUpperBound != d) {
			failed = true;
			$init($System);
			$nc($System::out)->printf("2^%d upperBound converts as %a %s%n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$($of($Double::valueOf(convertedUpperBound))),
				$of(upperBound)
			}));
		}
	}
	$var($BigDecimal, minValue, $new($BigDecimal, $Double::MIN_VALUE));
	if ($Double::parseDouble($($nc($(minValue->multiply($$new($BigDecimal, 0.5))))->toString())) != 0.0) {
		failed = true;
		$init($System);
		$nc($System::out)->printf("0.5*MIN_VALUE doesn\'t convert 0%n"_s, $$new($ObjectArray, 0));
	}
	if ($Double::parseDouble($($nc($(minValue->multiply($$new($BigDecimal, 0.50000000001))))->toString())) != $Double::MIN_VALUE) {
		failed = true;
		$init($System);
		$nc($System::out)->printf("0.50000000001*MIN_VALUE doesn\'t convert to MIN_VALUE%n"_s, $$new($ObjectArray, 0));
	}
	if ($Double::parseDouble($($nc($(minValue->multiply($$new($BigDecimal, 1.49999999999))))->toString())) != $Double::MIN_VALUE) {
		failed = true;
		$init($System);
		$nc($System::out)->printf("1.49999999999*MIN_VALUE doesn\'t convert to MIN_VALUE%n"_s, $$new($ObjectArray, 0));
	}
	if ($Double::parseDouble($($nc($(minValue->multiply($$new($BigDecimal, 1.5))))->toString())) != 2 * $Double::MIN_VALUE) {
		failed = true;
		$init($System);
		$nc($System::out)->printf("1.5*MIN_VALUE doesn\'t convert to 2*MIN_VALUE%n"_s, $$new($ObjectArray, 0));
	}
	if (failed) {
		$throwNew($RuntimeException, "Inconsistent conversion"_s);
	}
}

void ParseDouble::testPowers() {
	$init(ParseDouble);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = -1074; i <= +1023; ++i) {
		double d = $Math::scalb(1.0, i);
		$var($BigDecimal, d_BD, $new($BigDecimal, d));
		$var($BigDecimal, lowerBound, d_BD->subtract($($$new($BigDecimal, $Math::ulp($Math::nextUp(-d)))->multiply(ParseDouble::HALF))));
		$var($BigDecimal, upperBound, d_BD->add($($$new($BigDecimal, $Math::ulp(d))->multiply(ParseDouble::HALF))));
		check($($nc(lowerBound)->toString()));
		check($($nc(upperBound)->toString()));
	}
	$init($Double);
	check($($nc($($$new($BigDecimal, $Double::MAX_VALUE)->add($($$new($BigDecimal, $Math::ulp($Double::MAX_VALUE))->multiply(ParseDouble::HALF)))))->toString()));
}

void ParseDouble::testStrictness() {
	$init(ParseDouble);
	$useLocalCurrentObjectStackCache();
	double expected = 6.63123685E-316;
	bool failed = false;
	double conversion = 0.0;
	double sum = 0.0;
	$var($String, decimal, "6.631236871469758276785396630275967243399099947355303144249971758736286630139265439618068200788048744105960420552601852889715006376325666595539603330361800519107591783233358492337208057849499360899425128640718856616503093444922854759159988160304439909868291973931426625698663157749836252274523485312442358651207051292453083278116143932569727918709786004497872322193856150225415211997283078496319412124640111777216148110752815101775295719811974338451936095907419622417538473679495148632480391435931767981122396703443803335529756003353209830071832230689201383015598792184172909927924176339315507402234836120730914783168400715462440053817592702766213559042115986763819482654128770595766806872783349146967171293949598850675682115696218943412532098591327667236328125E-316"_s);
	for (int32_t i = 0; i <= 12000; ++i) {
		conversion = $Double::parseDouble(decimal);
		sum += conversion;
		if (conversion != expected) {
			failed = true;
			$init($System);
			$nc($System::out)->printf("Iteration %d converts as %a%n"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$($of($Double::valueOf(conversion)))
			}));
		}
	}
	$init($System);
	$nc($System::out)->println($$str({"Sum = "_s, $$str(sum)}));
	if (failed) {
		$throwNew($RuntimeException, "Inconsistent conversion"_s);
	}
}

void ParseDouble::main($StringArray* args) {
	$init(ParseDouble);
	rudimentaryTest();
	testParsing(ParseDouble::goodStrings, false);
	testParsing(ParseDouble::paddedGoodStrings, false);
	testParsing(ParseDouble::badStrings, true);
	testParsing(ParseDouble::paddedBadStrings, true);
	testRegex(ParseDouble::goodStrings, false);
	testRegex(ParseDouble::paddedGoodStrings, false);
	testRegex(ParseDouble::badStrings, true);
	testRegex(ParseDouble::paddedBadStrings, true);
	testSubnormalPowers();
	testPowers();
	testStrictness();
}

void clinit$ParseDouble($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ParseDouble::HALF, $BigDecimal::valueOf(0.5));
	$assignStatic(ParseDouble::badStrings, $new($StringArray, {
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
		u"\u0967e\u0967"_s,
		"."_s,
		"e42"_s,
		".e42"_s,
		"d"_s,
		".d"_s,
		"e42d"_s,
		".e42d"_s,
		"1A01.01125e-10d"_s,
		"2;3.01125e-10d"_s,
		"1_34.01125e-10d"_s,
		"202..01125e-10d"_s,
		"202,01125e-10d"_s,
		"202.03b4e-10d"_s,
		"202.06_3e-10d"_s,
		"202.01125e-f0d"_s,
		"202.01125e_3d"_s,
		"202.01125e -5d"_s,
		"202.01125e-10r"_s,
		"202.01125e-10ff"_s,
		"1234L.01"_s,
		"12ee-2"_s,
		"12e-2.2.2"_s,
		"12.01e+"_s,
		"12.01E"_s,
		"00x1.0p1"_s,
		"1.0p1"_s,
		"00010p1"_s,
		"deadbeefp1"_s,
		"0x1.0p"_s,
		"0x1.0"_s,
		"0x1.0pa"_s,
		"0x1.0pf"_s,
		"0x1.0e22"_s,
		"0x1.0e22"_s,
		"0xp22"_s
	}));
	$assignStatic(ParseDouble::goodStrings, $new($StringArray, {
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
		"0"_s,
		"-0"_s,
		"+0"_s,
		"00"_s,
		"00"_s,
		"-00"_s,
		"+00"_s,
		"0000000000"_s,
		"-0000000000"_s,
		"+0000000000"_s,
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
		"-9223372036854775810"_s,
		"54.07140d"_s,
		"7.01e-324d"_s,
		"2147483647.01d"_s,
		"1.2147483647f"_s,
		"000000000000000000000000001.F"_s,
		"1.00000000000000000000000000e-2F"_s,
		"2."_s,
		".0909"_s,
		"122112217090.0"_s,
		"7090e-5"_s,
		"2.E-20"_s,
		".0909e42"_s,
		"122112217090.0E+100"_s,
		"7090f"_s,
		"2.F"_s,
		".0909d"_s,
		"122112217090.0D"_s,
		"7090e-5f"_s,
		"2.E-20F"_s,
		".0909e42d"_s,
		"122112217090.0E+100D"_s,
		"5149236780.1102E-209D"_s,
		"1290873.12301e100"_s,
		"1.1E-10f"_s,
		"0.0E-10"_s,
		"1E10"_s,
		"0.f"_s,
		"1f"_s,
		"0.F"_s,
		"1F"_s,
		"0.12d"_s,
		"1e-0d"_s,
		"12.e+1D"_s,
		"0e-0D"_s,
		"12.e+01"_s,
		"1e-01"_s,
		"0x1p1"_s,
		"0X1p1"_s,
		"0x1P1"_s,
		"0X1P1"_s,
		"0x1p1f"_s,
		"0X1p1f"_s,
		"0x1P1f"_s,
		"0X1P1f"_s,
		"0x1p1F"_s,
		"0X1p1F"_s,
		"0x1P1F"_s,
		"0X1P1F"_s,
		"0x1p1d"_s,
		"0X1p1d"_s,
		"0x1P1d"_s,
		"0X1P1d"_s,
		"0x1p1D"_s,
		"0X1p1D"_s,
		"0x1P1D"_s,
		"0X1P1D"_s,
		"-0x1p1"_s,
		"-0X1p1"_s,
		"-0x1P1"_s,
		"-0X1P1"_s,
		"-0x1p1f"_s,
		"-0X1p1f"_s,
		"-0x1P1f"_s,
		"-0X1P1f"_s,
		"-0x1p1F"_s,
		"-0X1p1F"_s,
		"-0x1P1F"_s,
		"-0X1P1F"_s,
		"-0x1p1d"_s,
		"-0X1p1d"_s,
		"-0x1P1d"_s,
		"-0X1P1d"_s,
		"-0x1p1D"_s,
		"-0X1p1D"_s,
		"-0x1P1D"_s,
		"-0X1P1D"_s,
		"0x1p-1"_s,
		"0X1p-1"_s,
		"0x1P-1"_s,
		"0X1P-1"_s,
		"0x1p-1f"_s,
		"0X1p-1f"_s,
		"0x1P-1f"_s,
		"0X1P-1f"_s,
		"0x1p-1F"_s,
		"0X1p-1F"_s,
		"0x1P-1F"_s,
		"0X1P-1F"_s,
		"0x1p-1d"_s,
		"0X1p-1d"_s,
		"0x1P-1d"_s,
		"0X1P-1d"_s,
		"0x1p-1D"_s,
		"0X1p-1D"_s,
		"0x1P-1D"_s,
		"0X1P-1D"_s,
		"-0x1p-1"_s,
		"-0X1p-1"_s,
		"-0x1P-1"_s,
		"-0X1P-1"_s,
		"-0x1p-1f"_s,
		"-0X1p-1f"_s,
		"-0x1P-1f"_s,
		"-0X1P-1f"_s,
		"-0x1p-1F"_s,
		"-0X1p-1F"_s,
		"-0x1P-1F"_s,
		"-0X1P-1F"_s,
		"-0x1p-1d"_s,
		"-0X1p-1d"_s,
		"-0x1P-1d"_s,
		"-0X1P-1d"_s,
		"-0x1p-1D"_s,
		"-0X1p-1D"_s,
		"-0x1P-1D"_s,
		"-0X1P-1D"_s,
		"0xap1"_s,
		"0xbp1"_s,
		"0xcp1"_s,
		"0xdp1"_s,
		"0xep1"_s,
		"0xfp1"_s,
		"0x1p1"_s,
		"0x.1p1"_s,
		"0x1.1p1"_s,
		"0x001p23"_s,
		"0x00.1p1"_s,
		"0x001.1p1"_s,
		"0x100p1"_s,
		"0x.100p1"_s,
		"0x1.100p1"_s,
		"0x00100p1"_s,
		"0x00.100p1"_s,
		"0x001.100p1"_s,
		"1.7976931348623157E308"_s,
		"4.9e-324"_s,
		"2.2250738585072014e-308"_s,
		"2.2250738585072012e-308"_s,
		"1.7976931348623158e+308"_s,
		"1.7976931348623159e+308"_s,
		"2.4703282292062329e-324"_s,
		"2.4703282292062327e-324"_s,
		"2.4703282292062325e-324"_s,
		"0.0000000000001e321"_s,
		"00.000000000000000001e326"_s,
		"00000.000000000000000001e326"_s,
		"000.0000000000000000001e327"_s,
		"0.00000000000000000001e328"_s
	}));
	{
		$var($String, pad, " \t\n\r\f\u0001\u000b\u001f"_s);
		$assignStatic(ParseDouble::paddedBadStrings, $new($StringArray, $nc(ParseDouble::badStrings)->length));
		for (int32_t i = 0; i < $nc(ParseDouble::badStrings)->length; ++i) {
			$nc(ParseDouble::paddedBadStrings)->set(i, $$str({pad, $nc(ParseDouble::badStrings)->get(i), pad}));
		}
		$assignStatic(ParseDouble::paddedGoodStrings, $new($StringArray, $nc(ParseDouble::goodStrings)->length));
		for (int32_t i = 0; i < $nc(ParseDouble::goodStrings)->length; ++i) {
			$nc(ParseDouble::paddedGoodStrings)->set(i, $$str({pad, $nc(ParseDouble::goodStrings)->get(i), pad}));
		}
	}
}

ParseDouble::ParseDouble() {
}

$Class* ParseDouble::load$($String* name, bool initialize) {
	$loadClass(ParseDouble, name, initialize, &_ParseDouble_ClassInfo_, clinit$ParseDouble, allocate$ParseDouble);
	return class$;
}

$Class* ParseDouble::class$ = nullptr;