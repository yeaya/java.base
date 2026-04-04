#include <AnotherEnum.h>
#include <AnotherEnum$1.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BAR

using $AnotherEnum$1 = ::AnotherEnum$1;
using $AnotherEnumArray = $Array<AnotherEnum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

AnotherEnum* AnotherEnum::BAR = nullptr;
$AnotherEnumArray* AnotherEnum::$VALUES = nullptr;

$AnotherEnumArray* AnotherEnum::$values() {
	$init(AnotherEnum);
	return $new($AnotherEnumArray, {AnotherEnum::BAR});
}

$AnotherEnumArray* AnotherEnum::values() {
	$init(AnotherEnum);
	return $cast($AnotherEnumArray, AnotherEnum::$VALUES->clone());
}

AnotherEnum* AnotherEnum::valueOf($String* name) {
	$init(AnotherEnum);
	return $cast(AnotherEnum, $Enum::valueOf(AnotherEnum::class$, name));
}

void AnotherEnum::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void AnotherEnum::clinit$($Class* clazz) {
	$assignStatic(AnotherEnum::BAR, $new($AnotherEnum$1, "BAR"_s, 0));
	$assignStatic(AnotherEnum::$VALUES, AnotherEnum::$values());
}

AnotherEnum::AnotherEnum() {
}

$Class* AnotherEnum::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BAR", "LAnotherEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AnotherEnum, BAR)},
		{"$VALUES", "[LAnotherEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AnotherEnum, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LAnotherEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AnotherEnum, $values, $AnotherEnumArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AnotherEnum, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LAnotherEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnotherEnum, valueOf, AnotherEnum*, $String*)},
		{"values", "()[LAnotherEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnotherEnum, values, $AnotherEnumArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnotherEnum$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 's', "enum AnotherEnum"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LExpectedGenericString;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ENUM,
		"AnotherEnum",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LAnotherEnum;>;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"AnotherEnum$1"
	};
	$loadClass(AnotherEnum, name, initialize, &classInfo$$, AnotherEnum::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AnotherEnum));
	});
	return class$;
}

$Class* AnotherEnum::class$ = nullptr;