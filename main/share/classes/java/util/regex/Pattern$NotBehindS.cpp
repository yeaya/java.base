#include <java/util/regex/Pattern$NotBehindS.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$NotBehind.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$NotBehind = ::java::util::regex::Pattern$NotBehind;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$NotBehindS_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;II)V", nullptr, 0, $method(Pattern$NotBehindS, init$, void, $Pattern$Node*, int32_t, int32_t)},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$NotBehindS, match, bool, $Matcher*, int32_t, $CharSequence*)},
	{}
};

$InnerClassInfo _Pattern$NotBehindS_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$NotBehindS", "java.util.regex.Pattern", "NotBehindS", $STATIC | $FINAL},
	{"java.util.regex.Pattern$NotBehind", "java.util.regex.Pattern", "NotBehind", $STATIC},
	{}
};

$ClassInfo _Pattern$NotBehindS_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$NotBehindS",
	"java.util.regex.Pattern$NotBehind",
	nullptr,
	nullptr,
	_Pattern$NotBehindS_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$NotBehindS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$NotBehindS($Class* clazz) {
	return $of($alloc(Pattern$NotBehindS));
}

void Pattern$NotBehindS::init$($Pattern$Node* cond, int32_t rmax, int32_t rmin) {
	$Pattern$NotBehind::init$(cond, rmax, rmin);
}

bool Pattern$NotBehindS::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t rmaxChars = $Pattern::countChars(seq, i, -this->rmax);
	int32_t rminChars = $Pattern::countChars(seq, i, -this->rmin);
	int32_t savedFrom = $nc(matcher)->from;
	int32_t savedLBT = matcher->lookbehindTo;
	bool conditionMatched = false;
	int32_t startIndex = (!matcher->transparentBounds) ? matcher->from : 0;
	int32_t from = $Math::max(i - rmaxChars, startIndex);
	matcher->lookbehindTo = i;
	if (matcher->transparentBounds) {
		matcher->from = 0;
	}
	for (int32_t j = i - rminChars; !conditionMatched && j >= from; j -= j > from ? $Pattern::countChars(seq, j, -1) : 1) {
		conditionMatched = $nc(this->cond)->match(matcher, j, seq);
	}
	matcher->from = savedFrom;
	matcher->lookbehindTo = savedLBT;
	return !conditionMatched && $nc(this->next)->match(matcher, i, seq);
}

Pattern$NotBehindS::Pattern$NotBehindS() {
}

$Class* Pattern$NotBehindS::load$($String* name, bool initialize) {
	$loadClass(Pattern$NotBehindS, name, initialize, &_Pattern$NotBehindS_ClassInfo_, allocate$Pattern$NotBehindS);
	return class$;
}

$Class* Pattern$NotBehindS::class$ = nullptr;

		} // regex
	} // util
} // java