#include <java/util/regex/Pattern$GraphemeBound.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Grapheme.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Grapheme = ::java::util::regex::Grapheme;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$GraphemeBound_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Pattern$GraphemeBound::*)()>(&Pattern$GraphemeBound::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$GraphemeBound_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$GraphemeBound", "java.util.regex.Pattern", "GraphemeBound", $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$GraphemeBound_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$GraphemeBound",
	"java.util.regex.Pattern$Node",
	nullptr,
	nullptr,
	_Pattern$GraphemeBound_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$GraphemeBound_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$GraphemeBound($Class* clazz) {
	return $of($alloc(Pattern$GraphemeBound));
}

void Pattern$GraphemeBound::init$() {
	$Pattern$Node::init$();
}

bool Pattern$GraphemeBound::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t startIndex = $nc(matcher)->from;
	int32_t endIndex = matcher->to;
	if (matcher->transparentBounds) {
		startIndex = 0;
		endIndex = matcher->getTextLength();
	}
	if (i == startIndex) {
	} else if (i < endIndex) {
		char16_t var$0 = $nc(seq)->charAt(i - 1);
		if ($Character::isSurrogatePair(var$0, seq->charAt(i))) {
			return false;
		}
		if ($Grapheme::nextBoundary(seq, matcher->last, endIndex) > i) {
			return false;
		}
	} else {
		matcher->hitEnd$ = true;
		matcher->requireEnd$ = true;
	}
	return $nc(this->next)->match(matcher, i, seq);
}

Pattern$GraphemeBound::Pattern$GraphemeBound() {
}

$Class* Pattern$GraphemeBound::load$($String* name, bool initialize) {
	$loadClass(Pattern$GraphemeBound, name, initialize, &_Pattern$GraphemeBound_ClassInfo_, allocate$Pattern$GraphemeBound);
	return class$;
}

$Class* Pattern$GraphemeBound::class$ = nullptr;

		} // regex
	} // util
} // java