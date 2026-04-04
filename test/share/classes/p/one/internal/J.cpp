#include <p/one/internal/J.h>
#include <jcpp.h>

#undef J

using $ClassInfo = ::java::lang::ClassInfo;

namespace p {
	namespace one {
		namespace internal {

$Class* J::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"p.one.internal.J"
	};
	$loadClass(J, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(J);
	});
	return class$;
}

$Class* J::class$ = nullptr;

		} // internal
	} // one
} // p