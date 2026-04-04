#include <q/U.h>
#include <jcpp.h>

#undef U

using $ClassInfo = ::java::lang::ClassInfo;

namespace q {

$Class* U::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"q.U"
	};
	$loadClass(U, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(U);
	});
	return class$;
}

$Class* U::class$ = nullptr;

} // q