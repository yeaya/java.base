#include <Enum.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ONE

using $EnumArray = $Array<Enum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Enum_FieldInfo_[] = {
	{"ONE", "LEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Enum, ONE)},
	{"$VALUES", "[LEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Enum, $VALUES)},
	{}
};

$MethodInfo _Enum_MethodInfo_[] = {
	{"$values", "()[LEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$EnumArray*(*)()>(&Enum::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Enum::*)($String*,int32_t)>(&Enum::init$))},
	{"valueOf", "(Ljava/lang/String;)LEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Enum*(*)($String*)>(&Enum::valueOf))},
	{"values", "()[LEnum;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$EnumArray*(*)()>(&Enum::values))},
	{}
};

$ClassInfo _Enum_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"Enum",
	"java.lang.Enum",
	nullptr,
	_Enum_FieldInfo_,
	_Enum_MethodInfo_,
	"Ljava/lang/Enum<LEnum;>;"
};

$Object* allocate$Enum($Class* clazz) {
	return $of($alloc(Enum));
}

Enum* Enum::ONE = nullptr;
$EnumArray* Enum::$VALUES = nullptr;

$EnumArray* Enum::$values() {
	$init(Enum);
	return $new($EnumArray, {Enum::ONE});
}

$EnumArray* Enum::values() {
	$init(Enum);
	return $cast($EnumArray, Enum::$VALUES->clone());
}

Enum* Enum::valueOf($String* name) {
	$init(Enum);
	return $cast(Enum, $Enum::valueOf(Enum::class$, name));
}

void Enum::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Enum($Class* class$) {
	$assignStatic(Enum::ONE, $new(Enum, "ONE"_s, 0));
	$assignStatic(Enum::$VALUES, Enum::$values());
}

Enum::Enum() {
}

$Class* Enum::load$($String* name, bool initialize) {
	$loadClass(Enum, name, initialize, &_Enum_ClassInfo_, clinit$Enum, allocate$Enum);
	return class$;
}

$Class* Enum::class$ = nullptr;