#include <DivideTests.h>
#include <java/lang/Math.h>
#include <java/lang/StrictMath.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/math/MathContext.h>
#include <java/math/RoundingMode.h>
#include <jcpp.h>

#undef DOWN
#undef FIVE
#undef FLOOR
#undef HALF_UP
#undef MAX_VALUE
#undef ONE
#undef TEN
#undef TWO
#undef UNNECESSARY
#undef ZERO

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $longArray2 = $Array<int64_t, 2>;
using $BigDecimalArray2 = $Array<::java::math::BigDecimal, 2>;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StrictMath = ::java::lang::StrictMath;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $MathContext = ::java::math::MathContext;
using $RoundingMode = ::java::math::RoundingMode;

void DivideTests::init$() {
}

$BigDecimal* DivideTests::anotherDivide($BigDecimal* dividend, $BigDecimal* divisor) {
	$useLocalObjectStack();
	if ($nc(divisor)->signum() == 0) {
		if ($nc(dividend)->signum() == 0) {
			$throwNew($ArithmeticException, "Division undefined"_s);
		}
		$throwNew($ArithmeticException, "Division by zero"_s);
	}
	if ($nc(dividend)->signum() == 0) {
		return $BigDecimal::ZERO;
	} else {
		$var($BigInteger, TWO, $BigInteger::valueOf(2));
		$var($BigInteger, FIVE, $BigInteger::valueOf(5));
		$var($BigInteger, TEN, $BigInteger::valueOf(10));
		$var($BigInteger, divisorIntvalue, $($(divisor->scaleByPowerOfTen(divisor->scale()))->toBigInteger())->abs());
		$var($BigInteger, dividendIntvalue, $($(dividend->scaleByPowerOfTen(dividend->scale()))->toBigInteger())->abs());
		$var($BigInteger, b_prime, divisorIntvalue->divide($(dividendIntvalue->gcd(divisorIntvalue))));
		bool goodDivisor = false;
		int32_t i = 0;
		int32_t j = 0;
		bool badDivisor$break = false;
		for (;;) {
			{
				while (!$nc(b_prime)->equals($BigInteger::ONE)) {
					int32_t b_primeModTen = $(b_prime->mod(TEN))->intValue();
					switch (b_primeModTen) {
					case 0:
						++i;
						++j;
						$assign(b_prime, b_prime->divide(TEN));
						break;
					case 5:
						++j;
						$assign(b_prime, b_prime->divide(FIVE));
						break;
					case 2:
					case 4:
					case 6:
					case 8:
						++i;
						$assign(b_prime, b_prime->divide(TWO));
						break;
					default:
						$assign(b_prime, $BigInteger::ONE);
						badDivisor$break = true;
						break;
					}
					if (badDivisor$break) {
						break;
					}
				}
				if (badDivisor$break) {
					break;
				}
				goodDivisor = true;
			}
			break;
		}
		if (!goodDivisor) {
			$throwNew($ArithmeticException, "Non terminating decimal expansion"_s);
		} else {
			int32_t var$0 = dividend->precision();
			$init($RoundingMode);
			$var($MathContext, mc, $new($MathContext, var$0 + $cast(int32_t, $Math::ceil(10.0 * divisor->precision() / 3.0)), $RoundingMode::UNNECESSARY));
			return dividend->divide(divisor, mc);
		}
	}
}

int32_t DivideTests::powersOf2and5() {
	$useLocalObjectStack();
	int32_t failures = 0;
	for (int32_t i = 0; i < 6; ++i) {
		int32_t powerOf2 = $cast(int32_t, $StrictMath::pow(2.0, (double)i));
		for (int32_t j = 0; j < 6; ++j) {
			int32_t powerOf5 = $cast(int32_t, $StrictMath::pow(5.0, (double)j));
			int32_t product = 0;
			$var($BigDecimal, bd, nullptr);
			try {
				$init($BigDecimal);
				$assign(bd, $nc($BigDecimal::ONE)->divide($$new($BigDecimal, product = powerOf2 * powerOf5)));
			} catch ($ArithmeticException& e) {
				++failures;
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append($(($$new($BigDecimal, powerOf2))->toString()));
				var$0->append(" / "_s);
				var$0->append($(($$new($BigDecimal, powerOf5))->toString()));
				var$0->append(" threw an exception."_s);
				$nc($System::err)->println($$str(var$0));
				e->printStackTrace();
			}
			try {
				$assign(bd, $$new($BigDecimal, powerOf2)->divide($$new($BigDecimal, powerOf5)));
			} catch ($ArithmeticException& e) {
				++failures;
				$var($StringBuilder, var$1, $new($StringBuilder));
				var$1->append($(($$new($BigDecimal, powerOf2))->toString()));
				var$1->append(" / "_s);
				var$1->append($(($$new($BigDecimal, powerOf5))->toString()));
				var$1->append(" threw an exception."_s);
				$nc($System::err)->println($$str(var$1));
				e->printStackTrace();
			}
			try {
				$assign(bd, $$new($BigDecimal, powerOf5)->divide($$new($BigDecimal, powerOf2)));
			} catch ($ArithmeticException& e) {
				++failures;
				$var($StringBuilder, var$2, $new($StringBuilder));
				var$2->append($(($$new($BigDecimal, powerOf5))->toString()));
				var$2->append(" / "_s);
				var$2->append($(($$new($BigDecimal, powerOf2))->toString()));
				var$2->append(" threw an exception."_s);
				$nc($System::err)->println($$str(var$2));
				e->printStackTrace();
			}
		}
	}
	return failures;
}

int32_t DivideTests::nonTerminating() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($ints, primes, $new($ints, {
		1,
		3,
		7,
		13,
		17
	}));
	for (int32_t i = 0; i < primes->length; ++i) {
		for (int32_t j = i + 1; j < primes->length; ++j) {
			for (int32_t m = 0; m < primes->length; ++m) {
				for (int32_t n = m + 1; n < primes->length; ++n) {
					int32_t dividend = primes->get(i) * primes->get(j);
					int32_t divisor = primes->get(m) * primes->get(n);
					if ((($div(dividend, divisor)) * divisor) != dividend) {
						try {
							$var($BigDecimal, quotient, $$new($BigDecimal, dividend)->divide($$new($BigDecimal, divisor)));
							++failures;
							$nc($System::err)->println($$str({"Exact quotient "_s, $(quotient->toString()), " returned for non-terminating fraction "_s, $$str(dividend), " / "_s, $$str(divisor), "."_s}));
						} catch ($ArithmeticException& e) {
							;
						}
					}
				}
			}
		}
	}
	return failures;
}

int32_t DivideTests::properScaleTests() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($BigDecimalArray2, testCases, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1"_s),
			$$new($BigDecimal, "5"_s),
			$$new($BigDecimal, "2e-1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1"_s),
			$$new($BigDecimal, "50e-1"_s),
			$$new($BigDecimal, "2e-1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "10e-1"_s),
			$$new($BigDecimal, "5"_s),
			$$new($BigDecimal, "2e-1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1"_s),
			$$new($BigDecimal, "500e-2"_s),
			$$new($BigDecimal, "2e-1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "100e-2"_s),
			$$new($BigDecimal, "5"_s),
			$$new($BigDecimal, "20e-2"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1"_s),
			$$new($BigDecimal, "32"_s),
			$$new($BigDecimal, "3125e-5"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1"_s),
			$$new($BigDecimal, "64"_s),
			$$new($BigDecimal, "15625e-6"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1.0000000"_s),
			$$new($BigDecimal, "64"_s),
			$$new($BigDecimal, "156250e-7"_s)
		})
	}));
	{
		$var($BigDecimalArray2, arr$, testCases);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigDecimalArray, tc, arr$->get(i$));
			{
				$var($BigDecimal, quotient, nullptr);
				if (!$nc(($assign(quotient, $nc($nc(tc)->get(0))->divide($nc(tc)->get(1)))))->equals($nc(tc)->get(2))) {
					++failures;
					$nc($System::err)->println($$str({"Unexpected quotient from "_s, tc->get(0), " / "_s, tc->get(1), "; expected "_s, tc->get(2), " got "_s, quotient}));
				}
			}
		}
	}
	return failures;
}

int32_t DivideTests::trailingZeroTests() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$init($RoundingMode);
	$var($MathContext, mc, $new($MathContext, 3, $RoundingMode::FLOOR));
	$var($BigDecimalArray2, testCases, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "19"_s),
			$$new($BigDecimal, "100"_s),
			$$new($BigDecimal, "0.19"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "21"_s),
			$$new($BigDecimal, "110"_s),
			$$new($BigDecimal, "0.190"_s)
		})
	}));
	{
		$var($BigDecimalArray2, arr$, testCases);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigDecimalArray, tc, arr$->get(i$));
			{
				$var($BigDecimal, quotient, nullptr);
				if (!$nc(($assign(quotient, $nc($nc(tc)->get(0))->divide($nc(tc)->get(1), mc))))->equals($nc(tc)->get(2))) {
					++failures;
					$nc($System::err)->println($$str({"Unexpected quotient from "_s, tc->get(0), " / "_s, tc->get(1), "; expected "_s, tc->get(2), " got "_s, quotient}));
				}
			}
		}
	}
	return failures;
}

int32_t DivideTests::scaledRoundedDivideTests() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($BigDecimal, a, $new($BigDecimal, "31415"_s));
	$var($BigDecimal, a_minus, a->negate());
	$var($BigDecimal, b, $new($BigDecimal, "10000"_s));
	$var($BigDecimal, c, $new($BigDecimal, "31425"_s));
	$var($BigDecimal, c_minus, c->negate());
	$var($BigDecimal, d, $new($BigDecimal, $$new($BigInteger, "-37361671119238118911893939591735"_s), 10));
	$var($BigDecimal, e, $new($BigDecimal, $$new($BigInteger, "74723342238476237823787879183470"_s), 15));
	$var($BigDecimalArray2, testCases, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			a,
			b,
			$($BigDecimal::valueOf(0, 3)),
			$$new($BigDecimal, "3.142"_s)
		}),
		$$new($BigDecimalArray, {
			a_minus,
			b,
			$($BigDecimal::valueOf(0, 3)),
			$$new($BigDecimal, "-3.142"_s)
		}),
		$$new($BigDecimalArray, {
			a,
			b,
			$($BigDecimal::valueOf(1, 3)),
			$$new($BigDecimal, "3.141"_s)
		}),
		$$new($BigDecimalArray, {
			a_minus,
			b,
			$($BigDecimal::valueOf(1, 3)),
			$$new($BigDecimal, "-3.141"_s)
		}),
		$$new($BigDecimalArray, {
			a,
			b,
			$($BigDecimal::valueOf(2, 3)),
			$$new($BigDecimal, "3.142"_s)
		}),
		$$new($BigDecimalArray, {
			a_minus,
			b,
			$($BigDecimal::valueOf(2, 3)),
			$$new($BigDecimal, "-3.141"_s)
		}),
		$$new($BigDecimalArray, {
			a,
			b,
			$($BigDecimal::valueOf(3, 3)),
			$$new($BigDecimal, "3.141"_s)
		}),
		$$new($BigDecimalArray, {
			a_minus,
			b,
			$($BigDecimal::valueOf(3, 3)),
			$$new($BigDecimal, "-3.142"_s)
		}),
		$$new($BigDecimalArray, {
			a,
			b,
			$($BigDecimal::valueOf(4, 3)),
			$$new($BigDecimal, "3.142"_s)
		}),
		$$new($BigDecimalArray, {
			a_minus,
			b,
			$($BigDecimal::valueOf(4, 3)),
			$$new($BigDecimal, "-3.142"_s)
		}),
		$$new($BigDecimalArray, {
			a,
			b,
			$($BigDecimal::valueOf(1, 3)),
			$$new($BigDecimal, "3.141"_s)
		}),
		$$new($BigDecimalArray, {
			a_minus,
			b,
			$($BigDecimal::valueOf(1, 3)),
			$$new($BigDecimal, "-3.141"_s)
		}),
		$$new($BigDecimalArray, {
			a,
			b,
			$($BigDecimal::valueOf(6, 3)),
			$$new($BigDecimal, "3.142"_s)
		}),
		$$new($BigDecimalArray, {
			a_minus,
			b,
			$($BigDecimal::valueOf(6, 3)),
			$$new($BigDecimal, "-3.142"_s)
		}),
		$$new($BigDecimalArray, {
			c,
			b,
			$($BigDecimal::valueOf(6, 3)),
			$$new($BigDecimal, "3.142"_s)
		}),
		$$new($BigDecimalArray, {
			c_minus,
			b,
			$($BigDecimal::valueOf(6, 3)),
			$$new($BigDecimal, "-3.142"_s)
		}),
		$$new($BigDecimalArray, {
			d,
			e,
			$($BigDecimal::valueOf(4, -5)),
			$($BigDecimal::valueOf(-1, -5))
		}),
		$$new($BigDecimalArray, {
			d,
			e,
			$($BigDecimal::valueOf(5, -5)),
			$($BigDecimal::valueOf(0, -5))
		}),
		$$new($BigDecimalArray, {
			d,
			e,
			$($BigDecimal::valueOf(6, -5)),
			$($BigDecimal::valueOf(0, -5))
		})
	}));
	{
		$var($BigDecimalArray2, arr$, testCases);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigDecimalArray, tc, arr$->get(i$));
			{
				int32_t scale = $nc($nc(tc)->get(2))->scale();
				int32_t rm = $($nc(tc->get(2))->unscaledValue())->intValue();
				$var($BigDecimal, quotient, $nc(tc->get(0))->divide(tc->get(1), scale, rm));
				if (!quotient->equals(tc->get(3))) {
					++failures;
					$var($StringBuilder, var$0, $new($StringBuilder));
					var$0->append("Unexpected quotient from "_s);
					var$0->append(tc->get(0));
					var$0->append(" / "_s);
					var$0->append(tc->get(1));
					var$0->append(" scale "_s);
					var$0->append(scale);
					var$0->append(" rounding mode "_s);
					var$0->append($($RoundingMode::valueOf(rm)));
					var$0->append("; expected "_s);
					var$0->append(tc->get(3));
					var$0->append(" got "_s);
					var$0->append(quotient);
					$nc($System::err)->println($$str(var$0));
				}
			}
		}
	}
	$var($BigDecimalArray2, testCases2, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			$$new($BigDecimal, 3090),
			$$new($BigDecimal, 7),
			$$new($BigDecimal, 441)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "309000000000000000000000"_s),
			$$new($BigDecimal, "700000000000000000000"_s),
			$$new($BigDecimal, 441)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "962.430000000000"_s),
			$$new($BigDecimal, "8346463.460000000000"_s),
			$$new($BigDecimal, "0.000115309916"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "18446744073709551631"_s),
			$$new($BigDecimal, "4611686018427387909"_s),
			$$new($BigDecimal, 4)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "18446744073709551630"_s),
			$$new($BigDecimal, "4611686018427387909"_s),
			$$new($BigDecimal, 4)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "23058430092136939523"_s),
			$$new($BigDecimal, "4611686018427387905"_s),
			$$new($BigDecimal, 5)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "-18446744073709551661"_s),
			$$new($BigDecimal, "-4611686018427387919"_s),
			$$new($BigDecimal, 4)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "-18446744073709551660"_s),
			$$new($BigDecimal, "-4611686018427387919"_s),
			$$new($BigDecimal, 4)
		})
	}));
	{
		$var($BigDecimalArray2, arr$, testCases2);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigDecimalArray, test, arr$->get(i$));
			{
				$init($RoundingMode);
				$var($BigDecimal, quo, $nc($nc(test)->get(0))->divide($nc(test)->get(1), $RoundingMode::HALF_UP));
				if (!quo->equals(test->get(2))) {
					++failures;
					$nc($System::err)->println($$str({"Unexpected quotient from "_s, test->get(0), " / "_s, test->get(1), " rounding mode HALF_UP; expected "_s, test->get(2), " got "_s, quo}));
				}
			}
		}
	}
	return failures;
}

int32_t DivideTests::divideByOneTests() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$init($BigDecimal);
	$var($BigDecimal, one, $nc($BigDecimal::ONE)->setScale(17));
	$init($RoundingMode);
	$RoundingMode* rounding = $RoundingMode::UNNECESSARY;
	$var($longArray2, unscaledAndScale, $new($longArray2, {
		$$new($longs, {
			$Long::MAX_VALUE,
			17
		}),
		$$new($longs, {
			-$Long::MAX_VALUE,
			17
		}),
		$$new($longs, {
			$Long::MAX_VALUE,
			0
		}),
		$$new($longs, {
			-$Long::MAX_VALUE,
			0
		}),
		$$new($longs, {
			$Long::MAX_VALUE,
			100
		}),
		$$new($longs, {
			-$Long::MAX_VALUE,
			100
		})
	}));
	{
		$var($longArray2, arr$, unscaledAndScale);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($longs, uas, arr$->get(i$));
			{
				int64_t unscaled = $nc(uas)->get(0);
				int32_t scale = (int32_t)uas->get(1);
				$var($BigDecimal, noRound, nullptr);
				try {
					$assign(noRound, $($BigDecimal::valueOf(unscaled, scale))->divide(one, $RoundingMode::UNNECESSARY));
				} catch ($ArithmeticException& e) {
					++failures;
					$nc($System::err)->println($$str({"ArithmeticException for value "_s, $$str(unscaled), " and scale "_s, $$str(scale), " without rounding"_s}));
				}
				$var($BigDecimal, roundDown, nullptr);
				try {
					$assign(roundDown, $($BigDecimal::valueOf(unscaled, scale))->divide(one, $RoundingMode::DOWN));
				} catch ($ArithmeticException& e) {
					++failures;
					$nc($System::err)->println($$str({"ArithmeticException for value "_s, $$str(unscaled), " and scale "_s, $$str(scale), " with rounding down"_s}));
				}
				if (noRound != nullptr && roundDown != nullptr && noRound->compareTo(roundDown) != 0) {
					++failures;
					$nc($System::err)->println($$str({"Equality failure for value "_s, $$str(unscaled), " and scale "_s, $$str(scale)}));
				}
			}
		}
	}
	return failures;
}

void DivideTests::main($StringArray* argv) {
	$useLocalObjectStack();
	int32_t failures = 0;
	failures += powersOf2and5();
	failures += nonTerminating();
	failures += properScaleTests();
	failures += trailingZeroTests();
	failures += scaledRoundedDivideTests();
	failures += divideByOneTests();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures while testing division."_s}));
	}
}

DivideTests::DivideTests() {
}

$Class* DivideTests::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DivideTests, init$, void)},
		{"anotherDivide", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", nullptr, 0, $virtualMethod(DivideTests, anotherDivide, $BigDecimal*, $BigDecimal*, $BigDecimal*)},
		{"divideByOneTests", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(DivideTests, divideByOneTests, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DivideTests, main, void, $StringArray*)},
		{"nonTerminating", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(DivideTests, nonTerminating, int32_t)},
		{"powersOf2and5", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(DivideTests, powersOf2and5, int32_t)},
		{"properScaleTests", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(DivideTests, properScaleTests, int32_t)},
		{"scaledRoundedDivideTests", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(DivideTests, scaledRoundedDivideTests, int32_t)},
		{"trailingZeroTests", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(DivideTests, trailingZeroTests, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DivideTests",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DivideTests, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DivideTests);
	});
	return class$;
}

$Class* DivideTests::class$ = nullptr;