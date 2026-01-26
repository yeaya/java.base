#include <java/util/regex/Pattern$UnixDollar.h>

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

$FieldInfo _Pattern$UnixDollar_FieldInfo_[] = {
	{"multiline", "Z", nullptr, 0, $field(Pattern$UnixDollar, multiline)},
	{}
};

$MethodInfo _Pattern$UnixDollar_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(Pattern$UnixDollar, init$, void, bool)},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$UnixDollar, match, bool, $Matcher*, int32_t, $CharSequence*)},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$UnixDollar, study, bool, $Pattern$TreeInfo*)},
	{}
};

$InnerClassInfo _Pattern$UnixDollar_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$UnixDollar", "java.util.regex.Pattern", "UnixDollar", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$UnixDollar_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$UnixDollar",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$UnixDollar_FieldInfo_,
	_Pattern$UnixDollar_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$UnixDollar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$UnixDollar($Class* clazz) {
	return $of($alloc(Pattern$UnixDollar));
}

void Pattern$UnixDollar::init$(bool mul) {
	$Pattern$Node::init$();
	this->multiline = mul;
}

bool Pattern$UnixDollar::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t endIndex = ($nc(matcher)->anchoringBounds) ? $nc(matcher)->to : matcher->getTextLength();
	if (i < endIndex) {
		char16_t ch = $nc(seq)->charAt(i);
		if (ch == u'\n') {
			if (this->multiline == false && i != endIndex - 1) {
				return false;
			}
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

bool Pattern$UnixDollar::study($Pattern$TreeInfo* info) {
	$nc(this->next)->study(info);
	return $nc(info)->deterministic;
}

Pattern$UnixDollar::Pattern$UnixDollar() {
}

$Class* Pattern$UnixDollar::load$($String* name, bool initialize) {
	$loadClass(Pattern$UnixDollar, name, initialize, &_Pattern$UnixDollar_ClassInfo_, allocate$Pattern$UnixDollar);
	return class$;
}

$Class* Pattern$UnixDollar::class$ = nullptr;

		} // regex
	} // util
} // java