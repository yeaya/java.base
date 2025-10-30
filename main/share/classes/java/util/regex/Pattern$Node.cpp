#include <java/util/regex/Pattern$Node.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
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
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$Node_FieldInfo_[] = {
	{"next", "Ljava/util/regex/Pattern$Node;", nullptr, 0, $field(Pattern$Node, next)},
	{}
};

$MethodInfo _Pattern$Node_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Pattern$Node::*)()>(&Pattern$Node::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$Node_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$Node_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$Node",
	"java.lang.Object",
	nullptr,
	_Pattern$Node_FieldInfo_,
	_Pattern$Node_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$Node($Class* clazz) {
	return $of($alloc(Pattern$Node));
}

void Pattern$Node::init$() {
	$init($Pattern);
	$set(this, next, $Pattern::accept$);
}

bool Pattern$Node::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$nc(matcher)->last = i;
	$nc(matcher->groups)->set(0, matcher->first);
	$nc(matcher->groups)->set(1, matcher->last);
	return true;
}

bool Pattern$Node::study($Pattern$TreeInfo* info) {
	if (this->next != nullptr) {
		return $nc(this->next)->study(info);
	} else {
		return $nc(info)->deterministic;
	}
}

Pattern$Node::Pattern$Node() {
}

$Class* Pattern$Node::load$($String* name, bool initialize) {
	$loadClass(Pattern$Node, name, initialize, &_Pattern$Node_ClassInfo_, allocate$Pattern$Node);
	return class$;
}

$Class* Pattern$Node::class$ = nullptr;

		} // regex
	} // util
} // java