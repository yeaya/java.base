#include <java/util/Locale$FilteringMode.h>

#include <java/lang/Enum.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef AUTOSELECT_FILTERING
#undef EXTENDED_FILTERING
#undef IGNORE_EXTENDED_RANGES
#undef MAP_EXTENDED_RANGES
#undef REJECT_EXTENDED_RANGES

using $Locale$FilteringModeArray = $Array<::java::util::Locale$FilteringMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _Locale$FilteringMode_FieldInfo_[] = {
	{"AUTOSELECT_FILTERING", "Ljava/util/Locale$FilteringMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Locale$FilteringMode, AUTOSELECT_FILTERING)},
	{"EXTENDED_FILTERING", "Ljava/util/Locale$FilteringMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Locale$FilteringMode, EXTENDED_FILTERING)},
	{"IGNORE_EXTENDED_RANGES", "Ljava/util/Locale$FilteringMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Locale$FilteringMode, IGNORE_EXTENDED_RANGES)},
	{"MAP_EXTENDED_RANGES", "Ljava/util/Locale$FilteringMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Locale$FilteringMode, MAP_EXTENDED_RANGES)},
	{"REJECT_EXTENDED_RANGES", "Ljava/util/Locale$FilteringMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Locale$FilteringMode, REJECT_EXTENDED_RANGES)},
	{"$VALUES", "[Ljava/util/Locale$FilteringMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Locale$FilteringMode, $VALUES)},
	{}
};

$MethodInfo _Locale$FilteringMode_MethodInfo_[] = {
	{"$values", "()[Ljava/util/Locale$FilteringMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Locale$FilteringMode, $values, $Locale$FilteringModeArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Locale$FilteringMode, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Ljava/util/Locale$FilteringMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(Locale$FilteringMode, valueOf, Locale$FilteringMode*, $String*)},
	{"values", "()[Ljava/util/Locale$FilteringMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(Locale$FilteringMode, values, $Locale$FilteringModeArray*)},
	{}
};

$InnerClassInfo _Locale$FilteringMode_InnerClassesInfo_[] = {
	{"java.util.Locale$FilteringMode", "java.util.Locale", "FilteringMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Locale$FilteringMode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.util.Locale$FilteringMode",
	"java.lang.Enum",
	nullptr,
	_Locale$FilteringMode_FieldInfo_,
	_Locale$FilteringMode_MethodInfo_,
	"Ljava/lang/Enum<Ljava/util/Locale$FilteringMode;>;",
	nullptr,
	_Locale$FilteringMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Locale"
};

$Object* allocate$Locale$FilteringMode($Class* clazz) {
	return $of($alloc(Locale$FilteringMode));
}

Locale$FilteringMode* Locale$FilteringMode::AUTOSELECT_FILTERING = nullptr;
Locale$FilteringMode* Locale$FilteringMode::EXTENDED_FILTERING = nullptr;
Locale$FilteringMode* Locale$FilteringMode::IGNORE_EXTENDED_RANGES = nullptr;
Locale$FilteringMode* Locale$FilteringMode::MAP_EXTENDED_RANGES = nullptr;
Locale$FilteringMode* Locale$FilteringMode::REJECT_EXTENDED_RANGES = nullptr;
$Locale$FilteringModeArray* Locale$FilteringMode::$VALUES = nullptr;

$Locale$FilteringModeArray* Locale$FilteringMode::$values() {
	$init(Locale$FilteringMode);
	return $new($Locale$FilteringModeArray, {
		Locale$FilteringMode::AUTOSELECT_FILTERING,
		Locale$FilteringMode::EXTENDED_FILTERING,
		Locale$FilteringMode::IGNORE_EXTENDED_RANGES,
		Locale$FilteringMode::MAP_EXTENDED_RANGES,
		Locale$FilteringMode::REJECT_EXTENDED_RANGES
	});
}

$Locale$FilteringModeArray* Locale$FilteringMode::values() {
	$init(Locale$FilteringMode);
	return $cast($Locale$FilteringModeArray, Locale$FilteringMode::$VALUES->clone());
}

Locale$FilteringMode* Locale$FilteringMode::valueOf($String* name) {
	$init(Locale$FilteringMode);
	return $cast(Locale$FilteringMode, $Enum::valueOf(Locale$FilteringMode::class$, name));
}

void Locale$FilteringMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Locale$FilteringMode($Class* class$) {
	$assignStatic(Locale$FilteringMode::AUTOSELECT_FILTERING, $new(Locale$FilteringMode, "AUTOSELECT_FILTERING"_s, 0));
	$assignStatic(Locale$FilteringMode::EXTENDED_FILTERING, $new(Locale$FilteringMode, "EXTENDED_FILTERING"_s, 1));
	$assignStatic(Locale$FilteringMode::IGNORE_EXTENDED_RANGES, $new(Locale$FilteringMode, "IGNORE_EXTENDED_RANGES"_s, 2));
	$assignStatic(Locale$FilteringMode::MAP_EXTENDED_RANGES, $new(Locale$FilteringMode, "MAP_EXTENDED_RANGES"_s, 3));
	$assignStatic(Locale$FilteringMode::REJECT_EXTENDED_RANGES, $new(Locale$FilteringMode, "REJECT_EXTENDED_RANGES"_s, 4));
	$assignStatic(Locale$FilteringMode::$VALUES, Locale$FilteringMode::$values());
}

Locale$FilteringMode::Locale$FilteringMode() {
}

$Class* Locale$FilteringMode::load$($String* name, bool initialize) {
	$loadClass(Locale$FilteringMode, name, initialize, &_Locale$FilteringMode_ClassInfo_, clinit$Locale$FilteringMode, allocate$Locale$FilteringMode);
	return class$;
}

$Class* Locale$FilteringMode::class$ = nullptr;

	} // util
} // java