#include <java/util/regex/Pattern$SliceI.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/ASCII.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$SliceNode.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ASCII = ::java::util::regex::ASCII;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$SliceNode = ::java::util::regex::Pattern$SliceNode;

namespace java {
	namespace util {
		namespace regex {

void Pattern$SliceI::init$($ints* buf) {
	$Pattern$SliceNode::init$(buf);
}

bool Pattern$SliceI::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$var($ints, buf, this->buffer);
	int32_t len = $nc(buf)->length;
	for (int32_t j = 0; j < len; ++j) {
		if ((i + j) >= $nc(matcher)->to) {
			matcher->hitEnd$ = true;
			return false;
		}
		int32_t c = $nc(seq)->charAt(i + j);
		if (buf->get(j) != c && buf->get(j) != $ASCII::toLower(c)) {
			return false;
		}
	}
	return $nc(this->next)->match(matcher, i + len, seq);
}

Pattern$SliceI::Pattern$SliceI() {
}

$Class* Pattern$SliceI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", nullptr, 0, $method(Pattern$SliceI, init$, void, $ints*)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$SliceI, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$SliceI", "java.util.regex.Pattern", "SliceI", $STATIC},
		{"java.util.regex.Pattern$SliceNode", "java.util.regex.Pattern", "SliceNode", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.regex.Pattern$SliceI",
		"java.util.regex.Pattern$SliceNode",
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
	$loadClass(Pattern$SliceI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$SliceI);
	});
	return class$;
}

$Class* Pattern$SliceI::class$ = nullptr;

		} // regex
	} // util
} // java