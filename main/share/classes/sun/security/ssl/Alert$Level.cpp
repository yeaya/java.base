#include <sun/security/ssl/Alert$Level.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/Alert.h>
#include <jcpp.h>

#undef WARNING
#undef FATAL

using $Alert$LevelArray = $Array<::sun::security::ssl::Alert$Level>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Alert$Level_FieldInfo_[] = {
	{"WARNING", "Lsun/security/ssl/Alert$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert$Level, WARNING)},
	{"FATAL", "Lsun/security/ssl/Alert$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Alert$Level, FATAL)},
	{"$VALUES", "[Lsun/security/ssl/Alert$Level;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Alert$Level, $VALUES)},
	{"level", "B", nullptr, $FINAL, $field(Alert$Level, level)},
	{"description", "Ljava/lang/String;", nullptr, $FINAL, $field(Alert$Level, description)},
	{}
};

$MethodInfo _Alert$Level_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/Alert$Level;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Alert$LevelArray*(*)()>(&Alert$Level::$values))},
	{"<init>", "(Ljava/lang/String;IBLjava/lang/String;)V", "(BLjava/lang/String;)V", $PRIVATE, $method(static_cast<void(Alert$Level::*)($String*,int32_t,int8_t,$String*)>(&Alert$Level::init$))},
	{"nameOf", "(B)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int8_t)>(&Alert$Level::nameOf))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/Alert$Level;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Alert$Level*(*)($String*)>(&Alert$Level::valueOf))},
	{"valueOf", "(B)Lsun/security/ssl/Alert$Level;", nullptr, $STATIC, $method(static_cast<Alert$Level*(*)(int8_t)>(&Alert$Level::valueOf))},
	{"values", "()[Lsun/security/ssl/Alert$Level;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Alert$LevelArray*(*)()>(&Alert$Level::values))},
	{}
};

$InnerClassInfo _Alert$Level_InnerClassesInfo_[] = {
	{"sun.security.ssl.Alert$Level", "sun.security.ssl.Alert", "Level", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Alert$Level_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.Alert$Level",
	"java.lang.Enum",
	nullptr,
	_Alert$Level_FieldInfo_,
	_Alert$Level_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/Alert$Level;>;",
	nullptr,
	_Alert$Level_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Alert"
};

$Object* allocate$Alert$Level($Class* clazz) {
	return $of($alloc(Alert$Level));
}

Alert$Level* Alert$Level::WARNING = nullptr;
Alert$Level* Alert$Level::FATAL = nullptr;
$Alert$LevelArray* Alert$Level::$VALUES = nullptr;

$Alert$LevelArray* Alert$Level::$values() {
	$init(Alert$Level);
	return $new($Alert$LevelArray, {
		Alert$Level::WARNING,
		Alert$Level::FATAL
	});
}

$Alert$LevelArray* Alert$Level::values() {
	$init(Alert$Level);
	return $cast($Alert$LevelArray, Alert$Level::$VALUES->clone());
}

Alert$Level* Alert$Level::valueOf($String* name) {
	$init(Alert$Level);
	return $cast(Alert$Level, $Enum::valueOf(Alert$Level::class$, name));
}

void Alert$Level::init$($String* $enum$name, int32_t $enum$ordinal, int8_t level, $String* description) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->level = level;
	$set(this, description, description);
}

Alert$Level* Alert$Level::valueOf(int8_t level) {
	$init(Alert$Level);
	{
		$var($Alert$LevelArray, arr$, Alert$Level::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Alert$Level* lv = arr$->get(i$);
			{
				if ($nc(lv)->level == level) {
					return lv;
				}
			}
		}
	}
	return nullptr;
}

$String* Alert$Level::nameOf(int8_t level) {
	$init(Alert$Level);
	{
		$var($Alert$LevelArray, arr$, Alert$Level::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			Alert$Level* lv = arr$->get(i$);
			{
				if ($nc(lv)->level == level) {
					return lv->description;
				}
			}
		}
	}
	return $str({"UNKNOWN ALERT LEVEL ("_s, $$str(((int32_t)(level & (uint32_t)255))), ")"_s});
}

void clinit$Alert$Level($Class* class$) {
	$assignStatic(Alert$Level::WARNING, $new(Alert$Level, "WARNING"_s, 0, (int8_t)1, "warning"_s));
	$assignStatic(Alert$Level::FATAL, $new(Alert$Level, "FATAL"_s, 1, (int8_t)2, "fatal"_s));
	$assignStatic(Alert$Level::$VALUES, Alert$Level::$values());
}

Alert$Level::Alert$Level() {
}

$Class* Alert$Level::load$($String* name, bool initialize) {
	$loadClass(Alert$Level, name, initialize, &_Alert$Level_ClassInfo_, clinit$Alert$Level, allocate$Alert$Level);
	return class$;
}

$Class* Alert$Level::class$ = nullptr;

		} // ssl
	} // security
} // sun