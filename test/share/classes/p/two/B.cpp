#include <p/two/B.h>
#include <jcpp.h>

#undef B

using $ClassInfo = ::java::lang::ClassInfo;

namespace p {
	namespace two {

$Class* B::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"p.two.B"
	};
	$loadClass(B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B);
	});
	return class$;
}

$Class* B::class$ = nullptr;

	} // two
} // p