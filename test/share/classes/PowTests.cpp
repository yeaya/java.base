#include <PowTests.h>
#include <java/math/BigDecimal.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $BigDecimalArray2 = $Array<::java::math::BigDecimal, 2>;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;

void PowTests::init$() {
}

int32_t PowTests::zeroAndOneTests() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($BigDecimalArray2, testCases, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(0, $Integer::MAX_VALUE)),
			$$new($BigDecimal, 0),
			$($BigDecimal::valueOf(1, 0))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(0, $Integer::MAX_VALUE)),
			$$new($BigDecimal, 1),
			$($BigDecimal::valueOf(0, $Integer::MAX_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(0, $Integer::MAX_VALUE)),
			$$new($BigDecimal, 2),
			$($BigDecimal::valueOf(0, $Integer::MAX_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(0, $Integer::MAX_VALUE)),
			$$new($BigDecimal, 999999999),
			$($BigDecimal::valueOf(0, $Integer::MAX_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(0, $Integer::MIN_VALUE)),
			$$new($BigDecimal, 0),
			$($BigDecimal::valueOf(1, 0))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(0, $Integer::MIN_VALUE)),
			$$new($BigDecimal, 1),
			$($BigDecimal::valueOf(0, $Integer::MIN_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(0, $Integer::MIN_VALUE)),
			$$new($BigDecimal, 2),
			$($BigDecimal::valueOf(0, $Integer::MIN_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(0, $Integer::MIN_VALUE)),
			$$new($BigDecimal, 999999999),
			$($BigDecimal::valueOf(0, $Integer::MIN_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(1, $Integer::MAX_VALUE)),
			$$new($BigDecimal, 0),
			$($BigDecimal::valueOf(1, 0))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(1, $Integer::MAX_VALUE)),
			$$new($BigDecimal, 1),
			$($BigDecimal::valueOf(1, $Integer::MAX_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(1, $Integer::MAX_VALUE)),
			$$new($BigDecimal, 2),
			nullptr
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(1, $Integer::MAX_VALUE)),
			$$new($BigDecimal, 999999999),
			nullptr
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(1, $Integer::MIN_VALUE)),
			$$new($BigDecimal, 0),
			$($BigDecimal::valueOf(1, 0))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(1, $Integer::MIN_VALUE)),
			$$new($BigDecimal, 1),
			$($BigDecimal::valueOf(1, $Integer::MIN_VALUE))
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(1, $Integer::MIN_VALUE)),
			$$new($BigDecimal, 2),
			nullptr
		}),
		$$new($BigDecimalArray, {
			$($BigDecimal::valueOf(1, $Integer::MIN_VALUE)),
			$$new($BigDecimal, 999999999),
			nullptr
		})
	}));
	{
		$var($BigDecimalArray2, arr$, testCases);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($BigDecimalArray, testCase, arr$->get(i$));
			{
				int32_t exponent = $nc($nc(testCase)->get(1))->intValueExact();
				$var($BigDecimal, result, nullptr);
				try {
					$assign(result, $nc(testCase->get(0))->pow(exponent));
					if (!result->equals(testCase->get(2))) {
						++failures;
						$nc($System::err)->println($$str({"Unexpected result while raising "_s, testCase->get(0), " to the "_s, $$str(exponent), " power; expected "_s, testCase->get(2), ", got "_s, result, "."_s}));
					}
				} catch ($ArithmeticException& e) {
					if (testCase->get(2) != nullptr) {
						++failures;
						$nc($System::err)->println($$str({"Unexpected exception while raising "_s, testCase->get(0), " to the "_s, $$str(exponent), " power."_s}));
					}
				}
			}
		}
	}
	return failures;
}

void PowTests::main($StringArray* argv) {
	$useLocalObjectStack();
	int32_t failures = 0;
	failures += zeroAndOneTests();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures while testing pow methods."_s}));
	}
}

PowTests::PowTests() {
}

$Class* PowTests::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PowTests, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PowTests, main, void, $StringArray*)},
		{"zeroAndOneTests", "()I", nullptr, $STATIC, $staticMethod(PowTests, zeroAndOneTests, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"PowTests",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PowTests, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PowTests);
	});
	return class$;
}

$Class* PowTests::class$ = nullptr;