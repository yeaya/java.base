#include <java/time/chrono/JapaneseChronology$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/JapaneseChronology.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef ALIGNED_DAY_OF_WEEK_IN_MONTH
#undef ALIGNED_DAY_OF_WEEK_IN_YEAR
#undef ALIGNED_WEEK_OF_MONTH
#undef ALIGNED_WEEK_OF_YEAR
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

$ints* JapaneseChronology$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void JapaneseChronology$1::clinit$($Class* clazz) {
	$assignStatic(JapaneseChronology$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			JapaneseChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JapaneseChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JapaneseChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JapaneseChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ALIGNED_WEEK_OF_YEAR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JapaneseChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR_OF_ERA->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JapaneseChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::DAY_OF_YEAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JapaneseChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JapaneseChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ERA->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JapaneseChronology$1::JapaneseChronology$1() {
}

$Class* JapaneseChronology$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JapaneseChronology$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.chrono.JapaneseChronology",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.chrono.JapaneseChronology$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.chrono.JapaneseChronology$1",
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
		"java.time.chrono.JapaneseChronology"
	};
	$loadClass(JapaneseChronology$1, name, initialize, &classInfo$$, JapaneseChronology$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JapaneseChronology$1);
	});
	return class$;
}

$Class* JapaneseChronology$1::class$ = nullptr;

		} // chrono
	} // time
} // java