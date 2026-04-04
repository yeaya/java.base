#include <java/time/Duration$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/Duration.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef MICROS
#undef MILLIS
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

$ints* Duration$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;

void Duration$1::clinit$($Class* clazz) {
	$assignStatic(Duration$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			Duration$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Duration$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Duration$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Duration$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Duration$1::Duration$1() {
}

$Class* Duration$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Duration$1, $SwitchMap$java$time$temporal$ChronoUnit)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.Duration",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.Duration$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.Duration$1",
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
		"java.time.Duration"
	};
	$loadClass(Duration$1, name, initialize, &classInfo$$, Duration$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Duration$1);
	});
	return class$;
}

$Class* Duration$1::class$ = nullptr;

	} // time
} // java