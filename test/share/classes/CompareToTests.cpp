#include <CompareToTests.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MINUS_ONE
#undef MIN_VALUE
#undef ONE
#undef TWO_POW_126
#undef TWO_POW_127
#undef TWO_POW_128
#undef ZERO

using $BigIntegerArray = $Array<::java::math::BigInteger>;
using $BigIntegerArray2 = $Array<::java::math::BigInteger, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;

void CompareToTests::init$() {
}

int32_t CompareToTests::compareToTests() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$init($BigInteger);
	$var($BigInteger, MINUS_ONE, $nc($BigInteger::ONE)->negate());
	$var($BigInteger, TWO_POW_126, $BigInteger::ONE->shiftLeft(126));
	$var($BigInteger, TWO_POW_127, $BigInteger::ONE->shiftLeft(127));
	$var($BigInteger, TWO_POW_128, $BigInteger::ONE->shiftLeft(128));
	$var($BigIntegerArray2, testCases, $new($BigIntegerArray2, {
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf((int64_t)0)),
			$($BigInteger::valueOf((int64_t)0)),
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf((int64_t)0)),
			$($BigInteger::valueOf(1)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf(1)),
			$($BigInteger::valueOf(2)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf(2)),
			$($BigInteger::valueOf(1)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf(10)),
			$($BigInteger::valueOf(10)),
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			TWO_POW_127,
			TWO_POW_127,
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			$(TWO_POW_127->negate()),
			TWO_POW_127,
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$(TWO_POW_128->or$(TWO_POW_126)),
			TWO_POW_128,
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$(TWO_POW_128->or$(TWO_POW_126)),
			$(TWO_POW_128->negate()),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			TWO_POW_128,
			$(TWO_POW_128->or$(TWO_POW_126)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$(TWO_POW_128->negate()),
			$(TWO_POW_128->or$(TWO_POW_126)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			TWO_POW_127,
			TWO_POW_128,
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$(TWO_POW_127->negate()),
			TWO_POW_128,
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			TWO_POW_128,
			TWO_POW_127,
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$(TWO_POW_128->negate()),
			TWO_POW_127,
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			$($($BigInteger::valueOf($Long::MAX_VALUE))->negate()),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MAX_VALUE - 1)),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($($BigInteger::valueOf($Long::MAX_VALUE - 1))->negate()),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($($BigInteger::valueOf($Long::MIN_VALUE))->negate()),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MIN_VALUE + 1)),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			MINUS_ONE
		}),
		$$new($BigIntegerArray, {
			$($($BigInteger::valueOf($Long::MIN_VALUE + 1))->negate()),
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MAX_VALUE)),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($($BigInteger::valueOf($Long::MAX_VALUE))->negate()),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MAX_VALUE - 1)),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($($BigInteger::valueOf($Long::MAX_VALUE - 1))->negate()),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ZERO
		}),
		$$new($BigIntegerArray, {
			$($($BigInteger::valueOf($Long::MIN_VALUE))->negate()),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($BigInteger::valueOf($Long::MIN_VALUE + 1)),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		}),
		$$new($BigIntegerArray, {
			$($($BigInteger::valueOf($Long::MIN_VALUE + 1))->negate()),
			$($BigInteger::valueOf($Long::MIN_VALUE)),
			$BigInteger::ONE
		})
	}));
	{
		$var($BigIntegerArray2, arr$, testCases);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigIntegerArray, testCase, arr$->get(i$));
			{
				$var($BigInteger, a, $nc(testCase)->get(0));
				$var($BigInteger, a_negate, $nc(a)->negate());
				$var($BigInteger, b, testCase->get(1));
				$var($BigInteger, b_negate, $nc(b)->negate());
				int32_t expected = $nc(testCase->get(2))->intValue();
				failures += compareToTest(a, b, expected);
				failures += compareToTest(a_negate, b_negate, -expected);
			}
		}
	}
	return failures;
}

int32_t CompareToTests::compareToTest($BigInteger* a, $BigInteger* b, int32_t expected) {
	$useLocalObjectStack();
	int32_t result = $nc(a)->compareTo(b);
	int32_t failed = (result == expected) ? 0 : 1;
	if (failed == 1) {
		$nc($System::err)->println($$str({"("_s, a, ").compareTo("_s, b, ") => "_s, $$str(result), "\n\tExpected "_s, $$str(expected)}));
	}
	return failed;
}

void CompareToTests::main($StringArray* argv) {
	$useLocalObjectStack();
	int32_t failures = 0;
	failures += compareToTests();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures while testing exact compareTo."_s}));
	}
}

CompareToTests::CompareToTests() {
}

$Class* CompareToTests::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CompareToTests, init$, void)},
		{"compareToTest", "(Ljava/math/BigInteger;Ljava/math/BigInteger;I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(CompareToTests, compareToTest, int32_t, $BigInteger*, $BigInteger*, int32_t)},
		{"compareToTests", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(CompareToTests, compareToTests, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CompareToTests, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CompareToTests",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CompareToTests, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompareToTests);
	});
	return class$;
}

$Class* CompareToTests::class$ = nullptr;