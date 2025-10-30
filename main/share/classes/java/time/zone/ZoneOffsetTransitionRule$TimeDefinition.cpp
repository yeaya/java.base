#include <java/time/zone/ZoneOffsetTransitionRule$TimeDefinition.h>

#include <java/lang/Enum.h>
#include <java/time/LocalDateTime.h>
#include <java/time/ZoneOffset.h>
#include <java/time/zone/ZoneOffsetTransitionRule$1.h>
#include <java/time/zone/ZoneOffsetTransitionRule.h>
#include <jcpp.h>

#undef STANDARD
#undef UTC
#undef WALL

using $ZoneOffsetTransitionRule$TimeDefinitionArray = $Array<::java::time::zone::ZoneOffsetTransitionRule$TimeDefinition>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocalDateTime = ::java::time::LocalDateTime;
using $ZoneOffset = ::java::time::ZoneOffset;
using $ZoneOffsetTransitionRule = ::java::time::zone::ZoneOffsetTransitionRule;
using $ZoneOffsetTransitionRule$1 = ::java::time::zone::ZoneOffsetTransitionRule$1;

namespace java {
	namespace time {
		namespace zone {

$FieldInfo _ZoneOffsetTransitionRule$TimeDefinition_FieldInfo_[] = {
	{"UTC", "Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZoneOffsetTransitionRule$TimeDefinition, UTC)},
	{"WALL", "Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZoneOffsetTransitionRule$TimeDefinition, WALL)},
	{"STANDARD", "Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ZoneOffsetTransitionRule$TimeDefinition, STANDARD)},
	{"$VALUES", "[Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ZoneOffsetTransitionRule$TimeDefinition, $VALUES)},
	{}
};

$MethodInfo _ZoneOffsetTransitionRule$TimeDefinition_MethodInfo_[] = {
	{"$values", "()[Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ZoneOffsetTransitionRule$TimeDefinitionArray*(*)()>(&ZoneOffsetTransitionRule$TimeDefinition::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ZoneOffsetTransitionRule$TimeDefinition::*)($String*,int32_t)>(&ZoneOffsetTransitionRule$TimeDefinition::init$))},
	{"createDateTime", "(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/LocalDateTime;", nullptr, $PUBLIC, $method(static_cast<$LocalDateTime*(ZoneOffsetTransitionRule$TimeDefinition::*)($LocalDateTime*,$ZoneOffset*,$ZoneOffset*)>(&ZoneOffsetTransitionRule$TimeDefinition::createDateTime))},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ZoneOffsetTransitionRule$TimeDefinition*(*)($String*)>(&ZoneOffsetTransitionRule$TimeDefinition::valueOf))},
	{"values", "()[Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ZoneOffsetTransitionRule$TimeDefinitionArray*(*)()>(&ZoneOffsetTransitionRule$TimeDefinition::values))},
	{}
};

$InnerClassInfo _ZoneOffsetTransitionRule$TimeDefinition_InnerClassesInfo_[] = {
	{"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition", "java.time.zone.ZoneOffsetTransitionRule", "TimeDefinition", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ZoneOffsetTransitionRule$TimeDefinition_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.time.zone.ZoneOffsetTransitionRule$TimeDefinition",
	"java.lang.Enum",
	nullptr,
	_ZoneOffsetTransitionRule$TimeDefinition_FieldInfo_,
	_ZoneOffsetTransitionRule$TimeDefinition_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;>;",
	nullptr,
	_ZoneOffsetTransitionRule$TimeDefinition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.zone.ZoneOffsetTransitionRule"
};

$Object* allocate$ZoneOffsetTransitionRule$TimeDefinition($Class* clazz) {
	return $of($alloc(ZoneOffsetTransitionRule$TimeDefinition));
}

ZoneOffsetTransitionRule$TimeDefinition* ZoneOffsetTransitionRule$TimeDefinition::UTC = nullptr;
ZoneOffsetTransitionRule$TimeDefinition* ZoneOffsetTransitionRule$TimeDefinition::WALL = nullptr;
ZoneOffsetTransitionRule$TimeDefinition* ZoneOffsetTransitionRule$TimeDefinition::STANDARD = nullptr;
$ZoneOffsetTransitionRule$TimeDefinitionArray* ZoneOffsetTransitionRule$TimeDefinition::$VALUES = nullptr;

$ZoneOffsetTransitionRule$TimeDefinitionArray* ZoneOffsetTransitionRule$TimeDefinition::$values() {
	$init(ZoneOffsetTransitionRule$TimeDefinition);
	return $new($ZoneOffsetTransitionRule$TimeDefinitionArray, {
		ZoneOffsetTransitionRule$TimeDefinition::UTC,
		ZoneOffsetTransitionRule$TimeDefinition::WALL,
		ZoneOffsetTransitionRule$TimeDefinition::STANDARD
	});
}

$ZoneOffsetTransitionRule$TimeDefinitionArray* ZoneOffsetTransitionRule$TimeDefinition::values() {
	$init(ZoneOffsetTransitionRule$TimeDefinition);
	return $cast($ZoneOffsetTransitionRule$TimeDefinitionArray, ZoneOffsetTransitionRule$TimeDefinition::$VALUES->clone());
}

ZoneOffsetTransitionRule$TimeDefinition* ZoneOffsetTransitionRule$TimeDefinition::valueOf($String* name) {
	$init(ZoneOffsetTransitionRule$TimeDefinition);
	return $cast(ZoneOffsetTransitionRule$TimeDefinition, $Enum::valueOf(ZoneOffsetTransitionRule$TimeDefinition::class$, name));
}

void ZoneOffsetTransitionRule$TimeDefinition::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

$LocalDateTime* ZoneOffsetTransitionRule$TimeDefinition::createDateTime($LocalDateTime* dateTime, $ZoneOffset* standardOffset, $ZoneOffset* wallOffset) {
	$init($ZoneOffsetTransitionRule$1);
	switch ($nc($ZoneOffsetTransitionRule$1::$SwitchMap$java$time$zone$ZoneOffsetTransitionRule$TimeDefinition)->get((this)->ordinal())) {
	case 1:
		{
			{
				int32_t var$0 = $nc(wallOffset)->getTotalSeconds();
				int32_t difference = var$0 - $nc($ZoneOffset::UTC)->getTotalSeconds();
				return $nc(dateTime)->plusSeconds(difference);
			}
		}
	case 2:
		{
			{
				int32_t var$1 = $nc(wallOffset)->getTotalSeconds();
				int32_t difference = var$1 - $nc(standardOffset)->getTotalSeconds();
				return $nc(dateTime)->plusSeconds(difference);
			}
		}
	default:
		{
			return dateTime;
		}
	}
}

void clinit$ZoneOffsetTransitionRule$TimeDefinition($Class* class$) {
	$assignStatic(ZoneOffsetTransitionRule$TimeDefinition::UTC, $new(ZoneOffsetTransitionRule$TimeDefinition, "UTC"_s, 0));
	$assignStatic(ZoneOffsetTransitionRule$TimeDefinition::WALL, $new(ZoneOffsetTransitionRule$TimeDefinition, "WALL"_s, 1));
	$assignStatic(ZoneOffsetTransitionRule$TimeDefinition::STANDARD, $new(ZoneOffsetTransitionRule$TimeDefinition, "STANDARD"_s, 2));
	$assignStatic(ZoneOffsetTransitionRule$TimeDefinition::$VALUES, ZoneOffsetTransitionRule$TimeDefinition::$values());
}

ZoneOffsetTransitionRule$TimeDefinition::ZoneOffsetTransitionRule$TimeDefinition() {
}

$Class* ZoneOffsetTransitionRule$TimeDefinition::load$($String* name, bool initialize) {
	$loadClass(ZoneOffsetTransitionRule$TimeDefinition, name, initialize, &_ZoneOffsetTransitionRule$TimeDefinition_ClassInfo_, clinit$ZoneOffsetTransitionRule$TimeDefinition, allocate$ZoneOffsetTransitionRule$TimeDefinition);
	return class$;
}

$Class* ZoneOffsetTransitionRule$TimeDefinition::class$ = nullptr;

		} // zone
	} // time
} // java