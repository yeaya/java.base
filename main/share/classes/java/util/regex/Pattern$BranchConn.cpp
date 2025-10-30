#include <java/util/regex/Pattern$BranchConn.h>

#include <java/lang/CharSequence.h>
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

$MethodInfo _Pattern$BranchConn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Pattern$BranchConn::*)()>(&Pattern$BranchConn::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"study", "(Ljava/util/regex/Pattern$TreeInfo;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$BranchConn_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$BranchConn", "java.util.regex.Pattern", "BranchConn", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Node", "java.util.regex.Pattern", "Node", $STATIC},
	{}
};

$ClassInfo _Pattern$BranchConn_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$BranchConn",
	"java.util.regex.Pattern$Node",
	nullptr,
	nullptr,
	_Pattern$BranchConn_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$BranchConn_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$BranchConn($Class* clazz) {
	return $of($alloc(Pattern$BranchConn));
}

void Pattern$BranchConn::init$() {
	$Pattern$Node::init$();
}

bool Pattern$BranchConn::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	return $nc(this->next)->match(matcher, i, seq);
}

bool Pattern$BranchConn::study($Pattern$TreeInfo* info) {
	return $nc(info)->deterministic;
}

Pattern$BranchConn::Pattern$BranchConn() {
}

$Class* Pattern$BranchConn::load$($String* name, bool initialize) {
	$loadClass(Pattern$BranchConn, name, initialize, &_Pattern$BranchConn_ClassInfo_, allocate$Pattern$BranchConn);
	return class$;
}

$Class* Pattern$BranchConn::class$ = nullptr;

		} // regex
	} // util
} // java