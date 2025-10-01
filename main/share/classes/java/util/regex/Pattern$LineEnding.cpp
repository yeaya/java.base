#include <java/util/regex/Pattern$LineEnding.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$LineEnding_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Pattern$LineEnding::*)()>(&Pattern$LineEnding::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$LineEnding_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$LineEnding", "java.util.regex.Pattern", "LineEnding", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$LineEnding_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$LineEnding",
	"java.util.regex.Pattern$Node",
	nullptr,
	nullptr,
	_Pattern$LineEnding_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$LineEnding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$LineEnding($Class* clazz) {
	return $of($alloc(Pattern$LineEnding));
}

void Pattern$LineEnding::init$() {
	$Pattern$Node::init$();
}

bool Pattern$LineEnding::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if (i < $nc(matcher)->to) {
		int32_t ch = $nc(seq)->charAt(i);
		if (ch == 10 || ch == 11 || ch == 12 || ch == 133 || ch == 8232 || ch == 8233) {
			return $nc(this->next)->match(matcher, i + 1, seq);
		}
		if (ch == 13) {
			++i;
			if (i < matcher->to) {
				bool var$0 = seq->charAt(i) == 10;
				if (var$0 && $nc(this->next)->match(matcher, i + 1, seq)) {
					return true;
				}
			} else {
				matcher->hitEnd$ = true;
			}
			return $nc(this->next)->match(matcher, i, seq);
		}
	} else {
		matcher->hitEnd$ = true;
	}
	return false;
}

bool Pattern$LineEnding::study($Pattern$TreeInfo* info) {
	++$nc(info)->minLength;
	info->maxLength += 2;
	return $nc(this->next)->study(info);
}

Pattern$LineEnding::Pattern$LineEnding() {
}

$Class* Pattern$LineEnding::load$($String* name, bool initialize) {
	$loadClass(Pattern$LineEnding, name, initialize, &_Pattern$LineEnding_ClassInfo_, allocate$Pattern$LineEnding);
	return class$;
}

$Class* Pattern$LineEnding::class$ = nullptr;

		} // regex
	} // util
} // java