#include <NegateTests.h>

#include <java/math/BigDecimal.h>
#include <java/math/MathContext.h>
#include <java/math/RoundingMode.h>
#include <jcpp.h>

#undef CEILING
#undef FLOOR

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $BigDecimalArray2 = $Array<::java::math::BigDecimal, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $MathContext = ::java::math::MathContext;
using $RoundingMode = ::java::math::RoundingMode;

$MethodInfo _NegateTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NegateTests::*)()>(&NegateTests::init$))},
	{"absThenRound", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;", nullptr, $STATIC, $method(static_cast<$BigDecimal*(*)($BigDecimal*,$MathContext*)>(&NegateTests::absThenRound))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NegateTests::main))},
	{"negateTest", "([[Ljava/math/BigDecimal;Ljava/math/MathContext;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($BigDecimalArray2*,$MathContext*)>(&NegateTests::negateTest))},
	{"negateTests", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&NegateTests::negateTests))},
	{"negateThenRound", "(Ljava/math/BigDecimal;Ljava/math/MathContext;)Ljava/math/BigDecimal;", nullptr, $STATIC, $method(static_cast<$BigDecimal*(*)($BigDecimal*,$MathContext*)>(&NegateTests::negateThenRound))},
	{}
};

$ClassInfo _NegateTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NegateTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NegateTests_MethodInfo_
};

$Object* allocate$NegateTests($Class* clazz) {
	return $of($alloc(NegateTests));
}

void NegateTests::init$() {
}

$BigDecimal* NegateTests::negateThenRound($BigDecimal* bd, $MathContext* mc) {
	return $nc($($nc(bd)->negate()))->plus(mc);
}

$BigDecimal* NegateTests::absThenRound($BigDecimal* bd, $MathContext* mc) {
	return $nc($($nc(bd)->abs()))->plus(mc);
}

int32_t NegateTests::negateTest($BigDecimalArray2* testCases, $MathContext* mc) {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	{
		$var($BigDecimalArray2, arr$, testCases);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($BigDecimalArray, testCase, arr$->get(i$));
			{
				$var($BigDecimal, bd, $nc(testCase)->get(0));
				$var($BigDecimal, neg1, $nc(bd)->negate(mc));
				$var($BigDecimal, neg2, negateThenRound(bd, mc));
				$var($BigDecimal, expected, testCase->get(1));
				if (!$nc(neg1)->equals(expected)) {
					++failures;
					$nc($System::err)->println($$str({"("_s, bd, ").negate("_s, mc, ") => "_s, neg1, " != expected "_s, expected}));
				}
				if (!$nc(neg1)->equals(neg2)) {
					++failures;
					$nc($System::err)->println($$str({"("_s, bd, ").negate("_s, mc, ")  => "_s, neg1, " != ntr "_s, neg2}));
				}
				$var($BigDecimal, abs, bd->abs(mc));
				$var($BigDecimal, expectedAbs, absThenRound(bd, mc));
				if (!$nc(abs)->equals(expectedAbs)) {
					++failures;
					$nc($System::err)->println($$str({"("_s, bd, ").abs("_s, mc, ")  => "_s, abs, " != atr "_s, expectedAbs}));
				}
			}
		}
	}
	return failures;
}

int32_t NegateTests::negateTests() {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimalArray2, testCasesCeiling, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1.3"_s),
			$$new($BigDecimal, "-1"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "-1.3"_s),
			$$new($BigDecimal, "2"_s)
		})
	}));
	$init($RoundingMode);
	failures += negateTest(testCasesCeiling, $$new($MathContext, 1, $RoundingMode::CEILING));
	$var($BigDecimalArray2, testCasesFloor, $new($BigDecimalArray2, {
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "1.3"_s),
			$$new($BigDecimal, "-2"_s)
		}),
		$$new($BigDecimalArray, {
			$$new($BigDecimal, "-1.3"_s),
			$$new($BigDecimal, "1"_s)
		})
	}));
	failures += negateTest(testCasesFloor, $$new($MathContext, 1, $RoundingMode::FLOOR));
	return failures;
}

void NegateTests::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	failures += negateTests();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures testing the negate and/or abs."_s}));
	}
}

NegateTests::NegateTests() {
}

$Class* NegateTests::load$($String* name, bool initialize) {
	$loadClass(NegateTests, name, initialize, &_NegateTests_ClassInfo_, allocate$NegateTests);
	return class$;
}

$Class* NegateTests::class$ = nullptr;