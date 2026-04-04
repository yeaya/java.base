#include <java/util/regex/Pattern$Behind.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

void Pattern$Behind::init$($Pattern$Node* cond, int32_t rmax, int32_t rmin) {
	$Pattern$Node::init$();
	$set(this, cond, cond);
	this->rmax = rmax;
	this->rmin = rmin;
}

bool Pattern$Behind::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t savedFrom = $nc(matcher)->from;
	bool conditionMatched = false;
	int32_t startIndex = (!matcher->transparentBounds) ? matcher->from : 0;
	int32_t from = $Math::max(i - this->rmax, startIndex);
	int32_t savedLBT = matcher->lookbehindTo;
	matcher->lookbehindTo = i;
	if (matcher->transparentBounds) {
		matcher->from = 0;
	}
	for (int32_t j = i - this->rmin; !conditionMatched && j >= from; --j) {
		conditionMatched = $nc(this->cond)->match(matcher, j, seq);
	}
	matcher->from = savedFrom;
	matcher->lookbehindTo = savedLBT;
	return conditionMatched && $nc(this->next)->match(matcher, i, seq);
}

Pattern$Behind::Pattern$Behind() {
}

$Class* Pattern$Behind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cond", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Behind, cond)},
		{"rmax", "I", nullptr, 0, $field(Pattern$Behind, rmax)},
		{"rmin", "I", nullptr, 0, $field(Pattern$Behind, rmin)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern$Node;II)V", nullptr, 0, $method(Pattern$Behind, init$, void, $Pattern$Node*, int32_t, int32_t)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$Behind, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$Behind", "java.util.regex.Pattern", "Behind", $STATIC},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.regex.Pattern$Behind",
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
	$loadClass(Pattern$Behind, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$Behind);
	});
	return class$;
}

$Class* Pattern$Behind::class$ = nullptr;

		} // regex
	} // util
} // java