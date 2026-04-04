#include <AnEnum.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef FOO

using $AnEnumArray = $Array<AnEnum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

AnEnum* AnEnum::FOO = nullptr;
$AnEnumArray* AnEnum::$VALUES = nullptr;

$AnEnumArray* AnEnum::$values() {
	$init(AnEnum);
	return $new($AnEnumArray, {AnEnum::FOO});
}

$AnEnumArray* AnEnum::values() {
	$init(AnEnum);
	return $cast($AnEnumArray, AnEnum::$VALUES->clone());
}

AnEnum* AnEnum::valueOf($String* name) {
	$init(AnEnum);
	return $cast(AnEnum, $Enum::valueOf(AnEnum::class$, name));
}

void AnEnum::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void AnEnum::clinit$($Class* clazz) {
	$assignStatic(AnEnum::FOO, $new(AnEnum, "FOO"_s, 0));
	$assignStatic(AnEnum::$VALUES, AnEnum::$values());
}

AnEnum::AnEnum() {
}

$Class* AnEnum::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FOO", "LAnEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AnEnum, FOO)},
		{"$VALUES", "[LAnEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AnEnum, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LAnEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AnEnum, $values, $AnEnumArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AnEnum, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LAnEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnEnum, valueOf, AnEnum*, $String*)},
		{"values", "()[LAnEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnEnum, values, $AnEnumArray*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "final enum AnEnum"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LExpectedGenericString;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"AnEnum",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LAnEnum;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AnEnum, name, initialize, &classInfo$$, AnEnum::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AnEnum));
	});
	return class$;
}

$Class* AnEnum::class$ = nullptr;