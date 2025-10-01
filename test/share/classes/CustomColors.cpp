#include <CustomColors.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ParameterAnnotation.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef FUCHSIA
#undef MULBERRY

using $CustomColorsArray = $Array<CustomColors>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

$ParameterAnnotation _CustomColors_MethodParamAnnotations_init$1[] = {
	{"LMarker;", nullptr, 2},
	{}
};

$FieldInfo _CustomColors_FieldInfo_[] = {
	{"FUCHSIA", "LCustomColors;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CustomColors, FUCHSIA)},
	{"MULBERRY", "LCustomColors;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CustomColors, MULBERRY)},
	{"$VALUES", "[LCustomColors;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CustomColors, $VALUES)},
	{}
};

$MethodInfo _CustomColors_MethodInfo_[] = {
	{"$values", "()[LCustomColors;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CustomColorsArray*(*)()>(&CustomColors::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(CustomColors::*)($String*,int32_t,int32_t)>(&CustomColors::init$)), nullptr, nullptr, nullptr, nullptr, _CustomColors_MethodParamAnnotations_init$1},
	{"<init>", "(Ljava/lang/String;ID)V", "(D)V", $PRIVATE, $method(static_cast<void(CustomColors::*)($String*,int32_t,double)>(&CustomColors::init$))},
	{"valueOf", "(Ljava/lang/String;)LCustomColors;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CustomColors*(*)($String*)>(&CustomColors::valueOf))},
	{"values", "()[LCustomColors;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CustomColorsArray*(*)()>(&CustomColors::values))},
	{}
};

$ClassInfo _CustomColors_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"CustomColors",
	"java.lang.Enum",
	nullptr,
	_CustomColors_FieldInfo_,
	_CustomColors_MethodInfo_,
	"Ljava/lang/Enum<LCustomColors;>;"
};

$Object* allocate$CustomColors($Class* clazz) {
	return $of($alloc(CustomColors));
}

CustomColors* CustomColors::FUCHSIA = nullptr;
CustomColors* CustomColors::MULBERRY = nullptr;
$CustomColorsArray* CustomColors::$VALUES = nullptr;

$CustomColorsArray* CustomColors::$values() {
	$init(CustomColors);
	return $new($CustomColorsArray, {
		CustomColors::FUCHSIA,
		CustomColors::MULBERRY
	});
}

$CustomColorsArray* CustomColors::values() {
	$init(CustomColors);
	return $cast($CustomColorsArray, CustomColors::$VALUES->clone());
}

CustomColors* CustomColors::valueOf($String* name) {
	$init(CustomColors);
	return $cast(CustomColors, $Enum::valueOf(CustomColors::class$, name));
}

void CustomColors::init$($String* $enum$name, int32_t $enum$ordinal, int32_t arg) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void CustomColors::init$($String* $enum$name, int32_t $enum$ordinal, double arg) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CustomColors($Class* class$) {
	$assignStatic(CustomColors::FUCHSIA, $new(CustomColors, "FUCHSIA"_s, 0, 5));
	$assignStatic(CustomColors::MULBERRY, $new(CustomColors, "MULBERRY"_s, 1, 6.0));
	$assignStatic(CustomColors::$VALUES, CustomColors::$values());
}

CustomColors::CustomColors() {
}

$Class* CustomColors::load$($String* name, bool initialize) {
	$loadClass(CustomColors, name, initialize, &_CustomColors_ClassInfo_, clinit$CustomColors, allocate$CustomColors);
	return class$;
}

$Class* CustomColors::class$ = nullptr;