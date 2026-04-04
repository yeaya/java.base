#include <java/util/regex/Pattern$Start.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
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
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

void Pattern$Start::init$($Pattern$Node* node) {
	$Pattern$Node::init$();
	$set(this, next, node);
	$var($Pattern$TreeInfo, info, $new($Pattern$TreeInfo));
	$nc(this->next)->study(info);
	this->minLength = info->minLength;
}

bool Pattern$Start::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if (i > $nc(matcher)->to - this->minLength) {
		matcher->hitEnd$ = true;
		return false;
	}
	int32_t guard = matcher->to - this->minLength;
	for (; i <= guard; ++i) {
		if ($nc(this->next)->match(matcher, i, seq)) {
			matcher->first = i;
			$nc(matcher->groups)->set(0, matcher->first);
			matcher->groups->set(1, matcher->last);
			return true;
		}
	}
	matcher->hitEnd$ = true;
	return false;
}

bool Pattern$Start::study($Pattern$TreeInfo* info) {
	$nc(this->next)->study(info);
	$nc(info)->maxValid = false;
	info->deterministic = false;
	return false;
}

Pattern$Start::Pattern$Start() {
}

$Class* Pattern$Start::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"minLength", "I", nullptr, 0, $field(Pattern$Start, minLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern$Node;)V", nullptr, 0, $method(Pattern$Start, init$, void, $Pattern$Node*)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$Start, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$Start, study, bool, $Pattern$TreeInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$Start", "java.util.regex.Pattern", "Start", $STATIC},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.regex.Pattern$Start",
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
	$loadClass(Pattern$Start, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$Start);
	});
	return class$;
}

$Class* Pattern$Start::class$ = nullptr;

		} // regex
	} // util
} // java