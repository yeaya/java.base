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

$FieldInfo _IntegerPolynomial$Limb_FieldInfo_[] = {
	{"value", "I", nullptr, 0, $field(IntegerPolynomial$Limb, value)},
	{}
};

$MethodInfo _IntegerPolynomial$Limb_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(IntegerPolynomial$Limb::*)(int32_t)>(&IntegerPolynomial$Limb::init$))},
	{}
};

$InnerClassInfo _IntegerPolynomial$Limb_InnerClassesInfo_[] = {
	{"sun.security.util.math.intpoly.IntegerPolynomial$Limb", "sun.security.util.math.intpoly.IntegerPolynomial", "Limb", $STATIC},
	{}
};

$ClassInfo _IntegerPolynomial$Limb_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.math.intpoly.IntegerPolynomial$Limb",
	"java.lang.Object",
	"sun.security.util.math.SmallValue",
	_IntegerPolynomial$Limb_FieldInfo_,
	_IntegerPolynomial$Limb_MethodInfo_,
	nullptr,
	nullptr,
	_IntegerPolynomial$Limb_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.math.intpoly.IntegerPolynomial"
};

$Object* allocate$IntegerPolynomial$Limb($Class* clazz) {
	return $of($alloc(IntegerPolynomial$Limb));
}

void IntegerPolynomial$Limb::init$(int32_t value) {
	this->value = value;
}

IntegerPolynomial$Limb::IntegerPolynomial$Limb() {
}

$Class* IntegerPolynomial$Limb::load$($String* name, bool initialize) {
	$loadClass(IntegerPolynomial$Limb, name, initialize, &_IntegerPolynomial$Limb_ClassInfo_, allocate$IntegerPolynomial$Limb);
	return class$;
}

$Class* IntegerPolynomial$Limb::class$ = nullptr;

				} // intpoly
			} // math
		} // util
	} // security
} // sun