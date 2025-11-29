#include <java/util/regex/Pattern$StartS.h>

#include <java/lang/CharSequence.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern$Node.h>
#include <java/util/regex/Pattern$Start.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern$Node = ::java::util::regex::Pattern$Node;
using $Pattern$Start = ::java::util::regex::Pattern$Start;

namespace java {
	namespace util {
		namespace regex {

$MethodInfo _Pattern$StartS_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Pattern$Node;)V", nullptr, 0, $method(static_cast<void(Pattern$StartS::*)($Pattern$Node*)>(&Pattern$StartS::init$))},
	{"match", "(Ljava/util/regex/Matcher;ILjava/lang/CharSequence;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$StartS_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$StartS", "java.util.regex.Pattern", "StartS", $STATIC | $FINAL},
	{"java.util.regex.Pattern$Start", "java.util.regex.Pattern", "Start", $STATIC},
	{}
};

$ClassInfo _Pattern$StartS_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$StartS",
	"java.util.regex.Pattern$Start",
	nullptr,
	nullptr,
	_Pattern$StartS_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$StartS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$StartS($Class* clazz) {
	return $of($alloc(Pattern$StartS));
}

void Pattern$StartS::init$($Pattern$Node* node) {
	$Pattern$Start::init$(node);
}

bool Pattern$StartS::match($Matcher* matcher, int32_t i, $CharSequence* seq) {
	if (i > $nc(matcher)->to - this->minLength) {
		matcher->hitEnd$ = true;
		return false;
	}
	int32_t guard = $nc(matcher)->to - this->minLength;
	while (i <= guard) {
		if ($nc(this->next)->match(matcher, i, seq)) {
			matcher->first = i;
			$nc(matcher->groups)->set(0, matcher->first);
			$nc(matcher->groups)->set(1, matcher->last);
			return true;
		}
		if (i == guard) {
			break;
		}
		if ($Character::isHighSurrogate($nc(seq)->charAt(i++))) {
			bool var$0 = i < $nc(seq)->length();
			if (var$0 && $Character::isLowSurrogate(seq->charAt(i))) {
				++i;
			}
		}
	}
	matcher->hitEnd$ = true;
	return false;
}

Pattern$StartS::Pattern$StartS() {
}

$Class* Pattern$StartS::load$($String* name, bool initialize) {
	$loadClass(Pattern$StartS, name, initialize, &_Pattern$StartS_ClassInfo_, allocate$Pattern$StartS);
	return class$;
}

$Class* Pattern$StartS::class$ = nullptr;

		} // regex
	} // util
} // java