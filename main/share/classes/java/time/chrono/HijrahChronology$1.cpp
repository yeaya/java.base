#include <java/time/chrono/HijrahChronology$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/HijrahChronology.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef ALIGNED_WEEK_OF_MONTH
#undef DAY_OF_MONTH
#undef DAY_OF_YEAR
#undef ERA
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

$ints* HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void HijrahChronology$1::clinit$($Class* clazz) {
	$assignStatic(HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::DAY_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR_OF_ERA->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ERA->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

HijrahChronology$1::HijrahChronology$1() {
}

$Class* HijrahChronology$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HijrahChronology$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.chrono.HijrahChronology",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.chrono.HijrahChronology$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.chrono.HijrahChronology$1",
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
		"java.time.chrono.HijrahChronology"
	};
	$loadClass(HijrahChronology$1, name, initialize, &classInfo$$, HijrahChronology$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HijrahChronology$1);
	});
	return class$;
}

$Class* HijrahChronology$1::class$ = nullptr;

		} // chrono
	} // time
} // java