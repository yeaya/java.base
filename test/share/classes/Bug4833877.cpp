#include <Bug4833877.h>

#include <java/lang/Number.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/text/DecimalFormat.h>
#include <java/text/Format.h>
#include <java/text/ParsePosition.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef US

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $DecimalFormat = ::java::text::DecimalFormat;
using $ParsePosition = ::java::text::ParsePosition;
using $Locale = ::java::util::Locale;

$FieldInfo _Bug4833877_FieldInfo_[] = {
	{"df", "Ljava/text/DecimalFormat;", nullptr, $STATIC, $staticField(Bug4833877, df)},
	{"err", "Z", nullptr, $STATIC, $staticField(Bug4833877, err)},
	{}
};

$MethodInfo _Bug4833877_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug4833877::*)()>(&Bug4833877::init$))},
	{"checkFormat", "(Ljava/lang/Number;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($Number*,$String*)>(&Bug4833877::checkFormat))},
	{"checkParse", "(Ljava/lang/String;Ljava/lang/Double;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$Double*)>(&Bug4833877::checkParse))},
	{"checkParse", "(Ljava/lang/String;Ljava/lang/Long;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$Long*)>(&Bug4833877::checkParse))},
	{"checkParse", "(Ljava/lang/String;Ljava/math/BigDecimal;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$BigDecimal*)>(&Bug4833877::checkParse))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug4833877::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Bug4833877_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4833877",
	"java.lang.Object",
	nullptr,
	_Bug4833877_FieldInfo_,
	_Bug4833877_MethodInfo_
};

$Object* allocate$Bug4833877($Class* clazz) {
	return $of($alloc(Bug4833877));
}

$DecimalFormat* Bug4833877::df = nullptr;
bool Bug4833877::err = false;

void Bug4833877::init$() {
}

void Bug4833877::main($StringArray* args) {
	$init(Bug4833877);
	$useLocalCurrentObjectStackCache();
	$var($Locale, defaultLoc, $Locale::getDefault());
	$Locale::setDefault($Locale::US);
	$assignStatic(Bug4833877::df, $new($DecimalFormat));
	$nc(Bug4833877::df)->setMaximumFractionDigits(50);
	$nc(Bug4833877::df)->setMultiplier(4);
	checkFormat($($Double::valueOf(252.5252525252525)), "1,010.10101010101"_s);
	checkParse("-1,010.10101010101"_s, $($Double::valueOf(-252.5252525252525)));
	checkFormat($($Double::valueOf(-2222.2222)), "-8,888.8888"_s);
	checkParse("8888.8888"_s, $($Double::valueOf(2222.2222)));
	checkFormat($($Long::valueOf((int64_t)1000)), "4,000"_s);
	checkParse("-4,000"_s, $($Long::valueOf((int64_t)-1000)));
	checkFormat($($Long::valueOf((int64_t)-250)), "-1,000"_s);
	checkParse("1000"_s, $($Long::valueOf((int64_t)250)));
	$nc(Bug4833877::df)->setParseBigDecimal(true);
	checkFormat($$new($BigDecimal, "22222.222222222222222222222"_s), "88,888.888888888888888888888"_s);
	checkParse("-88,888.888888888888888888888"_s, $$new($BigDecimal, "-22222.222222222222222222222"_s));
	checkFormat($$new($BigDecimal, "-1111111111111111111.111111111111111111"_s), "-4,444,444,444,444,444,444.444444444444444444"_s);
	checkParse("4444444444444444444.444444444444444444"_s, $$new($BigDecimal, "1111111111111111111.111111111111111111"_s));
	checkFormat($$new($BigInteger, "22222222222222222222222222"_s), "88,888,888,888,888,888,888,888,888"_s);
	checkParse("-88,888,888,888,888,888,888,888,888"_s, $$new($BigDecimal, "-22222222222222222222222222"_s));
	checkFormat($$new($BigInteger, "-1111111111111111111111111"_s), "-4,444,444,444,444,444,444,444,444"_s);
	checkParse("4444444444444444444444444"_s, $$new($BigDecimal, "1111111111111111111111111"_s));
	$nc(Bug4833877::df)->setParseBigDecimal(false);
	$nc(Bug4833877::df)->setMultiplier(-4);
	checkFormat($($Double::valueOf(252.5252525252525)), "-1,010.10101010101"_s);
	checkParse("-1,010.10101010101"_s, $($Double::valueOf(252.5252525252525)));
	checkFormat($($Double::valueOf(-2222.2222)), "8,888.8888"_s);
	checkParse("8888.8888"_s, $($Double::valueOf(-2222.2222)));
	checkFormat($($Long::valueOf((int64_t)1000)), "-4,000"_s);
	checkParse("-4,000"_s, $($Long::valueOf((int64_t)1000)));
	checkFormat($($Long::valueOf((int64_t)-250)), "1,000"_s);
	checkParse("1000"_s, $($Long::valueOf((int64_t)-250)));
	$nc(Bug4833877::df)->setParseBigDecimal(true);
	checkFormat($$new($BigDecimal, "22222.222222222222222222222"_s), "-88,888.888888888888888888888"_s);
	checkParse("-88,888.888888888888888888888"_s, $$new($BigDecimal, "22222.222222222222222222222"_s));
	checkFormat($$new($BigDecimal, "-1111111111111111111.111111111111111111"_s), "4,444,444,444,444,444,444.444444444444444444"_s);
	checkParse("4444444444444444444.444444444444444444"_s, $$new($BigDecimal, "-1111111111111111111.111111111111111111"_s));
	checkFormat($$new($BigInteger, "22222222222222222222222222"_s), "-88,888,888,888,888,888,888,888,888"_s);
	checkParse("-88,888,888,888,888,888,888,888,888"_s, $$new($BigDecimal, "22222222222222222222222222"_s));
	checkFormat($$new($BigInteger, "-1111111111111111111111111"_s), "4,444,444,444,444,444,444,444,444"_s);
	checkParse("4444444444444444444444444"_s, $$new($BigDecimal, "-1111111111111111111111111"_s));
	$nc(Bug4833877::df)->setParseBigDecimal(false);
	$nc(Bug4833877::df)->setMultiplier(-3);
	checkFormat($($Double::valueOf(3333.3333333)), "-9,999.9999999"_s);
	checkParse("-10,000.00000000000"_s, $($Double::valueOf(3333.3333333333335)));
	$nc(Bug4833877::df)->setParseIntegerOnly(true);
	checkFormat($($Double::valueOf(-3333.3333333)), "9,999.9999999"_s);
	checkParse("10,000.00000000000"_s, $($Long::valueOf((int64_t)-3333)));
	$nc(Bug4833877::df)->setParseIntegerOnly(false);
	checkFormat($($Double::valueOf(-3333.3333333)), "9,999.9999999"_s);
	checkParse("10,000.00000000000"_s, $($Double::valueOf(-3333.3333333333335)));
	checkFormat($($Long::valueOf((int64_t)3333)), "-9,999"_s);
	$nc(Bug4833877::df)->setParseIntegerOnly(true);
	checkParse("-10,000"_s, $($Long::valueOf((int64_t)3333)));
	$nc(Bug4833877::df)->setParseIntegerOnly(false);
	checkParse("-10000"_s, $($Double::valueOf(3333.3333333333335)));
	checkFormat($($Long::valueOf((int64_t)-3333)), "9,999"_s);
	$nc(Bug4833877::df)->setParseIntegerOnly(true);
	checkParse("10,000"_s, $($Long::valueOf((int64_t)-3333)));
	$nc(Bug4833877::df)->setParseIntegerOnly(false);
	checkParse("10000"_s, $($Double::valueOf(-3333.3333333333335)));
	$nc(Bug4833877::df)->setParseBigDecimal(true);
	checkFormat($$new($BigDecimal, "33333.333333333333333333333"_s), "-99,999.999999999999999999999"_s);
	checkParse("-100,000.000000000000000000000"_s, $$new($BigDecimal, "33333.333333333333333333333"_s));
	checkFormat($$new($BigDecimal, "-33333.333333333333333333333"_s), "99,999.999999999999999999999"_s);
	checkParse("100,000.000000000000000000000"_s, $$new($BigDecimal, "-33333.333333333333333333333"_s));
	checkFormat($$new($BigInteger, "33333333333333333333333333"_s), "-99,999,999,999,999,999,999,999,999"_s);
	checkParse("-100,000,000,000,000,000,000,000,000"_s, $$new($BigDecimal, "33333333333333333333333333"_s));
	checkFormat($$new($BigInteger, "-33333333333333333333333333"_s), "99,999,999,999,999,999,999,999,999"_s);
	$nc(Bug4833877::df)->setParseIntegerOnly(true);
	checkParse("100,000,000,000,000,000,000,000,000.000"_s, $$new($BigDecimal, "-33333333333333333333333333"_s));
	$nc(Bug4833877::df)->setParseIntegerOnly(false);
	checkParse("100,000,000,000,000,000,000,000,000.000"_s, $$new($BigDecimal, "-33333333333333333333333333.333"_s));
	$assignStatic(Bug4833877::df, $new($DecimalFormat, "0.#E0;-0.#E0"_s));
	$nc(Bug4833877::df)->setMaximumFractionDigits(50);
	$nc(Bug4833877::df)->setMultiplier(4);
	checkFormat($($Double::valueOf(252.5252525252525)), "1.01010101010101E3"_s);
	checkParse("-1.01010101010101E3"_s, $($Double::valueOf(-252.5252525252525)));
	checkFormat($($Double::valueOf(-2222.2222)), "-8.8888888E3"_s);
	checkParse("8888.8888"_s, $($Double::valueOf(2222.2222)));
	checkFormat($($Long::valueOf((int64_t)1000)), "4E3"_s);
	checkParse("-4E3"_s, $($Long::valueOf((int64_t)-1000)));
	checkFormat($($Long::valueOf((int64_t)-250)), "-1E3"_s);
	checkParse("1000"_s, $($Long::valueOf((int64_t)250)));
	$nc(Bug4833877::df)->setParseBigDecimal(true);
	checkFormat($$new($BigDecimal, "22222.222222222222222222222"_s), "8.8888888888888888888888888E4"_s);
	checkParse("-8.8888888888888888888888888E4"_s, $$new($BigDecimal, "-2.2222222222222222222222222E4"_s));
	checkFormat($$new($BigDecimal, "-1111111111111111111.111111111111111111"_s), "-4.444444444444444444444444444444444444E18"_s);
	checkParse("4444444444444444444.444444444444444444"_s, $$new($BigDecimal, "1111111111111111111.111111111111111111"_s));
	checkFormat($$new($BigInteger, "22222222222222222222222222"_s), "8.8888888888888888888888888E25"_s);
	checkParse("-8.8888888888888888888888888E25"_s, $$new($BigDecimal, "-22222222222222222222222222"_s));
	checkFormat($$new($BigInteger, "-1111111111111111111111111"_s), "-4.444444444444444444444444E24"_s);
	checkParse("4444444444444444444444444"_s, $$new($BigDecimal, "1111111111111111111111111"_s));
	$nc(Bug4833877::df)->setParseBigDecimal(false);
	$nc(Bug4833877::df)->setMultiplier(-4);
	checkFormat($($Double::valueOf(252.5252525252525)), "-1.01010101010101E3"_s);
	checkParse("-1.01010101010101E3"_s, $($Double::valueOf(252.5252525252525)));
	checkFormat($($Double::valueOf(-2222.2222)), "8.8888888E3"_s);
	checkParse("8888.8888"_s, $($Double::valueOf(-2222.2222)));
	checkFormat($($Long::valueOf((int64_t)1000)), "-4E3"_s);
	checkParse("-4E3"_s, $($Long::valueOf((int64_t)1000)));
	checkFormat($($Long::valueOf((int64_t)-250)), "1E3"_s);
	checkParse("1000"_s, $($Long::valueOf((int64_t)-250)));
	$nc(Bug4833877::df)->setParseBigDecimal(true);
	checkFormat($$new($BigDecimal, "22222.222222222222222222222"_s), "-8.8888888888888888888888888E4"_s);
	checkParse("-8.8888888888888888888888888E4"_s, $$new($BigDecimal, "2.2222222222222222222222222E4"_s));
	checkFormat($$new($BigDecimal, "-1111111111111111111.111111111111111111"_s), "4.444444444444444444444444444444444444E18"_s);
	checkParse("4444444444444444444.444444444444444444"_s, $$new($BigDecimal, "-1111111111111111111.111111111111111111"_s));
	checkFormat($$new($BigInteger, "22222222222222222222222222"_s), "-8.8888888888888888888888888E25"_s);
	checkParse("-8.8888888888888888888888888E25"_s, $$new($BigDecimal, "22222222222222222222222222"_s));
	checkFormat($$new($BigInteger, "-1111111111111111111111111"_s), "4.444444444444444444444444E24"_s);
	checkParse("4444444444444444444444444"_s, $$new($BigDecimal, "-1111111111111111111111111"_s));
	$nc(Bug4833877::df)->setParseBigDecimal(false);
	$nc(Bug4833877::df)->setMultiplier(-3);
	checkFormat($($Double::valueOf(3333.3333333)), "-9.9999999999E3"_s);
	checkParse("-1.00000000000000E3"_s, $($Double::valueOf(333.3333333333333)));
	$nc(Bug4833877::df)->setParseIntegerOnly(true);
	checkFormat($($Double::valueOf(-3333.3333333)), "9.9999999999E3"_s);
	checkParse("10.00000000000000E3"_s, $($Long::valueOf((int64_t)-3)));
	$nc(Bug4833877::df)->setParseIntegerOnly(false);
	checkFormat($($Double::valueOf(-3333.3333333)), "9.9999999999E3"_s);
	checkParse("10.00000000000000E3"_s, $($Double::valueOf(-3333.3333333333335)));
	checkFormat($($Long::valueOf((int64_t)3333)), "-9.999E3"_s);
	$nc(Bug4833877::df)->setParseIntegerOnly(true);
	checkParse("-1.0E4"_s, $($Long::valueOf((int64_t)0)));
	$nc(Bug4833877::df)->setParseIntegerOnly(false);
	checkParse("-1.0E4"_s, $($Double::valueOf(3333.3333333333335)));
	checkFormat($($Long::valueOf((int64_t)-3333)), "9.999E3"_s);
	$nc(Bug4833877::df)->setParseIntegerOnly(true);
	checkParse("10.0E4"_s, $($Long::valueOf((int64_t)-3)));
	$nc(Bug4833877::df)->setParseIntegerOnly(false);
	checkParse("10.0E4"_s, $($Double::valueOf(-33333.333333333336)));
	$nc(Bug4833877::df)->setParseBigDecimal(true);
	checkFormat($$new($BigDecimal, "333.333333333333333333333333"_s), "-9.99999999999999999999999999E2"_s);
	checkParse("-1.0000000000000000000000000E3"_s, $$new($BigDecimal, "3.333333333333333333333333E2"_s));
	$nc(Bug4833877::df)->setParseIntegerOnly(true);
	checkFormat($$new($BigDecimal, "-333.333333333333333333333333"_s), "9.99999999999999999999999999E2"_s);
	checkParse("10.0000000000000000000000000E3"_s, $$new($BigDecimal, "-3"_s));
	$nc(Bug4833877::df)->setParseIntegerOnly(false);
	checkFormat($$new($BigDecimal, "-333.333333333333333333333333"_s), "9.99999999999999999999999999E2"_s);
	checkParse("1.0000000000000000000000000E3"_s, $$new($BigDecimal, "-3.333333333333333333333333E2"_s));
	checkFormat($$new($BigInteger, "33333333333333333333333333"_s), "-9.9999999999999999999999999E25"_s);
	checkParse("-100000000000000000000000000"_s, $$new($BigDecimal, "33333333333333333333333333"_s));
	checkFormat($$new($BigInteger, "-33333333333333333333333333"_s), "9.9999999999999999999999999E25"_s);
	$nc(Bug4833877::df)->setParseIntegerOnly(true);
	checkParse("100000000000000000000000000000"_s, $$new($BigDecimal, "-33333333333333333333333333333"_s));
	$nc(Bug4833877::df)->setParseIntegerOnly(false);
	checkParse("100000000000000000000000000.000"_s, $$new($BigDecimal, "-33333333333333333333333333.333"_s));
	$Locale::setDefault(defaultLoc);
	if (Bug4833877::err) {
		$throwNew($RuntimeException, "Wrong format/parse with DecimalFormat"_s);
	}
}

void Bug4833877::checkFormat($Number* num, $String* expected) {
	$init(Bug4833877);
	$useLocalCurrentObjectStackCache();
	$var($String, got, $nc(Bug4833877::df)->format(num));
	if (!$nc(got)->equals(expected)) {
		Bug4833877::err = true;
		$var($String, var$6, $$str({"    DecimalFormat format("_s, $($nc($of(num))->getClass()->getName()), ") error:\n\tnumber:     "_s, num, "\n\tpattern:    "_s}));
		$var($String, var$5, $$concat(var$6, $($nc(Bug4833877::df)->toPattern())));
		$var($String, var$4, $$concat(var$5, "\n\tmultiplier: "_s));
		$var($String, var$3, $$concat(var$4, $$str($nc(Bug4833877::df)->getMultiplier())));
		$var($String, var$2, $$concat(var$3, "\n\tgot:        "_s));
		$var($String, var$1, $$concat(var$2, got));
		$var($String, var$0, $$concat(var$1, "\n\texpected:   "_s));
		$nc($System::err)->println($$concat(var$0, expected));
	}
}

void Bug4833877::checkParse($String* text, $Double* expected) {
	$init(Bug4833877);
	$useLocalCurrentObjectStackCache();
	$var($Double, got, $cast($Double, $nc(Bug4833877::df)->parse(text, $$new($ParsePosition, 0))));
	if (!$nc(got)->equals(expected)) {
		Bug4833877::err = true;
		$var($String, var$4, $$str({"    DecimalFormat parse(double) error:\n\ttext:       "_s, text, "\n\tpattern:    "_s, $($nc(Bug4833877::df)->toPattern()), "\n\tmultiplier: "_s}));
		$var($String, var$3, $$concat(var$4, $$str($nc(Bug4833877::df)->getMultiplier())));
		$var($String, var$2, $$concat(var$3, "\n\tgot:        "_s));
		$var($String, var$1, $$concat(var$2, $(got)));
		$var($String, var$0, $$concat(var$1, "\n\texpected:   "_s));
		$nc($System::err)->println($$concat(var$0, $(expected)));
	}
}

void Bug4833877::checkParse($String* text, $Long* expected) {
	$init(Bug4833877);
	$useLocalCurrentObjectStackCache();
	$var($Long, got, $cast($Long, $nc(Bug4833877::df)->parse(text, $$new($ParsePosition, 0))));
	if (!$nc(got)->equals(expected)) {
		Bug4833877::err = true;
		$var($String, var$4, $$str({"    DecimalFormat parse(long) error:\n\ttext:       "_s, text, "\n\tpattern:    "_s, $($nc(Bug4833877::df)->toPattern()), "\n\tmultiplier: "_s}));
		$var($String, var$3, $$concat(var$4, $$str($nc(Bug4833877::df)->getMultiplier())));
		$var($String, var$2, $$concat(var$3, "\n\tgot:        "_s));
		$var($String, var$1, $$concat(var$2, $(got)));
		$var($String, var$0, $$concat(var$1, "\n\texpected:   "_s));
		$nc($System::err)->println($$concat(var$0, $(expected)));
	}
}

void Bug4833877::checkParse($String* text, $BigDecimal* expected) {
	$init(Bug4833877);
	$useLocalCurrentObjectStackCache();
	$var($BigDecimal, got, $cast($BigDecimal, $nc(Bug4833877::df)->parse(text, $$new($ParsePosition, 0))));
	if (!$nc(got)->equals(expected)) {
		Bug4833877::err = true;
		$var($String, var$4, $$str({"    DecimalFormat parse(BigDecimal) error:\n\ttext:       "_s, text, "\n\tpattern:    "_s, $($nc(Bug4833877::df)->toPattern()), "\n\tmultiplier: "_s}));
		$var($String, var$3, $$concat(var$4, $$str($nc(Bug4833877::df)->getMultiplier())));
		$var($String, var$2, $$concat(var$3, "\n\tgot:        "_s));
		$var($String, var$1, $$concat(var$2, $(got)));
		$var($String, var$0, $$concat(var$1, "\n\texpected:   "_s));
		$nc($System::err)->println($$concat(var$0, $(expected)));
	}
}

void clinit$Bug4833877($Class* class$) {
	Bug4833877::err = false;
}

Bug4833877::Bug4833877() {
}

$Class* Bug4833877::load$($String* name, bool initialize) {
	$loadClass(Bug4833877, name, initialize, &_Bug4833877_ClassInfo_, clinit$Bug4833877, allocate$Bug4833877);
	return class$;
}

$Class* Bug4833877::class$ = nullptr;