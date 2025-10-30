#include <java/math/RoundingMode.h>

#include <java/lang/Enum.h>
#include <java/math/BigDecimal.h>
#include <jcpp.h>

#undef CEILING
#undef DOWN
#undef FLOOR
#undef HALF_DOWN
#undef HALF_EVEN
#undef HALF_UP
#undef ROUND_CEILING
#undef ROUND_DOWN
#undef ROUND_FLOOR
#undef ROUND_HALF_DOWN
#undef ROUND_HALF_EVEN
#undef ROUND_HALF_UP
#undef ROUND_UNNECESSARY
#undef ROUND_UP
#undef UNNECESSARY
#undef UP

using $RoundingModeArray = $Array<::java::math::RoundingMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;

namespace java {
	namespace math {

$FieldInfo _RoundingMode_FieldInfo_[] = {
	{"UP", "Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RoundingMode, UP)},
	{"DOWN", "Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RoundingMode, DOWN)},
	{"CEILING", "Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RoundingMode, CEILING)},
	{"FLOOR", "Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RoundingMode, FLOOR)},
	{"HALF_UP", "Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RoundingMode, HALF_UP)},
	{"HALF_DOWN", "Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RoundingMode, HALF_DOWN)},
	{"HALF_EVEN", "Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RoundingMode, HALF_EVEN)},
	{"UNNECESSARY", "Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RoundingMode, UNNECESSARY)},
	{"$VALUES", "[Ljava/math/RoundingMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RoundingMode, $VALUES)},
	{"oldMode", "I", nullptr, $FINAL, $field(RoundingMode, oldMode)},
	{}
};

$MethodInfo _RoundingMode_MethodInfo_[] = {
	{"$values", "()[Ljava/math/RoundingMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$RoundingModeArray*(*)()>(&RoundingMode::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(RoundingMode::*)($String*,int32_t,int32_t)>(&RoundingMode::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RoundingMode*(*)($String*)>(&RoundingMode::valueOf))},
	{"valueOf", "(I)Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<RoundingMode*(*)(int32_t)>(&RoundingMode::valueOf))},
	{"values", "()[Ljava/math/RoundingMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RoundingModeArray*(*)()>(&RoundingMode::values))},
	{}
};

$ClassInfo _RoundingMode_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.math.RoundingMode",
	"java.lang.Enum",
	nullptr,
	_RoundingMode_FieldInfo_,
	_RoundingMode_MethodInfo_,
	"Ljava/lang/Enum<Ljava/math/RoundingMode;>;"
};

$Object* allocate$RoundingMode($Class* clazz) {
	return $of($alloc(RoundingMode));
}

RoundingMode* RoundingMode::UP = nullptr;
RoundingMode* RoundingMode::DOWN = nullptr;
RoundingMode* RoundingMode::CEILING = nullptr;
RoundingMode* RoundingMode::FLOOR = nullptr;
RoundingMode* RoundingMode::HALF_UP = nullptr;
RoundingMode* RoundingMode::HALF_DOWN = nullptr;
RoundingMode* RoundingMode::HALF_EVEN = nullptr;
RoundingMode* RoundingMode::UNNECESSARY = nullptr;
$RoundingModeArray* RoundingMode::$VALUES = nullptr;

$RoundingModeArray* RoundingMode::$values() {
	$init(RoundingMode);
	return $new($RoundingModeArray, {
		RoundingMode::UP,
		RoundingMode::DOWN,
		RoundingMode::CEILING,
		RoundingMode::FLOOR,
		RoundingMode::HALF_UP,
		RoundingMode::HALF_DOWN,
		RoundingMode::HALF_EVEN,
		RoundingMode::UNNECESSARY
	});
}

$RoundingModeArray* RoundingMode::values() {
	$init(RoundingMode);
	return $cast($RoundingModeArray, RoundingMode::$VALUES->clone());
}

RoundingMode* RoundingMode::valueOf($String* name) {
	$init(RoundingMode);
	return $cast(RoundingMode, $Enum::valueOf(RoundingMode::class$, name));
}

void RoundingMode::init$($String* $enum$name, int32_t $enum$ordinal, int32_t oldMode) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->oldMode = oldMode;
}

RoundingMode* RoundingMode::valueOf(int32_t rm) {
	$init(RoundingMode);

	$var(RoundingMode, var$0, nullptr)
	switch (rm) {
	case $BigDecimal::ROUND_UP:
		{
			$assign(var$0, RoundingMode::UP);
			break;
		}
	case $BigDecimal::ROUND_DOWN:
		{
			$assign(var$0, RoundingMode::DOWN);
			break;
		}
	case $BigDecimal::ROUND_CEILING:
		{
			$assign(var$0, RoundingMode::CEILING);
			break;
		}
	case $BigDecimal::ROUND_FLOOR:
		{
			$assign(var$0, RoundingMode::FLOOR);
			break;
		}
	case $BigDecimal::ROUND_HALF_UP:
		{
			$assign(var$0, RoundingMode::HALF_UP);
			break;
		}
	case $BigDecimal::ROUND_HALF_DOWN:
		{
			$assign(var$0, RoundingMode::HALF_DOWN);
			break;
		}
	case $BigDecimal::ROUND_HALF_EVEN:
		{
			$assign(var$0, RoundingMode::HALF_EVEN);
			break;
		}
	case $BigDecimal::ROUND_UNNECESSARY:
		{
			$assign(var$0, RoundingMode::UNNECESSARY);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "argument out of range"_s);
		}
	}
	return var$0;
}

void clinit$RoundingMode($Class* class$) {
	$assignStatic(RoundingMode::UP, $new(RoundingMode, "UP"_s, 0, $BigDecimal::ROUND_UP));
	$assignStatic(RoundingMode::DOWN, $new(RoundingMode, "DOWN"_s, 1, $BigDecimal::ROUND_DOWN));
	$assignStatic(RoundingMode::CEILING, $new(RoundingMode, "CEILING"_s, 2, $BigDecimal::ROUND_CEILING));
	$assignStatic(RoundingMode::FLOOR, $new(RoundingMode, "FLOOR"_s, 3, $BigDecimal::ROUND_FLOOR));
	$assignStatic(RoundingMode::HALF_UP, $new(RoundingMode, "HALF_UP"_s, 4, $BigDecimal::ROUND_HALF_UP));
	$assignStatic(RoundingMode::HALF_DOWN, $new(RoundingMode, "HALF_DOWN"_s, 5, $BigDecimal::ROUND_HALF_DOWN));
	$assignStatic(RoundingMode::HALF_EVEN, $new(RoundingMode, "HALF_EVEN"_s, 6, $BigDecimal::ROUND_HALF_EVEN));
	$assignStatic(RoundingMode::UNNECESSARY, $new(RoundingMode, "UNNECESSARY"_s, 7, $BigDecimal::ROUND_UNNECESSARY));
	$assignStatic(RoundingMode::$VALUES, RoundingMode::$values());
}

RoundingMode::RoundingMode() {
}

$Class* RoundingMode::load$($String* name, bool initialize) {
	$loadClass(RoundingMode, name, initialize, &_RoundingMode_ClassInfo_, clinit$RoundingMode, allocate$RoundingMode);
	return class$;
}

$Class* RoundingMode::class$ = nullptr;

	} // math
} // java