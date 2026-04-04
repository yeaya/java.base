#include <java/time/ZonedDateTime$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/ZonedDateTime.h>
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

$ints* ZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void ZonedDateTime$1::clinit$($Class* clazz) {
	$assignStatic(ZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			ZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::INSTANT_SECONDS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::OFFSET_SECONDS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZonedDateTime$1::ZonedDateTime$1() {
}

$Class* ZonedDateTime$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZonedDateTime$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.ZonedDateTime",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.ZonedDateTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.ZonedDateTime$1",
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
		"java.time.ZonedDateTime"
	};
	$loadClass(ZonedDateTime$1, name, initialize, &classInfo$$, ZonedDateTime$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ZonedDateTime$1);
	});
	return class$;
}

$Class* ZonedDateTime$1::class$ = nullptr;

	} // time
} // java