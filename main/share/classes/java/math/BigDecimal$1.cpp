#include <java/math/BigDecimal$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/math/BigDecimal.h>
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

namespace java {
	namespace math {

$ints* BigDecimal$1::$SwitchMap$java$math$RoundingMode = nullptr;

void BigDecimal$1::clinit$($Class* clazz) {
	$assignStatic(BigDecimal$1::$SwitchMap$java$math$RoundingMode, $new($ints, $($RoundingMode::values())->length));
	{
		try {
			BigDecimal$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::HALF_UP->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BigDecimal$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::HALF_DOWN->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BigDecimal$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::HALF_EVEN->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BigDecimal$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::DOWN->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BigDecimal$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::FLOOR->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BigDecimal$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::UP->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			BigDecimal$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::CEILING->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

BigDecimal$1::BigDecimal$1() {
}

$Class* BigDecimal$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$math$RoundingMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BigDecimal$1, $SwitchMap$java$math$RoundingMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.math.BigDecimal",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.math.BigDecimal$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.math.BigDecimal$1",
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
		"java.math.BigDecimal"
	};
	$loadClass(BigDecimal$1, name, initialize, &classInfo$$, BigDecimal$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BigDecimal$1);
	});
	return class$;
}

$Class* BigDecimal$1::class$ = nullptr;

	} // math
} // java