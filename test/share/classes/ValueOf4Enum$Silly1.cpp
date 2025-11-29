#include <ValueOf4Enum$Silly1.h>

#include <ValueOf4Enum.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

using $ValueOf4Enum$Silly1Array = $Array<ValueOf4Enum$Silly1>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ValueOf4Enum$Silly1_FieldInfo_[] = {
	{"e1", "LValueOf4Enum$Silly1;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ValueOf4Enum$Silly1, e1)},
	{"$VALUES", "[LValueOf4Enum$Silly1;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ValueOf4Enum$Silly1, $VALUES)},
	{}
};

$MethodInfo _ValueOf4Enum$Silly1_MethodInfo_[] = {
	{"$values", "()[LValueOf4Enum$Silly1;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ValueOf4Enum$Silly1Array*(*)()>(&ValueOf4Enum$Silly1::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ValueOf4Enum$Silly1::*)($String*,int32_t)>(&ValueOf4Enum$Silly1::init$))},
	{"valueOf", "(Ljava/lang/String;)LValueOf4Enum$Silly1;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ValueOf4Enum$Silly1*(*)($String*)>(&ValueOf4Enum$Silly1::valueOf))},
	{"values", "()[LValueOf4Enum$Silly1;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ValueOf4Enum$Silly1Array*(*)()>(&ValueOf4Enum$Silly1::values))},
	{}
};

$InnerClassInfo _ValueOf4Enum$Silly1_InnerClassesInfo_[] = {
	{"ValueOf4Enum$Silly1", "ValueOf4Enum", "Silly1", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ValueOf4Enum$Silly1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"ValueOf4Enum$Silly1",
	"java.lang.Enum",
	nullptr,
	_ValueOf4Enum$Silly1_FieldInfo_,
	_ValueOf4Enum$Silly1_MethodInfo_,
	"Ljava/lang/Enum<LValueOf4Enum$Silly1;>;",
	nullptr,
	_ValueOf4Enum$Silly1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ValueOf4Enum"
};

$Object* allocate$ValueOf4Enum$Silly1($Class* clazz) {
	return $of($alloc(ValueOf4Enum$Silly1));
}

ValueOf4Enum$Silly1* ValueOf4Enum$Silly1::e1 = nullptr;
$ValueOf4Enum$Silly1Array* ValueOf4Enum$Silly1::$VALUES = nullptr;

$ValueOf4Enum$Silly1Array* ValueOf4Enum$Silly1::$values() {
	$init(ValueOf4Enum$Silly1);
	return $new($ValueOf4Enum$Silly1Array, {ValueOf4Enum$Silly1::e1});
}

$ValueOf4Enum$Silly1Array* ValueOf4Enum$Silly1::values() {
	$init(ValueOf4Enum$Silly1);
	return $cast($ValueOf4Enum$Silly1Array, ValueOf4Enum$Silly1::$VALUES->clone());
}

ValueOf4Enum$Silly1* ValueOf4Enum$Silly1::valueOf($String* name) {
	$init(ValueOf4Enum$Silly1);
	return $cast(ValueOf4Enum$Silly1, $Enum::valueOf(ValueOf4Enum$Silly1::class$, name));
}

void ValueOf4Enum$Silly1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$ValueOf4Enum$Silly1($Class* class$) {
	$assignStatic(ValueOf4Enum$Silly1::e1, $new(ValueOf4Enum$Silly1, "e1"_s, 0));
	$assignStatic(ValueOf4Enum$Silly1::$VALUES, ValueOf4Enum$Silly1::$values());
}

ValueOf4Enum$Silly1::ValueOf4Enum$Silly1() {
}

$Class* ValueOf4Enum$Silly1::load$($String* name, bool initialize) {
	$loadClass(ValueOf4Enum$Silly1, name, initialize, &_ValueOf4Enum$Silly1_ClassInfo_, clinit$ValueOf4Enum$Silly1, allocate$ValueOf4Enum$Silly1);
	return class$;
}

$Class* ValueOf4Enum$Silly1::class$ = nullptr;