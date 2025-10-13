#include <java/lang/System$Logger$Level.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System$Logger.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ALL
#undef DEBUG
#undef ERROR
#undef INFO
#undef MAX_VALUE
#undef MIN_VALUE
#undef OFF
#undef TRACE
#undef WARNING

using $System$Logger$LevelArray = $Array<::java::lang::System$Logger$Level>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;

namespace java {
	namespace lang {

$FieldInfo _System$Logger$Level_FieldInfo_[] = {
	{"ALL", "Ljava/lang/System$Logger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(System$Logger$Level, ALL)},
	{"TRACE", "Ljava/lang/System$Logger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(System$Logger$Level, TRACE)},
	{"DEBUG", "Ljava/lang/System$Logger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(System$Logger$Level, DEBUG)},
	{"INFO", "Ljava/lang/System$Logger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(System$Logger$Level, INFO)},
	{"WARNING", "Ljava/lang/System$Logger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(System$Logger$Level, WARNING)},
	{"ERROR", "Ljava/lang/System$Logger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(System$Logger$Level, ERROR)},
	{"OFF", "Ljava/lang/System$Logger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(System$Logger$Level, OFF)},
	{"$VALUES", "[Ljava/lang/System$Logger$Level;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(System$Logger$Level, $VALUES)},
	{"severity", "I", nullptr, $PRIVATE | $FINAL, $field(System$Logger$Level, severity)},
	{}
};

$MethodInfo _System$Logger$Level_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/System$Logger$Level;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$System$Logger$LevelArray*(*)()>(&System$Logger$Level::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(System$Logger$Level::*)($String*,int32_t,int32_t)>(&System$Logger$Level::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(System$Logger$Level::*)()>(&System$Logger$Level::getName))},
	{"getSeverity", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(System$Logger$Level::*)()>(&System$Logger$Level::getSeverity))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/System$Logger$Level;", nullptr, $PUBLIC | $STATIC, $method(static_cast<System$Logger$Level*(*)($String*)>(&System$Logger$Level::valueOf))},
	{"values", "()[Ljava/lang/System$Logger$Level;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$System$Logger$LevelArray*(*)()>(&System$Logger$Level::values))},
	{}
};

$InnerClassInfo _System$Logger$Level_InnerClassesInfo_[] = {
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.lang.System$Logger$Level", "java.lang.System$Logger", "Level", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _System$Logger$Level_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.System$Logger$Level",
	"java.lang.Enum",
	nullptr,
	_System$Logger$Level_FieldInfo_,
	_System$Logger$Level_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/System$Logger$Level;>;",
	nullptr,
	_System$Logger$Level_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.System"
};

$Object* allocate$System$Logger$Level($Class* clazz) {
	return $of($alloc(System$Logger$Level));
}


System$Logger$Level* System$Logger$Level::ALL = nullptr;

System$Logger$Level* System$Logger$Level::TRACE = nullptr;

System$Logger$Level* System$Logger$Level::DEBUG = nullptr;

System$Logger$Level* System$Logger$Level::INFO = nullptr;

System$Logger$Level* System$Logger$Level::WARNING = nullptr;

System$Logger$Level* System$Logger$Level::ERROR = nullptr;

System$Logger$Level* System$Logger$Level::OFF = nullptr;
$System$Logger$LevelArray* System$Logger$Level::$VALUES = nullptr;

$System$Logger$LevelArray* System$Logger$Level::$values() {
	$init(System$Logger$Level);
	return $new($System$Logger$LevelArray, {
		System$Logger$Level::ALL,
		System$Logger$Level::TRACE,
		System$Logger$Level::DEBUG,
		System$Logger$Level::INFO,
		System$Logger$Level::WARNING,
		System$Logger$Level::ERROR,
		System$Logger$Level::OFF
	});
}

$System$Logger$LevelArray* System$Logger$Level::values() {
	$init(System$Logger$Level);
	return $cast($System$Logger$LevelArray, System$Logger$Level::$VALUES->clone());
}

System$Logger$Level* System$Logger$Level::valueOf($String* name) {
	$init(System$Logger$Level);
	return $cast(System$Logger$Level, $Enum::valueOf(System$Logger$Level::class$, name));
}

void System$Logger$Level::init$($String* $enum$name, int32_t $enum$ordinal, int32_t severity) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->severity = severity;
}

$String* System$Logger$Level::getName() {
	return name();
}

int32_t System$Logger$Level::getSeverity() {
	return this->severity;
}

void clinit$System$Logger$Level($Class* class$) {
	$assignStatic(System$Logger$Level::ALL, $new(System$Logger$Level, "ALL"_s, 0, $Integer::MIN_VALUE));
	$assignStatic(System$Logger$Level::TRACE, $new(System$Logger$Level, "TRACE"_s, 1, 400));
	$assignStatic(System$Logger$Level::DEBUG, $new(System$Logger$Level, "DEBUG"_s, 2, 500));
	$assignStatic(System$Logger$Level::INFO, $new(System$Logger$Level, "INFO"_s, 3, 800));
	$assignStatic(System$Logger$Level::WARNING, $new(System$Logger$Level, "WARNING"_s, 4, 900));
	$assignStatic(System$Logger$Level::ERROR, $new(System$Logger$Level, "ERROR"_s, 5, 1000));
	$assignStatic(System$Logger$Level::OFF, $new(System$Logger$Level, "OFF"_s, 6, $Integer::MAX_VALUE));
	$assignStatic(System$Logger$Level::$VALUES, System$Logger$Level::$values());
}

System$Logger$Level::System$Logger$Level() {
}

$Class* System$Logger$Level::load$($String* name, bool initialize) {
	$loadClass(System$Logger$Level, name, initialize, &_System$Logger$Level_ClassInfo_, clinit$System$Logger$Level, allocate$System$Logger$Level);
	return class$;
}

$Class* System$Logger$Level::class$ = nullptr;

	} // lang
} // java