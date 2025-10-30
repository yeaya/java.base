#include <IntegralValueTests.h>

#include <java/lang/Number.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef INT_VALUES
#undef LONG_VALUES
#undef MAX_VALUE
#undef MIN_VALUE

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

$FieldInfo _IntegralValueTests_FieldInfo_[] = {
	{"INT_VALUES", "Ljava/util/Map;", "Ljava/util/Map<Ljava/math/BigDecimal;Ljava/lang/Number;>;", $PRIVATE | $STATIC | $FINAL, $staticField(IntegralValueTests, INT_VALUES)},
	{"LONG_VALUES", "Ljava/util/Map;", "Ljava/util/Map<Ljava/math/BigDecimal;Ljava/lang/Number;>;", $PRIVATE | $STATIC | $FINAL, $staticField(IntegralValueTests, LONG_VALUES)},
	{}
};

$MethodInfo _IntegralValueTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegralValueTests::*)()>(&IntegralValueTests::init$))},
	{"integralValuesTest", "(Ljava/util/Map;Z)I", "(Ljava/util/Map<Ljava/math/BigDecimal;Ljava/lang/Number;>;Z)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Map*,bool)>(&IntegralValueTests::integralValuesTest))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&IntegralValueTests::main))},
	{"reportError", "(Ljava/math/BigDecimal;Ljava/lang/Number;JZ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigDecimal*,$Number*,int64_t,bool)>(&IntegralValueTests::reportError))},
	{"simpleIntValue", "(Ljava/math/BigDecimal;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($BigDecimal*)>(&IntegralValueTests::simpleIntValue))},
	{"simpleLongValue", "(Ljava/math/BigDecimal;)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($BigDecimal*)>(&IntegralValueTests::simpleLongValue))},
	{}
};

$ClassInfo _IntegralValueTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IntegralValueTests",
	"java.lang.Object",
	nullptr,
	_IntegralValueTests_FieldInfo_,
	_IntegralValueTests_MethodInfo_
};

$Object* allocate$IntegralValueTests($Class* clazz) {
	return $of($alloc(IntegralValueTests));
}

$Map* IntegralValueTests::INT_VALUES = nullptr;
$Map* IntegralValueTests::LONG_VALUES = nullptr;

void IntegralValueTests::init$() {
}

void IntegralValueTests::main($StringArray* args) {
	$init(IntegralValueTests);
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = integralValuesTest(IntegralValueTests::INT_VALUES, true);
	int32_t failures = var$0 + integralValuesTest(IntegralValueTests::LONG_VALUES, false);
	if (failures != 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures for {int,long}Value()."_s}));
	}
}

int32_t IntegralValueTests::integralValuesTest($Map* v, bool isInt) {
	$init(IntegralValueTests);
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->format("Testing %s%n"_s, $$new($ObjectArray, {isInt ? $of("Integer"_s) : $of("Long"_s)}));
	int32_t failures = 0;
	{
		$var($Iterator, i$, $nc($($nc(v)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, testCase, $cast($Map$Entry, i$->next()));
			{
				$var($BigDecimal, bd, $cast($BigDecimal, $nc(testCase)->getKey()));
				$var($Number, expected, $cast($Number, testCase->getValue()));
				try {
					if (isInt) {
						int32_t intValue = $nc(bd)->intValue();
						if (intValue != $nc(($cast($Integer, expected)))->intValue()) {
							failures += reportError(bd, expected, intValue, isInt);
						}
					} else {
						int64_t longValue = $nc(bd)->longValue();
						if (longValue != $nc(($cast($Long, expected)))->longValue()) {
							failures += reportError(bd, expected, longValue, isInt);
						}
					}
				} catch ($Exception& e) {
					++failures;
					$nc($System::err)->format("Unexpected exception %s for %s%n"_s, $$new($ObjectArray, {
						$of(e),
						$($of($nc(bd)->toString()))
					}));
				}
			}
		}
	}
	return failures;
}

int32_t IntegralValueTests::reportError($BigDecimal* bd, $Number* expected, int64_t longValue, bool isInt) {
	$init(IntegralValueTests);
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->format("For %s, scale=%d, expected %d, actual %d, simple %d%n"_s, $$new($ObjectArray, {
		$($of($nc(bd)->toString())),
		$($of($Integer::valueOf(bd->scale()))),
		$($of($Long::valueOf((isInt ? (int64_t)$nc(($cast($Integer, expected)))->intValue() : $nc(($cast($Long, expected)))->longValue())))),
		$($of($Long::valueOf(longValue))),
		$($of($Long::valueOf((isInt ? (int64_t)simpleIntValue(bd) : simpleLongValue(bd)))))
	}));
	return 1;
}

int64_t IntegralValueTests::simpleLongValue($BigDecimal* bd) {
	$init(IntegralValueTests);
	return $nc($($nc(bd)->toBigInteger()))->longValue();
}

int32_t IntegralValueTests::simpleIntValue($BigDecimal* bd) {
	$init(IntegralValueTests);
	return $nc($($nc(bd)->toBigInteger()))->intValue();
}

void clinit$IntegralValueTests($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($new($BigDecimal, "2147483647"_s)));
	$var($Object, var$1, $of($new($BigDecimal, "2147483647.0"_s)));
	$var($Object, var$2, $of($new($BigDecimal, "2147483647.00"_s)));
	$var($Object, var$3, $of($new($BigDecimal, "-2147483647"_s)));
	$var($Object, var$4, $of($new($BigDecimal, "-2147483647.0"_s)));
	$var($Object, var$5, $of($new($BigDecimal, "-2147483648"_s)));
	$var($Object, var$6, $of($new($BigDecimal, "-2147483648.1"_s)));
	$var($Object, var$7, $of($new($BigDecimal, "-2147483648.01"_s)));
	$var($Object, var$8, $of($new($BigDecimal, "-2147483649"_s)));
	$var($Object, var$9, $of($new($BigDecimal, "4294967295"_s)));
	$var($Object, var$10, $of($new($BigDecimal, "4294967296"_s)));
	$var($Object, var$11, $of($new($BigDecimal, "1e32"_s)));
	$var($Object, var$12, $of($new($BigDecimal, "1e31"_s)));
	$var($Object, var$13, $of($new($BigDecimal, "1e0"_s)));
	$var($Object, var$14, $of($new($BigDecimal, "9e-1"_s)));
	$var($Object, var$15, $of($new($BigDecimal, "900e-1"_s)));
	$var($Object, var$16, $of($new($BigDecimal, "900e-2"_s)));
	$var($Object, var$17, $of($new($BigDecimal, "900e-3"_s)));
	$var($Object, var$18, $of($new($BigDecimal, "123456789e-9"_s)));
	$var($Object, var$19, $of($new($BigDecimal, "123456789e-8"_s)));
	$var($Object, var$20, $of($new($BigDecimal, "10000001e1"_s)));
	$var($Object, var$21, $of($new($BigDecimal, "10000001e10"_s)));
	$var($Object, var$22, $of($new($BigDecimal, "10000001e100"_s)));
	$var($Object, var$23, $of($new($BigDecimal, "10000001e1000"_s)));
	$var($Object, var$24, $of($new($BigDecimal, "10000001e10000"_s)));
	$var($Object, var$25, $of($new($BigDecimal, "10000001e100000"_s)));
	$var($Object, var$26, $of($new($BigDecimal, "10000001e1000000"_s)));
	$var($Object, var$27, $of($new($BigDecimal, "10000001e10000000"_s)));
	$var($Object, var$28, $of($new($BigDecimal, "10000001e100000000"_s)));
	$var($Object, var$29, $of($new($BigDecimal, "10000001e1000000000"_s)));
	$var($Object, var$30, $of($new($BigDecimal, "10000001e-1"_s)));
	$var($Object, var$31, $of($new($BigDecimal, "10000001e-10"_s)));
	$var($Object, var$32, $of($new($BigDecimal, "10000001e-100"_s)));
	$var($Object, var$33, $of($new($BigDecimal, "10000001e-1000"_s)));
	$var($Object, var$34, $of($new($BigDecimal, "10000001e-10000"_s)));
	$var($Object, var$35, $of($new($BigDecimal, "10000001e-100000"_s)));
	$var($Object, var$36, $of($new($BigDecimal, "10000001e-1000000"_s)));
	$var($Object, var$37, $of($new($BigDecimal, "10000001e-10000000"_s)));
	$var($Object, var$38, $of($new($BigDecimal, "10000001e-100000000"_s)));
	$var($Object, var$39, $of($new($BigDecimal, "10000001e-1000000000"_s)));
	$var($Object, var$40, $of($new($BigDecimal, "12345.0001"_s)));
	$var($Object, var$41, $of($new($BigDecimal, "12345.9999"_s)));
	$var($Object, var$42, $of($new($BigDecimal, "-12345.0001"_s)));
	$var($Object, var$43, $of($new($BigDecimal, "-12345.9999"_s)));
	$assignStatic(IntegralValueTests::INT_VALUES, $Map::ofEntries($$new($Map$EntryArray, {
		$($Map::entry(var$0, $($Integer::valueOf($Integer::MAX_VALUE)))),
		$($Map::entry(var$1, $($Integer::valueOf($Integer::MAX_VALUE)))),
		$($Map::entry(var$2, $($Integer::valueOf($Integer::MAX_VALUE)))),
		$($Map::entry(var$3, $($Integer::valueOf(-$Integer::MAX_VALUE)))),
		$($Map::entry(var$4, $($Integer::valueOf(-$Integer::MAX_VALUE)))),
		$($Map::entry(var$5, $($Integer::valueOf($Integer::MIN_VALUE)))),
		$($Map::entry(var$6, $($Integer::valueOf($Integer::MIN_VALUE)))),
		$($Map::entry(var$7, $($Integer::valueOf($Integer::MIN_VALUE)))),
		$($Map::entry(var$8, $($Integer::valueOf($Integer::MAX_VALUE)))),
		$($Map::entry(var$9, $($Integer::valueOf(-1)))),
		$($Map::entry(var$10, $($Integer::valueOf(0)))),
		$($Map::entry(var$11, $($Integer::valueOf(0)))),
		$($Map::entry(var$12, $($Integer::valueOf($Integer::MIN_VALUE)))),
		$($Map::entry(var$13, $($Integer::valueOf(1)))),
		$($Map::entry(var$14, $($Integer::valueOf(0)))),
		$($Map::entry(var$15, $($Integer::valueOf(90)))),
		$($Map::entry(var$16, $($Integer::valueOf(9)))),
		$($Map::entry(var$17, $($Integer::valueOf(0)))),
		$($Map::entry(var$18, $($Integer::valueOf(0)))),
		$($Map::entry(var$19, $($Integer::valueOf(1)))),
		$($Map::entry(var$20, $($Integer::valueOf(0x05F5E10A)))),
		$($Map::entry(var$21, $($Integer::valueOf((int32_t)0xB195E400)))),
		$($Map::entry(var$22, $($Integer::valueOf(0)))),
		$($Map::entry(var$23, $($Integer::valueOf(0)))),
		$($Map::entry(var$24, $($Integer::valueOf(0)))),
		$($Map::entry(var$25, $($Integer::valueOf(0)))),
		$($Map::entry(var$26, $($Integer::valueOf(0)))),
		$($Map::entry(var$27, $($Integer::valueOf(0)))),
		$($Map::entry(var$28, $($Integer::valueOf(0)))),
		$($Map::entry(var$29, $($Integer::valueOf(0)))),
		$($Map::entry(var$30, $($Integer::valueOf(0x000F4240)))),
		$($Map::entry(var$31, $($Integer::valueOf(0)))),
		$($Map::entry(var$32, $($Integer::valueOf(0)))),
		$($Map::entry(var$33, $($Integer::valueOf(0)))),
		$($Map::entry(var$34, $($Integer::valueOf(0)))),
		$($Map::entry(var$35, $($Integer::valueOf(0)))),
		$($Map::entry(var$36, $($Integer::valueOf(0)))),
		$($Map::entry(var$37, $($Integer::valueOf(0)))),
		$($Map::entry(var$38, $($Integer::valueOf(0)))),
		$($Map::entry(var$39, $($Integer::valueOf(0)))),
		$($Map::entry(var$40, $($Integer::valueOf(12345)))),
		$($Map::entry(var$41, $($Integer::valueOf(12345)))),
		$($Map::entry(var$42, $($Integer::valueOf(-12345)))),
		$($Map::entry(var$43, $($Integer::valueOf(-12345))))
	})));
	$var($Object, var$44, $of($new($BigDecimal, "9223372036854775807"_s)));
	$var($Object, var$45, $of($new($BigDecimal, "9223372036854775807.0"_s)));
	$var($Object, var$46, $of($new($BigDecimal, "9223372036854775807.00"_s)));
	$var($Object, var$47, $of($new($BigDecimal, "-9223372036854775808"_s)));
	$var($Object, var$48, $of($new($BigDecimal, "-9223372036854775808.1"_s)));
	$var($Object, var$49, $of($new($BigDecimal, "-9223372036854775808.01"_s)));
	$var($Object, var$50, $of($new($BigDecimal, "-9223372036854775809"_s)));
	$var($Object, var$51, $of($new($BigDecimal, "18446744073709551615"_s)));
	$var($Object, var$52, $of($new($BigDecimal, "18446744073709551616"_s)));
	$var($Object, var$53, $of($new($BigDecimal, "1e63"_s)));
	$var($Object, var$54, $of($new($BigDecimal, "-1e63"_s)));
	$var($Object, var$55, $of($new($BigDecimal, "1e64"_s)));
	$var($Object, var$56, $of($new($BigDecimal, "-1e64"_s)));
	$var($Object, var$57, $of($new($BigDecimal, "1e65"_s)));
	$var($Object, var$58, $of($new($BigDecimal, "-1e65"_s)));
	$var($Object, var$59, $of($new($BigDecimal, "1e0"_s)));
	$var($Object, var$60, $of($new($BigDecimal, "9e-1"_s)));
	$var($Object, var$61, $of($new($BigDecimal, "900e-1"_s)));
	$var($Object, var$62, $of($new($BigDecimal, "900e-2"_s)));
	$var($Object, var$63, $of($new($BigDecimal, "900e-3"_s)));
	$var($Object, var$64, $of($new($BigDecimal, "123456789e-9"_s)));
	$var($Object, var$65, $of($new($BigDecimal, "123456789e-8"_s)));
	$var($Object, var$66, $of($new($BigDecimal, "10000001e1"_s)));
	$var($Object, var$67, $of($new($BigDecimal, "10000001e10"_s)));
	$var($Object, var$68, $of($new($BigDecimal, "10000001e100"_s)));
	$var($Object, var$69, $of($new($BigDecimal, "10000001e1000"_s)));
	$var($Object, var$70, $of($new($BigDecimal, "10000001e10000"_s)));
	$var($Object, var$71, $of($new($BigDecimal, "10000001e100000"_s)));
	$var($Object, var$72, $of($new($BigDecimal, "10000001e1000000"_s)));
	$var($Object, var$73, $of($new($BigDecimal, "10000001e10000000"_s)));
	$var($Object, var$74, $of($new($BigDecimal, "10000001e100000000"_s)));
	$var($Object, var$75, $of($new($BigDecimal, "10000001e1000000000"_s)));
	$var($Object, var$76, $of($new($BigDecimal, "10000001e-1"_s)));
	$var($Object, var$77, $of($new($BigDecimal, "10000001e-10"_s)));
	$var($Object, var$78, $of($new($BigDecimal, "10000001e-100"_s)));
	$var($Object, var$79, $of($new($BigDecimal, "10000001e-1000"_s)));
	$var($Object, var$80, $of($new($BigDecimal, "10000001e-10000"_s)));
	$var($Object, var$81, $of($new($BigDecimal, "10000001e-100000"_s)));
	$var($Object, var$82, $of($new($BigDecimal, "10000001e-1000000"_s)));
	$var($Object, var$83, $of($new($BigDecimal, "10000001e-10000000"_s)));
	$var($Object, var$84, $of($new($BigDecimal, "10000001e-100000000"_s)));
	$var($Object, var$85, $of($new($BigDecimal, "10000001e-1000000000"_s)));
	$var($Object, var$86, $of($new($BigDecimal, "12345.0001"_s)));
	$var($Object, var$87, $of($new($BigDecimal, "12345.9999"_s)));
	$var($Object, var$88, $of($new($BigDecimal, "-12345.0001"_s)));
	$var($Object, var$89, $of($new($BigDecimal, "-12345.9999"_s)));
	$assignStatic(IntegralValueTests::LONG_VALUES, $Map::ofEntries($$new($Map$EntryArray, {
		$($Map::entry(var$44, $($Long::valueOf($Long::MAX_VALUE)))),
		$($Map::entry(var$45, $($Long::valueOf($Long::MAX_VALUE)))),
		$($Map::entry(var$46, $($Long::valueOf($Long::MAX_VALUE)))),
		$($Map::entry(var$47, $($Long::valueOf($Long::MIN_VALUE)))),
		$($Map::entry(var$48, $($Long::valueOf($Long::MIN_VALUE)))),
		$($Map::entry(var$49, $($Long::valueOf($Long::MIN_VALUE)))),
		$($Map::entry(var$50, $($Long::valueOf((int64_t)0x7FFFFFFFFFFFFFFF)))),
		$($Map::entry(var$51, $($Long::valueOf((int64_t)-1)))),
		$($Map::entry(var$52, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$53, $($Long::valueOf((int64_t)0x8000000000000000)))),
		$($Map::entry(var$54, $($Long::valueOf((int64_t)0x8000000000000000)))),
		$($Map::entry(var$55, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$56, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$57, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$58, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$59, $($Long::valueOf((int64_t)1)))),
		$($Map::entry(var$60, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$61, $($Long::valueOf((int64_t)90)))),
		$($Map::entry(var$62, $($Long::valueOf((int64_t)9)))),
		$($Map::entry(var$63, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$64, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$65, $($Long::valueOf((int64_t)1)))),
		$($Map::entry(var$66, $($Long::valueOf((int64_t)100000010)))),
		$($Map::entry(var$67, $($Long::valueOf((int64_t)0x0163457AB195E400)))),
		$($Map::entry(var$68, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$69, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$70, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$71, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$72, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$73, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$74, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$75, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$76, $($Long::valueOf((int64_t)1000000)))),
		$($Map::entry(var$77, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$78, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$79, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$80, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$81, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$82, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$83, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$84, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$85, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$86, $($Long::valueOf((int64_t)12345)))),
		$($Map::entry(var$87, $($Long::valueOf((int64_t)12345)))),
		$($Map::entry(var$88, $($Long::valueOf((int64_t)-12345)))),
		$($Map::entry(var$89, $($Long::valueOf((int64_t)-12345))))
	})));
}

IntegralValueTests::IntegralValueTests() {
}

$Class* IntegralValueTests::load$($String* name, bool initialize) {
	$loadClass(IntegralValueTests, name, initialize, &_IntegralValueTests_ClassInfo_, clinit$IntegralValueTests, allocate$IntegralValueTests);
	return class$;
}

$Class* IntegralValueTests::class$ = nullptr;