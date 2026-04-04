#include <java/time/Year$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/Year.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef CENTURIES
#undef DECADES
#undef ERA
#undef ERAS
#undef MILLENNIA
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

$ints* Year$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* Year$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void Year$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Year$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			Year$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::YEARS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Year$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::DECADES->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Year$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::CENTURIES->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Year$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::MILLENNIA->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Year$1::$SwitchMap$java$time$temporal$ChronoUnit->set($ChronoUnit::ERAS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Year$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			Year$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR_OF_ERA->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Year$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Year$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ERA->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Year$1::Year$1() {
}

$Class* Year$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Year$1, $SwitchMap$java$time$temporal$ChronoUnit)},
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Year$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.Year",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.Year$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.Year$1",
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
		"java.time.Year"
	};
	$loadClass(Year$1, name, initialize, &classInfo$$, Year$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Year$1);
	});
	return class$;
}

$Class* Year$1::class$ = nullptr;

	} // time
} // java