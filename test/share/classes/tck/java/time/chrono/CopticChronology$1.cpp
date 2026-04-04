#include <tck/java/time/chrono/CopticChronology$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/temporal/ChronoField.h>
#include <tck/java/time/chrono/CopticChronology.h>
#include <jcpp.h>

#undef ALIGNED_WEEK_OF_MONTH
#undef DAY_OF_MONTH
#undef MONTH_OF_YEAR
#undef PROLEPTIC_MONTH
#undef YEAR
#undef YEAR_OF_ERA

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace tck {
	namespace java {
		namespace time {
			namespace chrono {

$ints* CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void CopticChronology$1::clinit$($Class* clazz) {
	$assignStatic(CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MONTH_OF_YEAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR_OF_ERA->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CopticChronology$1::CopticChronology$1() {
}

$Class* CopticChronology$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CopticChronology$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"tck.java.time.chrono.CopticChronology",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"tck.java.time.chrono.CopticChronology$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"tck.java.time.chrono.CopticChronology$1",
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
		"tck.java.time.chrono.CopticChronology"
	};
	$loadClass(CopticChronology$1, name, initialize, &classInfo$$, CopticChronology$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CopticChronology$1);
	});
	return class$;
}

$Class* CopticChronology$1::class$ = nullptr;

			} // chrono
		} // time
	} // java
} // tck