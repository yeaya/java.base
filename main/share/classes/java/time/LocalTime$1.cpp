#include <java/time/LocalTime$1.h>
#include <java/lang/NoSuchFieldError.h>
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

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$ints* LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* LocalTime$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void LocalTime$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HALF_DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(LocalTime$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::NANO_OF_SECOND->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::NANO_OF_DAY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MICRO_OF_SECOND->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MICRO_OF_DAY->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MILLI_OF_SECOND->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MILLI_OF_DAY->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::SECOND_OF_MINUTE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::SECOND_OF_DAY->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MINUTE_OF_HOUR->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MINUTE_OF_DAY->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::HOUR_OF_AMPM->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::CLOCK_HOUR_OF_AMPM->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::HOUR_OF_DAY->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::CLOCK_HOUR_OF_DAY->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::AMPM_OF_DAY->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LocalTime$1::LocalTime$1() {
}

$Class* LocalTime$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocalTime$1, $SwitchMap$java$time$temporal$ChronoUnit)},
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocalTime$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.LocalTime",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.LocalTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.LocalTime$1",
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
		"java.time.LocalTime"
	};
	$loadClass(LocalTime$1, name, initialize, &classInfo$$, LocalTime$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LocalTime$1);
	});
	return class$;
}

$Class* LocalTime$1::class$ = nullptr;

	} // time
} // java