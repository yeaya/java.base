#include <DynamicConstantDescTest$MyEnum.h>
#include <DynamicConstantDescTest.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef A
#undef B

using $DynamicConstantDescTest$MyEnumArray = $Array<DynamicConstantDescTest$MyEnum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

DynamicConstantDescTest$MyEnum* DynamicConstantDescTest$MyEnum::A = nullptr;
DynamicConstantDescTest$MyEnum* DynamicConstantDescTest$MyEnum::B = nullptr;
$DynamicConstantDescTest$MyEnumArray* DynamicConstantDescTest$MyEnum::$VALUES = nullptr;

$DynamicConstantDescTest$MyEnumArray* DynamicConstantDescTest$MyEnum::$values() {
	$init(DynamicConstantDescTest$MyEnum);
	return $new($DynamicConstantDescTest$MyEnumArray, {
		DynamicConstantDescTest$MyEnum::A,
		DynamicConstantDescTest$MyEnum::B
	});
}

$DynamicConstantDescTest$MyEnumArray* DynamicConstantDescTest$MyEnum::values() {
	$init(DynamicConstantDescTest$MyEnum);
	return $cast($DynamicConstantDescTest$MyEnumArray, DynamicConstantDescTest$MyEnum::$VALUES->clone());
}

DynamicConstantDescTest$MyEnum* DynamicConstantDescTest$MyEnum::valueOf($String* name) {
	$init(DynamicConstantDescTest$MyEnum);
	return $cast(DynamicConstantDescTest$MyEnum, $Enum::valueOf(DynamicConstantDescTest$MyEnum::class$, name));
}

void DynamicConstantDescTest$MyEnum::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void DynamicConstantDescTest$MyEnum::clinit$($Class* clazz) {
	$assignStatic(DynamicConstantDescTest$MyEnum::A, $new(DynamicConstantDescTest$MyEnum, "A"_s, 0));
	$assignStatic(DynamicConstantDescTest$MyEnum::B, $new(DynamicConstantDescTest$MyEnum, "B"_s, 1));
	$assignStatic(DynamicConstantDescTest$MyEnum::$VALUES, DynamicConstantDescTest$MyEnum::$values());
}

DynamicConstantDescTest$MyEnum::DynamicConstantDescTest$MyEnum() {
}

$Class* DynamicConstantDescTest$MyEnum::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"A", "LDynamicConstantDescTest$MyEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DynamicConstantDescTest$MyEnum, A)},
		{"B", "LDynamicConstantDescTest$MyEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DynamicConstantDescTest$MyEnum, B)},
		{"$VALUES", "[LDynamicConstantDescTest$MyEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DynamicConstantDescTest$MyEnum, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LDynamicConstantDescTest$MyEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DynamicConstantDescTest$MyEnum, $values, $DynamicConstantDescTest$MyEnumArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(DynamicConstantDescTest$MyEnum, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LDynamicConstantDescTest$MyEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(DynamicConstantDescTest$MyEnum, valueOf, DynamicConstantDescTest$MyEnum*, $String*)},
		{"values", "()[LDynamicConstantDescTest$MyEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(DynamicConstantDescTest$MyEnum, values, $DynamicConstantDescTest$MyEnumArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DynamicConstantDescTest$MyEnum", "DynamicConstantDescTest", "MyEnum", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"DynamicConstantDescTest$MyEnum",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LDynamicConstantDescTest$MyEnum;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DynamicConstantDescTest"
	};
	$loadClass(DynamicConstantDescTest$MyEnum, name, initialize, &classInfo$$, DynamicConstantDescTest$MyEnum::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DynamicConstantDescTest$MyEnum));
	});
	return class$;
}

$Class* DynamicConstantDescTest$MyEnum::class$ = nullptr;