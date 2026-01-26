#include <java/util/regex/Pattern$GroupTail.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$GroupTail_FieldInfo_[] = {
	{"localIndex", "I", nullptr, 0, $field(Pattern$GroupTail, localIndex)},
	{"groupIndex", "I", nullptr, 0, $field(Pattern$GroupTail, groupIndex)},
	{}
};

$MethodInfo _Pattern$GroupTail_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(Pattern$GroupTail, init$, void, int32_t, int32_t)},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$GroupTail, match, bool, $Matcher*, int32_t, $CharSequence*)},
	{}
};

$InnerClassInfo _Pattern$GroupTail_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$GroupTail", "java.util.regex.Pattern", "GroupTail", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$GroupTail_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$GroupTail",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$GroupTail_FieldInfo_,
	_Pattern$GroupTail_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$GroupTail_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$GroupTail($Class* clazz) {
	return $of($alloc(Pattern$GroupTail));
}

void Pattern$GroupTail::init$(int32_t localCount, int32_t groupCount) {
	$Pattern$Node::init$();
	this->localIndex = localCount;
	this->groupIndex = groupCount + groupCount;
}

bool Pattern$GroupTail::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t tmp = $nc($nc(matcher)->locals)->get(this->localIndex);
	if (tmp >= 0) {
		int32_t groupStart = $nc(matcher->groups)->get(this->groupIndex);
		int32_t groupEnd = $nc(matcher->groups)->get(this->groupIndex + 1);
		$nc(matcher->groups)->set(this->groupIndex, tmp);
		$nc(matcher->groups)->set(this->groupIndex + 1, i);
		if ($nc(this->next)->match(matcher, i, seq)) {
			return true;
		}
		$nc(matcher->groups)->set(this->groupIndex, groupStart);
		$nc(matcher->groups)->set(this->groupIndex + 1, groupEnd);
		return false;
	} else {
		matcher->last = i;
		return true;
	}
}

Pattern$GroupTail::Pattern$GroupTail() {
}

$Class* Pattern$GroupTail::load$($String* name, bool initialize) {
	$loadClass(Pattern$GroupTail, name, initialize, &_Pattern$GroupTail_ClassInfo_, allocate$Pattern$GroupTail);
	return class$;
}

$Class* Pattern$GroupTail::class$ = nullptr;

		} // regex
	} // util
} // java