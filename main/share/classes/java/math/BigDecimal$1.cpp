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

$FieldInfo _BigDecimal$1_FieldInfo_[] = {
	{"$SwitchMap$java$math$RoundingMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BigDecimal$1, $SwitchMap$java$math$RoundingMode)},
	{}
};

$EnclosingMethodInfo _BigDecimal$1_EnclosingMethodInfo_ = {
	"java.math.BigDecimal",
	nullptr,
	nullptr
};

$InnerClassInfo _BigDecimal$1_InnerClassesInfo_[] = {
	{"java.math.BigDecimal$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _BigDecimal$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.math.BigDecimal$1",
	"java.lang.Object",
	nullptr,
	_BigDecimal$1_FieldInfo_,
	nullptr,
	nullptr,
	&_BigDecimal$1_EnclosingMethodInfo_,
	_BigDecimal$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.math.BigDecimal"
};

$Object* allocate$BigDecimal$1($Class* clazz) {
	return $of($alloc(BigDecimal$1));
}

$ints* BigDecimal$1::$SwitchMap$java$math$RoundingMode = nullptr;

void clinit$BigDecimal$1($Class* class$) {
	$assignStatic(BigDecimal$1::$SwitchMap$java$math$RoundingMode, $new($ints, $($RoundingMode::values())->length));
	{
		try {
			$nc(BigDecimal$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::HALF_UP->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BigDecimal$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::HALF_DOWN->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BigDecimal$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::HALF_EVEN->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BigDecimal$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::DOWN->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BigDecimal$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::FLOOR->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BigDecimal$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::UP->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(BigDecimal$1::$SwitchMap$java$math$RoundingMode)->set($RoundingMode::CEILING->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

BigDecimal$1::BigDecimal$1() {
}

$Class* BigDecimal$1::load$($String* name, bool initialize) {
	$loadClass(BigDecimal$1, name, initialize, &_BigDecimal$1_ClassInfo_, clinit$BigDecimal$1, allocate$BigDecimal$1);
	return class$;
}

$Class* BigDecimal$1::class$ = nullptr;

	} // math
} // java