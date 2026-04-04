#include <java/time/chrono/ChronoZonedDateTimeImpl$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/ChronoZonedDateTimeImpl.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef INSTANT_SECONDS
#undef OFFSET_SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace chrono {

$ints* ChronoZonedDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void ChronoZonedDateTimeImpl$1::clinit$($Class* clazz) {
	$assignStatic(ChronoZonedDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			ChronoZonedDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::INSTANT_SECONDS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ChronoZonedDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::OFFSET_SECONDS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ChronoZonedDateTimeImpl$1::ChronoZonedDateTimeImpl$1() {
}

$Class* ChronoZonedDateTimeImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ChronoZonedDateTimeImpl$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.chrono.ChronoZonedDateTimeImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.chrono.ChronoZonedDateTimeImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.chrono.ChronoZonedDateTimeImpl$1",
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
		"java.time.chrono.ChronoZonedDateTimeImpl"
	};
	$loadClass(ChronoZonedDateTimeImpl$1, name, initialize, &classInfo$$, ChronoZonedDateTimeImpl$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ChronoZonedDateTimeImpl$1);
	});
	return class$;
}

$Class* ChronoZonedDateTimeImpl$1::class$ = nullptr;

		} // chrono
	} // time
} // java