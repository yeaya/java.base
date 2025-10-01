#include <javax/crypto/spec/RC2ParameterSpec.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _RC2ParameterSpec_FieldInfo_[] = {
	{"iv", "[B", nullptr, $PRIVATE, $field(RC2ParameterSpec, iv)},
	{"effectiveKeyBits", "I", nullptr, $PRIVATE, $field(RC2ParameterSpec, effectiveKeyBits)},
	{}
};

$MethodInfo _RC2ParameterSpec_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(RC2ParameterSpec::*)(int32_t)>(&RC2ParameterSpec::init$))},
	{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(static_cast<void(RC2ParameterSpec::*)(int32_t,$bytes*)>(&RC2ParameterSpec::init$))},
	{"<init>", "(I[BI)V", nullptr, $PUBLIC, $method(static_cast<void(RC2ParameterSpec::*)(int32_t,$bytes*,int32_t)>(&RC2ParameterSpec::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getEffectiveKeyBits", "()I", nullptr, $PUBLIC},
	{"getIV", "()[B", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RC2ParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.RC2ParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_RC2ParameterSpec_FieldInfo_,
	_RC2ParameterSpec_MethodInfo_
};

$Object* allocate$RC2ParameterSpec($Class* clazz) {
	return $of($alloc(RC2ParameterSpec));
}

void RC2ParameterSpec::init$(int32_t effectiveKeyBits) {
	$set(this, iv, nullptr);
	this->effectiveKeyBits = effectiveKeyBits;
}

void RC2ParameterSpec::init$(int32_t effectiveKeyBits, $bytes* iv) {
	RC2ParameterSpec::init$(effectiveKeyBits, iv, 0);
}

void RC2ParameterSpec::init$(int32_t effectiveKeyBits, $bytes* iv, int32_t offset) {
	$set(this, iv, nullptr);
	this->effectiveKeyBits = effectiveKeyBits;
	if (iv == nullptr) {
		$throwNew($IllegalArgumentException, "IV missing"_s);
	}
	int32_t blockSize = 8;
	if ($nc(iv)->length - offset < blockSize) {
		$throwNew($IllegalArgumentException, "IV too short"_s);
	}
	$set(this, iv, $new($bytes, blockSize));
	$System::arraycopy(iv, offset, this->iv, 0, blockSize);
}

int32_t RC2ParameterSpec::getEffectiveKeyBits() {
	return this->effectiveKeyBits;
}

$bytes* RC2ParameterSpec::getIV() {
	return (this->iv == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(this->iv)->clone()));
}

bool RC2ParameterSpec::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(RC2ParameterSpec, obj))) {
		return false;
	}
	$var(RC2ParameterSpec, other, $cast(RC2ParameterSpec, obj));
	return ((this->effectiveKeyBits == $nc(other)->effectiveKeyBits) && $Arrays::equals(this->iv, other->iv));
}

int32_t RC2ParameterSpec::hashCode() {
	int32_t retval = 0;
	if (this->iv != nullptr) {
		for (int32_t i = 1; i < $nc(this->iv)->length; ++i) {
			retval += $nc(this->iv)->get(i) * i;
		}
	}
	return (retval += this->effectiveKeyBits);
}

RC2ParameterSpec::RC2ParameterSpec() {
}

$Class* RC2ParameterSpec::load$($String* name, bool initialize) {
	$loadClass(RC2ParameterSpec, name, initialize, &_RC2ParameterSpec_ClassInfo_, allocate$RC2ParameterSpec);
	return class$;
}

$Class* RC2ParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax