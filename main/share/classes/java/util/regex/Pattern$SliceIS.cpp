#include <java/util/regex/Pattern$SliceIS.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/ASCII.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$SliceNode.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
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

$MethodInfo _Pattern$SliceIS_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, 0, $method(static_cast<void(Pattern$SliceIS::*)($ints*)>(&Pattern$SliceIS::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{"toLower", "(I)I", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$SliceIS_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$SliceIS", "java.util.regex.Pattern", "SliceIS", $STATIC},
	{"java.util.regex.Pattern$SliceNode", "java.util.regex.Pattern", "SliceNode", $STATIC},
	{}
};

$ClassInfo _Pattern$SliceIS_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Pattern$SliceIS",
	"java.util.regex.Pattern$SliceNode",
	nullptr,
	nullptr,
	_Pattern$SliceIS_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$SliceIS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$SliceIS($Class* clazz) {
	return $of($alloc(Pattern$SliceIS));
}

void Pattern$SliceIS::init$($ints* buf) {
	$Pattern$SliceNode::init$(buf);
}

int32_t Pattern$SliceIS::toLower(int32_t c) {
	return $ASCII::toLower(c);
}

bool Pattern$SliceIS::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$var($ints, buf, this->buffer);
	int32_t x = i;
	for (int32_t j = 0; j < $nc(buf)->length; ++j) {
		if (x >= $nc(matcher)->to) {
			matcher->hitEnd$ = true;
			return false;
		}
		int32_t c = $Character::codePointAt(seq, x);
		if (buf->get(j) != c && buf->get(j) != toLower(c)) {
			return false;
		}
		x += $Character::charCount(c);
		if (x > $nc(matcher)->to) {
			matcher->hitEnd$ = true;
			return false;
		}
	}
	return $nc(this->next)->match(matcher, x, seq);
}

Pattern$SliceIS::Pattern$SliceIS() {
}

$Class* Pattern$SliceIS::load$($String* name, bool initialize) {
	$loadClass(Pattern$SliceIS, name, initialize, &_Pattern$SliceIS_ClassInfo_, allocate$Pattern$SliceIS);
	return class$;
}

$Class* Pattern$SliceIS::class$ = nullptr;

		} // regex
	} // util
} // java