#include <java/time/LocalDateTime$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/LocalDateTime.h>
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

$ints* LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;

void LocalDateTime$1::clinit$($Class* clazz) {
	$assignStatic(LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HALF_DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LocalDateTime$1::LocalDateTime$1() {
}

$Class* LocalDateTime$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocalDateTime$1, $SwitchMap$java$time$temporal$ChronoUnit)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.LocalDateTime",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.LocalDateTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.LocalDateTime$1",
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
		"java.time.LocalDateTime"
	};
	$loadClass(LocalDateTime$1, name, initialize, &classInfo$$, LocalDateTime$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LocalDateTime$1);
	});
	return class$;
}

$Class* LocalDateTime$1::class$ = nullptr;

	} // time
} // java