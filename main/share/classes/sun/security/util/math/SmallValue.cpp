#include <sun/security/util/math/SmallValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace security {
		namespace util {
			namespace math {

$Class* SmallValue::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.util.math.SmallValue"
	};
	$loadClass(SmallValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SmallValue);
	});
	return class$;
}

$Class* SmallValue::class$ = nullptr;

			} // math
		} // util
	} // security
} // sun