#include <PrecisionTests.h>

#include <java/math/BigDecimal.h>
#include <jcpp.h>

#undef NINE
#undef TEN

using $BigDecimalArray = $Array<::java::math::BigDecimal>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;

$FieldInfo _PrecisionTests_FieldInfo_[] = {
	{"NINE", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $STATIC, $staticField(PrecisionTests, NINE)},
	{}
};

$MethodInfo _PrecisionTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PrecisionTests, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PrecisionTests, main, void, $StringArray*)},
	{"testPrecision", "(Ljava/math/BigDecimal;I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(PrecisionTests, testPrecision, int32_t, $BigDecimal*, int32_t)},
	{}
};

$ClassInfo _PrecisionTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PrecisionTests",
	"java.lang.Object",
	nullptr,
	_PrecisionTests_FieldInfo_,
	_PrecisionTests_MethodInfo_
};

$Object* allocate$PrecisionTests($Class* clazz) {
	return $of($alloc(PrecisionTests));
}

$BigDecimal* PrecisionTests::NINE = nullptr;

void PrecisionTests::init$() {
}

void PrecisionTests::main($StringArray* argv) {
	$init(PrecisionTests);
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($BigDecimalArray, testValues, $new($BigDecimalArray, {
		$($BigDecimal::valueOf((int64_t)1)),
		$($BigDecimal::valueOf((int64_t)9))
	}));
	failures += testPrecision($$new($BigDecimal, 0), 1);
	for (int32_t i = 1; i < 100; ++i) {
		{
			$var($BigDecimalArray, arr$, testValues);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($BigDecimal, bd, arr$->get(i$));
				{
					failures += testPrecision(bd, i);
					failures += testPrecision($($nc(bd)->negate()), i);
				}
			}
		}
		testValues->set(0, $($nc(testValues->get(0))->multiply($BigDecimal::TEN)));
		testValues->set(1, $($nc($($nc(testValues->get(1))->multiply($BigDecimal::TEN)))->add(PrecisionTests::NINE)));
	}
	$var($BigDecimalArray, randomTestValues, $new($BigDecimalArray, {
		$($BigDecimal::valueOf((int64_t)0x0000000080000000)),
		$($BigDecimal::valueOf((int64_t)-2147483648)),
		$($BigDecimal::valueOf((int64_t)0x000000170686CD2F)),
		$($BigDecimal::valueOf((int64_t)0x000003248815187F)),
		$($BigDecimal::valueOf((int64_t)0x0000800000000000)),
		$($BigDecimal::valueOf((int64_t)0xFFFF800000000000)),
		$($BigDecimal::valueOf((int64_t)0x001ADFA10F68E9B5)),
		$($BigDecimal::valueOf((int64_t)0x005A0271A2CF2092)),
		$($BigDecimal::valueOf((int64_t)0x7FFFFFFFFFFFFFFF)),
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
	$useLocalCurrentObjectStackCache();
	int32_t precision = $nc(bd)->precision();
	if (precision != expected) {
		$nc($System::err)->printf("For (%s).precision expected %d, got %d%n"_s, $$new($ObjectArray, {
			$of(bd),
			$($of($Integer::valueOf(expected))),
			$($of($Integer::valueOf(precision)))
		}));
		return 1;
	}
	return 0;
}

void clinit$PrecisionTests($Class* class$) {
	$assignStatic(PrecisionTests::NINE, $BigDecimal::valueOf((int64_t)9));
}

PrecisionTests::PrecisionTests() {
}

$Class* PrecisionTests::load$($String* name, bool initialize) {
	$loadClass(PrecisionTests, name, initialize, &_PrecisionTests_ClassInfo_, clinit$PrecisionTests, allocate$PrecisionTests);
	return class$;
}

$Class* PrecisionTests::class$ = nullptr;