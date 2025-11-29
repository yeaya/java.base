#include <java/util/regex/Pattern$CharPropertyGreedy.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/util/regex/Pattern$CharProperty.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$CharPredicate = ::java::util::regex::Pattern$CharPredicate;
using $Pattern$CharProperty = ::java::util::regex::Pattern$CharProperty;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$CharPropertyGreedy_FieldInfo_[] = {
	{"predicate", "Ljava/util/regex/Pattern$CharPredicate;", nullptr, $FINAL, $field(Pattern$CharPropertyGreedy, predicate)},
	{"cmin", "I", nullptr, $FINAL, $field(Pattern$CharPropertyGreedy, cmin)},
	{}
};

$MethodInfo _Pattern$CharPropertyGreedy_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$CharProperty;I)V", nullptr, 0, $method(static_cast<void(Pattern$CharPropertyGreedy::*)($Pattern$CharProperty*,int32_t)>(&Pattern$CharPropertyGreedy::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$CharPropertyGreedy_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$CharPropertyGreedy", "java.util.regex.Pattern", "CharPropertyGreedy", $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$CharPropertyGreedy_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$CharPropertyGreedy",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$CharPropertyGreedy_FieldInfo_,
	_Pattern$CharPropertyGreedy_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$CharPropertyGreedy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$CharPropertyGreedy($Class* clazz) {
	return $of($alloc(Pattern$CharPropertyGreedy));
}

void Pattern$CharPropertyGreedy::init$($Pattern$CharProperty* cp, int32_t cmin) {
	$Pattern$Node::init$();
	$set(this, predicate, $nc(cp)->predicate);
	this->cmin = cmin;
}

bool Pattern$CharPropertyGreedy::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t starti = i;
	int32_t n = 0;
	int32_t to = $nc(matcher)->to;
	while (i < to) {
		int32_t ch = $Character::codePointAt(seq, i);
		int32_t len = $Character::charCount(ch);
		if (i + len > to) {
			matcher->hitEnd$ = true;
			ch = $nc(seq)->charAt(i);
			len = 1;
		}
		if (!$nc(this->predicate)->is(ch)) {
			break;
		}
		i += len;
		++n;
	}
	if (i >= to) {
		matcher->hitEnd$ = true;
	}
	while (n >= this->cmin) {
		if ($nc(this->next)->match(matcher, i, seq)) {
			return true;
		}
		if (n == this->cmin) {
			return false;
		}
		int32_t ch = $Character::codePointBefore(seq, i);
		i = $Math::max(starti, i - $Character::charCount(ch));
		--n;
	}
	return false;
}

bool Pattern$CharPropertyGreedy::study($Pattern$TreeInfo* info) {
	$nc(info)->minLength += this->cmin;
	if (info->maxValid) {
		info->maxLength += 0x7FFFFFFF;
	}
	info->deterministic = false;
	return $nc(this->next)->study(info);
}

Pattern$CharPropertyGreedy::Pattern$CharPropertyGreedy() {
}

$Class* Pattern$CharPropertyGreedy::load$($String* name, bool initialize) {
	$loadClass(Pattern$CharPropertyGreedy, name, initialize, &_Pattern$CharPropertyGreedy_ClassInfo_, allocate$Pattern$CharPropertyGreedy);
	return class$;
}

$Class* Pattern$CharPropertyGreedy::class$ = nullptr;

		} // regex
	} // util
} // java