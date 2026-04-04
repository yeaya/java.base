#include <p/two/A.h>
#include <jcpp.h>

#undef A

using $ClassInfo = ::java::lang::ClassInfo;

namespace p {
	namespace two {

$Class* A::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"p.two.A"
	};
	$loadClass(A, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(A);
	});
	return class$;
}

$Class* A::class$ = nullptr;

	} // two
} // p