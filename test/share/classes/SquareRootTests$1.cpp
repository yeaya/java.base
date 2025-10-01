#include <SquareRootTests$1.h>

#include <SquareRootTests.h>
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
#include <jcpp.h>

#undef DOWN
#undef FLOOR
#undef CEILING
#undef HALF_EVEN
#undef UP
#undef HALF_UP
#undef HALF_DOWN

using $SquareRootTests = ::SquareRootTests;
using $RoundingModeArray = $Array<::java::math::RoundingMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $RoundingMode = ::java::math::RoundingMode;

$FieldInfo _SquareRootTests$1_FieldInfo_[] = {
	{"$SwitchMap$java$math$RoundingMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SquareRootTests$1, $SwitchMap$java$math$RoundingMode)},
	{}
};

$EnclosingMethodInfo _SquareRootTests$1_EnclosingMethodInfo_ = {
	"SquareRootTests",
	nullptr,
	nullptr
};

$InnerClassInfo _SquareRootTests$1_InnerClassesInfo_[] = {
	{"SquareRootTests$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _SquareRootTests$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"SquareRootTests$1",
	"java.lang.Object",
	nullptr,
	_SquareRootTests$1_FieldInfo_,
	nullptr,
	nullptr,
	&_SquareRootTests$1_EnclosingMethodInfo_,
	_SquareRootTests$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SquareRootTests"
};

$Object* allocate$SquareRootTests$1($Class* clazz) {
	return $of($alloc(SquareRootTests$1));
}

$ints* SquareRootTests$1::$SwitchMap$java$math$RoundingMode = nullptr;

void clinit$SquareRootTests$1($Class* class$) {
	$assignStatic(SquareRootTests$1::$SwitchMap$java$math$RoundingMode, $new($ints, $($RoundingMode::values())->length));
	{
		try {
			$nc(SquareRootTests$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::DOWN->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SquareRootTests$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::FLOOR->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SquareRootTests$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::UP->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SquareRootTests$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::CEILING->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SquareRootTests$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::HALF_DOWN->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SquareRootTests$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::HALF_EVEN->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SquareRootTests$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::HALF_UP->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

SquareRootTests$1::SquareRootTests$1() {
}

$Class* SquareRootTests$1::load$($String* name, bool initialize) {
	$loadClass(SquareRootTests$1, name, initialize, &_SquareRootTests$1_ClassInfo_, clinit$SquareRootTests$1, allocate$SquareRootTests$1);
	return class$;
}

$Class* SquareRootTests$1::class$ = nullptr;