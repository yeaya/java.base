#include <java/util/regex/Pattern$First.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$BnM.h>
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
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$BnM = ::java::util::regex::Pattern$BnM;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$First_FieldInfo_[] = {
	{"atom", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$First, atom)},
	{}
};

$MethodInfo _Pattern$First_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;)V", nullptr, 0, $method(Pattern$First, init$, void, $Pattern$Node*)},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$First, match, bool, $Matcher*, int32_t, $CharSequence*)},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$First, study, bool, $Pattern$TreeInfo*)},
	{}
};

$InnerClassInfo _Pattern$First_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$First", "java.util.regex.Pattern", "First", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$First_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$First",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$First_FieldInfo_,
	_Pattern$First_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$First_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$First($Class* clazz) {
	return $of($alloc(Pattern$First));
}

void Pattern$First::init$($Pattern$Node* node) {
	$Pattern$Node::init$();
	$set(this, atom, $Pattern$BnM::optimize(node));
}

bool Pattern$First::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if ($instanceOf($Pattern$BnM, this->atom)) {
		bool var$0 = $nc(this->atom)->match(matcher, i, seq);
		return var$0 && $nc(this->next)->match(matcher, $nc(matcher)->last, seq);
	}
	for (;;) {
		if (i > $nc(matcher)->to) {
			matcher->hitEnd$ = true;
			return false;
		}
		if ($nc(this->atom)->match(matcher, i, seq)) {
			return $nc(this->next)->match(matcher, $nc(matcher)->last, seq);
		}
		i += $Pattern::countChars(seq, i, 1);
		++$nc(matcher)->first;
	}
}

bool Pattern$First::study($Pattern$TreeInfo* info) {
	$nc(this->atom)->study(info);
	$nc(info)->maxValid = false;
	info->deterministic = false;
	return $nc(this->next)->study(info);
}

Pattern$First::Pattern$First() {
}

$Class* Pattern$First::load$($String* name, bool initialize) {
	$loadClass(Pattern$First, name, initialize, &_Pattern$First_ClassInfo_, allocate$Pattern$First);
	return class$;
}

$Class* Pattern$First::class$ = nullptr;

		} // regex
	} // util
} // java