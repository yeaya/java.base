#include <java/util/regex/Pattern$SliceNode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$TreeInfo = ::java::util::regex::Pattern$TreeInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$SliceNode_FieldInfo_[] = {
	{"buffer", "[I", nullptr, 0, $field(Pattern$SliceNode, buffer)},
	{}
};

$MethodInfo _Pattern$SliceNode_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, 0, $method(static_cast<void(Pattern$SliceNode::*)($ints*)>(&Pattern$SliceNode::init$))},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$SliceNode_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$SliceNode", "java.util.regex.Pattern", "SliceNode", $STATIC},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$SliceNode_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$SliceNode",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$SliceNode_FieldInfo_,
	_Pattern$SliceNode_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$SliceNode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$SliceNode($Class* clazz) {
	return $of($alloc(Pattern$SliceNode));
}

void Pattern$SliceNode::init$($ints* buf) {
	$Pattern$Node::init$();
	$set(this, buffer, buf);
}

bool Pattern$SliceNode::study($Pattern$TreeInfo* info) {
	$nc(info)->minLength += $nc(this->buffer)->length;
	info->maxLength += $nc(this->buffer)->length;
	return $nc(this->next)->study(info);
}

Pattern$SliceNode::Pattern$SliceNode() {
}

$Class* Pattern$SliceNode::load$($String* name, bool initialize) {
	$loadClass(Pattern$SliceNode, name, initialize, &_Pattern$SliceNode_ClassInfo_, allocate$Pattern$SliceNode);
	return class$;
}

$Class* Pattern$SliceNode::class$ = nullptr;

		} // regex
	} // util
} // java