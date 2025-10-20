#include <java/time/Year$1.h>

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
#include <java/time/Year.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef CENTURIES
#undef DECADES
#undef ERA
#undef ERAS
#undef MILLENNIA
#undef YEAR
#undef YEARS
#undef YEAR_OF_ERA

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ChronoUnitArray = $Array<::java::time::temporal::ChronoUnit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Year = ::java::time::Year;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$FieldInfo _Year$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Year$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Year$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _Year$1_EnclosingMethodInfo_ = {
	"java.time.Year",
	nullptr,
	nullptr
};

$InnerClassInfo _Year$1_InnerClassesInfo_[] = {
	{"java.time.Year$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Year$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.Year$1",
	"java.lang.Object",
	nullptr,
	_Year$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Year$1_EnclosingMethodInfo_,
	_Year$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Year"
};

$Object* allocate$Year$1($Class* clazz) {
	return $of($alloc(Year$1));
}

$ints* Year$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* Year$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$Year$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Year$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(Year$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::YEARS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Year$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::DECADES->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Year$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::CENTURIES->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Year$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLENNIA->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Year$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::ERAS->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
	$assignStatic(Year$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(Year$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Year$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Year$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ERA->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

Year$1::Year$1() {
}

$Class* Year$1::load$($String* name, bool initialize) {
	$loadClass(Year$1, name, initialize, &_Year$1_ClassInfo_, clinit$Year$1, allocate$Year$1);
	return class$;
}

$Class* Year$1::class$ = nullptr;

	} // time
} // java