#include <q/NP.h>
#include <jcpp.h>

#undef NP

using $ClassInfo = ::java::lang::ClassInfo;

namespace q {

$Class* NP::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"q.NP"
	};
	$loadClass(NP, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NP);
	});
	return class$;
}

$Class* NP::class$ = nullptr;

} // q