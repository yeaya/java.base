#include <sun/security/util/math/SmallValue.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace security {
		namespace util {
			namespace math {

$ClassInfo _SmallValue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.math.SmallValue"
};

$Object* allocate$SmallValue($Class* clazz) {
	return $of($alloc(SmallValue));
}

$Class* SmallValue::load$($String* name, bool initialize) {
	$loadClass(SmallValue, name, initialize, &_SmallValue_ClassInfo_, allocate$SmallValue);
	return class$;
}

$Class* SmallValue::class$ = nullptr;

			} // math
		} // util
	} // security
} // sun