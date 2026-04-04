#include <jdk/test/internal/NP.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#undef NP

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace jdk {
	namespace test {
		namespace internal {

int32_t NP::m() {
	$useLocalObjectStack();
	$throwNew($UnsupportedOperationException, $$str({"non-public interface: "_s, $(NP::class$->getName())}));
	$shouldNotReachHere();
}

$Class* NP::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()I", nullptr, $PUBLIC, $virtualMethod(NP, m, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.test.internal.NP",
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

		} // internal
	} // test
} // jdk