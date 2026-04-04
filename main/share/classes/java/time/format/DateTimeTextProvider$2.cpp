#include <java/time/format/DateTimeTextProvider$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/format/DateTimeTextProvider.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef AMPM_OF_DAY
#undef DAY_OF_WEEK
#undef ERA
#undef MONTH_OF_YEAR

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace format {

$ints* DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void DateTimeTextProvider$2::clinit$($Class* clazz) {
	$assignStatic(DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::ERA->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MONTH_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::DAY_OF_WEEK->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::AMPM_OF_DAY->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DateTimeTextProvider$2::DateTimeTextProvider$2() {
}

$Class* DateTimeTextProvider$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DateTimeTextProvider$2, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.format.DateTimeTextProvider",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.format.DateTimeTextProvider$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.format.DateTimeTextProvider$2",
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
		"java.time.format.DateTimeTextProvider"
	};
	$loadClass(DateTimeTextProvider$2, name, initialize, &classInfo$$, DateTimeTextProvider$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeTextProvider$2);
	});
	return class$;
}

$Class* DateTimeTextProvider$2::class$ = nullptr;

		} // format
	} // time
} // java