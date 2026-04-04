#include <java/time/OffsetDateTime$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/OffsetDateTime.h>
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

$ints* OffsetDateTime$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void OffsetDateTime$1::clinit$($Class* clazz) {
	$assignStatic(OffsetDateTime$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			OffsetDateTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::INSTANT_SECONDS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			OffsetDateTime$1::$SwitchMap$java$time$temporal$ChronoField->set($ChronoField::OFFSET_SECONDS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

OffsetDateTime$1::OffsetDateTime$1() {
}

$Class* OffsetDateTime$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(OffsetDateTime$1, $SwitchMap$java$time$temporal$ChronoField)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.OffsetDateTime",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.OffsetDateTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.OffsetDateTime$1",
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
		"java.time.OffsetDateTime"
	};
	$loadClass(OffsetDateTime$1, name, initialize, &classInfo$$, OffsetDateTime$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OffsetDateTime$1);
	});
	return class$;
}

$Class* OffsetDateTime$1::class$ = nullptr;

	} // time
} // java