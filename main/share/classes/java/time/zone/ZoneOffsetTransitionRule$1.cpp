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

$FieldInfo _ZoneOffsetTransitionRule$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZoneOffsetTransitionRule$1, $SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition)},
	{}
};

$EnclosingMethodInfo _ZoneOffsetTransitionRule$1_EnclosingMethodInfo_ = {
	"java.time.zone.ZoneOffsetTransitionRule",
	nullptr,
	nullptr
};

$InnerClassInfo _ZoneOffsetTransitionRule$1_InnerClassesInfo_[] = {
	{"java.time.zone.ZoneOffsetTransitionRule$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ZoneOffsetTransitionRule$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.zone.ZoneOffsetTransitionRule$1",
	"java.lang.Object",
	nullptr,
	_ZoneOffsetTransitionRule$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ZoneOffsetTransitionRule$1_EnclosingMethodInfo_,
	_ZoneOffsetTransitionRule$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.zone.ZoneOffsetTransitionRule"
};

$Object* allocate$ZoneOffsetTransitionRule$1($Class* clazz) {
	return $of($alloc(ZoneOffsetTransitionRule$1));
}

$ints* ZoneOffsetTransitionRule$1::$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition = nullptr;

void clinit$ZoneOffsetTransitionRule$1($Class* class$) {
	$assignStatic(ZoneOffsetTransitionRule$1::$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition, $new($ints, $($ZoneOffsetTransitionRule$TimeDefinition::values())->length));
	{
		try {
			$nc(ZoneOffsetTransitionRule$1::$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition)->set($ZoneOffsetTransitionRule$TimeDefinition::UTC->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZoneOffsetTransitionRule$1::$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition)->set($ZoneOffsetTransitionRule$TimeDefinition::STANDARD->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZoneOffsetTransitionRule$1::ZoneOffsetTransitionRule$1() {
}

$Class* ZoneOffsetTransitionRule$1::load$($String* name, bool initialize) {
	$loadClass(ZoneOffsetTransitionRule$1, name, initialize, &_ZoneOffsetTransitionRule$1_ClassInfo_, clinit$ZoneOffsetTransitionRule$1, allocate$ZoneOffsetTransitionRule$1);
	return class$;
}

$Class* ZoneOffsetTransitionRule$1::class$ = nullptr;

		} // zone
	} // time
} // java