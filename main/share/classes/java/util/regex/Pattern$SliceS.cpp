#include <java/util/regex/Pattern$SliceS.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$Slice.h>
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
using $Pattern$Slice = ::java::util::regex::Pattern$Slice;
using $Pattern$SliceNode = ::java::util::regex::Pattern$SliceNode;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$SliceS_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, 0, $method(static_cast<void(Pattern$SliceS::*)($ints*)>(&Pattern$SliceS::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$SliceS_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$SliceS", "java.util.regex.Pattern", "SliceS", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Slice", "java.util.regex.Pattern", "Slice", $STATIC},
	{}
};

$ClassInfo _Pattern$SliceS_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$SliceS",
	"java.util.regex.Pattern$Slice",
	nullptr,
	nullptr,
	_Pattern$SliceS_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$SliceS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$SliceS($Class* clazz) {
	return $of($alloc(Pattern$SliceS));
}

void Pattern$SliceS::init$($ints* buf) {
	$Pattern$Slice::init$(buf);
}

bool Pattern$SliceS::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	$var($ints, buf, this->buffer);
	int32_t x = i;
	for (int32_t j = 0; j < $nc(buf)->length; ++j) {
		if (x >= $nc(matcher)->to) {
			matcher->hitEnd$ = true;
			return false;
		}
		int32_t c = $Character::codePointAt(seq, x);
		if (buf->get(j) != c) {
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

Pattern$SliceS::Pattern$SliceS() {
}

$Class* Pattern$SliceS::load$($String* name, bool initialize) {
	$loadClass(Pattern$SliceS, name, initialize, &_Pattern$SliceS_ClassInfo_, allocate$Pattern$SliceS);
	return class$;
}

$Class* Pattern$SliceS::class$ = nullptr;

		} // regex
	} // util
} // java