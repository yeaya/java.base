#include <sun/security/util/math/ImmutableIntegerModuloP.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IntegerModuloP = ::sun::security::util::math::IntegerModuloP;

namespace sun {
	namespace security {
		namespace util {
			namespace math {

$ClassInfo _ImmutableIntegerModuloP_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.math.ImmutableIntegerModuloP",
	nullptr,
	"sun.security.util.math.IntegerModuloP"
};

$Object* allocate$ImmutableIntegerModuloP($Class* clazz) {
	return $of($alloc(ImmutableIntegerModuloP));
}

$Class* ImmutableIntegerModuloP::load$($String* name, bool initialize) {
	$loadClass(ImmutableIntegerModuloP, name, initialize, &_ImmutableIntegerModuloP_ClassInfo_, allocate$ImmutableIntegerModuloP);
	return class$;
}

$Class* ImmutableIntegerModuloP::class$ = nullptr;

			} // math
		} // util
	} // security
} // sun