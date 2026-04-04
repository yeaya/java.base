#include <PrecisionTests.h>
#include <java/math/BigDecimal.h>
#include <jcpp.h>

#undef NINE
#undef TEN

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;

$BigDecimal* PrecisionTests::NINE = nullptr;

void PrecisionTests::init$() {
}

void PrecisionTests::main($StringArray* argv) {
	$init(PrecisionTests);
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($BigDecimalArray, testValues, $new($BigDecimalArray, {
		$($BigDecimal::valueOf((int64_t)1)),
		$($BigDecimal::valueOf((int64_t)9))
	}));
	failures += testPrecision($$new($BigDecimal, 0), 1);
	for (int32_t i = 1; i < 100; ++i) {
		{
			$var($BigDecimalArray, arr$, testValues);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($BigDecimal, bd, arr$->get(i$));
				{
					failures += testPrecision(bd, i);
					failures += testPrecision($($nc(bd)->negate()), i);
				}
			}
		}
		testValues->set(0, $($nc(testValues->get(0))->multiply($BigDecimal::TEN)));
		testValues->set(1, $($($nc(testValues->get(1))->multiply($BigDecimal::TEN))->add(PrecisionTests::NINE)));
	}
	$var($BigDecimalArray, randomTestValues, $new($BigDecimalArray, {
		$($BigDecimal::valueOf((int64_t)0x0000000080000000)),
		$($BigDecimal::valueOf((int64_t)-2147483648)),
		$($BigDecimal::valueOf((int64_t)0x000000170686cd2f)),
		$($BigDecimal::valueOf((int64_t)0x000003248815187f)),
		$($BigDecimal::valueOf((int64_t)0x0000800000000000)),
		$($BigDecimal::valueOf((int64_t)0xffff800000000000)),
		$($BigDecimal::valueOf((int64_t)0x001adfa10f68e9b5)),
		$($BigDecimal::valueOf((int64_t)0x005a0271a2cf2092)),
		$($BigDecimal::valueOf((int64_t)0x7fffffffffffffff)),
		$($BigDecimal::valueOf((int64_t)0x8000000000000001))
	}));
	$var($ints, expectedPrecision, $new($ints, {
		10,
		10,
		11,
		13,
		15,
		15,
		16,
		17,
		19,
		19
	}));
	for (int32_t i = 0; i < randomTestValues->length; ++i) {
		failures += testPrecision(randomTestValues->get(i), expectedPrecision->get(i));
	}
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures while testing precision."_s}));
	}
}

int32_t PrecisionTests::testPrecision($BigDecimal* bd, int32_t expected) {
	$init(PrecisionTests);
	$useLocalObjectStack();
	int32_t precision = $nc(bd)->precision();
	if (precision != expected) {
		$nc($System::err)->printf("For (%s).precision expected %d, got %d%n"_s, $$new($ObjectArray, {
			bd,
			$($Integer::valueOf(expected)),
			$($Integer::valueOf(precision))
		}));
		return 1;
	}
	return 0;
}

void PrecisionTests::clinit$($Class* clazz) {
	$assignStatic(PrecisionTests::NINE, $BigDecimal::valueOf((int64_t)9));
}

PrecisionTests::PrecisionTests() {
}

$Class* PrecisionTests::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NINE", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC, $staticField(PrecisionTests, NINE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrecisionTests, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrecisionTests, main, void, $StringArray*)},
		{"testPrecision", "(Ljava/math/BigDecimal;I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(PrecisionTests, testPrecision, int32_t, $BigDecimal*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"PrecisionTests",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrecisionTests, name, initialize, &classInfo$$, PrecisionTests::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PrecisionTests);
	});
	return class$;
}

$Class* PrecisionTests::class$ = nullptr;