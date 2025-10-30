#include <helper/Declared.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NO
#undef YES

using $DeclaredArray = $Array<::helper::Declared>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace helper {

$FieldInfo _Declared_FieldInfo_[] = {
	{"YES", "Lhelper/Declared;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Declared, YES)},
	{"NO", "Lhelper/Declared;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Declared, NO)},
	{"$VALUES", "[Lhelper/Declared;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Declared, $VALUES)},
	{}
};

$MethodInfo _Declared_MethodInfo_[] = {
	{"$values", "()[Lhelper/Declared;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DeclaredArray*(*)()>(&Declared::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Declared::*)($String*,int32_t)>(&Declared::init$))},
	{"valueOf", "(Ljava/lang/String;)Lhelper/Declared;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Declared*(*)($String*)>(&Declared::valueOf))},
	{"values", "()[Lhelper/Declared;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DeclaredArray*(*)()>(&Declared::values))},
	{}
};

$ClassInfo _Declared_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"helper.Declared",
	"java.lang.Enum",
	nullptr,
	_Declared_FieldInfo_,
	_Declared_MethodInfo_,
	"Ljava/lang/Enum<Lhelper/Declared;>;"
};

$Object* allocate$Declared($Class* clazz) {
	return $of($alloc(Declared));
}

Declared* Declared::YES = nullptr;
Declared* Declared::NO = nullptr;
$DeclaredArray* Declared::$VALUES = nullptr;

$DeclaredArray* Declared::$values() {
	$init(Declared);
	return $new($DeclaredArray, {
		Declared::YES,
		Declared::NO
	});
}

$DeclaredArray* Declared::values() {
	$init(Declared);
	return $cast($DeclaredArray, Declared::$VALUES->clone());
}

Declared* Declared::valueOf($String* name) {
	$init(Declared);
	return $cast(Declared, $Enum::valueOf(Declared::class$, name));
}

void Declared::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Declared($Class* class$) {
	$assignStatic(Declared::YES, $new(Declared, "YES"_s, 0));
	$assignStatic(Declared::NO, $new(Declared, "NO"_s, 1));
	$assignStatic(Declared::$VALUES, Declared::$values());
}

Declared::Declared() {
}

$Class* Declared::load$($String* name, bool initialize) {
	$loadClass(Declared, name, initialize, &_Declared_ClassInfo_, clinit$Declared, allocate$Declared);
	return class$;
}

$Class* Declared::class$ = nullptr;

} // helper