#include <java/util/concurrent/TimeUnit$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef DAYS
#undef HOURS
#undef MICROS
#undef MICROSECONDS
#undef MILLIS
#undef MILLISECONDS
#undef MINUTES
#undef NANOS
#undef NANOSECONDS
#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$ints* TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit = nullptr;

void TimeUnit$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit, $new($ints, $($TimeUnit::values())->length));
	{
		try {
			TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::NANOSECONDS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::MICROSECONDS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::MILLISECONDS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit->set($TimeUnit::DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TimeUnit$1::TimeUnit$1() {
}

$Class* TimeUnit$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TimeUnit$1, $SwitchMap$java$time$temporal$ChronoUnit)},
		{"$SwitchMap$java$util$concurrent$TimeUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TimeUnit$1, $SwitchMap$java$util$concurrent$TimeUnit)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.TimeUnit",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.TimeUnit$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.util.concurrent.TimeUnit$1",
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
		"java.util.concurrent.TimeUnit"
	};
	$loadClass(TimeUnit$1, name, initialize, &classInfo$$, TimeUnit$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TimeUnit$1);
	});
	return class$;
}

$Class* TimeUnit$1::class$ = nullptr;

		} // concurrent
	} // util
} // java