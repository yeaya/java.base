#include <java/util/regex/Pattern$GroupHead.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$GroupTail.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$GroupTail = ::java::util::regex::Pattern$GroupTail;
using $Pattern$Node = ::java::util::regex::Pattern$Node;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$GroupHead_FieldInfo_[] = {
	{"localIndex", "I", nullptr, 0, $field(Pattern$GroupHead, localIndex)},
	{"tail", "Ljava/util/regex/Pattern$GroupTail;", nullptr, 0, $field(Pattern$GroupHead, tail)},
	{}
};

$MethodInfo _Pattern$GroupHead_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(Pattern$GroupHead::*)(int32_t)>(&Pattern$GroupHead::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$GroupHead_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$GroupHead", "java.util.regex.Pattern", "GroupHead", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$GroupHead_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$GroupHead",
	"java.util.regex.Pattern$Node",
	nullptr,
	_Pattern$GroupHead_FieldInfo_,
	_Pattern$GroupHead_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$GroupHead_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$GroupHead($Class* clazz) {
	return $of($alloc(Pattern$GroupHead));
}

void Pattern$GroupHead::init$(int32_t localCount) {
	$Pattern$Node::init$();
	this->localIndex = localCount;
}

bool Pattern$GroupHead::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	int32_t save = $nc($nc(matcher)->locals)->get(this->localIndex);
	$nc(matcher->locals)->set(this->localIndex, i);
	bool ret = $nc(this->next)->match(matcher, i, seq);
	$nc(matcher->locals)->set(this->localIndex, save);
	return ret;
}

Pattern$GroupHead::Pattern$GroupHead() {
}

$Class* Pattern$GroupHead::load$($String* name, bool initialize) {
	$loadClass(Pattern$GroupHead, name, initialize, &_Pattern$GroupHead_ClassInfo_, allocate$Pattern$GroupHead);
	return class$;
}

$Class* Pattern$GroupHead::class$ = nullptr;

		} // regex
	} // util
} // java