#include <java/time/zone/ZoneOffsetTransitionRule$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/zone/ZoneOffsetTransitionRule$TimeDefinition.h>
#include <java/time/zone/ZoneOffsetTransitionRule.h>
#include <jcpp.h>

#undef STANDARD
#undef UTC

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ZoneOffsetTransitionRule$TimeDefinition = ::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition;

namespace java {
	namespace time {
		namespace zone {

$ints* ZoneOffsetTransitionRule$1::$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition = nullptr;

void ZoneOffsetTransitionRule$1::clinit$($Class* clazz) {
	$assignStatic(ZoneOffsetTransitionRule$1::$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition, $new($ints, $($ZoneOffsetTransitionRule$TimeDefinition::values())->length));
	{
		try {
			ZoneOffsetTransitionRule$1::$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition->set($ZoneOffsetTransitionRule$TimeDefinition::UTC->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZoneOffsetTransitionRule$1::$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition->set($ZoneOffsetTransitionRule$TimeDefinition::STANDARD->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZoneOffsetTransitionRule$1::ZoneOffsetTransitionRule$1() {
}

$Class* ZoneOffsetTransitionRule$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZoneOffsetTransitionRule$1, $SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.zone.ZoneOffsetTransitionRule",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.zone.ZoneOffsetTransitionRule$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.zone.ZoneOffsetTransitionRule$1",
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
		"java.time.zone.ZoneOffsetTransitionRule"
	};
	$loadClass(ZoneOffsetTransitionRule$1, name, initialize, &classInfo$$, ZoneOffsetTransitionRule$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ZoneOffsetTransitionRule$1);
	});
	return class$;
}

$Class* ZoneOffsetTransitionRule$1::class$ = nullptr;

		} // zone
	} // time
} // java