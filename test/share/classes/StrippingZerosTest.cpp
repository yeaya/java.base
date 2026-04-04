#include <StrippingZerosTest.h>
#include <java/math/BigDecimal.h>
#include <jcpp.h>

#undef ZERO

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $BigDecimalArray2 = $Array<::java::math::BigDecimal, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;

void StrippingZerosTest::init$() {
}

void StrippingZerosTest::main($StringArray* argv) {
	$useLocalObjectStack();
	$init($BigDecimal);
	$var($BigDecimalArray2, testCases, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1.00000"_s),
			$$new($BigDecimal, "1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1.000"_s),
			$$new($BigDecimal, "1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1"_s),
			$$new($BigDecimal, "1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0.1234"_s),
			$$new($BigDecimal, "0.1234"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0.12340"_s),
			$$new($BigDecimal, "0.1234"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0.12340000000"_s),
			$$new($BigDecimal, "0.1234"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1234.5678"_s),
			$$new($BigDecimal, "1234.5678"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1234.56780"_s),
			$$new($BigDecimal, "1234.5678"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1234.567800000"_s),
			$$new($BigDecimal, "1234.5678"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0"_s),
			$$new($BigDecimal, "0"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0e2"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0e-2"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0e42"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "+0e42"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "-0e42"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0e-42"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "+0e-42"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "-0e-42"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0e-2"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0e100"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "0e-100"_s),
			$BigDecimal::ZERO
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "10"_s),
			$$new($BigDecimal, "1e1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "20"_s),
			$$new($BigDecimal, "2e1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "100"_s),
			$$new($BigDecimal, "1e2"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1000000000"_s),
			$$new($BigDecimal, "1e9"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "100000000e1"_s),
			$$new($BigDecimal, "1e9"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "10000000e2"_s),
			$$new($BigDecimal, "1e9"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1000000e3"_s),
			$$new($BigDecimal, "1e9"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "100000e4"_s),
			$$new($BigDecimal, "1e9"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1.0000000000000000000000000000"_s),
			$$new($BigDecimal, "1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "-1.0000000000000000000000000000"_s),
			$$new($BigDecimal, "-1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1.00000000000000000000000000001"_s),
			$$new($BigDecimal, "1.00000000000000000000000000001"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1000000000000000000000000000000e4"_s),
			$$new($BigDecimal, "1e34"_s)
		})
	}));
	for (int32_t i = 0; i < testCases->length; ++i) {
		if (!$($nc(($nc(testCases->get(i))->get(0)))->stripTrailingZeros())->equals($nc(testCases->get(i))->get(1))) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("For input "_s);
			var$0->append($($nc($nc(testCases->get(i))->get(0))->toString()));
			var$0->append(" did not received expected result "_s);
			var$0->append($($nc($nc(testCases->get(i))->get(1))->toString()));
			var$0->append(",  got "_s);
			var$0->append($($nc($nc(testCases->get(i))->get(0))->stripTrailingZeros()));
			$throwNew($RuntimeException, $$str(var$0));
		}
		$nc(testCases->get(i))->set(0, $($nc($nc(testCases->get(i))->get(0))->negate()));
		$nc(testCases->get(i))->set(1, $($nc($nc(testCases->get(i))->get(1))->negate()));
		if (!$($nc(($nc(testCases->get(i))->get(0)))->stripTrailingZeros())->equals($nc(testCases->get(i))->get(1))) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("For input "_s);
			var$1->append($($nc($nc(testCases->get(i))->get(0))->toString()));
			var$1->append(" did not received expected result "_s);
			var$1->append($($nc($nc(testCases->get(i))->get(1))->toString()));
			var$1->append(",  got "_s);
			var$1->append($($nc($nc(testCases->get(i))->get(0))->stripTrailingZeros()));
			$throwNew($RuntimeException, $$str(var$1));
		}
	}
}

StrippingZerosTest::StrippingZerosTest() {
}

$Class* StrippingZerosTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StrippingZerosTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StrippingZerosTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StrippingZerosTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StrippingZerosTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StrippingZerosTest);
	});
	return class$;
}

$Class* StrippingZerosTest::class$ = nullptr;