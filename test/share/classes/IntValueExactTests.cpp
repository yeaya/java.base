#include <IntValueExactTests.h>

#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE
#undef ONE

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $PrintStream = ::java::io::PrintStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

$MethodInfo _IntValueExactTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IntValueExactTests, init$, void)},
	{"intValueExactExceptional", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(IntValueExactTests, intValueExactExceptional, int32_t)},
	{"intValueExactSuccessful", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(IntValueExactTests, intValueExactSuccessful, int32_t)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(IntValueExactTests, main, void, $StringArray*)},
	{"simpleIntValueExact", "(Ljava/math/BigDecimal;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(IntValueExactTests, simpleIntValueExact, int32_t, $BigDecimal*)},
	{}
};

$ClassInfo _IntValueExactTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IntValueExactTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IntValueExactTests_MethodInfo_
};

$Object* allocate$IntValueExactTests($Class* clazz) {
	return $of($alloc(IntValueExactTests));
}

void IntValueExactTests::init$() {
}

void IntValueExactTests::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	failures += intValueExactSuccessful();
	failures += intValueExactExceptional();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures while testing intValueExact."_s}));
	}
}

int32_t IntValueExactTests::simpleIntValueExact($BigDecimal* bd) {
	return $nc($($nc(bd)->toBigIntegerExact()))->intValue();
}

int32_t IntValueExactTests::intValueExactSuccessful() {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($Object, var$0, $of($new($BigDecimal, "2147483647"_s)));
	$var($Object, var$1, $of($new($BigDecimal, "2147483647.0"_s)));
	$var($Object, var$2, $of($new($BigDecimal, "2147483647.00"_s)));
	$var($Object, var$3, $of($new($BigDecimal, "-2147483648"_s)));
	$var($Object, var$4, $of($new($BigDecimal, "-2147483648.0"_s)));
	$var($Object, var$5, $of($new($BigDecimal, "-2147483648.00"_s)));
	$var($Object, var$6, $of($new($BigDecimal, "1e0"_s)));
	$init($BigInteger);
	$var($Object, var$7, $of($new($BigDecimal, $BigInteger::ONE, -9)));
	$var($Object, var$8, $of($new($BigDecimal, "0e13"_s)));
	$var($Object, var$9, $of($new($BigDecimal, "0e32"_s)));
	$var($Object, var$10, $of($new($BigDecimal, "0e512"_s)));
	$var($Object, var$11, $of($new($BigDecimal, "10.000000000000000000000000000000000"_s)));
	$var($Map, successCases, $Map::ofEntries($$new($Map$EntryArray, {
		$($Map::entry(var$0, $($Integer::valueOf($Integer::MAX_VALUE)))),
		$($Map::entry(var$1, $($Integer::valueOf($Integer::MAX_VALUE)))),
		$($Map::entry(var$2, $($Integer::valueOf($Integer::MAX_VALUE)))),
		$($Map::entry(var$3, $($Integer::valueOf($Integer::MIN_VALUE)))),
		$($Map::entry(var$4, $($Integer::valueOf($Integer::MIN_VALUE)))),
		$($Map::entry(var$5, $($Integer::valueOf($Integer::MIN_VALUE)))),
		$($Map::entry(var$6, $($Integer::valueOf(1)))),
		$($Map::entry(var$7, $($Integer::valueOf(0x3B9ACA00)))),
		$($Map::entry(var$8, $($Integer::valueOf(0)))),
		$($Map::entry(var$9, $($Integer::valueOf(0)))),
		$($Map::entry(var$10, $($Integer::valueOf(0)))),
		$($Map::entry(var$11, $($Integer::valueOf(10))))
	})));
	{
		$var($Iterator, i$, $nc($($nc(successCases)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, testCase, $cast($Map$Entry, i$->next()));
			{
				$var($BigDecimal, bd, $cast($BigDecimal, $nc(testCase)->getKey()));
				int32_t expected = $nc(($cast($Integer, $(testCase->getValue()))))->intValue();
				try {
					int32_t intValueExact = $nc(bd)->intValueExact();
					if (expected != intValueExact || intValueExact != simpleIntValueExact(bd)) {
						++failures;
						$nc($System::err)->println($$str({"Unexpected intValueExact result "_s, $$str(intValueExact), " on "_s, bd}));
					}
				} catch ($Exception& e) {
					++failures;
					$var($String, var$12, $$str({"Error on "_s, bd, "\tException message:"_s}));
					$nc($System::err)->println($$concat(var$12, $(e->getMessage())));
				}
			}
		}
	}
	return failures;
}

int32_t IntValueExactTests::intValueExactExceptional() {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	$var($Object, var$0, $of($new($BigDecimal, "2147483648"_s)));
	$var($Object, var$1, $of($new($BigDecimal, "2147483648.0"_s)));
	$var($Object, var$2, $of($new($BigDecimal, "2147483648.00"_s)));
	$var($Object, var$3, $of($new($BigDecimal, "-2147483649"_s)));
	$var($Object, var$4, $of($new($BigDecimal, "-2147483649.1"_s)));
	$var($Object, var$5, $of($new($BigDecimal, "-2147483649.01"_s)));
	$var($Object, var$6, $of($new($BigDecimal, "9999999999999999999999999999999"_s)));
	$var($Object, var$7, $of($new($BigDecimal, "10000000000000000000000000000000"_s)));
	$var($Object, var$8, $of($new($BigDecimal, "0.99"_s)));
	$var($List, exceptionalCases, $List::of(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, $$new($BigDecimal, "0.999999999999999999999"_s)));
	{
		$var($Iterator, i$, $nc(exceptionalCases)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($BigDecimal, bd, $cast($BigDecimal, i$->next()));
			{
				try {
					int32_t intValueExact = $nc(bd)->intValueExact();
					++failures;
					$nc($System::err)->println($$str({"Unexpected non-exceptional intValueExact on "_s, bd}));
				} catch ($ArithmeticException& e) {
				}
			}
		}
	}
	return failures;
}

IntValueExactTests::IntValueExactTests() {
}

$Class* IntValueExactTests::load$($String* name, bool initialize) {
	$loadClass(IntValueExactTests, name, initialize, &_IntValueExactTests_ClassInfo_, allocate$IntValueExactTests);
	return class$;
}

$Class* IntValueExactTests::class$ = nullptr;