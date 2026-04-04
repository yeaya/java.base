#include <java/util/regex/Pattern$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/util/regex/Pattern$Qtype.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef GREEDY
#undef LAZY
#undef POSSESSIVE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Pattern$Qtype = ::java::util::regex::Pattern$Qtype;

namespace java {
	namespace util {
		namespace regex {

$ints* Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype = nullptr;

void Pattern$1::clinit$($Class* clazz) {
	$assignStatic(Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype, $new($ints, $($Pattern$Qtype::values())->length));
	{
		try {
			Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype->set($Pattern$Qtype::GREEDY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype->set($Pattern$Qtype::LAZY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Pattern$1::$SwitchMap$java$util$regex$Pattern$Qtype->set($Pattern$Qtype::POSSESSIVE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Pattern$1::Pattern$1() {
}

$Class* Pattern$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$util$regex$Pattern$Qtype", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Pattern$1, $SwitchMap$java$util$regex$Pattern$Qtype)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.regex.Pattern",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.util.regex.Pattern$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$1, name, initialize, &classInfo$$, Pattern$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$1);
	});
	return class$;
}

$Class* Pattern$1::class$ = nullptr;

		} // regex
	} // util
} // java