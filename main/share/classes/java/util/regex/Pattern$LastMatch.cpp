#include <java/util/regex/Pattern$LastMatch.h>

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
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$LastMatch_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Pattern$LastMatch::*)()>(&Pattern$LastMatch::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$LastMatch_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$LastMatch", "java.util.regex.Pattern", "LastMatch", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$LastMatch_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$LastMatch",
	"java.util.regex.Pattern$Node",
	nullptr,
	nullptr,
	_Pattern$LastMatch_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$LastMatch_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$LastMatch($Class* clazz) {
	return $of($alloc(Pattern$LastMatch));
}

void Pattern$LastMatch::init$() {
	$Pattern$Node::init$();
}

bool Pattern$LastMatch::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if (i != $nc(matcher)->oldLast) {
		return false;
	}
	return $nc(this->next)->match(matcher, i, seq);
}

Pattern$LastMatch::Pattern$LastMatch() {
}

$Class* Pattern$LastMatch::load$($String* name, bool initialize) {
	$loadClass(Pattern$LastMatch, name, initialize, &_Pattern$LastMatch_ClassInfo_, allocate$Pattern$LastMatch);
	return class$;
}

$Class* Pattern$LastMatch::class$ = nullptr;

		} // regex
	} // util
} // java