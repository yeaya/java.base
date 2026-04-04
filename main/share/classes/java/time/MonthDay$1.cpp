#include <java/time/MonthDay$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/MonthDay.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef DAY_OF_MONTH
#undef MONTH_OF_YEAR

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {

$ints* MonthDay$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void MonthDay$1::clinit$($Class* clazz) {
	$assignStatic(MonthDay$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			MonthDay$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MonthDay$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::MONTH_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MonthDay$1::MonthDay$1() {
}

$Class* MonthDay$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MonthDay$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.MonthDay",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.MonthDay$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.MonthDay$1",
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
		"java.time.MonthDay"
	};
	$loadClass(MonthDay$1, name, initialize, &classInfo$$, MonthDay$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MonthDay$1);
	});
	return class$;
}

$Class* MonthDay$1::class$ = nullptr;

	} // time
} // java