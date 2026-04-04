#include <java/time/Instant$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/Instant.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef DAYS
#undef HALF_DAYS
#undef HOURS
#undef INSTANT_SECONDS
#undef MICROS
#undef MICRO_OF_SECOND
#undef MILLIS
#undef MILLI_OF_SECOND
#undef MINUTES
#undef NANOS
#undef NANO_OF_SECOND
#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$ints* Instant$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* Instant$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void Instant$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Instant$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::HALF_DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::DAYS->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Instant$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::NANO_OF_SECOND->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MICRO_OF_SECOND->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MILLI_OF_SECOND->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Instant$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::INSTANT_SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Instant$1::Instant$1() {
}

$Class* Instant$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Instant$1, $SwitchMap$java$time$temporal$ChronoUnit)},
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Instant$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.Instant",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.Instant$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.Instant$1",
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
		"java.time.Instant"
	};
	$loadClass(Instant$1, name, initialize, &classInfo$$, Instant$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Instant$1);
	});
	return class$;
}

$Class* Instant$1::class$ = nullptr;

	} // time
} // java