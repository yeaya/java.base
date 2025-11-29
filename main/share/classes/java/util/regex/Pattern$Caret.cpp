#include <java/util/regex/Pattern$Caret.h>

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

$MethodInfo _Pattern$Caret_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Pattern$Caret::*)()>(&Pattern$Caret::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$Caret_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Caret", "java.util.regex.Pattern", "Caret", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$Caret_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$Caret",
	"java.util.regex.Pattern$Node",
	nullptr,
	nullptr,
	_Pattern$Caret_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$Caret_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Caret($Class* clazz) {
	return $of($alloc(Pattern$Caret));
}

void Pattern$Caret::init$() {
	$Pattern$Node::init$();
}

bool Pattern$Caret::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
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
		if (ch != u'\n' && ch != u'\r' && (ch | 1) != (char16_t)0x2029 && ch != (char16_t)0x85) {
			return false;
		}
		if (ch == u'\r' && seq->charAt(i) == u'\n') {
			return false;
		}
	}
	return $nc(this->next)->match(matcher, i, seq);
}

Pattern$Caret::Pattern$Caret() {
}

$Class* Pattern$Caret::load$($String* name, bool initialize) {
	$loadClass(Pattern$Caret, name, initialize, &_Pattern$Caret_ClassInfo_, allocate$Pattern$Caret);
	return class$;
}

$Class* Pattern$Caret::class$ = nullptr;

		} // regex
	} // util
} // java