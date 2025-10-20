#include <java/security/spec/ECFieldF2m.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef ONE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ECField = ::java::security::spec::ECField;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _ECFieldF2m_FieldInfo_[] = {
	{"m", "I", nullptr, $PRIVATE, $field(ECFieldF2m, m)},
	{"ks", "[I", nullptr, $PRIVATE, $field(ECFieldF2m, ks)},
	{"rp", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(ECFieldF2m, rp)},
	{}
};

$MethodInfo _ECFieldF2m_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ECFieldF2m::*)(int32_t)>(&ECFieldF2m::init$))},
	{"<init>", "(ILjava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(ECFieldF2m::*)(int32_t,$BigInteger*)>(&ECFieldF2m::init$))},
	{"<init>", "(I[I)V", nullptr, $PUBLIC, $method(static_cast<void(ECFieldF2m::*)(int32_t,$ints*)>(&ECFieldF2m::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getFieldSize", "()I", nullptr, $PUBLIC},
	{"getM", "()I", nullptr, $PUBLIC},
	{"getMidTermsOfReductionPolynomial", "()[I", nullptr, $PUBLIC},
	{"getReductionPolynomial", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ECFieldF2m_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.ECFieldF2m",
	"java.lang.Object",
	"java.security.spec.ECField",
	_ECFieldF2m_FieldInfo_,
	_ECFieldF2m_MethodInfo_
};

$Object* allocate$ECFieldF2m($Class* clazz) {
	return $of($alloc(ECFieldF2m));
}

void ECFieldF2m::init$(int32_t m) {
	if (m <= 0) {
		$throwNew($IllegalArgumentException, "m is not positive"_s);
	}
	this->m = m;
	$set(this, ks, nullptr);
	$set(this, rp, nullptr);
}

void ECFieldF2m::init$(int32_t m, $BigInteger* rp) {
	$useLocalCurrentObjectStackCache();
	this->m = m;
	$set(this, rp, rp);
	if (m <= 0) {
		$throwNew($IllegalArgumentException, "m is not positive"_s);
	}
	int32_t bitCount = $nc(this->rp)->bitCount();
	bool var$0 = !$nc(this->rp)->testBit(0);
	if (var$0 || !$nc(this->rp)->testBit(m) || ((bitCount != 3) && (bitCount != 5))) {
		$throwNew($IllegalArgumentException, "rp does not represent a valid reduction polynomial"_s);
	}
	$var($BigInteger, temp, $nc($($nc(this->rp)->clearBit(0)))->clearBit(m));
	$set(this, ks, $new($ints, bitCount - 2));
	for (int32_t i = $nc(this->ks)->length - 1; i >= 0; --i) {
		int32_t index = $nc(temp)->getLowestSetBit();
		$nc(this->ks)->set(i, index);
		$assign(temp, temp->clearBit(index));
	}
}

void ECFieldF2m::init$(int32_t m, $ints* ks) {
	$useLocalCurrentObjectStackCache();
	this->m = m;
	$set(this, ks, $cast($ints, $nc(ks)->clone()));
	if (m <= 0) {
		$throwNew($IllegalArgumentException, "m is not positive"_s);
	}
	if (($nc(this->ks)->length != 1) && ($nc(this->ks)->length != 3)) {
		$throwNew($IllegalArgumentException, "length of ks is neither 1 nor 3"_s);
	}
	for (int32_t i = 0; i < $nc(this->ks)->length; ++i) {
		if (($nc(this->ks)->get(i) < 1) || ($nc(this->ks)->get(i) > m - 1)) {
			$throwNew($IllegalArgumentException, $$str({"ks["_s, $$str(i), "] is out of range"_s}));
		}
		if ((i != 0) && ($nc(this->ks)->get(i) >= $nc(this->ks)->get(i - 1))) {
			$throwNew($IllegalArgumentException, "values in ks are not in descending order"_s);
		}
	}
	$init($BigInteger);
	$set(this, rp, $BigInteger::ONE);
	$set(this, rp, $nc(this->rp)->setBit(m));
	for (int32_t j = 0; j < $nc(this->ks)->length; ++j) {
		$set(this, rp, $nc(this->rp)->setBit($nc(this->ks)->get(j)));
	}
}

int32_t ECFieldF2m::getFieldSize() {
	return this->m;
}

int32_t ECFieldF2m::getM() {
	return this->m;
}

$BigInteger* ECFieldF2m::getReductionPolynomial() {
	return this->rp;
}

$ints* ECFieldF2m::getMidTermsOfReductionPolynomial() {
	if (this->ks == nullptr) {
		return nullptr;
	} else {
		return $cast($ints, $nc(this->ks)->clone());
	}
}

bool ECFieldF2m::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(ECFieldF2m, other, nullptr);
	bool var$2 = $instanceOf(ECFieldF2m, obj);
	if (var$2) {
		$assign(other, $cast(ECFieldF2m, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && (this->m == $nc(other)->m);
	return var$0 && ($Arrays::equals(this->ks, other->ks));
}

int32_t ECFieldF2m::hashCode() {
	int32_t value = this->m << 5;
	value += (this->rp == nullptr ? 0 : $nc(this->rp)->hashCode());
	return value;
}

ECFieldF2m::ECFieldF2m() {
}

$Class* ECFieldF2m::load$($String* name, bool initialize) {
	$loadClass(ECFieldF2m, name, initialize, &_ECFieldF2m_ClassInfo_, allocate$ECFieldF2m);
	return class$;
}

$Class* ECFieldF2m::class$ = nullptr;

		} // spec
	} // security
} // java