#include <AnotherEnum.h>

#include <AnotherEnum$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$NamedAttribute AnotherEnum_Attribute_var$0[] = {
	{"value", 's', "enum AnotherEnum"},
	{}
};
$CompoundAttribute _AnotherEnum_Annotations_[] = {
	{"LExpectedGenericString;", AnotherEnum_Attribute_var$0},
	{}
};


$FieldInfo _AnotherEnum_FieldInfo_[] = {
	{"BAR", "LAnotherEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AnotherEnum, BAR)},
	{"$VALUES", "[LAnotherEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AnotherEnum, $VALUES)},
	{}
};

$MethodInfo _AnotherEnum_MethodInfo_[] = {
	{"$values", "()[LAnotherEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$AnotherEnumArray*(*)()>(&AnotherEnum::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(AnotherEnum::*)($String*,int32_t)>(&AnotherEnum::init$))},
	{"valueOf", "(Ljava/lang/String;)LAnotherEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AnotherEnum*(*)($String*)>(&AnotherEnum::valueOf))},
	{"values", "()[LAnotherEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AnotherEnumArray*(*)()>(&AnotherEnum::values))},
	{}
};

$InnerClassInfo _AnotherEnum_InnerClassesInfo_[] = {
	{"AnotherEnum$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _AnotherEnum_ClassInfo_ = {
	$ACC_SUPER | $ENUM,
	"AnotherEnum",
	"java.lang.Enum",
	nullptr,
	_AnotherEnum_FieldInfo_,
	_AnotherEnum_MethodInfo_,
	"Ljava/lang/Enum<LAnotherEnum;>;",
	nullptr,
	_AnotherEnum_InnerClassesInfo_,
	_AnotherEnum_Annotations_,
	nullptr,
	"AnotherEnum$1"
};

$Object* allocate$AnotherEnum($Class* clazz) {
	return $of($alloc(AnotherEnum));
}

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

void clinit$AnotherEnum($Class* class$) {
	$assignStatic(AnotherEnum::BAR, $new($AnotherEnum$1, "BAR"_s, 0));
	$assignStatic(AnotherEnum::$VALUES, AnotherEnum::$values());
}

AnotherEnum::AnotherEnum() {
}

$Class* AnotherEnum::load$($String* name, bool initialize) {
	$loadClass(AnotherEnum, name, initialize, &_AnotherEnum_ClassInfo_, clinit$AnotherEnum, allocate$AnotherEnum);
	return class$;
}

$Class* AnotherEnum::class$ = nullptr;