#include <FormatMicroBenchmark$1.h>

#include <FormatMicroBenchmark$BenchType.h>
#include <FormatMicroBenchmark.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ALL_NINES_BENCH
#undef FAIR_BENCH
#undef FAIR_SIMPLE_BENCH
#undef FRACTIONAL_ALL_NINES_BENCH
#undef FRACTIONAL_BENCH
#undef INTEGER_BENCH
#undef SMALL_INTEGRAL_BENCH
#undef TIE_BENCH

using $FormatMicroBenchmark = ::FormatMicroBenchmark;
using $FormatMicroBenchmark$BenchType = ::FormatMicroBenchmark$BenchType;
using $FormatMicroBenchmark$BenchTypeArray = $Array<FormatMicroBenchmark$BenchType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$FieldInfo _FormatMicroBenchmark$1_FieldInfo_[] = {
	{"$SwitchMap$FormatMicroBenchmark$BenchType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FormatMicroBenchmark$1, $SwitchMap$FormatMicroBenchmark$BenchType)},
	{}
};

$EnclosingMethodInfo _FormatMicroBenchmark$1_EnclosingMethodInfo_ = {
	"FormatMicroBenchmark",
	nullptr,
	nullptr
};

$InnerClassInfo _FormatMicroBenchmark$1_InnerClassesInfo_[] = {
	{"FormatMicroBenchmark$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _FormatMicroBenchmark$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"FormatMicroBenchmark$1",
	"java.lang.Object",
	nullptr,
	_FormatMicroBenchmark$1_FieldInfo_,
	nullptr,
	nullptr,
	&_FormatMicroBenchmark$1_EnclosingMethodInfo_,
	_FormatMicroBenchmark$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FormatMicroBenchmark"
};

$Object* allocate$FormatMicroBenchmark$1($Class* clazz) {
	return $of($alloc(FormatMicroBenchmark$1));
}

$ints* FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType = nullptr;

void clinit$FormatMicroBenchmark$1($Class* class$) {
	$assignStatic(FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType, $new($ints, $($FormatMicroBenchmark$BenchType::values())->length));
	{
		try {
			$nc(FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType)->set($FormatMicroBenchmark$BenchType::INTEGER_BENCH->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType)->set($FormatMicroBenchmark$BenchType::FRACTIONAL_BENCH->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType)->set($FormatMicroBenchmark$BenchType::SMALL_INTEGRAL_BENCH->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType)->set($FormatMicroBenchmark$BenchType::FRACTIONAL_ALL_NINES_BENCH->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType)->set($FormatMicroBenchmark$BenchType::ALL_NINES_BENCH->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType)->set($FormatMicroBenchmark$BenchType::FAIR_SIMPLE_BENCH->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType)->set($FormatMicroBenchmark$BenchType::FAIR_BENCH->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(FormatMicroBenchmark$1::$SwitchMap$FormatMicroBenchmark$BenchType)->set($FormatMicroBenchmark$BenchType::TIE_BENCH->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

FormatMicroBenchmark$1::FormatMicroBenchmark$1() {
}

$Class* FormatMicroBenchmark$1::load$($String* name, bool initialize) {
	$loadClass(FormatMicroBenchmark$1, name, initialize, &_FormatMicroBenchmark$1_ClassInfo_, clinit$FormatMicroBenchmark$1, allocate$FormatMicroBenchmark$1);
	return class$;
}

$Class* FormatMicroBenchmark$1::class$ = nullptr;