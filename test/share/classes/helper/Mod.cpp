#include <helper/Mod.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ABSTRACT
#undef DEFAULT
#undef REGULAR
#undef STATIC

using $ModArray = $Array<::helper::Mod>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace helper {

$FieldInfo _Mod_FieldInfo_[] = {
	{"DEFAULT", "Lhelper/Mod;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Mod, DEFAULT)},
	{"STATIC", "Lhelper/Mod;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Mod, STATIC)},
	{"REGULAR", "Lhelper/Mod;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Mod, REGULAR)},
	{"ABSTRACT", "Lhelper/Mod;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Mod, ABSTRACT)},
	{"$VALUES", "[Lhelper/Mod;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Mod, $VALUES)},
	{}
};

$MethodInfo _Mod_MethodInfo_[] = {
	{"$values", "()[Lhelper/Mod;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Mod, $values, $ModArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Mod, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Lhelper/Mod;", nullptr, $PUBLIC | $STATIC, $staticMethod(Mod, valueOf, Mod*, $String*)},
	{"values", "()[Lhelper/Mod;", nullptr, $PUBLIC | $STATIC, $staticMethod(Mod, values, $ModArray*)},
	{}
};

$ClassInfo _Mod_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"helper.Mod",
	"java.lang.Enum",
	nullptr,
	_Mod_FieldInfo_,
	_Mod_MethodInfo_,
	"Ljava/lang/Enum<Lhelper/Mod;>;"
};

$Object* allocate$Mod($Class* clazz) {
	return $of($alloc(Mod));
}

Mod* Mod::DEFAULT = nullptr;
Mod* Mod::STATIC = nullptr;
Mod* Mod::REGULAR = nullptr;
Mod* Mod::ABSTRACT = nullptr;
$ModArray* Mod::$VALUES = nullptr;

$ModArray* Mod::$values() {
	$init(Mod);
	return $new($ModArray, {
		Mod::DEFAULT,
		Mod::STATIC,
		Mod::REGULAR,
		Mod::ABSTRACT
	});
}

$ModArray* Mod::values() {
	$init(Mod);
	return $cast($ModArray, Mod::$VALUES->clone());
}

Mod* Mod::valueOf($String* name) {
	$init(Mod);
	return $cast(Mod, $Enum::valueOf(Mod::class$, name));
}

void Mod::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Mod($Class* class$) {
	$assignStatic(Mod::DEFAULT, $new(Mod, "DEFAULT"_s, 0));
	$assignStatic(Mod::STATIC, $new(Mod, "STATIC"_s, 1));
	$assignStatic(Mod::REGULAR, $new(Mod, "REGULAR"_s, 2));
	$assignStatic(Mod::ABSTRACT, $new(Mod, "ABSTRACT"_s, 3));
	$assignStatic(Mod::$VALUES, Mod::$values());
}

Mod::Mod() {
}

$Class* Mod::load$($String* name, bool initialize) {
	$loadClass(Mod, name, initialize, &_Mod_ClassInfo_, clinit$Mod, allocate$Mod);
	return class$;
}

$Class* Mod::class$ = nullptr;

} // helper