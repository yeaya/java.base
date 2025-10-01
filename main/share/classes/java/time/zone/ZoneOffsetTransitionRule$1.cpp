#include <java/time/zone/ZoneOffsetTransitionRule$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/zone/ZoneOffsetTransitionRule$TimeDefinition.h>
#include <java/time/zone/ZoneOffsetTransitionRule.h>
#include <jcpp.h>

#undef UTC
#undef STANDARD

using $ZoneOffsetTransitionRule$TimeDefinitionArray = $Array<::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ZoneOffsetTransitionRule = ::java::time::zone::ZoneOffsetTransitionRule;
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
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ZoneOffsetTransitionRule$1::$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition)->set($ZoneOffsetTransitionRule$TimeDefinition::STANDARD->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
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