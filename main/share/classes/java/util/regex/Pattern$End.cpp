#include <java/util/regex/Pattern$End.h>
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

void Pattern$End::init$() {
	$Pattern$Node::init$();
}

bool Pattern$End::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t endIndex = ($nc(matcher)->anchoringBounds) ? matcher->to : matcher->getTextLength();
	if (i == endIndex) {
		matcher->hitEnd$ = true;
		return $nc(this->next)->match(matcher, i, seq);
	}
	return false;
}

Pattern$End::Pattern$End() {
}

$Class* Pattern$End::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Pattern$End, init$, void)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$End, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$End", "java.util.regex.Pattern", "End", $STATIC | $FINAL},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$End",
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
	$loadClass(Pattern$End, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$End);
	});
	return class$;
}

$Class* Pattern$End::class$ = nullptr;

		} // regex
	} // util
} // java