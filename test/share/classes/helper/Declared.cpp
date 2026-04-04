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

void Declared::clinit$($Class* clazz) {
	$assignStatic(Declared::YES, $new(Declared, "YES"_s, 0));
	$assignStatic(Declared::NO, $new(Declared, "NO"_s, 1));
	$assignStatic(Declared::$VALUES, Declared::$values());
}

Declared::Declared() {
}

$Class* Declared::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"YES", "Lhelper/Declared;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Declared, YES)},
		{"NO", "Lhelper/Declared;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Declared, NO)},
		{"$VALUES", "[Lhelper/Declared;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Declared, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lhelper/Declared;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Declared, $values, $DeclaredArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Declared, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lhelper/Declared;", nullptr, $PUBLIC | $STATIC, $staticMethod(Declared, valueOf, Declared*, $String*)},
		{"values", "()[Lhelper/Declared;", nullptr, $PUBLIC | $STATIC, $staticMethod(Declared, values, $DeclaredArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"helper.Declared",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lhelper/Declared;>;"
	};
	$loadClass(Declared, name, initialize, &classInfo$$, Declared::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Declared));
	});
	return class$;
}

$Class* Declared::class$ = nullptr;

} // helper