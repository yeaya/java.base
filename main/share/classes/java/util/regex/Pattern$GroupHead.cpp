#include <java/util/regex/Pattern$GroupHead.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$GroupTail.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

void Pattern$GroupHead::init$(int32_t localCount) {
	$Pattern$Node::init$();
	this->localIndex = localCount;
}

bool Pattern$GroupHead::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t save = $nc($nc(matcher)->locals)->get(this->localIndex);
	matcher->locals->set(this->localIndex, i);
	bool ret = $nc(this->next)->match(matcher, i, seq);
	$nc(matcher->locals)->set(this->localIndex, save);
	return ret;
}

Pattern$GroupHead::Pattern$GroupHead() {
}

$Class* Pattern$GroupHead::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"localIndex", "I", nullptr, 0, $field(Pattern$GroupHead, localIndex)},
		{"tail", "Ljava/util/regex/Pattern$GroupTail;", nullptr, 0, $field(Pattern$GroupHead, tail)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(Pattern$GroupHead, init$, void, int32_t)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$GroupHead, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$GroupHead", "java.util.regex.Pattern", "GroupHead", $STATIC | $FINAL},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$GroupHead",
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
	$loadClass(Pattern$GroupHead, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$GroupHead);
	});
	return class$;
}

$Class* Pattern$GroupHead::class$ = nullptr;

		} // regex
	} // util
} // java