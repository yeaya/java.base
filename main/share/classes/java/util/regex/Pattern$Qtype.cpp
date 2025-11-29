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

$FieldInfo _Pattern$Qtype_FieldInfo_[] = {
	{"GREEDY", "Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Pattern$Qtype, GREEDY)},
	{"LAZY", "Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Pattern$Qtype, LAZY)},
	{"POSSESSIVE", "Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Pattern$Qtype, POSSESSIVE)},
	{"INDEPENDENT", "Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Pattern$Qtype, INDEPENDENT)},
	{"$VALUES", "[Ljava/util/regex/Pattern$Qtype;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Pattern$Qtype, $VALUES)},
	{}
};

$MethodInfo _Pattern$Qtype_MethodInfo_[] = {
	{"$values", "()[Ljava/util/regex/Pattern$Qtype;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Pattern$QtypeArray*(*)()>(&Pattern$Qtype::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Pattern$Qtype::*)($String*,int32_t)>(&Pattern$Qtype::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Pattern$Qtype*(*)($String*)>(&Pattern$Qtype::valueOf))},
	{"values", "()[Ljava/util/regex/Pattern$Qtype;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Pattern$QtypeArray*(*)()>(&Pattern$Qtype::values))},
	{}
};

$InnerClassInfo _Pattern$Qtype_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Qtype", "java.util.regex.Pattern", "Qtype", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Pattern$Qtype_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.util.regex.Pattern$Qtype",
	"java.lang.Enum",
	nullptr,
	_Pattern$Qtype_FieldInfo_,
	_Pattern$Qtype_MethodInfo_,
	"Ljava/lang/Enum<Ljava/util/regex/Pattern$Qtype;>;",
	nullptr,
	_Pattern$Qtype_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Qtype($Class* clazz) {
	return $of($alloc(Pattern$Qtype));
}

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

void clinit$Pattern$Qtype($Class* class$) {
	$assignStatic(Pattern$Qtype::GREEDY, $new(Pattern$Qtype, "GREEDY"_s, 0));
	$assignStatic(Pattern$Qtype::LAZY, $new(Pattern$Qtype, "LAZY"_s, 1));
	$assignStatic(Pattern$Qtype::POSSESSIVE, $new(Pattern$Qtype, "POSSESSIVE"_s, 2));
	$assignStatic(Pattern$Qtype::INDEPENDENT, $new(Pattern$Qtype, "INDEPENDENT"_s, 3));
	$assignStatic(Pattern$Qtype::$VALUES, Pattern$Qtype::$values());
}

Pattern$Qtype::Pattern$Qtype() {
}

$Class* Pattern$Qtype::load$($String* name, bool initialize) {
	$loadClass(Pattern$Qtype, name, initialize, &_Pattern$Qtype_ClassInfo_, clinit$Pattern$Qtype, allocate$Pattern$Qtype);
	return class$;
}

$Class* Pattern$Qtype::class$ = nullptr;

		} // regex
	} // util
} // java