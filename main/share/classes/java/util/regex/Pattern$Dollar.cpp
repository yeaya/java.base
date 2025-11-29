#include <java/util/regex/Pattern$Dollar.h>

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

$FieldInfo _Pattern$Dollar_FieldInfo_[] = {
	{"multiline", "Z", nullptr, 0, $field(Pattern$Dollar, multiline)},
	{}
};

$MethodInfo _Pattern$Dollar_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(Pattern$Dollar::*)(bool)>(&Pattern$Dollar::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$Dollar_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Dollar", "java.util.regex.Pattern", "Dollar", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$Dollar_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$Dollar",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$Dollar_FieldInfo_,
	_Pattern$Dollar_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$Dollar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Dollar($Class* clazz) {
	return $of($alloc(Pattern$Dollar));
}

void Pattern$Dollar::init$(bool mul) {
	$Pattern$Node::init$();
	this->multiline = mul;
}

bool Pattern$Dollar::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t endIndex = ($nc(matcher)->anchoringBounds) ? $nc(matcher)->to : matcher->getTextLength();
	if (!this->multiline) {
		if (i < endIndex - 2) {
			return false;
		}
		if (i == endIndex - 2) {
			char16_t ch = $nc(seq)->charAt(i);
			if (ch != u'\r') {
				return false;
			}
			ch = seq->charAt(i + 1);
			if (ch != u'\n') {
				return false;
			}
		}
	}
	if (i < endIndex) {
		char16_t ch = $nc(seq)->charAt(i);
		if (ch == u'\n') {
			if (i > 0 && seq->charAt(i - 1) == u'\r') {
				return false;
			}
			if (this->multiline) {
				return $nc(this->next)->match(matcher, i, seq);
			}
		} else if (ch == u'\r' || ch == (char16_t)0x85 || (ch | 1) == (char16_t)0x2029) {
			if (this->multiline) {
				return $nc(this->next)->match(matcher, i, seq);
			}
		} else {
			return false;
		}
	}
	matcher->hitEnd$ = true;
	matcher->requireEnd$ = true;
	return $nc(this->next)->match(matcher, i, seq);
}

bool Pattern$Dollar::study($Pattern$TreeInfo* info) {
	$nc(this->next)->study(info);
	return $nc(info)->deterministic;
}

Pattern$Dollar::Pattern$Dollar() {
}

$Class* Pattern$Dollar::load$($String* name, bool initialize) {
	$loadClass(Pattern$Dollar, name, initialize, &_Pattern$Dollar_ClassInfo_, allocate$Pattern$Dollar);
	return class$;
}

$Class* Pattern$Dollar::class$ = nullptr;

		} // regex
	} // util
} // java