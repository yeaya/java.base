#include <StrippingZerosTest.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <jcpp.h>

#undef ZERO

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $BigDecimalArray2 = $Array<::java::math::BigDecimal, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;

$MethodInfo _StrippingZerosTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StrippingZerosTest::*)()>(&StrippingZerosTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StrippingZerosTest::main))},
	{}
};

$ClassInfo _StrippingZerosTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StrippingZerosTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StrippingZerosTest_MethodInfo_
};

$Object* allocate$StrippingZerosTest($Class* clazz) {
	return $of($alloc(StrippingZerosTest));
}

void StrippingZerosTest::init$() {
}

void StrippingZerosTest::main($StringArray* argv) {
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
		if (!$nc($($nc(($nc(testCases->get(i))->get(0)))->stripTrailingZeros()))->equals($nc(testCases->get(i))->get(1))) {
			$var($String, var$2, $$str({"For input "_s, $($nc($nc(testCases->get(i))->get(0))->toString()), " did not received expected result "_s}));
			$var($String, var$1, $$concat(var$2, $($nc($nc(testCases->get(i))->get(1))->toString())));
			$var($String, var$0, $$concat(var$1, ",  got "));
			$throwNew($RuntimeException, $$concat(var$0, $($nc($nc(testCases->get(i))->get(0))->stripTrailingZeros())));
		}
		$nc(testCases->get(i))->set(0, $($nc($nc(testCases->get(i))->get(0))->negate()));
		$nc(testCases->get(i))->set(1, $($nc($nc(testCases->get(i))->get(1))->negate()));
		if (!$nc($($nc(($nc(testCases->get(i))->get(0)))->stripTrailingZeros()))->equals($nc(testCases->get(i))->get(1))) {
			$var($String, var$5, $$str({"For input "_s, $($nc($nc(testCases->get(i))->get(0))->toString()), " did not received expected result "_s}));
			$var($String, var$4, $$concat(var$5, $($nc($nc(testCases->get(i))->get(1))->toString())));
			$var($String, var$3, $$concat(var$4, ",  got "));
			$throwNew($RuntimeException, $$concat(var$3, $($nc($nc(testCases->get(i))->get(0))->stripTrailingZeros())));
		}
	}
}

StrippingZerosTest::StrippingZerosTest() {
}

$Class* StrippingZerosTest::load$($String* name, bool initialize) {
	$loadClass(StrippingZerosTest, name, initialize, &_StrippingZerosTest_ClassInfo_, allocate$StrippingZerosTest);
	return class$;
}

$Class* StrippingZerosTest::class$ = nullptr;