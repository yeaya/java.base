#include <java/util/regex/Pattern$Behind.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$Behind_FieldInfo_[] = {
	{"cond", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Behind, cond)},
	{"rmax", "I", nullptr, 0, $field(Pattern$Behind, rmax)},
	{"rmin", "I", nullptr, 0, $field(Pattern$Behind, rmin)},
	{}
};

$MethodInfo _Pattern$Behind_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;II)V", nullptr, 0, $method(static_cast<void(Pattern$Behind::*)($Pattern$Node*,int32_t,int32_t)>(&Pattern$Behind::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$Behind_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Behind", "java.util.regex.Pattern", "Behind", $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$Behind_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$Behind",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$Behind_FieldInfo_,
	_Pattern$Behind_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$Behind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Behind($Class* clazz) {
	return $of($alloc(Pattern$Behind));
}

void Pattern$Behind::init$($Pattern$Node* cond, int32_t rmax, int32_t rmin) {
	$Pattern$Node::init$();
	$set(this, cond, cond);
	this->rmax = rmax;
	this->rmin = rmin;
}

bool Pattern$Behind::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t savedFrom = $nc(matcher)->from;
	bool conditionMatched = false;
	int32_t startIndex = (!matcher->transparentBounds) ? matcher->from : 0;
	int32_t from = $Math::max(i - this->rmax, startIndex);
	int32_t savedLBT = matcher->lookbehindTo;
	matcher->lookbehindTo = i;
	if (matcher->transparentBounds) {
		matcher->from = 0;
	}
	for (int32_t j = i - this->rmin; !conditionMatched && j >= from; --j) {
		conditionMatched = $nc(this->cond)->match(matcher, j, seq);
	}
	matcher->from = savedFrom;
	matcher->lookbehindTo = savedLBT;
	return conditionMatched && $nc(this->next)->match(matcher, i, seq);
}

Pattern$Behind::Pattern$Behind() {
}

$Class* Pattern$Behind::load$($String* name, bool initialize) {
	$loadClass(Pattern$Behind, name, initialize, &_Pattern$Behind_ClassInfo_, allocate$Pattern$Behind);
	return class$;
}

$Class* Pattern$Behind::class$ = nullptr;

		} // regex
	} // util
} // java