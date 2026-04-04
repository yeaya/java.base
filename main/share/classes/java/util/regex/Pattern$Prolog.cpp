#include <java/util/regex/Pattern$Prolog.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Loop.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Loop = ::java::util::regex::Pattern$Loop;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

void Pattern$Prolog::init$($Pattern$Loop* loop) {
	$Pattern$Node::init$();
	$set(this, loop, loop);
}

bool Pattern$Prolog::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	return $nc(this->loop)->matchInit(matcher, i, seq);
}

bool Pattern$Prolog::study($Pattern$TreeInfo* info) {
	return $nc(this->loop)->study(info);
}

Pattern$Prolog::Pattern$Prolog() {
}

$Class* Pattern$Prolog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loop", "Ljava/util/regex/Pattern$Loop;", nullptr, 0, $field(Pattern$Prolog, loop)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern$Loop;)V", nullptr, 0, $method(Pattern$Prolog, init$, void, $Pattern$Loop*)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$Prolog, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$Prolog, study, bool, $Pattern$TreeInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$Prolog", "java.util.regex.Pattern", "Prolog", $STATIC | $FINAL},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$Prolog",
		"java.util.regex.Pattern$Node",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$Prolog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$Prolog);
	});
	return class$;
}

$Class* Pattern$Prolog::class$ = nullptr;

		} // regex
	} // util
} // java