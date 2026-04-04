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
using $ParseException = ::java::text::ParseException;
using $Locale = ::java::util::Locale;

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
	$useLocalObjectStack();
	$var($DecimalFormat, df, $new($DecimalFormat));
	df->setParseBigDecimal(true);
	df->setMaximumFractionDigits($Integer::MAX_VALUE);
	for (int32_t i = 0; i < BigDecimalCompatibilityTest::input_data->length; ++i) {
		for (int32_t j = 0; j < BigDecimalCompatibilityTest::input_data->length; ++j) {
			for (int32_t k = 0; k < BigDecimalCompatibilityTest::input_data->length; ++k) {
				for (int32_t l = 0; l < BigDecimalCompatibilityTest::input_data->length; ++l) {
					for (int32_t m = 0; m < BigDecimalCompatibilityTest::exponents->length; ++m) {
						$var($String, s, $str({BigDecimalCompatibilityTest::input_data->get(i), BigDecimalCompatibilityTest::input_data->get(j), $$str(u'.'), BigDecimalCompatibilityTest::input_data->get(k), BigDecimalCompatibilityTest::input_data->get(l), BigDecimalCompatibilityTest::exponents->get(m)}));
						for (int32_t n = 0; n < BigDecimalCompatibilityTest::multipliers->length; ++n) {
							test(df, s, BigDecimalCompatibilityTest::multipliers->get(n));
							test(df, $$str({$$str(u'-'), s}), BigDecimalCompatibilityTest::multipliers->get(n));
						}
					}
				}
			}
		}
	}
}

void BigDecimalCompatibilityTest::testBigInteger() {
	$init(BigDecimalCompatibilityTest);
	$useLocalObjectStack();
	$var($DecimalFormat, df, $new($DecimalFormat));
	df->setParseBigDecimal(true);
	df->setMaximumFractionDigits($Integer::MAX_VALUE);
	for (int32_t i = 0; i < BigDecimalCompatibilityTest::input_data->length; ++i) {
		for (int32_t j = 0; j < BigDecimalCompatibilityTest::input_data->length; ++j) {
			$var($String, s, $str({BigDecimalCompatibilityTest::input_data->get(i), BigDecimalCompatibilityTest::input_data->get(j)}));
			for (int32_t k = 0; k < BigDecimalCompatibilityTest::multipliers->length; ++k) {
				test(df, s, BigDecimalCompatibilityTest::multipliers->get(k));
				test(df, $$str({$$str(u'-'), s}), BigDecimalCompatibilityTest::multipliers->get(k));
			}
		}
	}
}

void BigDecimalCompatibilityTest::test($DecimalFormat* df, $String* s, int32_t multiplier) {
	$init(BigDecimalCompatibilityTest);
	$useLocalObjectStack();
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
	$useLocalObjectStack();
	if (!$nc($of(got))->equals(expected)) {
		BigDecimalCompatibilityTest::err = true;
		$nc($System::err)->println($$str({"Failed: got:"_s, got, ", expected: "_s, expected, ", multiplier="_s, $$str(multiplier)}));
	}
}

void BigDecimalCompatibilityTest::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"err", "Z", nullptr, $STATIC, $staticField(BigDecimalCompatibilityTest, err)},
		{"input_data", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BigDecimalCompatibilityTest, input_data)},
		{"exponents", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BigDecimalCompatibilityTest, exponents)},
		{"multipliers", "[I", nullptr, $STATIC | $FINAL, $staticField(BigDecimalCompatibilityTest, multipliers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BigDecimalCompatibilityTest, init$, void)},
		{"check", "(Ljava/lang/Number;Ljava/math/BigDecimal;I)V", nullptr, $STATIC, $staticMethod(BigDecimalCompatibilityTest, check, void, $Number*, $BigDecimal*, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BigDecimalCompatibilityTest, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/text/DecimalFormat;Ljava/lang/String;I)V", nullptr, $STATIC, $staticMethod(BigDecimalCompatibilityTest, test, void, $DecimalFormat*, $String*, int32_t)},
		{"testBigDecimal", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigDecimalCompatibilityTest, testBigDecimal, void)},
		{"testBigInteger", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(BigDecimalCompatibilityTest, testBigInteger, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BigDecimalCompatibilityTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BigDecimalCompatibilityTest, name, initialize, &classInfo$$, BigDecimalCompatibilityTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BigDecimalCompatibilityTest);
	});
	return class$;
}

$Class* BigDecimalCompatibilityTest::class$ = nullptr;