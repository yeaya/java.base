#include <javax/crypto/CryptoPermission.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/CryptoPermissionCollection.h>
#include <javax/crypto/spec/PBEParameterSpec.h>
#include <javax/crypto/spec/RC2ParameterSpec.h>
#include <javax/crypto/spec/RC5ParameterSpec.h>
#include <jcpp.h>

#undef ALG_NAME_WILDCARD
#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $CryptoPermissionCollection = ::javax::crypto::CryptoPermissionCollection;
using $PBEParameterSpec = ::javax::crypto::spec::PBEParameterSpec;
using $RC2ParameterSpec = ::javax::crypto::spec::RC2ParameterSpec;
using $RC5ParameterSpec = ::javax::crypto::spec::RC5ParameterSpec;

namespace javax {
	namespace crypto {

$FieldInfo _CryptoPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CryptoPermission, serialVersionUID)},
	{"alg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CryptoPermission, alg)},
	{"maxKeySize", "I", nullptr, $PRIVATE, $field(CryptoPermission, maxKeySize)},
	{"exemptionMechanism", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CryptoPermission, exemptionMechanism)},
	{"algParamSpec", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE, $field(CryptoPermission, algParamSpec)},
	{"checkParam", "Z", nullptr, $PRIVATE, $field(CryptoPermission, checkParam)},
	{"ALG_NAME_WILDCARD", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CryptoPermission, ALG_NAME_WILDCARD)},
	{}
};

$MethodInfo _CryptoPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CryptoPermission::*)($String*)>(&CryptoPermission::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(CryptoPermission::*)($String*,int32_t)>(&CryptoPermission::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(CryptoPermission::*)($String*,int32_t,$AlgorithmParameterSpec*)>(&CryptoPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CryptoPermission::*)($String*,$String*)>(&CryptoPermission::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(CryptoPermission::*)($String*,int32_t,$String*)>(&CryptoPermission::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/security/spec/AlgorithmParameterSpec;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CryptoPermission::*)($String*,int32_t,$AlgorithmParameterSpec*,$String*)>(&CryptoPermission::init$))},
	{"equalObjects", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CryptoPermission::*)(Object$*,Object$*)>(&CryptoPermission::equalObjects))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getActions", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(CryptoPermission::*)()>(&CryptoPermission::getAlgorithm))},
	{"getAlgorithmParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $FINAL, $method(static_cast<$AlgorithmParameterSpec*(CryptoPermission::*)()>(&CryptoPermission::getAlgorithmParameterSpec))},
	{"getCheckParam", "()Z", nullptr, $FINAL, $method(static_cast<bool(CryptoPermission::*)()>(&CryptoPermission::getCheckParam))},
	{"getExemptionMechanism", "()Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(CryptoPermission::*)()>(&CryptoPermission::getExemptionMechanism))},
	{"getMaxKeySize", "()I", nullptr, $FINAL, $method(static_cast<int32_t(CryptoPermission::*)()>(&CryptoPermission::getMaxKeySize))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"impliesExemptionMechanism", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CryptoPermission::*)($String*)>(&CryptoPermission::impliesExemptionMechanism))},
	{"impliesParameterSpec", "(ZLjava/security/spec/AlgorithmParameterSpec;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CryptoPermission::*)(bool,$AlgorithmParameterSpec*)>(&CryptoPermission::impliesParameterSpec))},
	{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CryptoPermission_ClassInfo_ = {
	$ACC_SUPER,
	"javax.crypto.CryptoPermission",
	"java.security.Permission",
	nullptr,
	_CryptoPermission_FieldInfo_,
	_CryptoPermission_MethodInfo_
};

$Object* allocate$CryptoPermission($Class* clazz) {
	return $of($alloc(CryptoPermission));
}

$String* CryptoPermission::ALG_NAME_WILDCARD = nullptr;

void CryptoPermission::init$($String* alg) {
	$Permission::init$(nullptr);
	this->maxKeySize = $Integer::MAX_VALUE;
	$set(this, exemptionMechanism, nullptr);
	$set(this, algParamSpec, nullptr);
	this->checkParam = false;
	$set(this, alg, alg);
}

void CryptoPermission::init$($String* alg, int32_t maxKeySize) {
	$Permission::init$(nullptr);
	this->maxKeySize = $Integer::MAX_VALUE;
	$set(this, exemptionMechanism, nullptr);
	$set(this, algParamSpec, nullptr);
	this->checkParam = false;
	$set(this, alg, alg);
	this->maxKeySize = maxKeySize;
}

void CryptoPermission::init$($String* alg, int32_t maxKeySize, $AlgorithmParameterSpec* algParamSpec) {
	$Permission::init$(nullptr);
	this->maxKeySize = $Integer::MAX_VALUE;
	$set(this, exemptionMechanism, nullptr);
	$set(this, algParamSpec, nullptr);
	this->checkParam = false;
	$set(this, alg, alg);
	this->maxKeySize = maxKeySize;
	this->checkParam = true;
	$set(this, algParamSpec, algParamSpec);
}

void CryptoPermission::init$($String* alg, $String* exemptionMechanism) {
	$Permission::init$(nullptr);
	this->maxKeySize = $Integer::MAX_VALUE;
	$set(this, exemptionMechanism, nullptr);
	$set(this, algParamSpec, nullptr);
	this->checkParam = false;
	$set(this, alg, alg);
	$set(this, exemptionMechanism, exemptionMechanism);
}

void CryptoPermission::init$($String* alg, int32_t maxKeySize, $String* exemptionMechanism) {
	$Permission::init$(nullptr);
	this->maxKeySize = $Integer::MAX_VALUE;
	$set(this, exemptionMechanism, nullptr);
	$set(this, algParamSpec, nullptr);
	this->checkParam = false;
	$set(this, alg, alg);
	$set(this, exemptionMechanism, exemptionMechanism);
	this->maxKeySize = maxKeySize;
}

void CryptoPermission::init$($String* alg, int32_t maxKeySize, $AlgorithmParameterSpec* algParamSpec, $String* exemptionMechanism) {
	$Permission::init$(nullptr);
	this->maxKeySize = $Integer::MAX_VALUE;
	$set(this, exemptionMechanism, nullptr);
	$set(this, algParamSpec, nullptr);
	this->checkParam = false;
	$set(this, alg, alg);
	$set(this, exemptionMechanism, exemptionMechanism);
	this->maxKeySize = maxKeySize;
	this->checkParam = true;
	$set(this, algParamSpec, algParamSpec);
}

bool CryptoPermission::implies($Permission* p) {
	if (!($instanceOf(CryptoPermission, p))) {
		return false;
	}
	$var(CryptoPermission, cp, $cast(CryptoPermission, p));
	bool var$0 = (!$nc(this->alg)->equalsIgnoreCase($nc(cp)->alg));
	if (var$0 && (!$nc(this->alg)->equalsIgnoreCase(CryptoPermission::ALG_NAME_WILDCARD))) {
		return false;
	}
	if ($nc(cp)->maxKeySize <= this->maxKeySize) {
		if (!impliesParameterSpec(cp->checkParam, cp->algParamSpec)) {
			return false;
		}
		if (impliesExemptionMechanism(cp->exemptionMechanism)) {
			return true;
		}
	}
	return false;
}

bool CryptoPermission::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(CryptoPermission, obj))) {
		return false;
	}
	$var(CryptoPermission, that, $cast(CryptoPermission, obj));
	if (!($nc(this->alg)->equalsIgnoreCase($nc(that)->alg)) || (this->maxKeySize != $nc(that)->maxKeySize)) {
		return false;
	}
	if (this->checkParam != $nc(that)->checkParam) {
		return false;
	}
	bool var$0 = equalObjects(this->exemptionMechanism, $nc(that)->exemptionMechanism);
	return (var$0 && equalObjects(this->algParamSpec, $nc(that)->algParamSpec));
}

int32_t CryptoPermission::hashCode() {
	int32_t retval = $nc(this->alg)->hashCode();
	retval ^= this->maxKeySize;
	if (this->exemptionMechanism != nullptr) {
		retval ^= $nc(this->exemptionMechanism)->hashCode();
	}
	if (this->checkParam) {
		retval ^= 100;
	}
	if (this->algParamSpec != nullptr) {
		retval ^= $nc($of(this->algParamSpec))->hashCode();
	}
	return retval;
}

$String* CryptoPermission::getActions() {
	return nullptr;
}

$PermissionCollection* CryptoPermission::newPermissionCollection() {
	return $new($CryptoPermissionCollection);
}

$String* CryptoPermission::getAlgorithm() {
	return this->alg;
}

$String* CryptoPermission::getExemptionMechanism() {
	return this->exemptionMechanism;
}

int32_t CryptoPermission::getMaxKeySize() {
	return this->maxKeySize;
}

bool CryptoPermission::getCheckParam() {
	return this->checkParam;
}

$AlgorithmParameterSpec* CryptoPermission::getAlgorithmParameterSpec() {
	return this->algParamSpec;
}

$String* CryptoPermission::toString() {
	$var($StringBuilder, buf, $new($StringBuilder, 100));
	buf->append($$str({"(CryptoPermission "_s, this->alg, " "_s, $$str(this->maxKeySize)}));
	if (this->algParamSpec != nullptr) {
		if ($instanceOf($RC2ParameterSpec, this->algParamSpec)) {
			buf->append($$str({" , effective "_s, $$str($nc(($cast($RC2ParameterSpec, this->algParamSpec)))->getEffectiveKeyBits())}));
		} else if ($instanceOf($RC5ParameterSpec, this->algParamSpec)) {
			buf->append($$str({" , rounds "_s, $$str($nc(($cast($RC5ParameterSpec, this->algParamSpec)))->getRounds())}));
		}
	}
	if (this->exemptionMechanism != nullptr) {
		buf->append($$str({" "_s, this->exemptionMechanism}));
	}
	buf->append(")"_s);
	return buf->toString();
}

bool CryptoPermission::impliesExemptionMechanism($String* exemptionMechanism) {
	if (this->exemptionMechanism == nullptr) {
		return true;
	}
	if (exemptionMechanism == nullptr) {
		return false;
	}
	if ($nc(this->exemptionMechanism)->equals(exemptionMechanism)) {
		return true;
	}
	return false;
}

bool CryptoPermission::impliesParameterSpec(bool checkParam, $AlgorithmParameterSpec* algParamSpec) {
	if ((this->checkParam) && checkParam) {
		if (algParamSpec == nullptr) {
			return true;
		} else if (this->algParamSpec == nullptr) {
			return false;
		}
		if ($nc($of(this->algParamSpec))->getClass() != $nc($of(algParamSpec))->getClass()) {
			return false;
		}
		if ($instanceOf($RC2ParameterSpec, algParamSpec)) {
			int32_t var$0 = $nc(($cast($RC2ParameterSpec, algParamSpec)))->getEffectiveKeyBits();
			if (var$0 <= $nc((($cast($RC2ParameterSpec, this->algParamSpec))))->getEffectiveKeyBits()) {
				return true;
			}
		}
		if ($instanceOf($RC5ParameterSpec, algParamSpec)) {
			int32_t var$1 = $nc(($cast($RC5ParameterSpec, algParamSpec)))->getRounds();
			if (var$1 <= $nc(($cast($RC5ParameterSpec, this->algParamSpec)))->getRounds()) {
				return true;
			}
		}
		if ($instanceOf($PBEParameterSpec, algParamSpec)) {
			int32_t var$2 = $nc(($cast($PBEParameterSpec, algParamSpec)))->getIterationCount();
			if (var$2 <= $nc(($cast($PBEParameterSpec, this->algParamSpec)))->getIterationCount()) {
				return true;
			}
		}
		if ($nc($of(this->algParamSpec))->equals(algParamSpec)) {
			return true;
		}
		return false;
	} else if (this->checkParam) {
		return false;
	} else {
		return true;
	}
}

bool CryptoPermission::equalObjects(Object$* obj1, Object$* obj2) {
	if (obj1 == nullptr) {
		return (obj2 == nullptr ? true : false);
	}
	return $nc($of(obj1))->equals(obj2);
}

CryptoPermission::CryptoPermission() {
}

void clinit$CryptoPermission($Class* class$) {
	$assignStatic(CryptoPermission::ALG_NAME_WILDCARD, "*"_s);
}

$Class* CryptoPermission::load$($String* name, bool initialize) {
	$loadClass(CryptoPermission, name, initialize, &_CryptoPermission_ClassInfo_, clinit$CryptoPermission, allocate$CryptoPermission);
	return class$;
}

$Class* CryptoPermission::class$ = nullptr;

	} // crypto
} // javax