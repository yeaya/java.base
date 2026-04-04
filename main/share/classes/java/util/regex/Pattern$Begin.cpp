#include <java/util/regex/Pattern$Begin.h>
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

void Pattern$Begin::init$() {
	$Pattern$Node::init$();
}

bool Pattern$Begin::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t fromIndex = ($nc(matcher)->anchoringBounds) ? matcher->from : 0;
	if (i == fromIndex && $nc(this->next)->match(matcher, i, seq)) {
		matcher->first = i;
		$nc(matcher->groups)->set(0, i);
		matcher->groups->set(1, matcher->last);
		return true;
	} else {
		return false;
	}
}

Pattern$Begin::Pattern$Begin() {
}

$Class* Pattern$Begin::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Pattern$Begin, init$, void)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$Begin, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$Begin", "java.util.regex.Pattern", "Begin", $STATIC | $FINAL},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$Begin",
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
	$loadClass(Pattern$Begin, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$Begin);
	});
	return class$;
}

$Class* Pattern$Begin::class$ = nullptr;

		} // regex
	} // util
} // java