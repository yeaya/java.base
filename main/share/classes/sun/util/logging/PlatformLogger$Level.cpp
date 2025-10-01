#include <sun/util/logging/PlatformLogger$Level.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef TRACE
#undef ALL
#undef SEVERE
#undef FINER
#undef SEVERITY_OFF
#undef SEVERITY_CONFIG
#undef FINEST
#undef INFO
#undef WARNING
#undef SEVERITY_FINER
#undef DEBUG
#undef OFF
#undef CONFIG
#undef SEVERITY_SEVERE
#undef SEVERITY_FINEST
#undef SEVERITY_ALL
#undef SEVERITY_INFO
#undef SEVERITY_WARNING
#undef FINE
#undef ERROR
#undef LEVEL_VALUES
#undef SEVERITY_FINE

using $PlatformLogger$LevelArray = $Array<::sun::util::logging::PlatformLogger$Level>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Arrays = ::java::util::Arrays;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace util {
		namespace logging {

$FieldInfo _PlatformLogger$Level_FieldInfo_[] = {
	{"ALL", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlatformLogger$Level, ALL)},
	{"FINEST", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlatformLogger$Level, FINEST)},
	{"FINER", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlatformLogger$Level, FINER)},
	{"FINE", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlatformLogger$Level, FINE)},
	{"CONFIG", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlatformLogger$Level, CONFIG)},
	{"INFO", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlatformLogger$Level, INFO)},
	{"WARNING", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlatformLogger$Level, WARNING)},
	{"SEVERE", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlatformLogger$Level, SEVERE)},
	{"OFF", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlatformLogger$Level, OFF)},
	{"$VALUES", "[Lsun/util/logging/PlatformLogger$Level;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(PlatformLogger$Level, $VALUES)},
	{"systemLevel", "Ljava/lang/System$Logger$Level;", nullptr, $FINAL, $field(PlatformLogger$Level, systemLevel$)},
	{"SEVERITY_OFF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformLogger$Level, SEVERITY_OFF)},
	{"SEVERITY_SEVERE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformLogger$Level, SEVERITY_SEVERE)},
	{"SEVERITY_WARNING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformLogger$Level, SEVERITY_WARNING)},
	{"SEVERITY_INFO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformLogger$Level, SEVERITY_INFO)},
	{"SEVERITY_CONFIG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformLogger$Level, SEVERITY_CONFIG)},
	{"SEVERITY_FINE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformLogger$Level, SEVERITY_FINE)},
	{"SEVERITY_FINER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformLogger$Level, SEVERITY_FINER)},
	{"SEVERITY_FINEST", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformLogger$Level, SEVERITY_FINEST)},
	{"SEVERITY_ALL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformLogger$Level, SEVERITY_ALL)},
	{"LEVEL_VALUES", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PlatformLogger$Level, LEVEL_VALUES)},
	{}
};

$MethodInfo _PlatformLogger$Level_MethodInfo_[] = {
	{"$values", "()[Lsun/util/logging/PlatformLogger$Level;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$PlatformLogger$LevelArray*(*)()>(&PlatformLogger$Level::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/System$Logger$Level;)V", "(Ljava/lang/System$Logger$Level;)V", $PRIVATE, $method(static_cast<void(PlatformLogger$Level::*)($String*,int32_t,$System$Logger$Level*)>(&PlatformLogger$Level::init$))},
	{"intValue", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(PlatformLogger$Level::*)()>(&PlatformLogger$Level::intValue))},
	{"systemLevel", "()Ljava/lang/System$Logger$Level;", nullptr, $PUBLIC, $method(static_cast<$System$Logger$Level*(PlatformLogger$Level::*)()>(&PlatformLogger$Level::systemLevel))},
	{"valueOf", "(Ljava/lang/String;)Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PlatformLogger$Level*(*)($String*)>(&PlatformLogger$Level::valueOf))},
	{"valueOf", "(I)Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PlatformLogger$Level*(*)(int32_t)>(&PlatformLogger$Level::valueOf))},
	{"values", "()[Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PlatformLogger$LevelArray*(*)()>(&PlatformLogger$Level::values))},
	{}
};

$InnerClassInfo _PlatformLogger$Level_InnerClassesInfo_[] = {
	{"sun.util.logging.PlatformLogger$Level", "sun.util.logging.PlatformLogger", "Level", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _PlatformLogger$Level_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.util.logging.PlatformLogger$Level",
	"java.lang.Enum",
	nullptr,
	_PlatformLogger$Level_FieldInfo_,
	_PlatformLogger$Level_MethodInfo_,
	"Ljava/lang/Enum<Lsun/util/logging/PlatformLogger$Level;>;",
	nullptr,
	_PlatformLogger$Level_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.logging.PlatformLogger"
};

$Object* allocate$PlatformLogger$Level($Class* clazz) {
	return $of($alloc(PlatformLogger$Level));
}

PlatformLogger$Level* PlatformLogger$Level::ALL = nullptr;
PlatformLogger$Level* PlatformLogger$Level::FINEST = nullptr;
PlatformLogger$Level* PlatformLogger$Level::FINER = nullptr;
PlatformLogger$Level* PlatformLogger$Level::FINE = nullptr;
PlatformLogger$Level* PlatformLogger$Level::CONFIG = nullptr;
PlatformLogger$Level* PlatformLogger$Level::INFO = nullptr;
PlatformLogger$Level* PlatformLogger$Level::WARNING = nullptr;
PlatformLogger$Level* PlatformLogger$Level::SEVERE = nullptr;
PlatformLogger$Level* PlatformLogger$Level::OFF = nullptr;
$PlatformLogger$LevelArray* PlatformLogger$Level::$VALUES = nullptr;
$ints* PlatformLogger$Level::LEVEL_VALUES = nullptr;

$PlatformLogger$LevelArray* PlatformLogger$Level::$values() {
	$init(PlatformLogger$Level);
	return $new($PlatformLogger$LevelArray, {
		PlatformLogger$Level::ALL,
		PlatformLogger$Level::FINEST,
		PlatformLogger$Level::FINER,
		PlatformLogger$Level::FINE,
		PlatformLogger$Level::CONFIG,
		PlatformLogger$Level::INFO,
		PlatformLogger$Level::WARNING,
		PlatformLogger$Level::SEVERE,
		PlatformLogger$Level::OFF
	});
}

$PlatformLogger$LevelArray* PlatformLogger$Level::values() {
	$init(PlatformLogger$Level);
	return $cast($PlatformLogger$LevelArray, PlatformLogger$Level::$VALUES->clone());
}

PlatformLogger$Level* PlatformLogger$Level::valueOf($String* name) {
	$init(PlatformLogger$Level);
	return $cast(PlatformLogger$Level, $Enum::valueOf(PlatformLogger$Level::class$, name));
}

void PlatformLogger$Level::init$($String* $enum$name, int32_t $enum$ordinal, $System$Logger$Level* systemLevel) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, systemLevel$, systemLevel);
}

$System$Logger$Level* PlatformLogger$Level::systemLevel() {
	return this->systemLevel$;
}

int32_t PlatformLogger$Level::intValue() {
	return $nc(PlatformLogger$Level::LEVEL_VALUES)->get(this->ordinal());
}

PlatformLogger$Level* PlatformLogger$Level::valueOf(int32_t level) {
	$init(PlatformLogger$Level);
	switch (level) {
	case PlatformLogger$Level::SEVERITY_FINEST:
		{
			return PlatformLogger$Level::FINEST;
		}
	case PlatformLogger$Level::SEVERITY_FINE:
		{
			return PlatformLogger$Level::FINE;
		}
	case PlatformLogger$Level::SEVERITY_FINER:
		{
			return PlatformLogger$Level::FINER;
		}
	case PlatformLogger$Level::SEVERITY_INFO:
		{
			return PlatformLogger$Level::INFO;
		}
	case PlatformLogger$Level::SEVERITY_WARNING:
		{
			return PlatformLogger$Level::WARNING;
		}
	case PlatformLogger$Level::SEVERITY_CONFIG:
		{
			return PlatformLogger$Level::CONFIG;
		}
	case PlatformLogger$Level::SEVERITY_SEVERE:
		{
			return PlatformLogger$Level::SEVERE;
		}
	case PlatformLogger$Level::SEVERITY_OFF:
		{
			return PlatformLogger$Level::OFF;
		}
	case PlatformLogger$Level::SEVERITY_ALL:
		{
			return PlatformLogger$Level::ALL;
		}
	}
	int32_t i = $Arrays::binarySearch(PlatformLogger$Level::LEVEL_VALUES, 0, $nc(PlatformLogger$Level::LEVEL_VALUES)->length - 2, level);
	return $nc($(values()))->get(i >= 0 ? i : (-i - 1));
}

void clinit$PlatformLogger$Level($Class* class$) {
	$init($System$Logger$Level);
	$assignStatic(PlatformLogger$Level::ALL, $new(PlatformLogger$Level, "ALL"_s, 0, $System$Logger$Level::ALL));
	$assignStatic(PlatformLogger$Level::FINEST, $new(PlatformLogger$Level, "FINEST"_s, 1, $System$Logger$Level::TRACE));
	$assignStatic(PlatformLogger$Level::FINER, $new(PlatformLogger$Level, "FINER"_s, 2, $System$Logger$Level::TRACE));
	$assignStatic(PlatformLogger$Level::FINE, $new(PlatformLogger$Level, "FINE"_s, 3, $System$Logger$Level::DEBUG));
	$assignStatic(PlatformLogger$Level::CONFIG, $new(PlatformLogger$Level, "CONFIG"_s, 4, $System$Logger$Level::DEBUG));
	$assignStatic(PlatformLogger$Level::INFO, $new(PlatformLogger$Level, "INFO"_s, 5, $System$Logger$Level::INFO));
	$assignStatic(PlatformLogger$Level::WARNING, $new(PlatformLogger$Level, "WARNING"_s, 6, $System$Logger$Level::WARNING));
	$assignStatic(PlatformLogger$Level::SEVERE, $new(PlatformLogger$Level, "SEVERE"_s, 7, $System$Logger$Level::ERROR));
	$assignStatic(PlatformLogger$Level::OFF, $new(PlatformLogger$Level, "OFF"_s, 8, $System$Logger$Level::OFF));
	$assignStatic(PlatformLogger$Level::$VALUES, PlatformLogger$Level::$values());
	$assignStatic(PlatformLogger$Level::LEVEL_VALUES, $new($ints, {
		PlatformLogger$Level::SEVERITY_ALL,
		PlatformLogger$Level::SEVERITY_FINEST,
		PlatformLogger$Level::SEVERITY_FINER,
		PlatformLogger$Level::SEVERITY_FINE,
		PlatformLogger$Level::SEVERITY_CONFIG,
		PlatformLogger$Level::SEVERITY_INFO,
		PlatformLogger$Level::SEVERITY_WARNING,
		PlatformLogger$Level::SEVERITY_SEVERE,
		PlatformLogger$Level::SEVERITY_OFF
	}));
}

PlatformLogger$Level::PlatformLogger$Level() {
}

$Class* PlatformLogger$Level::load$($String* name, bool initialize) {
	$loadClass(PlatformLogger$Level, name, initialize, &_PlatformLogger$Level_ClassInfo_, clinit$PlatformLogger$Level, allocate$PlatformLogger$Level);
	return class$;
}

$Class* PlatformLogger$Level::class$ = nullptr;

		} // logging
	} // util
} // sun