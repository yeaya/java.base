#include <SquareRootTests.h>

#include <SquareRootTests$BigSquareRoot.h>
#include <java/math/BigDecimal.h>
#include <java/math/MathContext.h>
#include <java/math/RoundingMode.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef CEILING
#undef DECIMAL64
#undef DOWN
#undef FLOOR
#undef HALF_DOWN
#undef HALF_EVEN
#undef HALF_UP
#undef ONE
#undef ONE_TENTH
#undef TWO
#undef UNLIMITED
#undef UNNECESSARY
#undef UP

using $SquareRootTests$BigSquareRoot = ::SquareRootTests$BigSquareRoot;
using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $RoundingModeArray = $Array<::java::math::RoundingMode>;
using $longArray2 = $Array<int64_t, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $MathContext = ::java::math::MathContext;
using $RoundingMode = ::java::math::RoundingMode;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

$FieldInfo _SquareRootTests_FieldInfo_[] = {
	{"TWO", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC, $staticField(SquareRootTests, TWO)},
	{"ONE_TENTH", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SquareRootTests, ONE_TENTH)},
	{}
};

$MethodInfo _SquareRootTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SquareRootTests::*)()>(&SquareRootTests::init$))},
	{"almostFourRoundingDown", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::almostFourRoundingDown))},
	{"almostFourRoundingUp", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::almostFourRoundingUp))},
	{"compare", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;ZLjava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigDecimal*,$BigDecimal*,bool,$String*)>(&SquareRootTests::compare))},
	{"compareNumerically", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;ILjava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigDecimal*,$BigDecimal*,int32_t,$String*)>(&SquareRootTests::compareNumerically))},
	{"compareSqrtImplementations", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigDecimal*,$MathContext*)>(&SquareRootTests::compareSqrtImplementations))},
	{"equalNumerically", "(Ljava/math/BigDecimal;Ljava/math/BigDecimal;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigDecimal*,$BigDecimal*,$String*)>(&SquareRootTests::equalNumerically))},
	{"evenPowersOfTenTests", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::evenPowersOfTenTests))},
	{"halfWay", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::halfWay))},
	{"lowPrecisionPerfectSquares", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::lowPrecisionPerfectSquares))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&SquareRootTests::main))},
	{"nearOne", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::nearOne))},
	{"nearTen", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::nearTen))},
	{"negativeTests", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::negativeTests))},
	{"oneDigitTests", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::oneDigitTests))},
	{"squareRootTwoTests", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::squareRootTwoTests))},
	{"twoDigitTests", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::twoDigitTests))},
	{"zeroTests", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&SquareRootTests::zeroTests))},
	{}
};

$InnerClassInfo _SquareRootTests_InnerClassesInfo_[] = {
	{"SquareRootTests$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"SquareRootTests$BigSquareRoot", "SquareRootTests", "BigSquareRoot", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SquareRootTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SquareRootTests",
	"java.lang.Object",
	nullptr,
	_SquareRootTests_FieldInfo_,
	_SquareRootTests_MethodInfo_,
	nullptr,
	nullptr,
	_SquareRootTests_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SquareRootTests$1,SquareRootTests$BigSquareRoot"
};

$Object* allocate$SquareRootTests($Class* clazz) {
	return $of($alloc(SquareRootTests));
}

$BigDecimal* SquareRootTests::TWO = nullptr;
$BigDecimal* SquareRootTests::ONE_TENTH = nullptr;

void SquareRootTests::init$() {
}

void SquareRootTests::main($StringArray* args) {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	failures += negativeTests();
	failures += zeroTests();
	failures += oneDigitTests();
	failures += twoDigitTests();
	failures += evenPowersOfTenTests();
	failures += squareRootTwoTests();
	failures += lowPrecisionPerfectSquares();
	failures += almostFourRoundingDown();
	failures += almostFourRoundingUp();
	failures += nearTen();
	failures += nearOne();
	failures += halfWay();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures testing BigDecimal.sqrt()."_s}));
	}
}

int32_t SquareRootTests::negativeTests() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	for (int64_t i = -10; i < 0; ++i) {
		for (int32_t j = -5; j < 5; ++j) {
			try {
				$var($BigDecimal, input, $BigDecimal::valueOf(i, j));
				$init($MathContext);
				$var($BigDecimal, result, $nc(input)->sqrt($MathContext::DECIMAL64));
				$nc($System::err)->println($$str({"Unexpected sqrt of negative: ("_s, input, ").sqrt()  = "_s, result}));
				failures += 1;
			} catch ($ArithmeticException& e) {
			}
		}
	}
	return failures;
}

int32_t SquareRootTests::zeroTests() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	for (int32_t i = -100; i < 100; ++i) {
		$var($BigDecimal, expected, $BigDecimal::valueOf(0, i / 2));
		$init($MathContext);
		failures += compare($($nc($($BigDecimal::valueOf(0, i)))->sqrt($MathContext::UNLIMITED)), expected, true, "zeros"_s);
		failures += compare($($nc($($BigDecimal::valueOf(0, i)))->sqrt($MathContext::DECIMAL64)), expected, true, "zeros"_s);
	}
	return failures;
}

int32_t SquareRootTests::oneDigitTests() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$init($BigDecimal);
	$var($Object, var$0, $of($BigDecimal::ONE));
	$var($Object, var$1, $of(SquareRootTests::TWO));
	$var($Object, var$2, $of($BigDecimal::valueOf((int64_t)3)));
	$var($Object, var$3, $of($BigDecimal::valueOf((int64_t)4)));
	$var($Object, var$4, $of($BigDecimal::valueOf((int64_t)5)));
	$var($Object, var$5, $of($BigDecimal::valueOf((int64_t)6)));
	$var($Object, var$6, $of($BigDecimal::valueOf((int64_t)7)));
	$var($Object, var$7, $of($BigDecimal::valueOf((int64_t)8)));
	$var($List, oneToNine, $List::of(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $($BigDecimal::valueOf((int64_t)9))));
	$init($RoundingMode);
	$var($List, modes, $List::of($RoundingMode::UP, $RoundingMode::DOWN, $RoundingMode::CEILING, $RoundingMode::FLOOR, $RoundingMode::HALF_UP, $RoundingMode::HALF_DOWN, $RoundingMode::HALF_EVEN));
	for (int32_t i = 1; i < 20; ++i) {
		{
			$var($Iterator, i$, $nc(modes)->iterator());
			for (; $nc(i$)->hasNext();) {
				$RoundingMode* rm = $cast($RoundingMode, i$->next());
				{
					{
						$var($Iterator, i$, $nc(oneToNine)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($BigDecimal, bd, $cast($BigDecimal, i$->next()));
							{
								$var($MathContext, mc, $new($MathContext, i, rm));
								failures += compareSqrtImplementations(bd, mc);
								$assign(bd, $nc(bd)->multiply(SquareRootTests::ONE_TENTH));
								failures += compareSqrtImplementations(bd, mc);
							}
						}
					}
				}
			}
		}
	}
	return failures;
}

int32_t SquareRootTests::twoDigitTests() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$init($RoundingMode);
	$var($List, modes, $List::of($RoundingMode::UP, $RoundingMode::DOWN, $RoundingMode::CEILING, $RoundingMode::FLOOR, $RoundingMode::HALF_UP, $RoundingMode::HALF_DOWN, $RoundingMode::HALF_EVEN));
	for (int32_t i = 10; i < 100; ++i) {
		$var($BigDecimal, bd0, $BigDecimal::valueOf((int64_t)i));
		$var($BigDecimal, bd1, $nc(bd0)->multiply(SquareRootTests::ONE_TENTH));
		$var($BigDecimal, bd2, $nc(bd1)->multiply(SquareRootTests::ONE_TENTH));
		{
			$var($Iterator, i$, $nc($($List::of(bd0, bd1, bd2)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($BigDecimal, bd, $cast($BigDecimal, i$->next()));
				{
					for (int32_t precision = 1; i < 20; ++i) {
						{
							$var($Iterator, i$, $nc(modes)->iterator());
							for (; $nc(i$)->hasNext();) {
								$RoundingMode* rm = $cast($RoundingMode, i$->next());
								{
									$var($MathContext, mc, $new($MathContext, precision, rm));
									failures += compareSqrtImplementations(bd, mc);
								}
							}
						}
					}
				}
			}
		}
	}
	return failures;
}

int32_t SquareRootTests::compareSqrtImplementations($BigDecimal* bd, $MathContext* mc) {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	$var($BigDecimal, var$0, $SquareRootTests$BigSquareRoot::sqrt(bd, mc));
	$var($BigDecimal, var$1, $nc(bd)->sqrt(mc));
	return equalNumerically(var$0, var$1, $$str({"sqrt("_s, bd, ") under "_s, mc}));
}

int32_t SquareRootTests::evenPowersOfTenTests() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$init($RoundingMode);
	$var($MathContext, oneDigitExactly, $new($MathContext, 1, $RoundingMode::UNNECESSARY));
	for (int32_t scale = -100; scale <= 100; ++scale) {
		$var($BigDecimal, testValue, $BigDecimal::valueOf(1, 2 * scale));
		$var($BigDecimal, expectedNumericalResult, $BigDecimal::valueOf(1, scale));
		$var($BigDecimal, result, nullptr);
		$init($MathContext);
		failures += equalNumerically(expectedNumericalResult, $assign(result, $nc(testValue)->sqrt($MathContext::DECIMAL64)), "Even powers of 10, DECIMAL64"_s);
		failures += equalNumerically(expectedNumericalResult, $assign(result, $nc(testValue)->sqrt(oneDigitExactly)), "even powers of 10, 1 digit"_s);
		if ($nc(result)->precision() > 1) {
			failures += 1;
			$nc($System::err)->println($$str({"Excess precision for "_s, result}));
		}
	}
	return failures;
}

int32_t SquareRootTests::squareRootTwoTests() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimal, highPrecisionRoot2, $new($BigDecimal, "1.41421356237309504880168872420969807856967187537694807317667973799"_s));
	$init($RoundingMode);
	$var($RoundingModeArray, modes, $new($RoundingModeArray, {
		$RoundingMode::UP,
		$RoundingMode::DOWN,
		$RoundingMode::CEILING,
		$RoundingMode::FLOOR,
		$RoundingMode::HALF_UP,
		$RoundingMode::HALF_DOWN,
		$RoundingMode::HALF_EVEN
	}));
	{
		$var($RoundingModeArray, arr$, modes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$RoundingMode* mode = arr$->get(i$);
			{
				for (int32_t precision = 1; precision < 63; ++precision) {
					$var($MathContext, mc, $new($MathContext, precision, mode));
					$var($BigDecimal, expected, highPrecisionRoot2->round(mc));
					$var($BigDecimal, computed, $nc(SquareRootTests::TWO)->sqrt(mc));
					$var($BigDecimal, altComputed, $SquareRootTests$BigSquareRoot::sqrt(SquareRootTests::TWO, mc));
					failures += equalNumerically(expected, computed, "sqrt(2)"_s);
					failures += equalNumerically(computed, altComputed, "computed & altComputed"_s);
				}
			}
		}
	}
	return failures;
}

int32_t SquareRootTests::lowPrecisionPerfectSquares() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($longArray2, squaresWithOneDigitRoot, $new($longArray2, {
		$$new($longs, {
			(int64_t)4,
			(int64_t)2
		}),
		$$new($longs, {
			(int64_t)9,
			(int64_t)3
		}),
		$$new($longs, {
			(int64_t)25,
			(int64_t)5
		}),
		$$new($longs, {
			(int64_t)36,
			(int64_t)6
		}),
		$$new($longs, {
			(int64_t)49,
			(int64_t)7
		}),
		$$new($longs, {
			(int64_t)64,
			(int64_t)8
		}),
		$$new($longs, {
			(int64_t)81,
			(int64_t)9
		})
	}));
	{
		$var($longArray2, arr$, squaresWithOneDigitRoot);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($longs, squareAndRoot, arr$->get(i$));
			{
				$var($BigDecimal, square, $new($BigDecimal, $nc(squareAndRoot)->get(0)));
				$var($BigDecimal, expected, $new($BigDecimal, $nc(squareAndRoot)->get(1)));
				for (int32_t scale = 0; scale <= 4; ++scale) {
					$init($RoundingMode);
					$var($BigDecimal, scaledSquare, square->setScale(scale, $RoundingMode::UNNECESSARY));
					int32_t expectedScale = scale / 2;
					for (int32_t precision = 0; precision <= 5; ++precision) {
						{
							$var($RoundingModeArray, arr$, $RoundingMode::values());
							int32_t len$ = arr$->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$RoundingMode* rm = arr$->get(i$);
								{
									$var($MathContext, mc, $new($MathContext, precision, rm));
									$var($BigDecimal, computedRoot, $nc(scaledSquare)->sqrt(mc));
									failures += equalNumerically(expected, computedRoot, "simple squares"_s);
									int32_t computedScale = $nc(computedRoot)->scale();
									if (precision >= expectedScale + 1 && computedScale != expectedScale) {
										$nc($System::err)->printf("%s\tprecision=%d\trm=%s%n"_s, $$new($ObjectArray, {
											$($of(computedRoot->toString())),
											$($of($Integer::valueOf(precision))),
											$of(rm)
										}));
										++failures;
										$nc($System::err)->printf("\t%s does not have expected scale of %d%n."_s, $$new($ObjectArray, {
											$of(computedRoot),
											$($of($Integer::valueOf(expectedScale)))
										}));
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return failures;
}

int32_t SquareRootTests::almostFourRoundingDown() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimal, nearFour, $new($BigDecimal, "3.999999999999999999999999999999"_s));
	for (int32_t i = 1; i < 64; ++i) {
		$init($RoundingMode);
		$var($MathContext, mc, $new($MathContext, i, $RoundingMode::FLOOR));
		$var($BigDecimal, result, nearFour->sqrt(mc));
		$var($BigDecimal, expected, $SquareRootTests$BigSquareRoot::sqrt(nearFour, mc));
		failures += equalNumerically(expected, result, "near four rounding down"_s);
		failures += ($nc(result)->compareTo(SquareRootTests::TWO) < 0) ? 0 : 1;
	}
	return failures;
}

int32_t SquareRootTests::almostFourRoundingUp() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimal, nearFour, $new($BigDecimal, "4.000000000000000000000000000001"_s));
	for (int32_t i = 1; i < 64; ++i) {
		$init($RoundingMode);
		$var($MathContext, mc, $new($MathContext, i, $RoundingMode::CEILING));
		$var($BigDecimal, result, nearFour->sqrt(mc));
		$var($BigDecimal, expected, $SquareRootTests$BigSquareRoot::sqrt(nearFour, mc));
		failures += equalNumerically(expected, result, "near four rounding up"_s);
		failures += ($nc(result)->compareTo(SquareRootTests::TWO) > 0) ? 0 : 1;
	}
	return failures;
}

int32_t SquareRootTests::nearTen() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimal, near10, $new($BigDecimal, "9.99999999999999999999"_s));
	$var($BigDecimal, near10sq, near10->multiply(near10));
	$var($BigDecimal, near10sq_ulp, $nc(near10sq)->add($(near10sq->ulp())));
	for (int32_t i = 10; i < 23; ++i) {
		$init($RoundingMode);
		$var($MathContext, mc, $new($MathContext, i, $RoundingMode::HALF_EVEN));
		$var($BigDecimal, var$0, $SquareRootTests$BigSquareRoot::sqrt(near10sq_ulp, mc));
		failures += equalNumerically(var$0, $($nc(near10sq_ulp)->sqrt(mc)), "near 10 rounding half even"_s);
	}
	return failures;
}

int32_t SquareRootTests::nearOne() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimal, near1, $new($BigDecimal, ".999999999999999999999"_s));
	$var($BigDecimal, near1sq, near1->multiply(near1));
	$var($BigDecimal, near1sq_ulp, $nc(near1sq)->add($(near1sq->ulp())));
	for (int32_t i = 10; i < 23; ++i) {
		{
			$init($RoundingMode);
			$var($Iterator, i$, $nc($($List::of($RoundingMode::HALF_EVEN, $RoundingMode::UP, $RoundingMode::DOWN)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$RoundingMode* rm = $cast($RoundingMode, i$->next());
				{
					$var($MathContext, mc, $new($MathContext, i, rm));
					$var($BigDecimal, var$0, $SquareRootTests$BigSquareRoot::sqrt(near1sq_ulp, mc));
					$var($BigDecimal, var$1, $nc(near1sq_ulp)->sqrt(mc));
					failures += equalNumerically(var$0, var$1, $(mc->toString()));
				}
			}
		}
	}
	return failures;
}

int32_t SquareRootTests::halfWay() {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimalArray, halfWayCases, $new($BigDecimalArray, {
		$$new($BigDecimal, "123456789123456789.5"_s),
		$$new($BigDecimal, "123456789123456788.5"_s)
	}));
	{
		$var($BigDecimalArray, arr$, halfWayCases);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigDecimal, halfWayCase, arr$->get(i$));
			{
				int32_t precision = $nc(halfWayCase)->precision() - 1;
				$var($BigDecimal, square, halfWayCase->multiply(halfWayCase));
				{
					$init($RoundingMode);
					$var($Iterator, i$, $nc($($List::of($RoundingMode::HALF_EVEN, $RoundingMode::HALF_UP, $RoundingMode::HALF_DOWN)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$RoundingMode* rm = $cast($RoundingMode, i$->next());
						{
							$var($MathContext, mc, $new($MathContext, precision, rm));
							$nc($System::out)->println($$str({"\nRounding mode "_s, rm}));
							$nc($System::out)->println($$str({"\t"_s, $(halfWayCase->round(mc)), "\t"_s, halfWayCase}));
							$nc($System::out)->println($$str({"\t"_s, $($SquareRootTests$BigSquareRoot::sqrt(square, mc))}));
							$var($BigDecimal, var$0, $SquareRootTests$BigSquareRoot::sqrt(square, mc));
							$var($BigDecimal, var$1, halfWayCase->round(mc));
							failures += equalNumerically(var$0, var$1, $$str({"Rounding halway "_s, rm}));
						}
					}
				}
			}
		}
	}
	return failures;
}

int32_t SquareRootTests::compare($BigDecimal* a, $BigDecimal* b, bool expected, $String* prefix) {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	bool result = $nc(a)->equals(b);
	int32_t failed = (result == expected) ? 0 : 1;
	if (failed == 1) {
		$nc($System::err)->println($$str({"Testing "_s, prefix, "("_s, a, ").compareTo("_s, b, ") => "_s, $$str(result), "\n\tExpected "_s, $$str(expected)}));
	}
	return failed;
}

int32_t SquareRootTests::equalNumerically($BigDecimal* a, $BigDecimal* b, $String* prefix) {
	$init(SquareRootTests);
	return compareNumerically(a, b, 0, prefix);
}

int32_t SquareRootTests::compareNumerically($BigDecimal* a, $BigDecimal* b, int32_t expected, $String* prefix) {
	$init(SquareRootTests);
	$useLocalCurrentObjectStackCache();
	int32_t result = $nc(a)->compareTo(b);
	int32_t failed = (result == expected) ? 0 : 1;
	if (failed == 1) {
		$nc($System::err)->println($$str({"Testing "_s, prefix, "("_s, a, ").compareTo("_s, b, ") => "_s, $$str(result), "\n\tExpected "_s, $$str(expected)}));
	}
	return failed;
}

void clinit$SquareRootTests($Class* class$) {
	$assignStatic(SquareRootTests::TWO, $new($BigDecimal, 2));
	$assignStatic(SquareRootTests::ONE_TENTH, $BigDecimal::valueOf(1, 1));
}

SquareRootTests::SquareRootTests() {
}

$Class* SquareRootTests::load$($String* name, bool initialize) {
	$loadClass(SquareRootTests, name, initialize, &_SquareRootTests_ClassInfo_, clinit$SquareRootTests, allocate$SquareRootTests);
	return class$;
}

$Class* SquareRootTests::class$ = nullptr;