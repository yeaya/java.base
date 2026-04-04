#include <ValueOf4Enum$Specialized.h>
#include <ValueOf4Enum$Specialized$1.h>
#include <ValueOf4Enum.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef FOO

using $ValueOf4Enum$Specialized$1 = ::ValueOf4Enum$Specialized$1;
using $ValueOf4Enum$SpecializedArray = $Array<ValueOf4Enum$Specialized>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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

void ValueOf4Enum$Specialized::clinit$($Class* clazz) {
	$assignStatic(ValueOf4Enum$Specialized::FOO, $new($ValueOf4Enum$Specialized$1, "FOO"_s, 0));
	$assignStatic(ValueOf4Enum$Specialized::$VALUES, ValueOf4Enum$Specialized::$values());
}

ValueOf4Enum$Specialized::ValueOf4Enum$Specialized() {
}

$Class* ValueOf4Enum$Specialized::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FOO", "LValueOf4Enum$Specialized;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ValueOf4Enum$Specialized, FOO)},
		{"$VALUES", "[LValueOf4Enum$Specialized;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ValueOf4Enum$Specialized, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LValueOf4Enum$Specialized;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ValueOf4Enum$Specialized, $values, $ValueOf4Enum$SpecializedArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ValueOf4Enum$Specialized, init$, void, $String*, int32_t)},
		{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValueOf4Enum$Specialized, foo, void)},
		{"valueOf", "(Ljava/lang/String;)LValueOf4Enum$Specialized;", nullptr, $PUBLIC | $STATIC, $staticMethod(ValueOf4Enum$Specialized, valueOf, ValueOf4Enum$Specialized*, $String*)},
		{"values", "()[LValueOf4Enum$Specialized;", nullptr, $PUBLIC | $STATIC, $staticMethod(ValueOf4Enum$Specialized, values, $ValueOf4Enum$SpecializedArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ValueOf4Enum$Specialized", "ValueOf4Enum", "Specialized", $STATIC | $ABSTRACT | $ENUM},
		{"ValueOf4Enum$Specialized$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT | $ENUM,
		"ValueOf4Enum$Specialized",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LValueOf4Enum$Specialized;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ValueOf4Enum"
	};
	$loadClass(ValueOf4Enum$Specialized, name, initialize, &classInfo$$, ValueOf4Enum$Specialized::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ValueOf4Enum$Specialized));
	});
	return class$;
}

$Class* ValueOf4Enum$Specialized::class$ = nullptr;