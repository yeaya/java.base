#include <java/time/chrono/ChronoLocalDateImpl$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/ChronoLocalDateImpl.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef CENTURIES
#undef DAYS
#undef DECADES
#undef ERAS
#undef MILLENNIA
#undef MONTHS
#undef WEEKS
#undef YEARS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {
		namespace chrono {

$ints* ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;

void ChronoLocalDateImpl$1::clinit$($Class* clazz) {
	$assignStatic(ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::DAYS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::WEEKS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MONTHS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::YEARS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::DECADES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::CENTURIES->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MILLENNIA->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::ERAS->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ChronoLocalDateImpl$1::ChronoLocalDateImpl$1() {
}

$Class* ChronoLocalDateImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ChronoLocalDateImpl$1, $SwitchMap$java$time$temporal$ChronoUnit)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.chrono.ChronoLocalDateImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.chrono.ChronoLocalDateImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.chrono.ChronoLocalDateImpl$1",
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
		"java.time.chrono.ChronoLocalDateImpl"
	};
	$loadClass(ChronoLocalDateImpl$1, name, initialize, &classInfo$$, ChronoLocalDateImpl$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ChronoLocalDateImpl$1);
	});
	return class$;
}

$Class* ChronoLocalDateImpl$1::class$ = nullptr;

		} // chrono
	} // time
} // java