#include <ValueOf4Enum$Silly0.h>
#include <ValueOf4Enum.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

using $ValueOf4Enum$Silly0Array = $Array<ValueOf4Enum$Silly0>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$ValueOf4Enum$Silly0Array* ValueOf4Enum$Silly0::$VALUES = nullptr;

$ValueOf4Enum$Silly0Array* ValueOf4Enum$Silly0::$values() {
	$init(ValueOf4Enum$Silly0);
	return $new($ValueOf4Enum$Silly0Array, 0);
}

$ValueOf4Enum$Silly0Array* ValueOf4Enum$Silly0::values() {
	$init(ValueOf4Enum$Silly0);
	return $cast($ValueOf4Enum$Silly0Array, ValueOf4Enum$Silly0::$VALUES->clone());
}

ValueOf4Enum$Silly0* ValueOf4Enum$Silly0::valueOf($String* name) {
	$init(ValueOf4Enum$Silly0);
	return $cast(ValueOf4Enum$Silly0, $Enum::valueOf(ValueOf4Enum$Silly0::class$, name));
}

void ValueOf4Enum$Silly0::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void ValueOf4Enum$Silly0::clinit$($Class* clazz) {
	$assignStatic(ValueOf4Enum$Silly0::$VALUES, ValueOf4Enum$Silly0::$values());
}

ValueOf4Enum$Silly0::ValueOf4Enum$Silly0() {
}

$Class* ValueOf4Enum$Silly0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$VALUES", "[LValueOf4Enum$Silly0;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ValueOf4Enum$Silly0, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LValueOf4Enum$Silly0;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ValueOf4Enum$Silly0, $values, $ValueOf4Enum$Silly0Array*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ValueOf4Enum$Silly0, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LValueOf4Enum$Silly0;", nullptr, $PUBLIC | $STATIC, $staticMethod(ValueOf4Enum$Silly0, valueOf, ValueOf4Enum$Silly0*, $String*)},
		{"values", "()[LValueOf4Enum$Silly0;", nullptr, $PUBLIC | $STATIC, $staticMethod(ValueOf4Enum$Silly0, values, $ValueOf4Enum$Silly0Array*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ValueOf4Enum$Silly0", "ValueOf4Enum", "Silly0", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"ValueOf4Enum$Silly0",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LValueOf4Enum$Silly0;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ValueOf4Enum"
	};
	$loadClass(ValueOf4Enum$Silly0, name, initialize, &classInfo$$, ValueOf4Enum$Silly0::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ValueOf4Enum$Silly0));
	});
	return class$;
}

$Class* ValueOf4Enum$Silly0::class$ = nullptr;