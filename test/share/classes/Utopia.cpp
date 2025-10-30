#include <Utopia.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef SHANGRI_LA

using $UtopiaArray = $Array<Utopia>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Utopia_FieldInfo_[] = {
	{"SHANGRI_LA", "LUtopia;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Utopia, SHANGRI_LA)},
	{"$VALUES", "[LUtopia;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Utopia, $VALUES)},
	{}
};

$MethodInfo _Utopia_MethodInfo_[] = {
	{"$values", "()[LUtopia;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$UtopiaArray*(*)()>(&Utopia::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Utopia::*)($String*,int32_t)>(&Utopia::init$))},
	{"valueOf", "(Ljava/lang/String;)LUtopia;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Utopia*(*)($String*)>(&Utopia::valueOf))},
	{"values", "()[LUtopia;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$UtopiaArray*(*)()>(&Utopia::values))},
	{}
};

$ClassInfo _Utopia_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"Utopia",
	"java.lang.Enum",
	nullptr,
	_Utopia_FieldInfo_,
	_Utopia_MethodInfo_,
	"Ljava/lang/Enum<LUtopia;>;"
};

$Object* allocate$Utopia($Class* clazz) {
	return $of($alloc(Utopia));
}

Utopia* Utopia::SHANGRI_LA = nullptr;
$UtopiaArray* Utopia::$VALUES = nullptr;

$UtopiaArray* Utopia::$values() {
	$init(Utopia);
	return $new($UtopiaArray, {Utopia::SHANGRI_LA});
}

$UtopiaArray* Utopia::values() {
	$init(Utopia);
	return $cast($UtopiaArray, Utopia::$VALUES->clone());
}

Utopia* Utopia::valueOf($String* name) {
	$init(Utopia);
	return $cast(Utopia, $Enum::valueOf(Utopia::class$, name));
}

void Utopia::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Utopia($Class* class$) {
	$assignStatic(Utopia::SHANGRI_LA, $new(Utopia, "SHANGRI_LA"_s, 0));
	$assignStatic(Utopia::$VALUES, Utopia::$values());
}

Utopia::Utopia() {
}

$Class* Utopia::load$($String* name, bool initialize) {
	$loadClass(Utopia, name, initialize, &_Utopia_ClassInfo_, clinit$Utopia, allocate$Utopia);
	return class$;
}

$Class* Utopia::class$ = nullptr;