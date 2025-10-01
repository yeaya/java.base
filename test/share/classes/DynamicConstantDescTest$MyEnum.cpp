#include <DynamicConstantDescTest$MyEnum.h>

#include <DynamicConstantDescTest.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef A
#undef B

using $DynamicConstantDescTest = ::DynamicConstantDescTest;
using $DynamicConstantDescTest$MyEnumArray = $Array<DynamicConstantDescTest$MyEnum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _DynamicConstantDescTest$MyEnum_FieldInfo_[] = {
	{"A", "LDynamicConstantDescTest$MyEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DynamicConstantDescTest$MyEnum, A)},
	{"B", "LDynamicConstantDescTest$MyEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DynamicConstantDescTest$MyEnum, B)},
	{"$VALUES", "[LDynamicConstantDescTest$MyEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DynamicConstantDescTest$MyEnum, $VALUES)},
	{}
};

$MethodInfo _DynamicConstantDescTest$MyEnum_MethodInfo_[] = {
	{"$values", "()[LDynamicConstantDescTest$MyEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DynamicConstantDescTest$MyEnumArray*(*)()>(&DynamicConstantDescTest$MyEnum::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DynamicConstantDescTest$MyEnum::*)($String*,int32_t)>(&DynamicConstantDescTest$MyEnum::init$))},
	{"valueOf", "(Ljava/lang/String;)LDynamicConstantDescTest$MyEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DynamicConstantDescTest$MyEnum*(*)($String*)>(&DynamicConstantDescTest$MyEnum::valueOf))},
	{"values", "()[LDynamicConstantDescTest$MyEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DynamicConstantDescTest$MyEnumArray*(*)()>(&DynamicConstantDescTest$MyEnum::values))},
	{}
};

$InnerClassInfo _DynamicConstantDescTest$MyEnum_InnerClassesInfo_[] = {
	{"DynamicConstantDescTest$MyEnum", "DynamicConstantDescTest", "MyEnum", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DynamicConstantDescTest$MyEnum_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"DynamicConstantDescTest$MyEnum",
	"java.lang.Enum",
	nullptr,
	_DynamicConstantDescTest$MyEnum_FieldInfo_,
	_DynamicConstantDescTest$MyEnum_MethodInfo_,
	"Ljava/lang/Enum<LDynamicConstantDescTest$MyEnum;>;",
	nullptr,
	_DynamicConstantDescTest$MyEnum_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DynamicConstantDescTest"
};

$Object* allocate$DynamicConstantDescTest$MyEnum($Class* clazz) {
	return $of($alloc(DynamicConstantDescTest$MyEnum));
}

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

void clinit$DynamicConstantDescTest$MyEnum($Class* class$) {
	$assignStatic(DynamicConstantDescTest$MyEnum::A, $new(DynamicConstantDescTest$MyEnum, "A"_s, 0));
	$assignStatic(DynamicConstantDescTest$MyEnum::B, $new(DynamicConstantDescTest$MyEnum, "B"_s, 1));
	$assignStatic(DynamicConstantDescTest$MyEnum::$VALUES, DynamicConstantDescTest$MyEnum::$values());
}

DynamicConstantDescTest$MyEnum::DynamicConstantDescTest$MyEnum() {
}

$Class* DynamicConstantDescTest$MyEnum::load$($String* name, bool initialize) {
	$loadClass(DynamicConstantDescTest$MyEnum, name, initialize, &_DynamicConstantDescTest$MyEnum_ClassInfo_, clinit$DynamicConstantDescTest$MyEnum, allocate$DynamicConstantDescTest$MyEnum);
	return class$;
}

$Class* DynamicConstantDescTest$MyEnum::class$ = nullptr;