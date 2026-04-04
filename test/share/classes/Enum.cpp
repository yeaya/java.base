#include <Enum.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ONE

using $EnumArray = $Array<Enum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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

void Enum::clinit$($Class* clazz) {
	$assignStatic(Enum::ONE, $new(Enum, "ONE"_s, 0));
	$assignStatic(Enum::$VALUES, Enum::$values());
}

Enum::Enum() {
}

$Class* Enum::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ONE", "LEnum;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Enum, ONE)},
		{"$VALUES", "[LEnum;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Enum, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LEnum;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Enum, $values, $EnumArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Enum, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(Enum, valueOf, Enum*, $String*)},
		{"values", "()[LEnum;", nullptr, $PUBLIC | $STATIC, $staticMethod(Enum, values, $EnumArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"Enum",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LEnum;>;"
	};
	$loadClass(Enum, name, initialize, &classInfo$$, Enum::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Enum));
	});
	return class$;
}

$Class* Enum::class$ = nullptr;