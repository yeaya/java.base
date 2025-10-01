#include <java/util/regex/Pattern$BehindS.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Behind.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Behind = ::java::util::regex::Pattern$Behind;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$BehindS_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;II)V", nullptr, 0, $method(static_cast<void(Pattern$BehindS::*)($Pattern$Node*,int32_t,int32_t)>(&Pattern$BehindS::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$BehindS_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$BehindS", "java.util.regex.Pattern", "BehindS", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Behind", "java.util.regex.Pattern", "Behind", $STATIC},
	{}
};

$ClassInfo _Pattern$BehindS_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$BehindS",
	"java.util.regex.Pattern$Behind",
	nullptr,
	nullptr,
	_Pattern$BehindS_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$BehindS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$BehindS($Class* clazz) {
	return $of($alloc(Pattern$BehindS));
}

void Pattern$BehindS::init$($Pattern$Node* cond, int32_t rmax, int32_t rmin) {
	$Pattern$Behind::init$(cond, rmax, rmin);
}

bool Pattern$BehindS::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t rmaxChars = $Pattern::countChars(seq, i, -this->rmax);
	int32_t rminChars = $Pattern::countChars(seq, i, -this->rmin);
	int32_t savedFrom = $nc(matcher)->from;
	int32_t startIndex = (!matcher->transparentBounds) ? matcher->from : 0;
	bool conditionMatched = false;
	int32_t from = $Math::max(i - rmaxChars, startIndex);
	int32_t savedLBT = matcher->lookbehindTo;
	matcher->lookbehindTo = i;
	if (matcher->transparentBounds) {
		matcher->from = 0;
	}
	for (int32_t j = i - rminChars; !conditionMatched && j >= from; j -= j > from ? $Pattern::countChars(seq, j, -1) : 1) {
		conditionMatched = $nc(this->cond)->match(matcher, j, seq);
	}
	matcher->from = savedFrom;
	matcher->lookbehindTo = savedLBT;
	return conditionMatched && $nc(this->next)->match(matcher, i, seq);
}

Pattern$BehindS::Pattern$BehindS() {
}

$Class* Pattern$BehindS::load$($String* name, bool initialize) {
	$loadClass(Pattern$BehindS, name, initialize, &_Pattern$BehindS_ClassInfo_, allocate$Pattern$BehindS);
	return class$;
}

$Class* Pattern$BehindS::class$ = nullptr;

		} // regex
	} // util
} // java