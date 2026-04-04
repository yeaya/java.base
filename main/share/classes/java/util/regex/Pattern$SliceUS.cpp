#include <java/util/regex/Pattern$SliceUS.h>
#include <java/util/regex/Pattern$SliceIS.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern$SliceIS = ::java::util::regex::Pattern$SliceIS;

namespace java {
	namespace util {
		namespace regex {

void Pattern$SliceUS::init$($ints* buf) {
	$Pattern$SliceIS::init$(buf);
}

int32_t Pattern$SliceUS::toLower(int32_t c) {
	return $Character::toLowerCase($Character::toUpperCase(c));
}

Pattern$SliceUS::Pattern$SliceUS() {
}

$Class* Pattern$SliceUS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", nullptr, 0, $method(Pattern$SliceUS, init$, void, $ints*)},
		{"toLower", "(I)I", nullptr, 0, $virtualMethod(Pattern$SliceUS, toLower, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$SliceUS", "java.util.regex.Pattern", "SliceUS", $STATIC | $FINAL},
		{"java.util.regex.Pattern$SliceIS", "java.util.regex.Pattern", "SliceIS", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$SliceUS",
		"java.util.regex.Pattern$SliceIS",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$SliceUS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$SliceUS);
	});
	return class$;
}

$Class* Pattern$SliceUS::class$ = nullptr;

		} // regex
	} // util
} // java