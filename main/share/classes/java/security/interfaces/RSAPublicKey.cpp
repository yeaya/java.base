#include <java/security/interfaces/RSAPublicKey.h>

#include <java/math/BigInteger.h>
#include <java/security/PublicKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $PublicKey = ::java::security::PublicKey;
using $RSAKey = ::java::security::interfaces::RSAKey;

namespace java {
	namespace security {
		namespace interfaces {

$CompoundAttribute _RSAPublicKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _RSAPublicKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(RSAPublicKey, serialVersionUID), _RSAPublicKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _RSAPublicKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RSAPublicKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.RSAPublicKey",
	nullptr,
	"java.security.PublicKey,java.security.interfaces.RSAKey",
	_RSAPublicKey_FieldInfo_,
	_RSAPublicKey_MethodInfo_
};

$Object* allocate$RSAPublicKey($Class* clazz) {
	return $of($alloc(RSAPublicKey));
}

int32_t RSAPublicKey::hashCode() {
	 return this->$PublicKey::hashCode();
}

bool RSAPublicKey::equals(Object$* obj) {
	 return this->$PublicKey::equals(obj);
}

$Object* RSAPublicKey::clone() {
	 return this->$PublicKey::clone();
}

$String* RSAPublicKey::toString() {
	 return this->$PublicKey::toString();
}

void RSAPublicKey::finalize() {
	this->$PublicKey::finalize();
}

$Class* RSAPublicKey::load$($String* name, bool initialize) {
	$loadClass(RSAPublicKey, name, initialize, &_RSAPublicKey_ClassInfo_, allocate$RSAPublicKey);
	return class$;
}

$Class* RSAPublicKey::class$ = nullptr;

		} // interfaces
	} // security
} // java