#include <SquareRootTests$1.h>
#include <SquareRootTests.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/math/RoundingMode.h>
#include <jcpp.h>

#undef CEILING
#undef DOWN
#undef FLOOR
#undef HALF_DOWN
#undef HALF_EVEN
#undef HALF_UP
#undef UP

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $RoundingMode = ::java::math::RoundingMode;

$ints* SquareRootTests$1::$SwitchMap$java$math$RoundingMode = nullptr;

void SquareRootTests$1::clinit$($Class* clazz) {
	$assignStatic(SquareRootTests$1::$SwitchMap$java$math$RoundingMode, $new($ints, $($RoundingMode::values())->length));
	{
		try {
			SquareRootTests$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::DOWN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SquareRootTests$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::FLOOR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SquareRootTests$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::UP->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SquareRootTests$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::CEILING->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SquareRootTests$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::HALF_DOWN->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SquareRootTests$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::HALF_EVEN->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SquareRootTests$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::HALF_UP->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SquareRootTests$1::SquareRootTests$1() {
}

$Class* SquareRootTests$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$math$RoundingMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SquareRootTests$1, $SwitchMap$java$math$RoundingMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SquareRootTests",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SquareRootTests$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"SquareRootTests$1",
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
		"SquareRootTests"
	};
	$loadClass(SquareRootTests$1, name, initialize, &classInfo$$, SquareRootTests$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SquareRootTests$1);
	});
	return class$;
}

$Class* SquareRootTests$1::class$ = nullptr;