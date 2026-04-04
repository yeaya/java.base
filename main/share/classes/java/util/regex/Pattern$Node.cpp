#include <java/util/regex/Pattern$Node.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

void Pattern$Node::init$() {
	$init($Pattern);
	$set(this, next, $Pattern::accept$);
}

bool Pattern$Node::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$nc(matcher)->last = i;
	$nc(matcher->groups)->set(0, matcher->first);
	matcher->groups->set(1, matcher->last);
	return true;
}

bool Pattern$Node::study($Pattern$TreeInfo* info) {
	if (this->next != nullptr) {
		return this->next->study(info);
	} else {
		return $nc(info)->deterministic;
	}
}

Pattern$Node::Pattern$Node() {
}

$Class* Pattern$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"next", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Node, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Pattern$Node, init$, void)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$Node, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$Node, study, bool, $Pattern$TreeInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.regex.Pattern$Node",
		"java.lang.Object",
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
	$loadClass(Pattern$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$Node);
	});
	return class$;
}

$Class* Pattern$Node::class$ = nullptr;

		} // regex
	} // util
} // java