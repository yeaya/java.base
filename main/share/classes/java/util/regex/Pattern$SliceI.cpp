#include <java/util/regex/Pattern$SliceI.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/ASCII.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$SliceNode.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ASCII = ::java::util::regex::ASCII;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$SliceNode = ::java::util::regex::Pattern$SliceNode;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$SliceI_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, 0, $method(static_cast<void(Pattern$SliceI::*)($ints*)>(&Pattern$SliceI::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$SliceI_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$SliceI", "java.util.regex.Pattern", "SliceI", $STATIC},
	{"java.util.regex.Pattern$SliceNode", "java.util.regex.Pattern", "SliceNode", $STATIC},
	{}
};

$ClassInfo _Pattern$SliceI_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$SliceI",
	"java.util.regex.Pattern$SliceNode",
	nullptr,
	nullptr,
	_Pattern$SliceI_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$SliceI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$SliceI($Class* clazz) {
	return $of($alloc(Pattern$SliceI));
}

void Pattern$SliceI::init$($ints* buf) {
	$Pattern$SliceNode::init$(buf);
}

bool Pattern$SliceI::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$var($ints, buf, this->buffer);
	int32_t len = $nc(buf)->length;
	for (int32_t j = 0; j < len; ++j) {
		if ((i + j) >= $nc(matcher)->to) {
			matcher->hitEnd$ = true;
			return false;
		}
		int32_t c = $nc(seq)->charAt(i + j);
		if (buf->get(j) != c && buf->get(j) != $ASCII::toLower(c)) {
			return false;
		}
	}
	return $nc(this->next)->match(matcher, i + len, seq);
}

Pattern$SliceI::Pattern$SliceI() {
}

$Class* Pattern$SliceI::load$($String* name, bool initialize) {
	$loadClass(Pattern$SliceI, name, initialize, &_Pattern$SliceI_ClassInfo_, allocate$Pattern$SliceI);
	return class$;
}

$Class* Pattern$SliceI::class$ = nullptr;

		} // regex
	} // util
} // java