#include <java/util/regex/Pattern$BranchConn.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

void Pattern$BranchConn::init$() {
	$Pattern$Node::init$();
}

bool Pattern$BranchConn::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	return $nc(this->next)->match(matcher, i, seq);
}

bool Pattern$BranchConn::study($Pattern$TreeInfo* info) {
	return $nc(info)->deterministic;
}

Pattern$BranchConn::Pattern$BranchConn() {
}

$Class* Pattern$BranchConn::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Pattern$BranchConn, init$, void)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$BranchConn, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$BranchConn, study, bool, $Pattern$TreeInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$BranchConn", "java.util.regex.Pattern", "BranchConn", $STATIC | $FINAL},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$BranchConn",
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
	$loadClass(Pattern$BranchConn, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$BranchConn);
	});
	return class$;
}

$Class* Pattern$BranchConn::class$ = nullptr;

		} // regex
	} // util
} // java