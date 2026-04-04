#include <java/text/DigitList$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/math/RoundingMode.h>
#include <java/text/DigitList.h>
#include <jcpp.h>

#undef CEILING
#undef DOWN
#undef FLOOR
#undef HALF_DOWN
#undef HALF_EVEN
#undef HALF_UP
#undef UNNECESSARY
#undef UP

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $RoundingMode = ::java::math::RoundingMode;

namespace java {
	namespace text {

$ints* DigitList$1::$SwitchMap$java$math$RoundingMode = nullptr;

void DigitList$1::clinit$($Class* clazz) {
	$assignStatic(DigitList$1::$SwitchMap$java$math$RoundingMode, $new($ints, $($RoundingMode::values())->length));
	{
		try {
			DigitList$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::UP->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DigitList$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::DOWN->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DigitList$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::CEILING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DigitList$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::FLOOR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DigitList$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::HALF_UP->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DigitList$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::HALF_DOWN->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DigitList$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::HALF_EVEN->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DigitList$1::$SwitchMap$java$math$RoundingMode->set($RoundingMode::UNNECESSARY->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DigitList$1::DigitList$1() {
}

$Class* DigitList$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$math$RoundingMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DigitList$1, $SwitchMap$java$math$RoundingMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.text.DigitList",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.DigitList$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.text.DigitList$1",
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
		"java.text.DigitList"
	};
	$loadClass(DigitList$1, name, initialize, &classInfo$$, DigitList$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DigitList$1);
	});
	return class$;
}

$Class* DigitList$1::class$ = nullptr;

	} // text
} // java