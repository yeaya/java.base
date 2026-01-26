#include <java/util/regex/Pattern$XGrapheme.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Grapheme.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Grapheme = ::java::util::regex::Grapheme;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$XGrapheme_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Pattern$XGrapheme, init$, void)},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$XGrapheme, match, bool, $Matcher*, int32_t, $CharSequence*)},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$XGrapheme, study, bool, $Pattern$TreeInfo*)},
	{}
};

$InnerClassInfo _Pattern$XGrapheme_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$XGrapheme", "java.util.regex.Pattern", "XGrapheme", $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$XGrapheme_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$XGrapheme",
	"java.util.regex.Pattern$Node",
	nullptr,
	nullptr,
	_Pattern$XGrapheme_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$XGrapheme_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$XGrapheme($Class* clazz) {
	return $of($alloc(Pattern$XGrapheme));
}

void Pattern$XGrapheme::init$() {
	$Pattern$Node::init$();
}

bool Pattern$XGrapheme::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if (i < $nc(matcher)->to) {
		i = $Grapheme::nextBoundary(seq, i, matcher->to);
		return $nc(this->next)->match(matcher, i, seq);
	}
	$nc(matcher)->hitEnd$ = true;
	return false;
}

bool Pattern$XGrapheme::study($Pattern$TreeInfo* info) {
	++$nc(info)->minLength;
	info->deterministic = false;
	return $nc(this->next)->study(info);
}

Pattern$XGrapheme::Pattern$XGrapheme() {
}

$Class* Pattern$XGrapheme::load$($String* name, bool initialize) {
	$loadClass(Pattern$XGrapheme, name, initialize, &_Pattern$XGrapheme_ClassInfo_, allocate$Pattern$XGrapheme);
	return class$;
}

$Class* Pattern$XGrapheme::class$ = nullptr;

		} // regex
	} // util
} // java