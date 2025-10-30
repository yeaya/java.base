#include <java/security/interfaces/ECPrivateKey.h>

#include <java/math/BigInteger.h>
#include <java/security/PrivateKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $PrivateKey = ::java::security::PrivateKey;
using $ECKey = ::java::security::interfaces::ECKey;

namespace java {
	namespace security {
		namespace interfaces {

$CompoundAttribute _ECPrivateKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ECPrivateKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(ECPrivateKey, serialVersionUID), _ECPrivateKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _ECPrivateKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getS", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ECPrivateKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.ECPrivateKey",
	nullptr,
	"java.security.PrivateKey,java.security.interfaces.ECKey",
	_ECPrivateKey_FieldInfo_,
	_ECPrivateKey_MethodInfo_
};

$Object* allocate$ECPrivateKey($Class* clazz) {
	return $of($alloc(ECPrivateKey));
}

int32_t ECPrivateKey::hashCode() {
	 return this->$PrivateKey::hashCode();
}

bool ECPrivateKey::equals(Object$* obj) {
	 return this->$PrivateKey::equals(obj);
}

$Object* ECPrivateKey::clone() {
	 return this->$PrivateKey::clone();
}

$String* ECPrivateKey::toString() {
	 return this->$PrivateKey::toString();
}

void ECPrivateKey::finalize() {
	this->$PrivateKey::finalize();
}

$Class* ECPrivateKey::load$($String* name, bool initialize) {
	$loadClass(ECPrivateKey, name, initialize, &_ECPrivateKey_ClassInfo_, allocate$ECPrivateKey);
	return class$;
}

$Class* ECPrivateKey::class$ = nullptr;

		} // interfaces
	} // security
} // java