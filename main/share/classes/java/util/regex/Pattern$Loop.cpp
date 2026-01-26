#include <java/util/regex/Pattern$Loop.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/IntHashSet.h>
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
using $IntHashSet = ::java::util::regex::IntHashSet;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$Loop_FieldInfo_[] = {
	{"body", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Loop, body)},
	{"countIndex", "I", nullptr, 0, $field(Pattern$Loop, countIndex)},
	{"beginIndex", "I", nullptr, 0, $field(Pattern$Loop, beginIndex)},
	{"cmin", "I", nullptr, 0, $field(Pattern$Loop, cmin)},
	{"cmax", "I", nullptr, 0, $field(Pattern$Loop, cmax)},
	{"posIndex", "I", nullptr, 0, $field(Pattern$Loop, posIndex)},
	{}
};

$MethodInfo _Pattern$Loop_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(Pattern$Loop, init$, void, int32_t, int32_t)},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$Loop, match, bool, $Matcher*, int32_t, $CharSequence*)},
	{"matchInit", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$Loop, matchInit, bool, $Matcher*, int32_t, $CharSequence*)},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$Loop, study, bool, $Pattern$TreeInfo*)},
	{}
};

$InnerClassInfo _Pattern$Loop_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Loop", "java.util.regex.Pattern", "Loop", $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$Loop_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$Loop",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$Loop_FieldInfo_,
	_Pattern$Loop_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$Loop_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Loop($Class* clazz) {
	return $of($alloc(Pattern$Loop));
}

void Pattern$Loop::init$(int32_t countIndex, int32_t beginIndex) {
	$Pattern$Node::init$();
	this->countIndex = countIndex;
	this->beginIndex = beginIndex;
	this->posIndex = -1;
}

bool Pattern$Loop::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if (i > $nc($nc(matcher)->locals)->get(this->beginIndex)) {
		int32_t count = $nc(matcher->locals)->get(this->countIndex);
		if (count < this->cmin) {
			$nc(matcher->locals)->set(this->countIndex, count + 1);
			bool b = $nc(this->body)->match(matcher, i, seq);
			if (!b) {
				$nc(matcher->locals)->set(this->countIndex, count);
			}
			return b;
		}
		if (count < this->cmax) {
			if (this->posIndex != -1 && $nc($nc(matcher->localsPos)->get(this->posIndex))->contains(i)) {
				return $nc(this->next)->match(matcher, i, seq);
			}
			$nc(matcher->locals)->set(this->countIndex, count + 1);
			bool b = $nc(this->body)->match(matcher, i, seq);
			if (b) {
				return true;
			}
			$nc(matcher->locals)->set(this->countIndex, count);
			if (this->posIndex != -1) {
				$nc($nc(matcher->localsPos)->get(this->posIndex))->add(i);
			}
		}
	}
	return $nc(this->next)->match(matcher, i, seq);
}

bool Pattern$Loop::matchInit($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t save = $nc($nc(matcher)->locals)->get(this->countIndex);
	bool ret = false;
	if (this->posIndex != -1 && $nc(matcher->localsPos)->get(this->posIndex) == nullptr) {
		$nc(matcher->localsPos)->set(this->posIndex, $$new($IntHashSet));
	}
	if (0 < this->cmin) {
		$nc(matcher->locals)->set(this->countIndex, 1);
		ret = $nc(this->body)->match(matcher, i, seq);
	} else if (0 < this->cmax) {
		$nc(matcher->locals)->set(this->countIndex, 1);
		ret = $nc(this->body)->match(matcher, i, seq);
		if (ret == false) {
			ret = $nc(this->next)->match(matcher, i, seq);
		}
	} else {
		ret = $nc(this->next)->match(matcher, i, seq);
	}
	$nc(matcher->locals)->set(this->countIndex, save);
	return ret;
}

bool Pattern$Loop::study($Pattern$TreeInfo* info) {
	$nc(info)->maxValid = false;
	info->deterministic = false;
	return false;
}

Pattern$Loop::Pattern$Loop() {
}

$Class* Pattern$Loop::load$($String* name, bool initialize) {
	$loadClass(Pattern$Loop, name, initialize, &_Pattern$Loop_ClassInfo_, allocate$Pattern$Loop);
	return class$;
}

$Class* Pattern$Loop::class$ = nullptr;

		} // regex
	} // util
} // java