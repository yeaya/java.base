#include <java/util/regex/Pattern$SliceNode.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

void Pattern$SliceNode::init$($ints* buf) {
	$Pattern$Node::init$();
	$set(this, buffer, buf);
}

bool Pattern$SliceNode::study($Pattern$TreeInfo* info) {
	$nc(info)->minLength += $nc(this->buffer)->length;
	info->maxLength += this->buffer->length;
	return $nc(this->next)->study(info);
}

Pattern$SliceNode::Pattern$SliceNode() {
}

$Class* Pattern$SliceNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"buffer", "[I", nullptr, 0, $field(Pattern$SliceNode, buffer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", nullptr, 0, $method(Pattern$SliceNode, init$, void, $ints*)},
		{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0, $virtualMethod(Pattern$SliceNode, study, bool, $Pattern$TreeInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$SliceNode", "java.util.regex.Pattern", "SliceNode", $STATIC},
		{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.regex.Pattern$SliceNode",
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
	$loadClass(Pattern$SliceNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$SliceNode);
	});
	return class$;
}

$Class* Pattern$SliceNode::class$ = nullptr;

		} // regex
	} // util
} // java