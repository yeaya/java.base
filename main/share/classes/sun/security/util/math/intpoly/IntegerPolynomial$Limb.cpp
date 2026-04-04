#include <sun/security/util/math/intpoly/IntegerPolynomial$Limb.h>
#include <sun/security/util/math/intpoly/IntegerPolynomial.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {
			namespace math {
				namespace intpoly {

void IntegerPolynomial$Limb::init$(int32_t value) {
	this->value = value;
}

IntegerPolynomial$Limb::IntegerPolynomial$Limb() {
}

$Class* IntegerPolynomial$Limb::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "I", nullptr, 0, $field(IntegerPolynomial$Limb, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(IntegerPolynomial$Limb, init$, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.math.intpoly.IntegerPolynomial$Limb", "sun.security.util.math.intpoly.IntegerPolynomial", "Limb", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.math.intpoly.IntegerPolynomial$Limb",
		"java.lang.Object",
		"sun.security.util.math.SmallValue",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.math.intpoly.IntegerPolynomial"
	};
	$loadClass(IntegerPolynomial$Limb, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntegerPolynomial$Limb);
	});
	return class$;
}

$Class* IntegerPolynomial$Limb::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun