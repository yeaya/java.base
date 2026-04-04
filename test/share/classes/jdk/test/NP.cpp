#include <jdk/test/NP.h>
#include <jcpp.h>

#undef NP

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace test {

int32_t NP::m() {
	return 100;
}

$Class* NP::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()I", nullptr, $PUBLIC, $virtualMethod(NP, m, int32_t)},
		{"test", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NP, test, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.test.NP",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NP, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NP);
	});
	return class$;
}

$Class* NP::class$ = nullptr;

	} // test
} // jdk