#include <BigDecimalCompatibilityTest.h>

#include <java/lang/Number.h>
#include <java/math/BigDecimal.h>
#include <java/math/RoundingMode.h>
#include <java/text/DecimalFormat.h>
#include <java/text/ParseException.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef HALF_EVEN
#undef MAX_VALUE
#undef US

using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $RoundingMode = ::java::math::RoundingMode;
using $DecimalFormat = ::java::text::DecimalFormat;
using $NumberFormat = ::java::text::NumberFormat;
using $ParseException = ::java::text::ParseException;
using $Locale = ::java::util::Locale;

$FieldInfo _BigDecimalCompatibilityTest_FieldInfo_[] = {
	{"err", "Z", nullptr, $STATIC, $staticField(BigDecimalCompatibilityTest, err)},
	{"input_data", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BigDecimalCompatibilityTest, input_data)},
	{"exponents", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BigDecimalCompatibilityTest, exponents)},
	{"multipliers", "[I", nullptr, $STATIC | $FINAL, $staticField(BigDecimalCompatibilityTest, multipliers)},
	{}
};

$MethodInfo _BigDecimalCompatibilityTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BigDecimalCompatibilityTest::*)()>(&BigDecimalCompatibilityTest::init$))},
	{"check", "(Ljava/lang/Number;Ljava/math/BigDecimal;I)V", nullptr, $STATIC, $method(static_cast<void(*)($Number*,$BigDecimal*,int32_t)>(&BigDecimalCompatibilityTest::check))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BigDecimalCompatibilityTest::main)), "java.lang.Exception"},
	{"test", "(Ljava/text/DecimalFormat;Ljava/lang/String;I)V", nullptr, $STATIC, $method(static_cast<void(*)($DecimalFormat*,$String*,int32_t)>(&BigDecimalCompatibilityTest::test))},
	{"testBigDecimal", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&BigDecimalCompatibilityTest::testBigDecimal))},
	{"testBigInteger", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&BigDecimalCompatibilityTest::testBigInteger))},
	{}
};

$ClassInfo _BigDecimalCompatibilityTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BigDecimalCompatibilityTest",
	"java.lang.Object",
	nullptr,
	_BigDecimalCompatibilityTest_FieldInfo_,
	_BigDecimalCompatibilityTest_MethodInfo_
};

$Object* allocate$BigDecimalCompatibilityTest($Class* clazz) {
	return $of($alloc(BigDecimalCompatibilityTest));
}

bool BigDecimalCompatibilityTest::err = false;
$StringArray* BigDecimalCompatibilityTest::input_data = nullptr;
$StringArray* BigDecimalCompatibilityTest::exponents = nullptr;
$ints* BigDecimalCompatibilityTest::multipliers = nullptr;

void BigDecimalCompatibilityTest::init$() {
}

void BigDecimalCompatibilityTest::main($StringArray* args) {
	$init(BigDecimalCompatibilityTest);
	$var($Locale, loc, $Locale::getDefault());
	$Locale::setDefault($Locale::US);
	testBigDecimal();
	testBigInteger();
	$Locale::setDefault(loc);
	if (BigDecimalCompatibilityTest::err) {
		$throwNew($RuntimeException, "Error: Unexpected value"_s);
	}
}

void BigDecimalCompatibilityTest::testBigDecimal() {
	$init(BigDecimalCompatibilityTest);
	$useLocalCurrentObjectStackCache();
	$var($DecimalFormat, df, $new($DecimalFormat));
	df->setParseBigDecimal(true);
	df->setMaximumFractionDigits($Integer::MAX_VALUE);
	for (int32_t i = 0; i < $nc(BigDecimalCompatibilityTest::input_data)->length; ++i) {
		for (int32_t j = 0; j < $nc(BigDecimalCompatibilityTest::input_data)->length; ++j) {
			for (int32_t k = 0; k < $nc(BigDecimalCompatibilityTest::input_data)->length; ++k) {
				for (int32_t l = 0; l < $nc(BigDecimalCompatibilityTest::input_data)->length; ++l) {
					for (int32_t m = 0; m < $nc(BigDecimalCompatibilityTest::exponents)->length; ++m) {
						$var($String, s, $str({$nc(BigDecimalCompatibilityTest::input_data)->get(i), $nc(BigDecimalCompatibilityTest::input_data)->get(j), $$str(u'.'), $nc(BigDecimalCompatibilityTest::input_data)->get(k), $nc(BigDecimalCompatibilityTest::input_data)->get(l), $nc(BigDecimalCompatibilityTest::exponents)->get(m)}));
						for (int32_t n = 0; n < $nc(BigDecimalCompatibilityTest::multipliers)->length; ++n) {
							test(df, s, $nc(BigDecimalCompatibilityTest::multipliers)->get(n));
							test(df, $$str({$$str(u'-'), s}), $nc(BigDecimalCompatibilityTest::multipliers)->get(n));
						}
					}
				}
			}
		}
	}
}

void BigDecimalCompatibilityTest::testBigInteger() {
	$init(BigDecimalCompatibilityTest);
	$useLocalCurrentObjectStackCache();
	$var($DecimalFormat, df, $new($DecimalFormat));
	df->setParseBigDecimal(true);
	df->setMaximumFractionDigits($Integer::MAX_VALUE);
	for (int32_t i = 0; i < $nc(BigDecimalCompatibilityTest::input_data)->length; ++i) {
		for (int32_t j = 0; j < $nc(BigDecimalCompatibilityTest::input_data)->length; ++j) {
			$var($String, s, $str({$nc(BigDecimalCompatibilityTest::input_data)->get(i), $nc(BigDecimalCompatibilityTest::input_data)->get(j)}));
			for (int32_t k = 0; k < $nc(BigDecimalCompatibilityTest::multipliers)->length; ++k) {
				test(df, s, $nc(BigDecimalCompatibilityTest::multipliers)->get(k));
				test(df, $$str({$$str(u'-'), s}), $nc(BigDecimalCompatibilityTest::multipliers)->get(k));
			}
		}
	}
}

void BigDecimalCompatibilityTest::test($DecimalFormat* df, $String* s, int32_t multiplier) {
	$init(BigDecimalCompatibilityTest);
	$useLocalCurrentObjectStackCache();
	$nc(df)->setMultiplier(multiplier);
	$var($Number, num, nullptr);
	try {
		$assign(num, df->parse(s));
	} catch ($ParseException& e) {
		BigDecimalCompatibilityTest::err = true;
		$nc($System::err)->println($$str({"Failed: Exception occurred: "_s, $(e->getMessage())}));
		return;
	}
	$var($BigDecimal, bd, $new($BigDecimal, s));
	try {
		$assign(bd, bd->divide($$new($BigDecimal, multiplier)));
	} catch ($ArithmeticException& e) {
		$init($RoundingMode);
		$assign(bd, bd->divide($$new($BigDecimal, multiplier), $RoundingMode::HALF_EVEN));
	}
	check(num, bd, multiplier);
}

void BigDecimalCompatibilityTest::check($Number* got, $BigDecimal* expected, int32_t multiplier) {
	$init(BigDecimalCompatibilityTest);
	$useLocalCurrentObjectStackCache();
	if (!$nc($of(got))->equals(expected)) {
		BigDecimalCompatibilityTest::err = true;
		$nc($System::err)->println($$str({"Failed: got:"_s, got, ", expected: "_s, expected, ", multiplier="_s, $$str(multiplier)}));
	}
}

void clinit$BigDecimalCompatibilityTest($Class* class$) {
	BigDecimalCompatibilityTest::err = false;
	$assignStatic(BigDecimalCompatibilityTest::input_data, $new($StringArray, {
		"0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"_s,
		"1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890"_s
	}));
	$assignStatic(BigDecimalCompatibilityTest::exponents, $new($StringArray, {
		"E-100"_s,
		"E100"_s,
		"E-900"_s,
		"E900"_s,
		""_s
	}));
	$assignStatic(BigDecimalCompatibilityTest::multipliers, $new($ints, {
		-1,
		1,
		-100,
		100,
		-9999,
		9999
	}));
}

BigDecimalCompatibilityTest::BigDecimalCompatibilityTest() {
}

$Class* BigDecimalCompatibilityTest::load$($String* name, bool initialize) {
	$loadClass(BigDecimalCompatibilityTest, name, initialize, &_BigDecimalCompatibilityTest_ClassInfo_, clinit$BigDecimalCompatibilityTest, allocate$BigDecimalCompatibilityTest);
	return class$;
}

$Class* BigDecimalCompatibilityTest::class$ = nullptr;