#include <java/text/DigitList$1.h>

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
#include <java/math/RoundingMode.h>
#include <java/text/DigitList.h>
#include <jcpp.h>

#undef DOWN
#undef FLOOR
#undef UNNECESSARY
#undef CEILING
#undef HALF_EVEN
#undef UP
#undef HALF_UP
#undef HALF_DOWN

using $RoundingModeArray = $Array<::java::math::RoundingMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $RoundingMode = ::java::math::RoundingMode;
using $DigitList = ::java::text::DigitList;

namespace java {
	namespace text {

$FieldInfo _DigitList$1_FieldInfo_[] = {
	{"$SwitchMap$java$math$RoundingMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DigitList$1, $SwitchMap$java$math$RoundingMode)},
	{}
};

$EnclosingMethodInfo _DigitList$1_EnclosingMethodInfo_ = {
	"java.text.DigitList",
	nullptr,
	nullptr
};

$InnerClassInfo _DigitList$1_InnerClassesInfo_[] = {
	{"java.text.DigitList$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DigitList$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.text.DigitList$1",
	"java.lang.Object",
	nullptr,
	_DigitList$1_FieldInfo_,
	nullptr,
	nullptr,
	&_DigitList$1_EnclosingMethodInfo_,
	_DigitList$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.DigitList"
};

$Object* allocate$DigitList$1($Class* clazz) {
	return $of($alloc(DigitList$1));
}

$ints* DigitList$1::$SwitchMap$java$math$RoundingMode = nullptr;

void clinit$DigitList$1($Class* class$) {
	$assignStatic(DigitList$1::$SwitchMap$java$math$RoundingMode, $new($ints, $($RoundingMode::values())->length));
	{
		try {
			$nc(DigitList$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::UP->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DigitList$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::DOWN->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DigitList$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::CEILING->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DigitList$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::FLOOR->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DigitList$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::HALF_UP->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DigitList$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::HALF_DOWN->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DigitList$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::HALF_EVEN->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DigitList$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::UNNECESSARY->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

DigitList$1::DigitList$1() {
}

$Class* DigitList$1::load$($String* name, bool initialize) {
	$loadClass(DigitList$1, name, initialize, &_DigitList$1_ClassInfo_, clinit$DigitList$1, allocate$DigitList$1);
	return class$;
}

$Class* DigitList$1::class$ = nullptr;

	} // text
} // java