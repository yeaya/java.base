#include <java/time/OffsetTime$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/OffsetTime.h>
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

$ints* OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;

void OffsetTime$1::clinit$($Class* clazz) {
	$assignStatic(OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HALF_DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

OffsetTime$1::OffsetTime$1() {
}

$Class* OffsetTime$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(OffsetTime$1, $SwitchMap$java$time$temporal$ChronoUnit)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.OffsetTime",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.OffsetTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.OffsetTime$1",
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
		"java.time.OffsetTime"
	};
	$loadClass(OffsetTime$1, name, initialize, &classInfo$$, OffsetTime$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OffsetTime$1);
	});
	return class$;
}

$Class* OffsetTime$1::class$ = nullptr;

	} // time
} // java