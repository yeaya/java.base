#include <ValueOf4Enum$Specialized.h>

#include <ValueOf4Enum$Specialized$1.h>
#include <ValueOf4Enum.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef FOO

using $ValueOf4Enum = ::ValueOf4Enum;
using $ValueOf4Enum$Specialized$1 = ::ValueOf4Enum$Specialized$1;
using $ValueOf4Enum$SpecializedArray = $Array<ValueOf4Enum$Specialized>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ValueOf4Enum$Specialized_FieldInfo_[] = {
	{"FOO", "LValueOf4Enum$Specialized;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ValueOf4Enum$Specialized, FOO)},
	{"$VALUES", "[LValueOf4Enum$Specialized;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ValueOf4Enum$Specialized, $VALUES)},
	{}
};

$MethodInfo _ValueOf4Enum$Specialized_MethodInfo_[] = {
	{"$values", "()[LValueOf4Enum$Specialized;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ValueOf4Enum$SpecializedArray*(*)()>(&ValueOf4Enum$Specialized::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ValueOf4Enum$Specialized::*)($String*,int32_t)>(&ValueOf4Enum$Specialized::init$))},
	{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"valueOf", "(Ljava/lang/String;)LValueOf4Enum$Specialized;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ValueOf4Enum$Specialized*(*)($String*)>(&ValueOf4Enum$Specialized::valueOf))},
	{"values", "()[LValueOf4Enum$Specialized;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueOf4Enum$SpecializedArray*(*)()>(&ValueOf4Enum$Specialized::values))},
	{}
};

$InnerClassInfo _ValueOf4Enum$Specialized_InnerClassesInfo_[] = {
	{"ValueOf4Enum$Specialized", "ValueOf4Enum", "Specialized", $STATIC | $ABSTRACT | $ENUM},
	{"ValueOf4Enum$Specialized$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _ValueOf4Enum$Specialized_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"ValueOf4Enum$Specialized",
	"java.lang.Enum",
	nullptr,
	_ValueOf4Enum$Specialized_FieldInfo_,
	_ValueOf4Enum$Specialized_MethodInfo_,
	"Ljava/lang/Enum<LValueOf4Enum$Specialized;>;",
	nullptr,
	_ValueOf4Enum$Specialized_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ValueOf4Enum"
};

$Object* allocate$ValueOf4Enum$Specialized($Class* clazz) {
	return $of($alloc(ValueOf4Enum$Specialized));
}

ValueOf4Enum$Specialized* ValueOf4Enum$Specialized::FOO = nullptr;
$ValueOf4Enum$SpecializedArray* ValueOf4Enum$Specialized::$VALUES = nullptr;

$ValueOf4Enum$SpecializedArray* ValueOf4Enum$Specialized::$values() {
	$init(ValueOf4Enum$Specialized);
	return $new($ValueOf4Enum$SpecializedArray, {ValueOf4Enum$Specialized::FOO});
}

$ValueOf4Enum$SpecializedArray* ValueOf4Enum$Specialized::values() {
	$init(ValueOf4Enum$Specialized);
	return $cast($ValueOf4Enum$SpecializedArray, ValueOf4Enum$Specialized::$VALUES->clone());
}

ValueOf4Enum$Specialized* ValueOf4Enum$Specialized::valueOf($String* name) {
	$init(ValueOf4Enum$Specialized);
	return $cast(ValueOf4Enum$Specialized, $Enum::valueOf(ValueOf4Enum$Specialized::class$, name));
}

void ValueOf4Enum$Specialized::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ValueOf4Enum$Specialized($Class* class$) {
	$assignStatic(ValueOf4Enum$Specialized::FOO, $new($ValueOf4Enum$Specialized$1, "FOO"_s, 0));
	$assignStatic(ValueOf4Enum$Specialized::$VALUES, ValueOf4Enum$Specialized::$values());
}

ValueOf4Enum$Specialized::ValueOf4Enum$Specialized() {
}

$Class* ValueOf4Enum$Specialized::load$($String* name, bool initialize) {
	$loadClass(ValueOf4Enum$Specialized, name, initialize, &_ValueOf4Enum$Specialized_ClassInfo_, clinit$ValueOf4Enum$Specialized, allocate$ValueOf4Enum$Specialized);
	return class$;
}

$Class* ValueOf4Enum$Specialized::class$ = nullptr;