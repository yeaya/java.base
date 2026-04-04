#include <java/util/regex/Pattern$LastMatch.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

void Pattern$LastMatch::init$() {
	$Pattern$Node::init$();
}

bool Pattern$LastMatch::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if (i != $nc(matcher)->oldLast) {
		return false;
	}
	return $nc(this->next)->match(matcher, i, seq);
}

Pattern$LastMatch::Pattern$LastMatch() {
}

$Class* Pattern$LastMatch::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Pattern$LastMatch, init$, void)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$LastMatch, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$LastMatch", "java.util.regex.Pattern", "LastMatch", $STATIC | $FINAL},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$LastMatch",
		"java.util.regex.Pattern$Node",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$LastMatch, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$LastMatch);
	});
	return class$;
}

$Class* Pattern$LastMatch::class$ = nullptr;

		} // regex
	} // util
} // java