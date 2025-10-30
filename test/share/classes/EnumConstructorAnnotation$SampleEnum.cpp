#include <EnumConstructorAnnotation$SampleEnum.h>

#include <EnumConstructorAnnotation.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INSTANCE

using $EnumConstructorAnnotation = ::EnumConstructorAnnotation;
using $EnumConstructorAnnotation$SampleEnumArray = $Array<EnumConstructorAnnotation$SampleEnum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

$ParameterAnnotation _EnumConstructorAnnotation$SampleEnum_MethodParamAnnotations_init$1[] = {
	{"LEnumConstructorAnnotation$SampleAnnotation;", nullptr, 2},
	{}
};

$FieldInfo _EnumConstructorAnnotation$SampleEnum_FieldInfo_[] = {
	{"INSTANCE", "LEnumConstructorAnnotation$SampleEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EnumConstructorAnnotation$SampleEnum, INSTANCE)},
	{"$VALUES", "[LEnumConstructorAnnotation$SampleEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(EnumConstructorAnnotation$SampleEnum, $VALUES)},
	{}
};

$MethodInfo _EnumConstructorAnnotation$SampleEnum_MethodInfo_[] = {
	{"$values", "()[LEnumConstructorAnnotation$SampleEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$EnumConstructorAnnotation$SampleEnumArray*(*)()>(&EnumConstructorAnnotation$SampleEnum::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(EnumConstructorAnnotation$SampleEnum::*)($String*,int32_t,$String*)>(&EnumConstructorAnnotation$SampleEnum::init$)), nullptr, nullptr, nullptr, nullptr, _EnumConstructorAnnotation$SampleEnum_MethodParamAnnotations_init$1},
	{"valueOf", "(Ljava/lang/String;)LEnumConstructorAnnotation$SampleEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<EnumConstructorAnnotation$SampleEnum*(*)($String*)>(&EnumConstructorAnnotation$SampleEnum::valueOf))},
	{"values", "()[LEnumConstructorAnnotation$SampleEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$EnumConstructorAnnotation$SampleEnumArray*(*)()>(&EnumConstructorAnnotation$SampleEnum::values))},
	{}
};

$InnerClassInfo _EnumConstructorAnnotation$SampleEnum_InnerClassesInfo_[] = {
	{"EnumConstructorAnnotation$SampleEnum", "EnumConstructorAnnotation", "SampleEnum", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _EnumConstructorAnnotation$SampleEnum_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"EnumConstructorAnnotation$SampleEnum",
	"java.lang.Enum",
	nullptr,
	_EnumConstructorAnnotation$SampleEnum_FieldInfo_,
	_EnumConstructorAnnotation$SampleEnum_MethodInfo_,
	"Ljava/lang/Enum<LEnumConstructorAnnotation$SampleEnum;>;",
	nullptr,
	_EnumConstructorAnnotation$SampleEnum_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnumConstructorAnnotation"
};

$Object* allocate$EnumConstructorAnnotation$SampleEnum($Class* clazz) {
	return $of($alloc(EnumConstructorAnnotation$SampleEnum));
}

EnumConstructorAnnotation$SampleEnum* EnumConstructorAnnotation$SampleEnum::INSTANCE = nullptr;
$EnumConstructorAnnotation$SampleEnumArray* EnumConstructorAnnotation$SampleEnum::$VALUES = nullptr;

$EnumConstructorAnnotation$SampleEnumArray* EnumConstructorAnnotation$SampleEnum::$values() {
	$init(EnumConstructorAnnotation$SampleEnum);
	return $new($EnumConstructorAnnotation$SampleEnumArray, {EnumConstructorAnnotation$SampleEnum::INSTANCE});
}

$EnumConstructorAnnotation$SampleEnumArray* EnumConstructorAnnotation$SampleEnum::values() {
	$init(EnumConstructorAnnotation$SampleEnum);
	return $cast($EnumConstructorAnnotation$SampleEnumArray, EnumConstructorAnnotation$SampleEnum::$VALUES->clone());
}

EnumConstructorAnnotation$SampleEnum* EnumConstructorAnnotation$SampleEnum::valueOf($String* name) {
	$init(EnumConstructorAnnotation$SampleEnum);
	return $cast(EnumConstructorAnnotation$SampleEnum, $Enum::valueOf(EnumConstructorAnnotation$SampleEnum::class$, name));
}

void EnumConstructorAnnotation$SampleEnum::init$($String* $enum$name, int32_t $enum$ordinal, $String* value) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$EnumConstructorAnnotation$SampleEnum($Class* class$) {
	$assignStatic(EnumConstructorAnnotation$SampleEnum::INSTANCE, $new(EnumConstructorAnnotation$SampleEnum, "INSTANCE"_s, 0, "foo"_s));
	$assignStatic(EnumConstructorAnnotation$SampleEnum::$VALUES, EnumConstructorAnnotation$SampleEnum::$values());
}

EnumConstructorAnnotation$SampleEnum::EnumConstructorAnnotation$SampleEnum() {
}

$Class* EnumConstructorAnnotation$SampleEnum::load$($String* name, bool initialize) {
	$loadClass(EnumConstructorAnnotation$SampleEnum, name, initialize, &_EnumConstructorAnnotation$SampleEnum_ClassInfo_, clinit$EnumConstructorAnnotation$SampleEnum, allocate$EnumConstructorAnnotation$SampleEnum);
	return class$;
}

$Class* EnumConstructorAnnotation$SampleEnum::class$ = nullptr;