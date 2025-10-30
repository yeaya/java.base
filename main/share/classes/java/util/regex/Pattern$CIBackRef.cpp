#include <java/util/regex/Pattern$CIBackRef.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/ASCII.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ASCII = ::java::util::regex::ASCII;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$CIBackRef_FieldInfo_[] = {
	{"groupIndex", "I", nullptr, 0, $field(Pattern$CIBackRef, groupIndex)},
	{"doUnicodeCase", "Z", nullptr, 0, $field(Pattern$CIBackRef, doUnicodeCase)},
	{}
};

$MethodInfo _Pattern$CIBackRef_MethodInfo_[] = {
	{"<init>", "(IZ)V", nullptr, 0, $method(static_cast<void(Pattern$CIBackRef::*)(int32_t,bool)>(&Pattern$CIBackRef::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$CIBackRef_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$CIBackRef", "java.util.regex.Pattern", "CIBackRef", $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$CIBackRef_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$CIBackRef",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$CIBackRef_FieldInfo_,
	_Pattern$CIBackRef_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$CIBackRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$CIBackRef($Class* clazz) {
	return $of($alloc(Pattern$CIBackRef));
}

void Pattern$CIBackRef::init$(int32_t groupCount, bool doUnicodeCase) {
	$Pattern$Node::init$();
	this->groupIndex = groupCount + groupCount;
	this->doUnicodeCase = doUnicodeCase;
}

bool Pattern$CIBackRef::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
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
	int32_t x = i;
	for (int32_t index = 0; index < groupSize; ++index) {
		int32_t c1 = $Character::codePointAt(seq, x);
		int32_t c2 = $Character::codePointAt(seq, j);
		if (c1 != c2) {
			if (this->doUnicodeCase) {
				int32_t cc1 = $Character::toUpperCase(c1);
				int32_t cc2 = $Character::toUpperCase(c2);
				bool var$0 = cc1 != cc2;
				if (var$0) {
					int32_t var$1 = $Character::toLowerCase(cc1);
					var$0 = var$1 != $Character::toLowerCase(cc2);
				}
				if (var$0) {
					return false;
				}
			} else {
				int32_t var$3 = $ASCII::toLower(c1);
				if (var$3 != $ASCII::toLower(c2)) {
					return false;
				}
			}
		}
		x += $Character::charCount(c1);
		j += $Character::charCount(c2);
	}
	return $nc(this->next)->match(matcher, i + groupSize, seq);
}

bool Pattern$CIBackRef::study($Pattern$TreeInfo* info) {
	$nc(info)->maxValid = false;
	return $nc(this->next)->study(info);
}

Pattern$CIBackRef::Pattern$CIBackRef() {
}

$Class* Pattern$CIBackRef::load$($String* name, bool initialize) {
	$loadClass(Pattern$CIBackRef, name, initialize, &_Pattern$CIBackRef_ClassInfo_, allocate$Pattern$CIBackRef);
	return class$;
}

$Class* Pattern$CIBackRef::class$ = nullptr;

		} // regex
	} // util
} // java