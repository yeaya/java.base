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

$NamedAttribute AnEnum_Attribute_var$0[] = {
	{"value", 's', "final enum AnEnum"},
	{}
};

$CompoundAttribute _AnEnum_Annotations_[] = {
	{"LExpectedGenericString;", AnEnum_Attribute_var$0},
	{}
};

$FieldInfo _AnEnum_FieldInfo_[] = {
	{"FOO", "LAnEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AnEnum, FOO)},
	{"$VALUES", "[LAnEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AnEnum, $VALUES)},
	{}
};

$MethodInfo _AnEnum_MethodInfo_[] = {
	{"$values", "()[LAnEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AnEnum, $values, $AnEnumArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(AnEnum, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)LAnEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnEnum, valueOf, AnEnum*, $String*)},
	{"values", "()[LAnEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(AnEnum, values, $AnEnumArray*)},
	{}
};

$ClassInfo _AnEnum_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"AnEnum",
	"java.lang.Enum",
	nullptr,
	_AnEnum_FieldInfo_,
	_AnEnum_MethodInfo_,
	"Ljava/lang/Enum<LAnEnum;>;",
	nullptr,
	nullptr,
	_AnEnum_Annotations_
};

$Object* allocate$AnEnum($Class* clazz) {
	return $of($alloc(AnEnum));
}

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

void clinit$AnEnum($Class* class$) {
	$assignStatic(AnEnum::FOO, $new(AnEnum, "FOO"_s, 0));
	$assignStatic(AnEnum::$VALUES, AnEnum::$values());
}

AnEnum::AnEnum() {
}

$Class* AnEnum::load$($String* name, bool initialize) {
	$loadClass(AnEnum, name, initialize, &_AnEnum_ClassInfo_, clinit$AnEnum, allocate$AnEnum);
	return class$;
}

$Class* AnEnum::class$ = nullptr;