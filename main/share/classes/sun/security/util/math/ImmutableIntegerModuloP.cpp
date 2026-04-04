#include <sun/security/util/math/ImmutableIntegerModuloP.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace security {
		namespace util {
			namespace math {

$Class* ImmutableIntegerModuloP::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.util.math.ImmutableIntegerModuloP",
		nullptr,
		"sun.security.util.math.IntegerModuloP"
	};
	$loadClass(ImmutableIntegerModuloP, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImmutableIntegerModuloP);
	});
	return class$;
}

$Class* ImmutableIntegerModuloP::class$ = nullptr;

			} // math
		} // util
	} // security
} // sun