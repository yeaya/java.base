#include <java/util/regex/Pattern$BackRef.h>

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

$FieldInfo _Pattern$BackRef_FieldInfo_[] = {
	{"groupIndex", "I", nullptr, 0, $field(Pattern$BackRef, groupIndex)},
	{}
};

$MethodInfo _Pattern$BackRef_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(Pattern$BackRef, init$, void, int32_t)},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$BackRef, match, bool, $Matcher*, int32_t, $CharSequence*)},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$BackRef, study, bool, $Pattern$TreeInfo*)},
	{}
};

$InnerClassInfo _Pattern$BackRef_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$BackRef", "java.util.regex.Pattern", "BackRef", $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$BackRef_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$BackRef",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$BackRef_FieldInfo_,
	_Pattern$BackRef_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$BackRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$BackRef($Class* clazz) {
	return $of($alloc(Pattern$BackRef));
}

void Pattern$BackRef::init$(int32_t groupCount) {
	$Pattern$Node::init$();
	this->groupIndex = groupCount + groupCount;
}

bool Pattern$BackRef::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t j = $nc($nc(matcher)->groups)->get(this->groupIndex);
	int32_t k = $nc(matcher->groups)->get(this->groupIndex + 1);
	int32_t groupSize = k - j;
	if (j < 0) {
		return false;
	}
	if (i + groupSize > matcher->to) {
		matcher->hitEnd$ = true;
		return false;
	}
	for (int32_t index = 0; index < groupSize; ++index) {
		char16_t var$0 = $nc(seq)->charAt(i + index);
		if (var$0 != seq->charAt(j + index)) {
			return false;
		}
	}
	return $nc(this->next)->match(matcher, i + groupSize, seq);
}

bool Pattern$BackRef::study($Pattern$TreeInfo* info) {
	$nc(info)->maxValid = false;
	return $nc(this->next)->study(info);
}

Pattern$BackRef::Pattern$BackRef() {
}

$Class* Pattern$BackRef::load$($String* name, bool initialize) {
	$loadClass(Pattern$BackRef, name, initialize, &_Pattern$BackRef_ClassInfo_, allocate$Pattern$BackRef);
	return class$;
}

$Class* Pattern$BackRef::class$ = nullptr;

		} // regex
	} // util
} // java