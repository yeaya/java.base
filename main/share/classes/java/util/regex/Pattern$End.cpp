#include <java/util/regex/Pattern$End.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$End_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Pattern$End::*)()>(&Pattern$End::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$End_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$End", "java.util.regex.Pattern", "End", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$End_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$End",
	"java.util.regex.Pattern$Node",
	nullptr,
	nullptr,
	_Pattern$End_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$End_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$End($Class* clazz) {
	return $of($alloc(Pattern$End));
}

void Pattern$End::init$() {
	$Pattern$Node::init$();
}

bool Pattern$End::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t endIndex = ($nc(matcher)->anchoringBounds) ? $nc(matcher)->to : matcher->getTextLength();
	if (i == endIndex) {
		matcher->hitEnd$ = true;
		return $nc(this->next)->match(matcher, i, seq);
	}
	return false;
}

Pattern$End::Pattern$End() {
}

$Class* Pattern$End::load$($String* name, bool initialize) {
	$loadClass(Pattern$End, name, initialize, &_Pattern$End_ClassInfo_, allocate$Pattern$End);
	return class$;
}

$Class* Pattern$End::class$ = nullptr;

		} // regex
	} // util
} // java