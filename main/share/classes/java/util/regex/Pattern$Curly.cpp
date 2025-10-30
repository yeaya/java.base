#include <java/util/regex/Pattern$Curly.h>

#include <java/lang/CharSequence.h>
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

$FieldInfo _Pattern$Curly_FieldInfo_[] = {
	{"atom", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Curly, atom)},
	{"type", "Ljava/util/regex/Pattern$Qtype;", nullptr, 0, $field(Pattern$Curly, type)},
	{"cmin", "I", nullptr, 0, $field(Pattern$Curly, cmin)},
	{"cmax", "I", nullptr, 0, $field(Pattern$Curly, cmax)},
	{}
};

$MethodInfo _Pattern$Curly_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;IILjava/util/regex/Pattern$Qtype;)V", nullptr, 0, $method(static_cast<void(Pattern$Curly::*)($Pattern$Node*,int32_t,int32_t,$Pattern$Qtype*)>(&Pattern$Curly::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"match0", "(Ljava/util/regex/Matcher;IILjava/lang/CharSequence;)Z", nullptr, 0, $method(static_cast<bool(Pattern$Curly::*)($Matcher*,int32_t,int32_t,$CharSequence*)>(&Pattern$Curly::match0))},
	{"match1", "(Ljava/util/regex/Matcher;IILjava/lang/CharSequence;)Z", nullptr, 0, $method(static_cast<bool(Pattern$Curly::*)($Matcher*,int32_t,int32_t,$CharSequence*)>(&Pattern$Curly::match1))},
	{"match2", "(Ljava/util/regex/Matcher;IILjava/lang/CharSequence;)Z", nullptr, 0, $method(static_cast<bool(Pattern$Curly::*)($Matcher*,int32_t,int32_t,$CharSequence*)>(&Pattern$Curly::match2))},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$Curly_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Curly", "java.util.regex.Pattern", "Curly", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$Curly_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$Curly",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$Curly_FieldInfo_,
	_Pattern$Curly_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$Curly_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Curly($Class* clazz) {
	return $of($alloc(Pattern$Curly));
}

void Pattern$Curly::init$($Pattern$Node* node, int32_t cmin, int32_t cmax, $Pattern$Qtype* type) {
	$Pattern$Node::init$();
	$set(this, atom, node);
	$set(this, type, type);
	this->cmin = cmin;
	this->cmax = cmax;
}

bool Pattern$Curly::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t j = 0;
	for (j = 0; j < this->cmin; ++j) {
		if ($nc(this->atom)->match(matcher, i, seq)) {
			i = $nc(matcher)->last;
			continue;
		}
		return false;
	}
	$init($Pattern$Qtype);
	if (this->type == $Pattern$Qtype::GREEDY) {
		return match0(matcher, i, j, seq);
	} else {
		if (this->type == $Pattern$Qtype::LAZY) {
			return match1(matcher, i, j, seq);
		} else {
			return match2(matcher, i, j, seq);
		}
	}
}

bool Pattern$Curly::match0($Matcher* matcher, int32_t i, int32_t j, $CharSequence* seq) {
	if (j >= this->cmax) {
		return $nc(this->next)->match(matcher, i, seq);
	}
	int32_t backLimit = j;
	while ($nc(this->atom)->match(matcher, i, seq)) {
		int32_t k = $nc(matcher)->last - i;
		if (k == 0) {
			break;
		}
		i = matcher->last;
		++j;
		while (j < this->cmax) {
			if (!$nc(this->atom)->match(matcher, i, seq)) {
				break;
			}
			if (i + k != matcher->last) {
				if (match0(matcher, matcher->last, j + 1, seq)) {
					return true;
				}
				break;
			}
			i += k;
			++j;
		}
		while (j >= backLimit) {
			if ($nc(this->next)->match(matcher, i, seq)) {
				return true;
			}
			i -= k;
			--j;
		}
		return false;
	}
	return $nc(this->next)->match(matcher, i, seq);
}

bool Pattern$Curly::match1($Matcher* matcher, int32_t i, int32_t j, $CharSequence* seq) {
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
		i = $nc(matcher)->last;
		++j;
	}
}

bool Pattern$Curly::match2($Matcher* matcher, int32_t i, int32_t j, $CharSequence* seq) {
	for (; j < this->cmax; ++j) {
		if (!$nc(this->atom)->match(matcher, i, seq)) {
			break;
		}
		if (i == $nc(matcher)->last) {
			break;
		}
		i = $nc(matcher)->last;
	}
	return $nc(this->next)->match(matcher, i, seq);
}

bool Pattern$Curly::study($Pattern$TreeInfo* info) {
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

Pattern$Curly::Pattern$Curly() {
}

$Class* Pattern$Curly::load$($String* name, bool initialize) {
	$loadClass(Pattern$Curly, name, initialize, &_Pattern$Curly_ClassInfo_, allocate$Pattern$Curly);
	return class$;
}

$Class* Pattern$Curly::class$ = nullptr;

		} // regex
	} // util
} // java