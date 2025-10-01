#include <java/util/regex/Pattern$LastNode.h>

#include <java/lang/Array.h>
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
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef ENDANCHOR

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

$MethodInfo _Pattern$LastNode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Pattern$LastNode::*)()>(&Pattern$LastNode::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$LastNode_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$LastNode", "java.util.regex.Pattern", "LastNode", $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$LastNode_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$LastNode",
	"java.util.regex.Pattern$Node",
	nullptr,
	nullptr,
	_Pattern$LastNode_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$LastNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$LastNode($Class* clazz) {
	return $of($alloc(Pattern$LastNode));
}

void Pattern$LastNode::init$() {
	$Pattern$Node::init$();
}

bool Pattern$LastNode::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if ($nc(matcher)->acceptMode == $Matcher::ENDANCHOR && i != matcher->to) {
		return false;
	}
	$nc(matcher)->last = i;
	$nc(matcher->groups)->set(0, matcher->first);
	$nc(matcher->groups)->set(1, matcher->last);
	return true;
}

Pattern$LastNode::Pattern$LastNode() {
}

$Class* Pattern$LastNode::load$($String* name, bool initialize) {
	$loadClass(Pattern$LastNode, name, initialize, &_Pattern$LastNode_ClassInfo_, allocate$Pattern$LastNode);
	return class$;
}

$Class* Pattern$LastNode::class$ = nullptr;

		} // regex
	} // util
} // java