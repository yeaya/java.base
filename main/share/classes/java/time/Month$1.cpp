#include <java/time/Month$1.h>

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
#include <java/time/Month.h>
#include <jcpp.h>

#undef APRIL
#undef AUGUST
#undef DECEMBER
#undef FEBRUARY
#undef JANUARY
#undef JULY
#undef JUNE
#undef MARCH
#undef MAY
#undef NOVEMBER
#undef OCTOBER
#undef SEPTEMBER

using $MonthArray = $Array<::java::time::Month>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Month = ::java::time::Month;

namespace java {
	namespace time {

$FieldInfo _Month$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$Month", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Month$1, $SwitchMap$java$time$Month)},
	{}
};

$EnclosingMethodInfo _Month$1_EnclosingMethodInfo_ = {
	"java.time.Month",
	nullptr,
	nullptr
};

$InnerClassInfo _Month$1_InnerClassesInfo_[] = {
	{"java.time.Month$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Month$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.Month$1",
	"java.lang.Object",
	nullptr,
	_Month$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Month$1_EnclosingMethodInfo_,
	_Month$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Month"
};

$Object* allocate$Month$1($Class* clazz) {
	return $of($alloc(Month$1));
}

$ints* Month$1::$SwitchMap$java$time$Month = nullptr;

void clinit$Month$1($Class* class$) {
	$assignStatic(Month$1::$SwitchMap$java$time$Month, $new($ints, $($Month::values())->length));
	{
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::FEBRUARY->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::APRIL->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::JUNE->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::SEPTEMBER->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::NOVEMBER->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::JANUARY->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::MARCH->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::MAY->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::JULY->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::AUGUST->ordinal(), 10);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::OCTOBER->ordinal(), 11);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Month$1::$SwitchMap$java$time$Month)->set($Month::DECEMBER->ordinal(), 12);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

Month$1::Month$1() {
}

$Class* Month$1::load$($String* name, bool initialize) {
	$loadClass(Month$1, name, initialize, &_Month$1_ClassInfo_, clinit$Month$1, allocate$Month$1);
	return class$;
}

$Class* Month$1::class$ = nullptr;

	} // time
} // java