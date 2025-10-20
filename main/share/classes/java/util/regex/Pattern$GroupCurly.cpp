#include <java/util/regex/Pattern$GroupCurly.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$Qtype.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef GREEDY
#undef LAZY

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$Qtype = ::java::util::regex::Pattern$Qtype;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$GroupCurly_FieldInfo_[] = {
	{"atom", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$GroupCurly, atom)},
	{"type", "Ljava/util/regex/Pattern$Qtype;", nullptr, 0, $field(Pattern$GroupCurly, type)},
	{"cmin", "I", nullptr, 0, $field(Pattern$GroupCurly, cmin)},
	{"cmax", "I", nullptr, 0, $field(Pattern$GroupCurly, cmax)},
	{"localIndex", "I", nullptr, 0, $field(Pattern$GroupCurly, localIndex)},
	{"groupIndex", "I", nullptr, 0, $field(Pattern$GroupCurly, groupIndex)},
	{"capture", "Z", nullptr, 0, $field(Pattern$GroupCurly, capture)},
	{}
};

$MethodInfo _Pattern$GroupCurly_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;IILjava/util/regex/Pattern$Qtype;IIZ)V", nullptr, 0, $method(static_cast<void(Pattern$GroupCurly::*)($Pattern$Node*,int32_t,int32_t,$Pattern$Qtype*,int32_t,int32_t,bool)>(&Pattern$GroupCurly::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"match0", "(Ljava/util/regex/Matcher;IILjava/lang/CharSequence;)Z", nullptr, 0, $method(static_cast<bool(Pattern$GroupCurly::*)($Matcher*,int32_t,int32_t,$CharSequence*)>(&Pattern$GroupCurly::match0))},
	{"match1", "(Ljava/util/regex/Matcher;IILjava/lang/CharSequence;)Z", nullptr, 0, $method(static_cast<bool(Pattern$GroupCurly::*)($Matcher*,int32_t,int32_t,$CharSequence*)>(&Pattern$GroupCurly::match1))},
	{"match2", "(Ljava/util/regex/Matcher;IILjava/lang/CharSequence;)Z", nullptr, 0, $method(static_cast<bool(Pattern$GroupCurly::*)($Matcher*,int32_t,int32_t,$CharSequence*)>(&Pattern$GroupCurly::match2))},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$GroupCurly_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$GroupCurly", "java.util.regex.Pattern", "GroupCurly", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$GroupCurly_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$GroupCurly",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$GroupCurly_FieldInfo_,
	_Pattern$GroupCurly_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$GroupCurly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$GroupCurly($Class* clazz) {
	return $of($alloc(Pattern$GroupCurly));
}

void Pattern$GroupCurly::init$($Pattern$Node* node, int32_t cmin, int32_t cmax, $Pattern$Qtype* type, int32_t local, int32_t group, bool capture) {
	$Pattern$Node::init$();
	$set(this, atom, node);
	$set(this, type, type);
	this->cmin = cmin;
	this->cmax = cmax;
	this->localIndex = local;
	this->groupIndex = group;
	this->capture = capture;
}

bool Pattern$GroupCurly::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$useLocalCurrentObjectStackCache();
	$var($ints, groups, $nc(matcher)->groups);
	$var($ints, locals, matcher->locals);
	int32_t save0 = $nc(locals)->get(this->localIndex);
	int32_t save1 = 0;
	int32_t save2 = 0;
	if (this->capture) {
		save1 = $nc(groups)->get(this->groupIndex);
		save2 = groups->get(this->groupIndex + 1);
	}
	locals->set(this->localIndex, -1);
	bool ret = true;
	for (int32_t j = 0; j < this->cmin; ++j) {
		if ($nc(this->atom)->match(matcher, i, seq)) {
			if (this->capture) {
				$nc(groups)->set(this->groupIndex, i);
				groups->set(this->groupIndex + 1, matcher->last);
			}
			i = matcher->last;
		} else {
			ret = false;
			break;
		}
	}
	if (ret) {
		$init($Pattern$Qtype);
		if (this->type == $Pattern$Qtype::GREEDY) {
			ret = match0(matcher, i, this->cmin, seq);
		} else {
			if (this->type == $Pattern$Qtype::LAZY) {
				ret = match1(matcher, i, this->cmin, seq);
			} else {
				ret = match2(matcher, i, this->cmin, seq);
			}
		}
	}
	if (!ret) {
		locals->set(this->localIndex, save0);
		if (this->capture) {
			$nc(groups)->set(this->groupIndex, save1);
			groups->set(this->groupIndex + 1, save2);
		}
	}
	return ret;
}

bool Pattern$GroupCurly::match0($Matcher* matcher, int32_t i, int32_t j, $CharSequence* seq) {
	int32_t min = j;
	$var($ints, groups, $nc(matcher)->groups);
	int32_t save0 = 0;
	int32_t save1 = 0;
	if (this->capture) {
		save0 = $nc(groups)->get(this->groupIndex);
		save1 = groups->get(this->groupIndex + 1);
	}
	for (;;) {
		if (j >= this->cmax) {
			break;
		}
		if (!$nc(this->atom)->match(matcher, i, seq)) {
			break;
		}
		int32_t k = matcher->last - i;
		if (k <= 0) {
			if (this->capture) {
				$nc(groups)->set(this->groupIndex, i);
				groups->set(this->groupIndex + 1, i + k);
			}
			i = i + k;
			break;
		}
		for (;;) {
			if (this->capture) {
				$nc(groups)->set(this->groupIndex, i);
				groups->set(this->groupIndex + 1, i + k);
			}
			i = i + k;
			if (++j >= this->cmax) {
				break;
			}
			if (!$nc(this->atom)->match(matcher, i, seq)) {
				break;
			}
			if (i + k != matcher->last) {
				if (match0(matcher, i, j, seq)) {
					return true;
				}
				break;
			}
		}
		while (j > min) {
			if ($nc(this->next)->match(matcher, i, seq)) {
				if (this->capture) {
					$nc(groups)->set(this->groupIndex + 1, i);
					groups->set(this->groupIndex, i - k);
				}
				return true;
			}
			i = i - k;
			if (this->capture) {
				$nc(groups)->set(this->groupIndex + 1, i);
				groups->set(this->groupIndex, i - k);
			}
			--j;
		}
		break;
	}
	if (this->capture) {
		$nc(groups)->set(this->groupIndex, save0);
		groups->set(this->groupIndex + 1, save1);
	}
	return $nc(this->next)->match(matcher, i, seq);
}

bool Pattern$GroupCurly::match1($Matcher* matcher, int32_t i, int32_t j, $CharSequence* seq) {
	for (;;) {
		if ($nc(this->next)->match(matcher, i, seq)) {
			return true;
		}
		if (j >= this->cmax) {
			return false;
		}
		if (!$nc(this->atom)->match(matcher, i, seq)) {
			return false;
		}
		if (i == $nc(matcher)->last) {
			return false;
		}
		if (this->capture) {
			$nc($nc(matcher)->groups)->set(this->groupIndex, i);
			$nc(matcher->groups)->set(this->groupIndex + 1, matcher->last);
		}
		i = $nc(matcher)->last;
		++j;
	}
}

bool Pattern$GroupCurly::match2($Matcher* matcher, int32_t i, int32_t j, $CharSequence* seq) {
	for (; j < this->cmax; ++j) {
		if (!$nc(this->atom)->match(matcher, i, seq)) {
			break;
		}
		if (this->capture) {
			$nc($nc(matcher)->groups)->set(this->groupIndex, i);
			$nc(matcher->groups)->set(this->groupIndex + 1, matcher->last);
		}
		if (i == $nc(matcher)->last) {
			break;
		}
		i = $nc(matcher)->last;
	}
	return $nc(this->next)->match(matcher, i, seq);
}

bool Pattern$GroupCurly::study($Pattern$TreeInfo* info) {
	int32_t minL = $nc(info)->minLength;
	int32_t maxL = info->maxLength;
	bool maxV = info->maxValid;
	bool detm = info->deterministic;
	info->reset();
	$nc(this->atom)->study(info);
	int32_t temp = info->minLength * this->cmin + minL;
	if (temp < minL) {
		temp = 0x0FFFFFFF;
	}
	info->minLength = temp;
	if (maxV & info->maxValid) {
		temp = info->maxLength * this->cmax + maxL;
		info->maxLength = temp;
		if (temp < maxL) {
			info->maxValid = false;
		}
	} else {
		info->maxValid = false;
	}
	if (info->deterministic && this->cmin == this->cmax) {
		info->deterministic = detm;
	} else {
		info->deterministic = false;
	}
	return $nc(this->next)->study(info);
}

Pattern$GroupCurly::Pattern$GroupCurly() {
}

$Class* Pattern$GroupCurly::load$($String* name, bool initialize) {
	$loadClass(Pattern$GroupCurly, name, initialize, &_Pattern$GroupCurly_ClassInfo_, allocate$Pattern$GroupCurly);
	return class$;
}

$Class* Pattern$GroupCurly::class$ = nullptr;

		} // regex
	} // util
} // java