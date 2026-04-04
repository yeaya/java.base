#include <java/time/chrono/ChronoLocalDateTimeImpl$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/ChronoLocalDateTimeImpl.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef HALF_DAYS
#undef HOURS
#undef MICROS
#undef MILLIS
#undef MINUTES
#undef NANOS
#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {
		namespace chrono {

$ints* ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;

void ChronoLocalDateTimeImpl$1::clinit$($Class* clazz) {
	$assignStatic(ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HALF_DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ChronoLocalDateTimeImpl$1::ChronoLocalDateTimeImpl$1() {
}

$Class* ChronoLocalDateTimeImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ChronoLocalDateTimeImpl$1, $SwitchMap$java$time$temporal$ChronoUnit)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.chrono.ChronoLocalDateTimeImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.chrono.ChronoLocalDateTimeImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.chrono.ChronoLocalDateTimeImpl$1",
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
		"java.time.chrono.ChronoLocalDateTimeImpl"
	};
	$loadClass(ChronoLocalDateTimeImpl$1, name, initialize, &classInfo$$, ChronoLocalDateTimeImpl$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ChronoLocalDateTimeImpl$1);
	});
	return class$;
}

$Class* ChronoLocalDateTimeImpl$1::class$ = nullptr;

		} // chrono
	} // time
} // java