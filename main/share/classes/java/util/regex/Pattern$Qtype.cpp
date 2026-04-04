#include <java/util/regex/Pattern$Qtype.h>
#include <java/lang/Enum.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef GREEDY
#undef INDEPENDENT
#undef LAZY
#undef POSSESSIVE

using $Pattern$QtypeArray = $Array<::java::util::regex::Pattern$Qtype>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace regex {

Pattern$Qtype* Pattern$Qtype::GREEDY = nullptr;
Pattern$Qtype* Pattern$Qtype::LAZY = nullptr;
Pattern$Qtype* Pattern$Qtype::POSSESSIVE = nullptr;
Pattern$Qtype* Pattern$Qtype::INDEPENDENT = nullptr;
$Pattern$QtypeArray* Pattern$Qtype::$VALUES = nullptr;

$Pattern$QtypeArray* Pattern$Qtype::$values() {
	$init(Pattern$Qtype);
	return $new($Pattern$QtypeArray, {
		Pattern$Qtype::GREEDY,
		Pattern$Qtype::LAZY,
		Pattern$Qtype::POSSESSIVE,
		Pattern$Qtype::INDEPENDENT
	});
}

$Pattern$QtypeArray* Pattern$Qtype::values() {
	$init(Pattern$Qtype);
	return $cast($Pattern$QtypeArray, Pattern$Qtype::$VALUES->clone());
}

Pattern$Qtype* Pattern$Qtype::valueOf($String* name) {
	$init(Pattern$Qtype);
	return $cast(Pattern$Qtype, $Enum::valueOf(Pattern$Qtype::class$, name));
}

void Pattern$Qtype::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Pattern$Qtype::clinit$($Class* clazz) {
	$assignStatic(Pattern$Qtype::GREEDY, $new(Pattern$Qtype, "GREEDY"_s, 0));
	$assignStatic(Pattern$Qtype::LAZY, $new(Pattern$Qtype, "LAZY"_s, 1));
	$assignStatic(Pattern$Qtype::POSSESSIVE, $new(Pattern$Qtype, "POSSESSIVE"_s, 2));
	$assignStatic(Pattern$Qtype::INDEPENDENT, $new(Pattern$Qtype, "INDEPENDENT"_s, 3));
	$assignStatic(Pattern$Qtype::$VALUES, Pattern$Qtype::$values());
}

Pattern$Qtype::Pattern$Qtype() {
}

$Class* Pattern$Qtype::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"GREEDY", "Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Pattern$Qtype, GREEDY)},
		{"LAZY", "Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Pattern$Qtype, LAZY)},
		{"POSSESSIVE", "Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Pattern$Qtype, POSSESSIVE)},
		{"INDEPENDENT", "Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Pattern$Qtype, INDEPENDENT)},
		{"$VALUES", "[Ljava/util/regex/Pattern$Qtype;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Pattern$Qtype, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/util/regex/Pattern$Qtype;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Pattern$Qtype, $values, $Pattern$QtypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Pattern$Qtype, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC, $staticMethod(Pattern$Qtype, valueOf, Pattern$Qtype*, $String*)},
		{"values", "()[Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC, $staticMethod(Pattern$Qtype, values, $Pattern$QtypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$Qtype", "java.util.regex.Pattern", "Qtype", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"java.util.regex.Pattern$Qtype",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/util/regex/Pattern$Qtype;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$Qtype, name, initialize, &classInfo$$, Pattern$Qtype::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Pattern$Qtype));
	});
	return class$;
}

$Class* Pattern$Qtype::class$ = nullptr;

		} // regex
	} // util
} // java