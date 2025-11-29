#include <java/util/regex/Pattern$BmpCharPropertyGreedy.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$BmpCharProperty.h>
#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/util/regex/Pattern$CharProperty.h>
#include <java/util/regex/Pattern$CharPropertyGreedy.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$BmpCharProperty = ::java::util::regex::Pattern$BmpCharProperty;
using $Pattern$CharPredicate = ::java::util::regex::Pattern$CharPredicate;
using $Pattern$CharProperty = ::java::util::regex::Pattern$CharProperty;
using $Pattern$CharPropertyGreedy = ::java::util::regex::Pattern$CharPropertyGreedy;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$BmpCharPropertyGreedy_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$BmpCharProperty;I)V", nullptr, 0, $method(static_cast<void(Pattern$BmpCharPropertyGreedy::*)($Pattern$BmpCharProperty*,int32_t)>(&Pattern$BmpCharPropertyGreedy::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$BmpCharPropertyGreedy_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$BmpCharPropertyGreedy", "java.util.regex.Pattern", "BmpCharPropertyGreedy", $STATIC | $FINAL},
	{"java.util.regex.Pattern$CharPropertyGreedy", "java.util.regex.Pattern", "CharPropertyGreedy", $STATIC},
	{}
};

$ClassInfo _Pattern$BmpCharPropertyGreedy_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$BmpCharPropertyGreedy",
	"java.util.regex.Pattern$CharPropertyGreedy",
	nullptr,
	nullptr,
	_Pattern$BmpCharPropertyGreedy_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$BmpCharPropertyGreedy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$BmpCharPropertyGreedy($Class* clazz) {
	return $of($alloc(Pattern$BmpCharPropertyGreedy));
}

void Pattern$BmpCharPropertyGreedy::init$($Pattern$BmpCharProperty* bcp, int32_t cmin) {
	$Pattern$CharPropertyGreedy::init$(bcp, cmin);
}

bool Pattern$BmpCharPropertyGreedy::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t n = 0;
	int32_t to = $nc(matcher)->to;
	while (i < to && $nc(this->predicate)->is($nc(seq)->charAt(i))) {
		++i;
		++n;
	}
	if (i >= to) {
		matcher->hitEnd$ = true;
	}
	while (n >= this->cmin) {
		if ($nc(this->next)->match(matcher, i, seq)) {
			return true;
		}
		--i;
		--n;
	}
	return false;
}

Pattern$BmpCharPropertyGreedy::Pattern$BmpCharPropertyGreedy() {
}

$Class* Pattern$BmpCharPropertyGreedy::load$($String* name, bool initialize) {
	$loadClass(Pattern$BmpCharPropertyGreedy, name, initialize, &_Pattern$BmpCharPropertyGreedy_ClassInfo_, allocate$Pattern$BmpCharPropertyGreedy);
	return class$;
}

$Class* Pattern$BmpCharPropertyGreedy::class$ = nullptr;

		} // regex
	} // util
} // java