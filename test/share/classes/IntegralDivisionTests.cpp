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
using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $MathContext = ::java::math::MathContext;
using $RoundingMode = ::java::math::RoundingMode;

$MethodInfo _IntegralDivisionTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegralDivisionTests::*)()>(&IntegralDivisionTests::init$))},
	{"divideContextTest", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/MathContext;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($BigDecimal*,$BigDecimal*,$BigDecimal*,$MathContext*)>(&IntegralDivisionTests::divideContextTest))},
	{"divideContextTestPrecs", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;[Ljava/math/BigDecimal;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($BigDecimal*,$BigDecimal*,$BigDecimalArray*)>(&IntegralDivisionTests::divideContextTestPrecs))},
	{"divideContextTests", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/math/MathContext;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($BigDecimal*,$BigDecimal*,$BigDecimal*,$MathContext*)>(&IntegralDivisionTests::divideContextTests))},
	{"dividetoIntegralValueRoundedTests", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&IntegralDivisionTests::dividetoIntegralValueRoundedTests))},
	{"dividetoIntegralValueScalingTests", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&IntegralDivisionTests::dividetoIntegralValueScalingTests))},
	{"dividetoIntegralValueTests", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&IntegralDivisionTests::dividetoIntegralValueTests))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IntegralDivisionTests::main))},
	{}
};

$ClassInfo _IntegralDivisionTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IntegralDivisionTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IntegralDivisionTests_MethodInfo_
};

$Object* allocate$IntegralDivisionTests($Class* clazz) {
	return $of($alloc(IntegralDivisionTests));
}

void IntegralDivisionTests::init$() {
}

int32_t IntegralDivisionTests::dividetoIntegralValueTests() {
	$useLocalCurrentObjectStackCache();
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
			$($BigDecimal::valueOf(1, -((int32_t)($Integer::MAX_VALUE & (uint32_t)0x7FFFFF00)))),
			$($BigDecimal::valueOf(1, -256))
		})
	}));
	{
		$var($BigDecimalArray2, arr$, moreTestCases);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigDecimalArray, testCase, arr$->get(i$));
			{
				$var($BigDecimal, quotient, nullptr);
				if (!$nc(($assign(quotient, $nc($nc(testCase)->get(0))->divideToIntegralValue(testCase->get(1)))))->equals(testCase->get(2))) {
					++failures;
					$nc($System::err)->println();
					$var($String, var$0, $$str({"dividend  = "_s, testCase->get(0), " scale = "_s}));
					$nc($System::err)->println($$concat(var$0, $$str($nc(testCase->get(0))->scale())));
					$var($String, var$1, $$str({"divisor   = "_s, testCase->get(1), " scale = "_s}));
					$nc($System::err)->println($$concat(var$1, $$str($nc(testCase->get(1))->scale())));
					$var($String, var$2, $$str({"quotient  = "_s, quotient, " scale = "_s}));
					$nc($System::err)->println($$concat(var$2, $$str($nc(quotient)->scale())));
					$var($String, var$3, $$str({"expected  = "_s, testCase->get(2), " scale = "_s}));
					$nc($System::err)->println($$concat(var$3, $$str($nc(testCase->get(2))->scale())));
				}
			}
		}
	}
	return failures;
}

int32_t IntegralDivisionTests::dividetoIntegralValueRoundedTests() {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimal, dividend, $new($BigDecimal, "11003"_s));
	$var($BigDecimal, divisor, $new($BigDecimal, "10"_s));
	$var($BigDecimalArray, quotients, $new($BigDecimalArray, {
		$$new($BigDecimal, "1100"_s),
		($BigDecimal*)nullptr,
		$$new($BigDecimal, "11e2"_s),
		$$new($BigDecimal, "110e1"_s),
		$$new($BigDecimal, "1100"_s)
	}));
	failures += divideContextTestPrecs(dividend, divisor, quotients);
	$assign(dividend, $new($BigDecimal, "11003"_s));
	$assign(divisor, $new($BigDecimal, "1e1"_s));
	$var($BigDecimalArray, quotients2, $new($BigDecimalArray, {
		$$new($BigDecimal, "1100.0"_s),
		($BigDecimal*)nullptr,
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
		($BigDecimal*)nullptr,
		($BigDecimal*)nullptr,
		$$new($BigDecimal, "123e2"_s),
		$$new($BigDecimal, "1230e1"_s),
		$$new($BigDecimal, "12300"_s)
	}));
	failures += divideContextTestPrecs(dividend, divisor, quotients3);
	$assign(dividend, $new($BigDecimal, "33"_s));
	$assign(divisor, $new($BigDecimal, "3"_s));
	$var($BigDecimalArray, quotients4, $new($BigDecimalArray, {
		$$new($BigDecimal, "11"_s),
		($BigDecimal*)nullptr,
		$$new($BigDecimal, "11"_s),
		$$new($BigDecimal, "11"_s)
	}));
	failures += divideContextTestPrecs(dividend, divisor, quotients4);
	$assign(dividend, $new($BigDecimal, "34"_s));
	$assign(divisor, $new($BigDecimal, "3"_s));
	$var($BigDecimalArray, quotients5, $new($BigDecimalArray, {
		$$new($BigDecimal, "11"_s),
		($BigDecimal*)nullptr,
		$$new($BigDecimal, "11"_s),
		$$new($BigDecimal, "11"_s)
	}));
	failures += divideContextTestPrecs(dividend, divisor, quotients5);
	return failures;
}

int32_t IntegralDivisionTests::divideContextTestPrecs($BigDecimal* dividend, $BigDecimal* divisor, $BigDecimalArray* quotients) {
	$useLocalCurrentObjectStackCache();
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
				$nc($System::err)->println("Unexpected exception:"_s);
				$var($String, var$0, $$str({"dividend  = "_s, dividend, " scale = "_s}));
				$nc($System::err)->println($$concat(var$0, $$str($nc(dividend)->scale())));
				$var($String, var$1, $$str({"divisor   = "_s, divisor, " scale = "_s}));
				$nc($System::err)->println($$concat(var$1, $$str($nc(divisor)->scale())));
				$var($String, var$2, $$str({"expected  = "_s, quotient, " scale = "_s}));
				$nc($System::err)->println($$concat(var$2, $$str(quotient->scale())));
			}
		}
		if (quotient != nullptr) {
			if (!$nc(result)->equals(quotient)) {
				++failures;
				$nc($System::err)->println();
				$nc($System::err)->println("Unexpected result:"_s);
				$var($String, var$3, $$str({"dividend  = "_s, dividend, " scale = "_s}));
				$nc($System::err)->println($$concat(var$3, $$str($nc(dividend)->scale())));
				$var($String, var$4, $$str({"divisor   = "_s, divisor, " scale = "_s}));
				$nc($System::err)->println($$concat(var$4, $$str($nc(divisor)->scale())));
				$var($String, var$5, $$str({"quotient  = "_s, result, " scale = "_s}));
				$nc($System::err)->println($$concat(var$5, $$str(result->scale())));
				$var($String, var$6, $$str({"expected  = "_s, quotient, " scale = "_s}));
				$nc($System::err)->println($$concat(var$6, $$str(quotient->scale())));
				$nc($System::err)->println($$str({"precision = "_s, $$str(i)}));
			}
		} else if (result != nullptr) {
			++failures;
			$nc($System::err)->println();
			$nc($System::err)->println("Unexpected unexceptional result:"_s);
			$var($String, var$7, $$str({"dividend  = "_s, dividend, " scale = "_s}));
			$nc($System::err)->println($$concat(var$7, $$str($nc(dividend)->scale())));
			$var($String, var$8, $$str({"divisor   = "_s, divisor, " scale = "_s}));
			$nc($System::err)->println($$concat(var$8, $$str($nc(divisor)->scale())));
			$var($String, var$9, $$str({"quotient  = "_s, result, " scale = "_s}));
			$nc($System::err)->println($$concat(var$9, $$str(result->scale())));
			$nc($System::err)->println($$str({"precision = "_s, $$str(i)}));
		}
	}
	return failures;
}

int32_t IntegralDivisionTests::divideContextTests($BigDecimal* dividend, $BigDecimal* divisor, $BigDecimal* expected, $MathContext* mc) {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	failures += divideContextTest(dividend, divisor, expected, mc);
	$var($BigDecimal, var$0, $nc(dividend)->negate());
	failures += divideContextTest(var$0, $($nc(divisor)->negate()), expected, mc);
	if (expected != nullptr) {
		$var($BigDecimal, var$1, $nc(dividend)->negate());
		$var($BigDecimal, var$2, divisor);
		failures += divideContextTest(var$1, var$2, $(expected->negate()), mc);
		$var($BigDecimal, var$3, dividend);
		$var($BigDecimal, var$4, $nc(divisor)->negate());
		failures += divideContextTest(var$3, var$4, $(expected->negate()), mc);
	}
	return failures;
}

int32_t IntegralDivisionTests::divideContextTest($BigDecimal* dividend, $BigDecimal* divisor, $BigDecimal* expected, $MathContext* mc) {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimal, result, nullptr);
	try {
		$assign(result, $nc(dividend)->divideToIntegralValue(divisor, mc));
	} catch ($ArithmeticException& e) {
		if (expected != nullptr) {
			++failures;
			$nc($System::err)->println();
			$nc($System::err)->println("Unexpected exception:"_s);
			$var($String, var$0, $$str({"dividend  = "_s, dividend, " scale = "_s}));
			$nc($System::err)->println($$concat(var$0, $$str($nc(dividend)->scale())));
			$var($String, var$1, $$str({"divisor   = "_s, divisor, " scale = "_s}));
			$nc($System::err)->println($$concat(var$1, $$str($nc(divisor)->scale())));
			$var($String, var$2, $$str({"expected  = "_s, expected, " scale = "_s}));
			$nc($System::err)->println($$concat(var$2, $$str(expected->scale())));
			$nc($System::err)->println($$str({"MathContext  = "_s, mc}));
		}
	}
	if (expected != nullptr) {
		if (!$nc(result)->equals(expected)) {
			++failures;
			$nc($System::err)->println();
			$nc($System::err)->println("Unexpected result:"_s);
			$var($String, var$3, $$str({"dividend  = "_s, dividend, " scale = "_s}));
			$nc($System::err)->println($$concat(var$3, $$str($nc(dividend)->scale())));
			$var($String, var$4, $$str({"divisor   = "_s, divisor, " scale = "_s}));
			$nc($System::err)->println($$concat(var$4, $$str($nc(divisor)->scale())));
			$var($String, var$5, $$str({"expected  = "_s, expected, " scale = "_s}));
			$nc($System::err)->println($$concat(var$5, $$str(expected->scale())));
			$var($String, var$6, $$str({"result    = "_s, result, " scale = "_s}));
			$nc($System::err)->println($$concat(var$6, $$str(result->scale())));
			$nc($System::err)->println($$str({"MathContext  = "_s, mc}));
		}
	} else if (result != nullptr) {
		++failures;
		$nc($System::err)->println();
		$nc($System::err)->println("Unexpected unexceptional result:"_s);
		$var($String, var$7, $$str({"dividend  = "_s, dividend, " scale = "_s}));
		$nc($System::err)->println($$concat(var$7, $$str($nc(dividend)->scale())));
		$var($String, var$8, $$str({"divisor   = "_s, divisor, " scale = "_s}));
		$nc($System::err)->println($$concat(var$8, $$str($nc(divisor)->scale())));
		$var($String, var$9, $$str({"quotient  = "_s, result, " scale = "_s}));
		$nc($System::err)->println($$concat(var$9, $$str(result->scale())));
		$nc($System::err)->println($$str({"MathConext = "_s, mc}));
	}
	return failures;
}

int32_t IntegralDivisionTests::dividetoIntegralValueScalingTests() {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimal, dividend, $new($BigDecimal, "123456789000"_s));
	$init($BigDecimal);
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
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$RoundingMode* rm = arr$->get(i$);
			{
				$var($ints, arr$, precisions);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					int32_t precision = arr$->get(i$);
					{
						failures += divideContextTests(dividend, divisor, expected, $$new($MathContext, precision, rm));
					}
				}
			}
		}
	}
	$assign(dividend, $new($BigDecimal, 0x0001E078));
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
		($BigDecimal*)nullptr,
		($BigDecimal*)nullptr,
		$$new($BigDecimal, "123e2"_s),
		$$new($BigDecimal, "1230e1"_s),
		$$new($BigDecimal, "12300"_s)
	}));
	{
		$var($RoundingModeArray, arr$, $RoundingMode::values());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
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
		($BigDecimal*)nullptr,
		($BigDecimal*)nullptr,
		$$new($BigDecimal, "123e2"_s),
		$$new($BigDecimal, "123e2"_s),
		$$new($BigDecimal, "123e2"_s)
	}));
	{
		$var($RoundingModeArray, arr$, $RoundingMode::values());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
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
		($BigDecimal*)nullptr,
		($BigDecimal*)nullptr,
		$$new($BigDecimal, "123e2"_s),
		$$new($BigDecimal, "1230e1"_s),
		$$new($BigDecimal, "12300"_s),
		$$new($BigDecimal, "12300.0"_s)
	}));
	{
		$var($RoundingModeArray, arr$, $RoundingMode::values());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$RoundingMode* rm = arr$->get(i$);
			for (int32_t i = 0; i < precisions3->length; ++i) {
				failures += divideContextTests(dividend, divisor, expected3->get(i), $$new($MathContext, precisions3->get(i), rm));
			}
		}
	}
	return failures;
}

void IntegralDivisionTests::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(IntegralDivisionTests, name, initialize, &_IntegralDivisionTests_ClassInfo_, allocate$IntegralDivisionTests);
	return class$;
}

$Class* IntegralDivisionTests::class$ = nullptr;