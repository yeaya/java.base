#include <java/util/regex/Pattern$LookBehindEndNode.h>
#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef INSTANCE

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

Pattern$LookBehindEndNode* Pattern$LookBehindEndNode::INSTANCE = nullptr;

void Pattern$LookBehindEndNode::init$() {
	$Pattern$Node::init$();
}

bool Pattern$LookBehindEndNode::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	return i == $nc(matcher)->lookbehindTo;
}

void Pattern$LookBehindEndNode::clinit$($Class* clazz) {
	$assignStatic(Pattern$LookBehindEndNode::INSTANCE, $new(Pattern$LookBehindEndNode));
}

Pattern$LookBehindEndNode::Pattern$LookBehindEndNode() {
}

$Class* Pattern$LookBehindEndNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/util/regex/Pattern$LookBehindEndNode;", nullptr, $STATIC, $staticField(Pattern$LookBehindEndNode, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Pattern$LookBehindEndNode, init$, void)},
		{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0, $virtualMethod(Pattern$LookBehindEndNode, match, bool, $Matcher*, int32_t, $CharSequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$LookBehindEndNode", "java.util.regex.Pattern", "LookBehindEndNode", $STATIC},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.regex.Pattern$LookBehindEndNode",
		"java.util.regex.Pattern$Node",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$LookBehindEndNode, name, initialize, &classInfo$$, Pattern$LookBehindEndNode::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$LookBehindEndNode);
	});
	return class$;
}

$Class* Pattern$LookBehindEndNode::class$ = nullptr;

		} // regex
	} // util
} // java