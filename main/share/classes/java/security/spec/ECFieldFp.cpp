#include <java/security/spec/ECFieldFp.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ECField = ::java::security::spec::ECField;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _ECFieldFp_FieldInfo_[] = {
	{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(ECFieldFp, p)},
	{}
};

$MethodInfo _ECFieldFp_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(ECFieldFp::*)($BigInteger*)>(&ECFieldFp::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getFieldSize", "()I", nullptr, $PUBLIC},
	{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ECFieldFp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.ECFieldFp",
	"java.lang.Object",
	"java.security.spec.ECField",
	_ECFieldFp_FieldInfo_,
	_ECFieldFp_MethodInfo_
};

$Object* allocate$ECFieldFp($Class* clazz) {
	return $of($alloc(ECFieldFp));
}

void ECFieldFp::init$($BigInteger* p) {
	if ($nc(p)->signum() != 1) {
		$throwNew($IllegalArgumentException, "p is not positive"_s);
	}
	$set(this, p, p);
}

int32_t ECFieldFp::getFieldSize() {
	return $nc(this->p)->bitLength();
}

$BigInteger* ECFieldFp::getP() {
	return this->p;
}

bool ECFieldFp::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(ECFieldFp, other, nullptr);
	bool var$1 = $instanceOf(ECFieldFp, obj);
	if (var$1) {
		$assign(other, $cast(ECFieldFp, obj));
		var$1 = true;
	}
	bool var$0 = var$1;
	return var$0 && $nc(this->p)->equals($nc(other)->p);
}

int32_t ECFieldFp::hashCode() {
	return $nc(this->p)->hashCode();
}

ECFieldFp::ECFieldFp() {
}

$Class* ECFieldFp::load$($String* name, bool initialize) {
	$loadClass(ECFieldFp, name, initialize, &_ECFieldFp_ClassInfo_, allocate$ECFieldFp);
	return class$;
}

$Class* ECFieldFp::class$ = nullptr;

		} // spec
	} // security
} // java