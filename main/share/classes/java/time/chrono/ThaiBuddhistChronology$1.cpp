#include <java/time/chrono/ThaiBuddhistChronology$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/ThaiBuddhistChronology.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef PROLEPTIC_MONTH
#undef YEAR
#undef YEAR_OF_ERA

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace chrono {

$ints* ThaiBuddhistChronology$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void ThaiBuddhistChronology$1::clinit$($Class* clazz) {
	$assignStatic(ThaiBuddhistChronology$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			ThaiBuddhistChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ThaiBuddhistChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR_OF_ERA->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ThaiBuddhistChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ThaiBuddhistChronology$1::ThaiBuddhistChronology$1() {
}

$Class* ThaiBuddhistChronology$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ThaiBuddhistChronology$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.chrono.ThaiBuddhistChronology",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.chrono.ThaiBuddhistChronology$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.chrono.ThaiBuddhistChronology$1",
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
		"java.time.chrono.ThaiBuddhistChronology"
	};
	$loadClass(ThaiBuddhistChronology$1, name, initialize, &classInfo$$, ThaiBuddhistChronology$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ThaiBuddhistChronology$1);
	});
	return class$;
}

$Class* ThaiBuddhistChronology$1::class$ = nullptr;

		} // chrono
	} // time
} // java