#include <java/util/regex/Pattern$SliceU.h>

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
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$SliceNode = ::java::util::regex::Pattern$SliceNode;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$SliceU_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, 0, $method(static_cast<void(Pattern$SliceU::*)($ints*)>(&Pattern$SliceU::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$SliceU_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$SliceU", "java.util.regex.Pattern", "SliceU", $STATIC | $FINAL},
	{"java.util.regex.Pattern$SliceNode", "java.util.regex.Pattern", "SliceNode", $STATIC},
	{}
};

$ClassInfo _Pattern$SliceU_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$SliceU",
	"java.util.regex.Pattern$SliceNode",
	nullptr,
	nullptr,
	_Pattern$SliceU_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$SliceU_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$SliceU($Class* clazz) {
	return $of($alloc(Pattern$SliceU));
}

void Pattern$SliceU::init$($ints* buf) {
	$Pattern$SliceNode::init$(buf);
}

bool Pattern$SliceU::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$var($ints, buf, this->buffer);
	int32_t len = $nc(buf)->length;
	for (int32_t j = 0; j < len; ++j) {
		if ((i + j) >= $nc(matcher)->to) {
			matcher->hitEnd$ = true;
			return false;
		}
		int32_t c = $nc(seq)->charAt(i + j);
		if (buf->get(j) != c && buf->get(j) != $Character::toLowerCase($Character::toUpperCase(c))) {
			return false;
		}
	}
	return $nc(this->next)->match(matcher, i + len, seq);
}

Pattern$SliceU::Pattern$SliceU() {
}

$Class* Pattern$SliceU::load$($String* name, bool initialize) {
	$loadClass(Pattern$SliceU, name, initialize, &_Pattern$SliceU_ClassInfo_, allocate$Pattern$SliceU);
	return class$;
}

$Class* Pattern$SliceU::class$ = nullptr;

		} // regex
	} // util
} // java