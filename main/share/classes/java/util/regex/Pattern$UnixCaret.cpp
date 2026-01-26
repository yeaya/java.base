#include <java/util/regex/Pattern$UnixCaret.h>

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

$MethodInfo _Pattern$UnixCaret_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Pattern$UnixCaret, init$, void)},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$UnixCaret, match, bool, $Matcher*, int32_t, $CharSequence*)},
	{}
};

$InnerClassInfo _Pattern$UnixCaret_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$UnixCaret", "java.util.regex.Pattern", "UnixCaret", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$UnixCaret_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$UnixCaret",
	"java.util.regex.Pattern$Node",
	nullptr,
	nullptr,
	_Pattern$UnixCaret_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$UnixCaret_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$UnixCaret($Class* clazz) {
	return $of($alloc(Pattern$UnixCaret));
}

void Pattern$UnixCaret::init$() {
	$Pattern$Node::init$();
}

bool Pattern$UnixCaret::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t startIndex = $nc(matcher)->from;
	int32_t endIndex = matcher->to;
	if (!matcher->anchoringBounds) {
		startIndex = 0;
		endIndex = matcher->getTextLength();
	}
	if (i == endIndex) {
		matcher->hitEnd$ = true;
		return false;
	}
	if (i > startIndex) {
		char16_t ch = $nc(seq)->charAt(i - 1);
		if (ch != u'\n') {
			return false;
		}
	}
	return $nc(this->next)->match(matcher, i, seq);
}

Pattern$UnixCaret::Pattern$UnixCaret() {
}

$Class* Pattern$UnixCaret::load$($String* name, bool initialize) {
	$loadClass(Pattern$UnixCaret, name, initialize, &_Pattern$UnixCaret_ClassInfo_, allocate$Pattern$UnixCaret);
	return class$;
}

$Class* Pattern$UnixCaret::class$ = nullptr;

		} // regex
	} // util
} // java