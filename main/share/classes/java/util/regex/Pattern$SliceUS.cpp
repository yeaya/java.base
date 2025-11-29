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

$MethodInfo _Pattern$SliceUS_MethodInfo_[] = {
	{"<init>", "([I)V", nullptr, 0, $method(static_cast<void(Pattern$SliceUS::*)($ints*)>(&Pattern$SliceUS::init$))},
	{"toLower", "(I)I", nullptr, 0},
	{}
};

$InnerClassInfo _Pattern$SliceUS_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$SliceUS", "java.util.regex.Pattern", "SliceUS", $STATIC | $FINAL},
	{"java.util.regex.Pattern$SliceIS", "java.util.regex.Pattern", "SliceIS", $STATIC},
	{}
};

$ClassInfo _Pattern$SliceUS_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$SliceUS",
	"java.util.regex.Pattern$SliceIS",
	nullptr,
	nullptr,
	_Pattern$SliceUS_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$SliceUS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$SliceUS($Class* clazz) {
	return $of($alloc(Pattern$SliceUS));
}

void Pattern$SliceUS::init$($ints* buf) {
	$Pattern$SliceIS::init$(buf);
}

int32_t Pattern$SliceUS::toLower(int32_t c) {
	return $Character::toLowerCase($Character::toUpperCase(c));
}

Pattern$SliceUS::Pattern$SliceUS() {
}

$Class* Pattern$SliceUS::load$($String* name, bool initialize) {
	$loadClass(Pattern$SliceUS, name, initialize, &_Pattern$SliceUS_ClassInfo_, allocate$Pattern$SliceUS);
	return class$;
}

$Class* Pattern$SliceUS::class$ = nullptr;

		} // regex
	} // util
} // java