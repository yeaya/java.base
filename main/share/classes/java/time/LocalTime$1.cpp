#include <java/time/LocalTime$1.h>

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
#include <java/time/LocalTime.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef AMPM_OF_DAY
#undef CLOCK_HOUR_OF_AMPM
#undef CLOCK_HOUR_OF_DAY
#undef HALF_DAYS
#undef HOURS
#undef HOUR_OF_AMPM
#undef HOUR_OF_DAY
#undef MICROS
#undef MICRO_OF_DAY
#undef MICRO_OF_SECOND
#undef MILLIS
#undef MILLI_OF_DAY
#undef MILLI_OF_SECOND
#undef MINUTES
#undef MINUTE_OF_DAY
#undef MINUTE_OF_HOUR
#undef NANOS
#undef NANO_OF_DAY
#undef NANO_OF_SECOND
#undef SECONDS
#undef SECOND_OF_DAY
#undef SECOND_OF_MINUTE

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ChronoUnitArray = $Array<::java::time::temporal::ChronoUnit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LocalTime = ::java::time::LocalTime;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$FieldInfo _LocalTime$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocalTime$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocalTime$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _LocalTime$1_EnclosingMethodInfo_ = {
	"java.time.LocalTime",
	nullptr,
	nullptr
};

$InnerClassInfo _LocalTime$1_InnerClassesInfo_[] = {
	{"java.time.LocalTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _LocalTime$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.LocalTime$1",
	"java.lang.Object",
	nullptr,
	_LocalTime$1_FieldInfo_,
	nullptr,
	nullptr,
	&_LocalTime$1_EnclosingMethodInfo_,
	_LocalTime$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.LocalTime"
};

$Object* allocate$LocalTime$1($Class* clazz) {
	return $of($alloc(LocalTime$1));
}

$ints* LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* LocalTime$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$LocalTime$1($Class* class$) {
	$assignStatic(LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HALF_DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
	$assignStatic(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::NANO_OF_SECOND->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::NANO_OF_DAY->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MICRO_OF_SECOND->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MICRO_OF_DAY->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MILLI_OF_SECOND->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MILLI_OF_DAY->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::SECOND_OF_MINUTE->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::SECOND_OF_DAY->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MINUTE_OF_HOUR->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MINUTE_OF_DAY->ordinal(), 10);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::HOUR_OF_AMPM->ordinal(), 11);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::CLOCK_HOUR_OF_AMPM->ordinal(), 12);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::HOUR_OF_DAY->ordinal(), 13);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::CLOCK_HOUR_OF_DAY->ordinal(), 14);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::AMPM_OF_DAY->ordinal(), 15);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

LocalTime$1::LocalTime$1() {
}

$Class* LocalTime$1::load$($String* name, bool initialize) {
	$loadClass(LocalTime$1, name, initialize, &_LocalTime$1_ClassInfo_, clinit$LocalTime$1, allocate$LocalTime$1);
	return class$;
}

$Class* LocalTime$1::class$ = nullptr;

	} // time
} // java