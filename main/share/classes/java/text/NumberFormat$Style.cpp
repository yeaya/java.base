#include <java/text/NumberFormat$Style.h>
#include <java/lang/Enum.h>
#include <java/text/NumberFormat.h>
#include <jcpp.h>

#undef LONG
#undef SHORT

using $NumberFormat$StyleArray = $Array<::java::text::NumberFormat$Style>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

NumberFormat$Style* NumberFormat$Style::SHORT = nullptr;
NumberFormat$Style* NumberFormat$Style::LONG = nullptr;
$NumberFormat$StyleArray* NumberFormat$Style::$VALUES = nullptr;

$NumberFormat$StyleArray* NumberFormat$Style::$values() {
	$init(NumberFormat$Style);
	return $new($NumberFormat$StyleArray, {
		NumberFormat$Style::SHORT,
		NumberFormat$Style::LONG
	});
}

$NumberFormat$StyleArray* NumberFormat$Style::values() {
	$init(NumberFormat$Style);
	return $cast($NumberFormat$StyleArray, NumberFormat$Style::$VALUES->clone());
}

NumberFormat$Style* NumberFormat$Style::valueOf($String* name) {
	$init(NumberFormat$Style);
	return $cast(NumberFormat$Style, $Enum::valueOf(NumberFormat$Style::class$, name));
}

void NumberFormat$Style::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void NumberFormat$Style::clinit$($Class* clazz) {
	$assignStatic(NumberFormat$Style::SHORT, $new(NumberFormat$Style, "SHORT"_s, 0));
	$assignStatic(NumberFormat$Style::LONG, $new(NumberFormat$Style, "LONG"_s, 1));
	$assignStatic(NumberFormat$Style::$VALUES, NumberFormat$Style::$values());
}

NumberFormat$Style::NumberFormat$Style() {
}

$Class* NumberFormat$Style::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SHORT", "Ljava/text/NumberFormat$Style;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumberFormat$Style, SHORT)},
		{"LONG", "Ljava/text/NumberFormat$Style;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(NumberFormat$Style, LONG)},
		{"$VALUES", "[Ljava/text/NumberFormat$Style;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(NumberFormat$Style, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/text/NumberFormat$Style;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(NumberFormat$Style, $values, $NumberFormat$StyleArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(NumberFormat$Style, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/text/NumberFormat$Style;", nullptr, $PUBLIC | $STATIC, $staticMethod(NumberFormat$Style, valueOf, NumberFormat$Style*, $String*)},
		{"values", "()[Ljava/text/NumberFormat$Style;", nullptr, $PUBLIC | $STATIC, $staticMethod(NumberFormat$Style, values, $NumberFormat$StyleArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.NumberFormat$Style", "java.text.NumberFormat", "Style", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.text.NumberFormat$Style",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/text/NumberFormat$Style;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.text.NumberFormat"
	};
	$loadClass(NumberFormat$Style, name, initialize, &classInfo$$, NumberFormat$Style::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(NumberFormat$Style));
	});
	return class$;
}

$Class* NumberFormat$Style::class$ = nullptr;

	} // text
} // java