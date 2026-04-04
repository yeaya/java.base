#include <LongValueExactTests.h>
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
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;

void LongValueExactTests::init$() {
}

void LongValueExactTests::main($StringArray* args) {
	$useLocalObjectStack();
	int32_t failures = 0;
	failures += longValueExactSuccessful();
	failures += longValueExactExceptional();
	if (failures > 0) {
		$throwNew($RuntimeException, $$str({"Incurred "_s, $$str(failures), " failures while testing longValueExact."_s}));
	}
}

int64_t LongValueExactTests::simpleLongValueExact($BigDecimal* bd) {
	return $($nc(bd)->toBigIntegerExact())->longValue();
}

int32_t LongValueExactTests::longValueExactSuccessful() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($Object, var$0, $new($BigDecimal, "9223372036854775807"_s));
	$var($Object, var$1, $new($BigDecimal, "9223372036854775807.0"_s));
	$var($Object, var$2, $new($BigDecimal, "9223372036854775807.00"_s));
	$var($Object, var$3, $new($BigDecimal, "-9223372036854775808"_s));
	$var($Object, var$4, $new($BigDecimal, "-9223372036854775808.0"_s));
	$var($Object, var$5, $new($BigDecimal, "-9223372036854775808.00"_s));
	$var($Object, var$6, $new($BigDecimal, "1e0"_s));
	$init($BigInteger);
	$var($Object, var$7, $new($BigDecimal, $BigInteger::ONE, -18));
	$var($Object, var$8, $new($BigDecimal, "0e13"_s));
	$var($Object, var$9, $new($BigDecimal, "0e64"_s));
	$var($Object, var$10, $new($BigDecimal, "0e1024"_s));
	$var($Object, var$11, $new($BigDecimal, "10.000000000000000000000000000000000"_s));
	$var($Map, successCases, $Map::ofEntries($$new($Map$EntryArray, {
		$($Map::entry(var$0, $($Long::valueOf($Long::MAX_VALUE)))),
		$($Map::entry(var$1, $($Long::valueOf($Long::MAX_VALUE)))),
		$($Map::entry(var$2, $($Long::valueOf($Long::MAX_VALUE)))),
		$($Map::entry(var$3, $($Long::valueOf($Long::MIN_VALUE)))),
		$($Map::entry(var$4, $($Long::valueOf($Long::MIN_VALUE)))),
		$($Map::entry(var$5, $($Long::valueOf($Long::MIN_VALUE)))),
		$($Map::entry(var$6, $($Long::valueOf(1)))),
		$($Map::entry(var$7, $($Long::valueOf((int64_t)1000000000000000000)))),
		$($Map::entry(var$8, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$9, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$10, $($Long::valueOf((int64_t)0)))),
		$($Map::entry(var$11, $($Long::valueOf(10))))
	})));
	{
		$var($Iterator, i$, $$nc($nc(successCases)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, testCase, $cast($Map$Entry, i$->next()));
			{
				$var($BigDecimal, bd, $cast($BigDecimal, $nc(testCase)->getKey()));
				int64_t expected = $$sure($Long, testCase->getValue())->longValue();
				try {
					int64_t longValueExact = $nc(bd)->longValueExact();
					if (expected != longValueExact || longValueExact != simpleLongValueExact(bd)) {
						++failures;
						$nc($System::err)->println($$str({"Unexpected longValueExact result "_s, $$str(longValueExact), " on "_s, bd}));
					}
				} catch ($Exception& e) {
					++failures;
					$var($StringBuilder, var$12, $new($StringBuilder));
					var$12->append("Error on "_s);
					var$12->append(bd);
					var$12->append("\tException message:"_s);
					var$12->append($(e->getMessage()));
					$nc($System::err)->println($$str(var$12));
				}
			}
		}
	}
	return failures;
}

int32_t LongValueExactTests::longValueExactExceptional() {
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($Object, var$0, $new($BigDecimal, "9223372036854775808"_s));
	$var($Object, var$1, $new($BigDecimal, "9223372036854775808.0"_s));
	$var($Object, var$2, $new($BigDecimal, "9223372036854775808.00"_s));
	$var($Object, var$3, $new($BigDecimal, "-9223372036854775809"_s));
	$var($Object, var$4, $new($BigDecimal, "-9223372036854775808.1"_s));
	$var($Object, var$5, $new($BigDecimal, "-9223372036854775808.01"_s));
	$var($Object, var$6, $new($BigDecimal, "9999999999999999999"_s));
	$var($Object, var$7, $new($BigDecimal, "10000000000000000000"_s));
	$var($Object, var$8, $new($BigDecimal, "0.99"_s));
	$var($List, exceptionalCases, $List::of(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, $$new($BigDecimal, "0.999999999999999999999"_s)));
	{
		$var($Iterator, i$, $nc(exceptionalCases)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($BigDecimal, bd, $cast($BigDecimal, i$->next()));
			try {
				int64_t longValueExact = $nc(bd)->longValueExact();
				++failures;
				$nc($System::err)->println($$str({"Unexpected non-exceptional longValueExact on "_s, bd}));
			} catch ($ArithmeticException& e) {
			}
		}
	}
	return failures;
}

LongValueExactTests::LongValueExactTests() {
}

$Class* LongValueExactTests::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LongValueExactTests, init$, void)},
		{"longValueExactExceptional", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(LongValueExactTests, longValueExactExceptional, int32_t)},
		{"longValueExactSuccessful", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(LongValueExactTests, longValueExactSuccessful, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(LongValueExactTests, main, void, $StringArray*)},
		{"simpleLongValueExact", "(Ljava/math/BigDecimal;)J", nullptr, $PRIVATE | $STATIC, $staticMethod(LongValueExactTests, simpleLongValueExact, int64_t, $BigDecimal*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LongValueExactTests",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LongValueExactTests, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongValueExactTests);
	});
	return class$;
}

$Class* LongValueExactTests::class$ = nullptr;