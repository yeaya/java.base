#include <FormatMicroBenchmark$1.h>
#include <FormatMicroBenchmark$BenchType.h>
#include <FormatMicroBenchmark.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ALL_NINES_BENCH
#undef FAIR_BENCH
#undef FAIR_SIMPLE_BENCH
#undef FRACTIONAL_ALL_NINES_BENCH
#undef FRACTIONAL_BENCH
#undef INTEGER_BENCH
#undef SMALL_INTEGRAL_BENCH
#undef TIE_BENCH

using $FormatMicroBenchmark$BenchType = ::FormatMicroBenchmark$BenchType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$ints* FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType = nullptr;

void FormatMicroBenchmark$1::clinit$($Class* clazz) {
	$assignStatic(FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType, $new($ints, $($FormatMicroBenchmark$BenchType::values())->length));
	{
		try {
			FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType->set($FormatMicroBenchmark$BenchType::INTEGER_BENCH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType->set($FormatMicroBenchmark$BenchType::FRACTIONAL_BENCH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType->set($FormatMicroBenchmark$BenchType::SMALL_INTEGRAL_BENCH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType->set($FormatMicroBenchmark$BenchType::FRACTIONAL_ALL_NINES_BENCH->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType->set($FormatMicroBenchmark$BenchType::ALL_NINES_BENCH->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType->set($FormatMicroBenchmark$BenchType::FAIR_SIMPLE_BENCH->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType->set($FormatMicroBenchmark$BenchType::FAIR_BENCH->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType->set($FormatMicroBenchmark$BenchType::TIE_BENCH->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

FormatMicroBenchmark$1::FormatMicroBenchmark$1() {
}

$Class* FormatMicroBenchmark$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$FormatMicroBenchmark$BenchType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FormatMicroBenchmark$1, $SwitchMap$FormatMicroBenchmark$BenchType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FormatMicroBenchmark",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FormatMicroBenchmark$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"FormatMicroBenchmark$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FormatMicroBenchmark"
	};
	$loadClass(FormatMicroBenchmark$1, name, initialize, &classInfo$$, FormatMicroBenchmark$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FormatMicroBenchmark$1);
	});
	return class$;
}

$Class* FormatMicroBenchmark$1::class$ = nullptr;