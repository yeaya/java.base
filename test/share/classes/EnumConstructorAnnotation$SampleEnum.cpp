#include <EnumConstructorAnnotation$SampleEnum.h>
#include <EnumConstructorAnnotation.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef INSTANCE

using $EnumConstructorAnnotation$SampleEnumArray = $Array<EnumConstructorAnnotation$SampleEnum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;

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

void EnumConstructorAnnotation$SampleEnum::clinit$($Class* clazz) {
	$assignStatic(EnumConstructorAnnotation$SampleEnum::INSTANCE, $new(EnumConstructorAnnotation$SampleEnum, "INSTANCE"_s, 0, "foo"_s));
	$assignStatic(EnumConstructorAnnotation$SampleEnum::$VALUES, EnumConstructorAnnotation$SampleEnum::$values());
}

EnumConstructorAnnotation$SampleEnum::EnumConstructorAnnotation$SampleEnum() {
}

$Class* EnumConstructorAnnotation$SampleEnum::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "LEnumConstructorAnnotation$SampleEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EnumConstructorAnnotation$SampleEnum, INSTANCE)},
		{"$VALUES", "[LEnumConstructorAnnotation$SampleEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(EnumConstructorAnnotation$SampleEnum, $VALUES)},
		{}
	};
	$ParameterAnnotation init$methodParamAnnotations$$[] = {
		{"LEnumConstructorAnnotation$SampleAnnotation;", nullptr, 2},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LEnumConstructorAnnotation$SampleEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(EnumConstructorAnnotation$SampleEnum, $values, $EnumConstructorAnnotation$SampleEnumArray*)},
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(EnumConstructorAnnotation$SampleEnum, init$, void, $String*, int32_t, $String*), nullptr, nullptr, nullptr, nullptr, init$methodParamAnnotations$$},
		{"valueOf", "(Ljava/lang/String;)LEnumConstructorAnnotation$SampleEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(EnumConstructorAnnotation$SampleEnum, valueOf, EnumConstructorAnnotation$SampleEnum*, $String*)},
		{"values", "()[LEnumConstructorAnnotation$SampleEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(EnumConstructorAnnotation$SampleEnum, values, $EnumConstructorAnnotation$SampleEnumArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnumConstructorAnnotation$SampleEnum", "EnumConstructorAnnotation", "SampleEnum", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"EnumConstructorAnnotation$SampleEnum",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LEnumConstructorAnnotation$SampleEnum;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"EnumConstructorAnnotation"
	};
	$loadClass(EnumConstructorAnnotation$SampleEnum, name, initialize, &classInfo$$, EnumConstructorAnnotation$SampleEnum::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(EnumConstructorAnnotation$SampleEnum));
	});
	return class$;
}

$Class* EnumConstructorAnnotation$SampleEnum::class$ = nullptr;