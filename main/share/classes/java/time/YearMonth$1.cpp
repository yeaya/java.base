#include <java/time/YearMonth$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/YearMonth.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef CENTURIES
#undef DECADES
#undef ERA
#undef ERAS
#undef MILLENNIA
#undef MONTHS
#undef MONTH_OF_YEAR
#undef PROLEPTIC_MONTH
#undef YEAR
#undef YEARS
#undef YEAR_OF_ERA

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$ints* YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* YearMonth$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void YearMonth$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MONTHS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::YEARS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::DECADES->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::CENTURIES->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MILLENNIA->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::ERAS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(YearMonth$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MONTH_OF_YEAR->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR_OF_ERA->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			YearMonth$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ERA->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

YearMonth$1::YearMonth$1() {
}

$Class* YearMonth$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(YearMonth$1, $SwitchMap$java$time$temporal$ChronoUnit)},
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(YearMonth$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.YearMonth",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.YearMonth$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.YearMonth$1",
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
		"java.time.YearMonth"
	};
	$loadClass(YearMonth$1, name, initialize, &classInfo$$, YearMonth$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(YearMonth$1);
	});
	return class$;
}

$Class* YearMonth$1::class$ = nullptr;

	} // time
} // java