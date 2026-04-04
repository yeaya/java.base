#include <IntegralDivisionTests.h>
#include <java/math/BigDecimal.h>
#include <java/math/MathContext.h>
#include <java/math/RoundingMode.h>
#include <jcpp.h>

#undef DOWN
#undef MAX_VALUE
#undef MIN_VALUE
#undef ONE

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $RoundingModeArray = $Array<::java::math::RoundingMode>;
using $BigDecimalArray2 = $Array<::java::math::BigDecimal, 2>;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $MathContext = ::java::math::MathContext;
using $RoundingMode = ::java::math::RoundingMode;

void IntegralDivisionTests::init$() {
}

int32_t IntegralDivisionTests::dividetoIntegralValueTests() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($BigDecimalArray2, moreTestCases, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "11003"_s),
			$$new($BigDecimal, "10"_s),
			$$new($BigDecimal, "1100"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "11003"_s),
			$$new($BigDecimal, "1e1"_s),
			$$new($BigDecimal, "1100.0"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1e9"_s),
			$$new($BigDecimal, "1"_s),
			$$new($BigDecimal, "1e9"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1e9"_s),
			$$new($BigDecimal, "1.00"_s),
			$$new($BigDecimal, "1e9"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1e9"_s),
			$$new($BigDecimal, "0.1"_s),
			$$new($BigDecimal, "1e10"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "10e8"_s),
			$$new($BigDecimal, "0.1"_s),
			$$new($BigDecimal, "10e9"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "400e1"_s),
			$$new($BigDecimal, "5"_s),
			$$new($BigDecimal, "80e1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "400e1"_s),
			$$new($BigDecimal, "4.999999999"_s),
			$$new($BigDecimal, "8e2"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "40e2"_s),
			$$new($BigDecimal, "5"_s),
			$$new($BigDecimal, "8e2"_s)
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(1, $Integer::MIN_VALUE)),
			$($BigDecimal::valueOf(1, -($Integer::MAX_VALUE & 0x7fffff00))),
			$($BigDecimal::valueOf(1, -256))
		})
	}));
	{
		$var($BigDecimalArray2, arr$, moreTestCases);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigDecimalArray, testCase, arr$->get(i$));
			{
				$var($BigDecimal, quotient, nullptr);
				if (!$nc(($assign(quotient, $nc($nc(testCase)->get(0))->divideToIntegralValue($nc(testCase)->get(1)))))->equals($nc(testCase)->get(2))) {
					++failures;
					$nc($System::err)->println();
					$var($StringBuilder, var$0, $new($StringBuilder));
					var$0->append("dividend  = "_s);
					var$0->append(testCase->get(0));
					var$0->append(" scale = "_s);
					var$0->append($nc(testCase->get(0))->scale());
					$System::err->println($$str(var$0));
					$var($StringBuilder, var$1, $new($StringBuilder));
					var$1->append("divisor   = "_s);
					var$1->append(testCase->get(1));
					var$1->append(" scale = "_s);
					var$1->append($nc(testCase->get(1))->scale());
					$System::err->println($$str(var$1));
					$var($StringBuilder, var$2, $new($StringBuilder));
					var$2->append("quotient  = "_s);
					var$2->append(quotient);
					var$2->append(" scale = "_s);
					var$2->append(quotient->scale());
					$System::err->println($$str(var$2));
					$var($StringBuilder, var$3, $new($StringBuilder));
					var$3->append("expected  = "_s);
					var$3->append(testCase->get(2));
					var$3->append(" scale = "_s);
					var$3->append($nc(testCase->get(2))->scale());
					$System::err->println($$str(var$3));
				}
			}
		}
	}
	return failures;
}

int32_t IntegralDivisionTests::dividetoIntegralValueRoundedTests() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($BigDecimal, dividend, $new($BigDecimal, "11003"_s));
	$var($BigDecimal, divisor, $new($BigDecimal, "10"_s));
	$var($BigDecimalArray, quotients, $new($BigDecimalArray, {
		$$new($BigDecimal, "1100"_s),
		nullptr,
		$$new($BigDecimal, "11e2"_s),
		$$new($BigDecimal, "110e1"_s),
		$$new($BigDecimal, "1100"_s)
	}));
	failures += divideContextTestPrecs(dividend, divisor, quotients);
	$assign(dividend, $new($BigDecimal, "11003"_s));
	$assign(divisor, $new($BigDecimal, "1e1"_s));
	$var($BigDecimalArray, quotients2, $new($BigDecimalArray, {
		$$new($BigDecimal, "1100.0"_s),
		nullptr,
		$$new($BigDecimal, "11e2"_s),
		$$new($BigDecimal, "110e1"_s),
		$$new($BigDecimal, "1100"_s),
		$$new($BigDecimal, "1100.0"_s)
	}));
	failures += divideContextTestPrecs(dividend, divisor, quotients2);
	$assign(dividend, $new($BigDecimal, "1230000"_s));
	$assign(divisor, $new($BigDecimal, "100"_s));
	$var($BigDecimalArray, quotients3, $new($BigDecimalArray, {
		$$new($BigDecimal, "12300"_s),
		nullptr,
		nullptr,
		$$new($BigDecimal, "123e2"_s),
		$$new($BigDecimal, "1230e1"_s),
		$$new($BigDecimal, "12300"_s)
	}));
	failures += divideContextTestPrecs(dividend, divisor, quotients3);
	$assign(dividend, $new($BigDecimal, "33"_s));
	$assign(divisor, $new($BigDecimal, "3"_s));
	$var($BigDecimalArray, quotients4, $new($BigDecimalArray, {
		$$new($BigDecimal, "11"_s),
		nullptr,
		$$new($BigDecimal, "11"_s),
		$$new($BigDecimal, "11"_s)
	}));
	failures += divideContextTestPrecs(dividend, divisor, quotients4);
	$assign(dividend, $new($BigDecimal, "34"_s));
	$assign(divisor, $new($BigDecimal, "3"_s));
	$var($BigDecimalArray, quotients5, $new($BigDecimalArray, {
		$$new($BigDecimal, "11"_s),
		nullptr,
		$$new($BigDecimal, "11"_s),
		$$new($BigDecimal, "11"_s)
	}));
	failures += divideContextTestPrecs(dividend, divisor, quotients5);
	return failures;
}

int32_t IntegralDivisionTests::divideContextTestPrecs($BigDecimal* dividend, $BigDecimal* divisor, $BigDecimalArray* quotients) {
	$useLocalObjectStack();
	int32_t failures = 0;
	for (int32_t i = 0; i < $nc(quotients)->length; ++i) {
		$var($BigDecimal, result, nullptr);
		$var($BigDecimal, quotient, quotients->get(i));
		try {
			$init($RoundingMode);
			$assign(result, $nc(dividend)->divideToIntegralValue(divisor, $$new($MathContext, i, $RoundingMode::DOWN)));
		} catch ($ArithmeticException& e) {
			if (quotient != nullptr) {
				++failures;
				$nc($System::err)->println();
				$System::err->println("Unexpected exception:"_s);
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append("dividend  = "_s);
				var$0->append(dividend);
				var$0->append(" scale = "_s);
				var$0->append($nc(dividend)->scale());
				$System::err->println($$str(var$0));
				$var($StringBuilder, var$1, $new($StringBuilder));
				var$1->append("divisor   = "_s);
				var$1->append(divisor);
				var$1->append(" scale = "_s);
				var$1->append($nc(divisor)->scale());
				$System::err->println($$str(var$1));
				$var($StringBuilder, var$2, $new($StringBuilder));
				var$2->append("expected  = "_s);
				var$2->append(quotient);
				var$2->append(" scale = "_s);
				var$2->append(quotient->scale());
				$System::err->println($$str(var$2));
			}
		}
		if (quotient != nullptr) {
			if (!$nc(result)->equals(quotient)) {
				++failures;
				$nc($System::err)->println();
				$System::err->println("Unexpected result:"_s);
				$var($StringBuilder, var$3, $new($StringBuilder));
				var$3->append("dividend  = "_s);
				var$3->append(dividend);
				var$3->append(" scale = "_s);
				var$3->append($nc(dividend)->scale());
				$System::err->println($$str(var$3));
				$var($StringBuilder, var$4, $new($StringBuilder));
				var$4->append("divisor   = "_s);
				var$4->append(divisor);
				var$4->append(" scale = "_s);
				var$4->append($nc(divisor)->scale());
				$System::err->println($$str(var$4));
				$var($StringBuilder, var$5, $new($StringBuilder));
				var$5->append("quotient  = "_s);
				var$5->append(result);
				var$5->append(" scale = "_s);
				var$5->append(result->scale());
				$System::err->println($$str(var$5));
				$var($StringBuilder, var$6, $new($StringBuilder));
				var$6->append("expected  = "_s);
				var$6->append(quotient);
				var$6->append(" scale = "_s);
				var$6->append(quotient->scale());
				$System::err->println($$str(var$6));
				$System::err->println($$str({"precision = "_s, $$str(i)}));
			}
		} else if (result != nullptr) {
			++failures;
			$nc($System::err)->println();
			$System::err->println("Unexpected unexceptional result:"_s);
			$var($StringBuilder, var$7, $new($StringBuilder));
			var$7->append("dividend  = "_s);
			var$7->append(dividend);
			var$7->append(" scale = "_s);
			var$7->append($nc(dividend)->scale());
			$System::err->println($$str(var$7));
			$var($StringBuilder, var$8, $new($StringBuilder));
			var$8->append("divisor   = "_s);
			var$8->append(divisor);
			var$8->append(" scale = "_s);
			var$8->append($nc(divisor)->scale());
			$System::err->println($$str(var$8));
			$var($StringBuilder, var$9, $new($StringBuilder));
			var$9->append("quotient  = "_s);
			var$9->append(result);
			var$9->append(" scale = "_s);
			var$9->append(result->scale());
			$System::err->println($$str(var$9));
			$System::err->println($$str({"precision = "_s, $$str(i)}));
		}
	}
	return failures;
}

int32_t IntegralDivisionTests::divideContextTests($BigDecimal* dividend, $BigDecimal* divisor, $BigDecimal* expected, $MathContext* mc) {
	$useLocalObjectStack();
	int32_t failures = 0;
	failures += divideContextTest(dividend, divisor, expected, mc);
	$var($BigDecimal, var$0, $nc(dividend)->negate());
	failures += divideContextTest(var$0, $($nc(divisor)->negate()), expected, mc);
	if (expected != nullptr) {
		$var($BigDecimal, var$1, dividend->negate());
		failures += divideContextTest(var$1, divisor, $(expected->negate()), mc);
		$var($BigDecimal, var$2, divisor->negate());
		failures += divideContextTest(dividend, var$2, $(expected->negate()), mc);
	}
	return failures;
}

int32_t IntegralDivisionTests::divideContextTest($BigDecimal* dividend, $BigDecimal* divisor, $BigDecimal* expected, $MathContext* mc) {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($BigDecimal, result, nullptr);
	try {
		$assign(result, $nc(dividend)->divideToIntegralValue(divisor, mc));
	} catch ($ArithmeticException& e) {
		if (expected != nullptr) {
			++failures;
			$nc($System::err)->println();
			$System::err->println("Unexpected exception:"_s);
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("dividend  = "_s);
			var$0->append(dividend);
			var$0->append(" scale = "_s);
			var$0->append($nc(dividend)->scale());
			$System::err->println($$str(var$0));
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("divisor   = "_s);
			var$1->append(divisor);
			var$1->append(" scale = "_s);
			var$1->append($nc(divisor)->scale());
			$System::err->println($$str(var$1));
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("expected  = "_s);
			var$2->append(expected);
			var$2->append(" scale = "_s);
			var$2->append(expected->scale());
			$System::err->println($$str(var$2));
			$System::err->println($$str({"MathContext  = "_s, mc}));
		}
	}
	if (expected != nullptr) {
		if (!$nc(result)->equals(expected)) {
			++failures;
			$nc($System::err)->println();
			$System::err->println("Unexpected result:"_s);
			$var($StringBuilder, var$3, $new($StringBuilder));
			var$3->append("dividend  = "_s);
			var$3->append(dividend);
			var$3->append(" scale = "_s);
			var$3->append($nc(dividend)->scale());
			$System::err->println($$str(var$3));
			$var($StringBuilder, var$4, $new($StringBuilder));
			var$4->append("divisor   = "_s);
			var$4->append(divisor);
			var$4->append(" scale = "_s);
			var$4->append($nc(divisor)->scale());
			$System::err->println($$str(var$4));
			$var($StringBuilder, var$5, $new($StringBuilder));
			var$5->append("expected  = "_s);
			var$5->append(expected);
			var$5->append(" scale = "_s);
			var$5->append(expected->scale());
			$System::err->println($$str(var$5));
			$var($StringBuilder, var$6, $new($StringBuilder));
			var$6->append("result    = "_s);
			var$6->append(result);
			var$6->append(" scale = "_s);
			var$6->append(result->scale());
			$System::err->println($$str(var$6));
			$System::err->println($$str({"MathContext  = "_s, mc}));
		}
	} else if (result != nullptr) {
		++failures;
		$nc($System::err)->println();
		$System::err->println("Unexpected unexceptional result:"_s);
		$var($StringBuilder, var$7, $new($StringBuilder));
		var$7->append("dividend  = "_s);
		var$7->append(dividend);
		var$7->append(" scale = "_s);
		var$7->append($nc(dividend)->scale());
		$System::err->println($$str(var$7));
		$var($StringBuilder, var$8, $new($StringBuilder));
		var$8->append("divisor   = "_s);
		var$8->append(divisor);
		var$8->append(" scale = "_s);
		var$8->append($nc(divisor)->scale());
		$System::err->println($$str(var$8));
		$var($StringBuilder, var$9, $new($StringBuilder));
		var$9->append("quotient  = "_s);
		var$9->append(result);
		var$9->append(" scale = "_s);
		var$9->append(result->scale());
		$System::err->println($$str(var$9));
		$System::err->println($$str({"MathConext = "_s, mc}));
	}
	return failures;
}

int32_t IntegralDivisionTests::dividetoIntegralValueScalingTests() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($BigDecimal, dividend, $new($BigDecimal, "123456789000"_s));
	$var($BigDecimal, divisor, $BigDecimal::ONE);
	$var($BigDecimal, expected, $new($BigDecimal, "123456789e3"_s));
	$init($RoundingMode);
	$var($MathContext, mc, $new($MathContext, 9, $RoundingMode::DOWN));
	failures += divideContextTests(dividend, divisor, expected, mc);
	$var($ints, precisions, $new($ints, {
		0,
		2,
		3,
		4
	}));
	$assign(dividend, $new($BigDecimal, 100));
	$assign(divisor, $new($BigDecimal, 3));
	$assign(expected, $new($BigDecimal, 33));
	{
		$var($RoundingModeArray, arr$, $RoundingMode::values());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$RoundingMode* rm = arr$->get(i$);
			{
				$var($ints, arr$, precisions);
				for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
					int32_t precision = arr$->get(i$);
					{
						failures += divideContextTests(dividend, divisor, expected, $$new($MathContext, precision, rm));
					}
				}
			}
		}
	}
	$assign(dividend, $new($BigDecimal, 123000));
	$assign(divisor, $new($BigDecimal, 10));
	$var($ints, precisions1, $new($ints, {
		0,
		1,
		2,
		3,
		4,
		5
	}));
	$var($BigDecimalArray, expected1, $new($BigDecimalArray, {
		$$new($BigDecimal, "12300"_s),
		nullptr,
		nullptr,
		$$new($BigDecimal, "123e2"_s),
		$$new($BigDecimal, "1230e1"_s),
		$$new($BigDecimal, "12300"_s)
	}));
	{
		$var($RoundingModeArray, arr$, $RoundingMode::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$RoundingMode* rm = arr$->get(i$);
			for (int32_t i = 0; i < precisions1->length; ++i) {
				failures += divideContextTests(dividend, divisor, expected1->get(i), $$new($MathContext, precisions1->get(i), rm));
			}
		}
	}
	$assign(dividend, $new($BigDecimal, "123e3"_s));
	$assign(divisor, $new($BigDecimal, 10));
	$var($ints, precisions2, $new($ints, {
		0,
		1,
		2,
		3,
		4,
		5
	}));
	$var($BigDecimalArray, expected2, $new($BigDecimalArray, {
		$$new($BigDecimal, "123e2"_s),
		nullptr,
		nullptr,
		$$new($BigDecimal, "123e2"_s),
		$$new($BigDecimal, "123e2"_s),
		$$new($BigDecimal, "123e2"_s)
	}));
	{
		$var($RoundingModeArray, arr$, $RoundingMode::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$RoundingMode* rm = arr$->get(i$);
			for (int32_t i = 0; i < precisions2->length; ++i) {
				failures += divideContextTests(dividend, divisor, expected2->get(i), $$new($MathContext, precisions2->get(i), rm));
			}
		}
	}
	$assign(dividend, $new($BigDecimal, "123000"_s));
	$assign(divisor, $new($BigDecimal, "1e1"_s));
	$var($ints, precisions3, $new($ints, {
		0,
		1,
		2,
		3,
		4,
		5,
		6
	}));
	$var($BigDecimalArray, expected3, $new($BigDecimalArray, {
		$$new($BigDecimal, "12300.0"_s),
		nullptr,
		nullptr,
		$$new($BigDecimal, "123e2"_s),
		$$new($BigDecimal, "1230e1"_s),
		$$new($BigDecimal, "12300"_s),
		$$new($BigDecimal, "12300.0"_s)
	}));
	{
		$var($RoundingModeArray, arr$, $RoundingMode::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$RoundingMode* rm = arr$->get(i$);
			for (int32_t i = 0; i < precisions3->length; ++i) {
				failures += divideContextTests(dividend, divisor, expected3->get(i), $$new($MathContext, precisions3->get(i), rm));
			}
		}
	}
	return failures;
}

void IntegralDivisionTests::main($StringArray* argv) {
	$useLocalObjectStack();
	int32_t failures = 0;
	failures += dividetoIntegralValueTests();
	failures += dividetoIntegralValueRoundedTests();
	failures += dividetoIntegralValueScalingTests();
	if (failures > 0) {
		$nc($System::err)->println($$str({"Encountered "_s, $$str(failures), " failures while testing integral division."_s}));
		$throwNew($RuntimeException);
	}
}

IntegralDivisionTests::IntegralDivisionTests() {
}

$Class* IntegralDivisionTests::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntegralDivisionTests, init$, void)},
		{"divideContextTest", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/MathContext;)I", nullptr, $STATIC, $staticMethod(IntegralDivisionTests, divideContextTest, int32_t, $BigDecimal*, $BigDecimal*, $BigDecimal*, $MathContext*)},
		{"divideContextTestPrecs", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;[Ljava/math/BigDecimal;)I", nullptr, $STATIC, $staticMethod(IntegralDivisionTests, divideContextTestPrecs, int32_t, $BigDecimal*, $BigDecimal*, $BigDecimalArray*)},
		{"divideContextTests", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/MathContext;)I", nullptr, $STATIC, $staticMethod(IntegralDivisionTests, divideContextTests, int32_t, $BigDecimal*, $BigDecimal*, $BigDecimal*, $MathContext*)},
		{"dividetoIntegralValueRoundedTests", "()I", nullptr, $STATIC, $staticMethod(IntegralDivisionTests, dividetoIntegralValueRoundedTests, int32_t)},
		{"dividetoIntegralValueScalingTests", "()I", nullptr, $STATIC, $staticMethod(IntegralDivisionTests, dividetoIntegralValueScalingTests, int32_t)},
		{"dividetoIntegralValueTests", "()I", nullptr, $STATIC, $staticMethod(IntegralDivisionTests, dividetoIntegralValueTests, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IntegralDivisionTests, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IntegralDivisionTests",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IntegralDivisionTests, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntegralDivisionTests);
	});
	return class$;
}

$Class* IntegralDivisionTests::class$ = nullptr;