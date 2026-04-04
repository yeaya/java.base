#include <p/three/internal/Q.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

#undef Q

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace p {
	namespace three {
		namespace internal {

int32_t Q::m() {
	$throwNew($UnsupportedOperationException, "Q::m is in a non-exported package"_s);
	$shouldNotReachHere();
}

$Class* Q::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()I", nullptr, $PUBLIC, $virtualMethod(Q, m, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"p.three.internal.Q",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Q, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Q);
	});
	return class$;
}

$Class* Q::class$ = nullptr;

		} // internal
	} // three
} // p