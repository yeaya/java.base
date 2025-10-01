#include <DivideTests.h>

#include <java/io/PrintStream.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/StrictMath.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/math/MathContext.h>
#include <java/math/RoundingMode.h>
#include <jcpp.h>

#undef ZERO
#undef FIVE
#undef FLOOR
#undef DOWN
#undef UNNECESSARY
#undef ONE
#undef MAX_VALUE
#undef TEN
#undef HALF_UP
#undef TWO

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $longArray2 = $Array<int64_t, 2>;
using $BigDecimalArray2 = $Array<::java::math::BigDecimal, 2>;
using $PrintStream = ::java::io::PrintStream;
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

$MethodInfo _DivideTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DivideTests::*)()>(&DivideTests::init$))},
	{"anotherDivide", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;)Ljava/math/BigDecimal;", nullptr, 0},
	{"divideByOneTests", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&DivideTests::divideByOneTests))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DivideTests::main))},
	{"nonTerminating", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&DivideTests::nonTerminating))},
	{"powersOf2and5", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&DivideTests::powersOf2and5))},
	{"properScaleTests", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&DivideTests::properScaleTests))},
	{"scaledRoundedDivideTests", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&DivideTests::scaledRoundedDivideTests))},
	{"trailingZeroTests", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&DivideTests::trailingZeroTests))},
	{}
};

$ClassInfo _DivideTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DivideTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DivideTests_MethodInfo_
};

$Object* allocate$DivideTests($Class* clazz) {
	return $of($alloc(DivideTests));
}

void DivideTests::init$() {
}

$BigDecimal* DivideTests::anotherDivide($BigDecimal* dividend, $BigDecimal* divisor) {
	if ($nc(divisor)->signum() == 0) {
		if ($nc(dividend)->signum() == 0) {
			$throwNew($ArithmeticException, "Division undefined"_s);
		}
		$throwNew($ArithmeticException, "Division by zero"_s);
	}
	if ($nc(dividend)->signum() == 0) {
		return $BigDecimal::ZERO;
	} else {
		$var($BigInteger, TWO, $BigInteger::valueOf((int64_t)2));
		$var($BigInteger, FIVE, $BigInteger::valueOf((int64_t)5));
		$var($BigInteger, TEN, $BigInteger::valueOf((int64_t)10));
		$var($BigInteger, divisorIntvalue, $nc($($nc($($nc(divisor)->scaleByPowerOfTen(divisor->scale())))->toBigInteger()))->abs());
		$var($BigInteger, dividendIntvalue, $nc($($nc($(dividend->scaleByPowerOfTen(dividend->scale())))->toBigInteger()))->abs());
		$var($BigInteger, b_prime, $nc(divisorIntvalue)->divide($($nc(dividendIntvalue)->gcd(divisorIntvalue))));
		bool goodDivisor = false;
		int32_t i = 0;
		int32_t j = 0;
		bool badDivisor$break = false;
		for (;;) {
			{
				while (!$nc(b_prime)->equals($BigInteger::ONE)) {
					int32_t b_primeModTen = $nc($(b_prime->mod(TEN)))->intValue();
					switch (b_primeModTen) {
					case 0:
						{
							++i;
							++j;
							$assign(b_prime, b_prime->divide(TEN));
							break;
						}
					case 5:
						{
							++j;
							$assign(b_prime, b_prime->divide(FIVE));
							break;
						}
					case 2:
						{}
					case 4:
						{}
					case 6:
						{}
					case 8:
						{
							++i;
							$assign(b_prime, b_prime->divide(TWO));
							break;
						}
					default:
						{
							$assign(b_prime, $BigInteger::ONE);
							badDivisor$break = true;
							break;
						}
					}

					if (badDivisor$break) {
						break;
					}				}
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
			} catch ($ArithmeticException&) {
				$var($ArithmeticException, e, $catch());
				++failures;
				$init($System);
				$var($String, var$1, $$str({$(($$new($BigDecimal, powerOf2))->toString()), " / "_s}));
				$var($String, var$0, $$concat(var$1, $(($$new($BigDecimal, powerOf5))->toString())));
				$nc($System::err)->println($$concat(var$0, " threw an exception."));
				e->printStackTrace();
			}
			try {
				$assign(bd, $$new($BigDecimal, powerOf2)->divide($$new($BigDecimal, powerOf5)));
			} catch ($ArithmeticException&) {
				$var($ArithmeticException, e, $catch());
				++failures;
				$init($System);
				$var($String, var$3, $$str({$(($$new($BigDecimal, powerOf2))->toString()), " / "_s}));
				$var($String, var$2, $$concat(var$3, $(($$new($BigDecimal, powerOf5))->toString())));
				$nc($System::err)->println($$concat(var$2, " threw an exception."));
				e->printStackTrace();
			}
			try {
				$assign(bd, $$new($BigDecimal, powerOf5)->divide($$new($BigDecimal, powerOf2)));
			} catch ($ArithmeticException&) {
				$var($ArithmeticException, e, $catch());
				++failures;
				$init($System);
				$var($String, var$5, $$str({$(($$new($BigDecimal, powerOf5))->toString()), " / "_s}));
				$var($String, var$4, $$concat(var$5, $(($$new($BigDecimal, powerOf2))->toString())));
				$nc($System::err)->println($$concat(var$4, " threw an exception."));
				e->printStackTrace();
			}
		}
	}
	return failures;
}

int32_t DivideTests::nonTerminating() {
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
							$init($System);
							$nc($System::err)->println($$str({"Exact quotient "_s, $($nc(quotient)->toString()), " returned for non-terminating fraction "_s, $$str(dividend), " / "_s, $$str(divisor), "."_s}));
						} catch ($ArithmeticException&) {
							$var($ArithmeticException, e, $catch());
						}
					}
				}
			}
		}
	}
	return failures;
}

int32_t DivideTests::properScaleTests() {
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
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigDecimalArray, tc, arr$->get(i$));
			{
				$var($BigDecimal, quotient, nullptr);
				if (!$nc(($assign(quotient, $nc($nc(tc)->get(0))->divide(tc->get(1)))))->equals(tc->get(2))) {
					++failures;
					$init($System);
					$nc($System::err)->println($$str({"Unexpected quotient from "_s, tc->get(0), " / "_s, tc->get(1), "; expected "_s, tc->get(2), " got "_s, quotient}));
				}
			}
		}
	}
	return failures;
}

int32_t DivideTests::trailingZeroTests() {
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
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigDecimalArray, tc, arr$->get(i$));
			{
				$var($BigDecimal, quotient, nullptr);
				if (!$nc(($assign(quotient, $nc($nc(tc)->get(0))->divide(tc->get(1), mc))))->equals(tc->get(2))) {
					++failures;
					$init($System);
					$nc($System::err)->println($$str({"Unexpected quotient from "_s, tc->get(0), " / "_s, tc->get(1), "; expected "_s, tc->get(2), " got "_s, quotient}));
				}
			}
		}
	}
	return failures;
}

int32_t DivideTests::scaledRoundedDivideTests() {
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
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigDecimalArray, tc, arr$->get(i$));
			{
				int32_t scale = $nc($nc(tc)->get(2))->scale();
				int32_t rm = $nc($($nc(tc->get(2))->unscaledValue()))->intValue();
				$var($BigDecimal, quotient, $nc(tc->get(0))->divide(tc->get(1), scale, rm));
				if (!$nc(quotient)->equals(tc->get(3))) {
					++failures;
					$init($System);
					$var($String, var$4, $$str({"Unexpected quotient from "_s, tc->get(0), " / "_s, tc->get(1), " scale "_s, $$str(scale), " rounding mode "_s}));
					$var($String, var$3, $$concat(var$4, $($RoundingMode::valueOf(rm))));
					$var($String, var$2, $$concat(var$3, "; expected "));
					$var($String, var$1, $$concat(var$2, $(tc->get(3))));
					$var($String, var$0, $$concat(var$1, " got "));
					$nc($System::err)->println($$concat(var$0, $(quotient)));
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
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigDecimalArray, test, arr$->get(i$));
			{
				$init($RoundingMode);
				$var($BigDecimal, quo, $nc($nc(test)->get(0))->divide(test->get(1), $RoundingMode::HALF_UP));
				if (!$nc(quo)->equals(test->get(2))) {
					++failures;
					$init($System);
					$nc($System::err)->println($$str({"Unexpected quotient from "_s, test->get(0), " / "_s, test->get(1), " rounding mode HALF_UP; expected "_s, test->get(2), " got "_s, quo}));
				}
			}
		}
	}
	return failures;
}

int32_t DivideTests::divideByOneTests() {
	int32_t failures = 0;
	$init($BigDecimal);
	$var($BigDecimal, one, $nc($BigDecimal::ONE)->setScale(17));
	$init($RoundingMode);
	$RoundingMode* rounding = $RoundingMode::UNNECESSARY;
	$var($longArray2, unscaledAndScale, $new($longArray2, {
		$$new($longs, {
			$Long::MAX_VALUE,
			(int64_t)17
		}),
		$$new($longs, {
			-$Long::MAX_VALUE,
			(int64_t)17
		}),
		$$new($longs, {
			$Long::MAX_VALUE,
			(int64_t)0
		}),
		$$new($longs, {
			-$Long::MAX_VALUE,
			(int64_t)0
		}),
		$$new($longs, {
			$Long::MAX_VALUE,
			(int64_t)100
		}),
		$$new($longs, {
			-$Long::MAX_VALUE,
			(int64_t)100
		})
	}));
	{
		$var($longArray2, arr$, unscaledAndScale);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($longs, uas, arr$->get(i$));
			{
				int64_t unscaled = $nc(uas)->get(0);
				int32_t scale = (int32_t)uas->get(1);
				$var($BigDecimal, noRound, nullptr);
				try {
					$assign(noRound, $nc($($BigDecimal::valueOf(unscaled, scale)))->divide(one, $RoundingMode::UNNECESSARY));
				} catch ($ArithmeticException&) {
					$var($ArithmeticException, e, $catch());
					++failures;
					$init($System);
					$nc($System::err)->println($$str({"ArithmeticException for value "_s, $$str(unscaled), " and scale "_s, $$str(scale), " without rounding"_s}));
				}
				$var($BigDecimal, roundDown, nullptr);
				try {
					$assign(roundDown, $nc($($BigDecimal::valueOf(unscaled, scale)))->divide(one, $RoundingMode::DOWN));
				} catch ($ArithmeticException&) {
					$var($ArithmeticException, e, $catch());
					++failures;
					$init($System);
					$nc($System::err)->println($$str({"ArithmeticException for value "_s, $$str(unscaled), " and scale "_s, $$str(scale), " with rounding down"_s}));
				}
				if (noRound != nullptr && roundDown != nullptr && noRound->compareTo(roundDown) != 0) {
					++failures;
					$init($System);
					$nc($System::err)->println($$str({"Equality failure for value "_s, $$str(unscaled), " and scale "_s, $$str(scale)}));
				}
			}
		}
	}
	return failures;
}

void DivideTests::main($StringArray* argv) {
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
	$loadClass(DivideTests, name, initialize, &_DivideTests_ClassInfo_, allocate$DivideTests);
	return class$;
}

$Class* DivideTests::class$ = nullptr;