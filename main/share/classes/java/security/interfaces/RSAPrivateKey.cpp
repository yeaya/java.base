#include <java/security/interfaces/RSAPrivateKey.h>

#include <java/math/BigInteger.h>
#include <java/security/PrivateKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;

namespace java {
	namespace security {
		namespace interfaces {

$CompoundAttribute _RSAPrivateKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _RSAPrivateKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(RSAPrivateKey, serialVersionUID), _RSAPrivateKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _RSAPrivateKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getPrivateExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RSAPrivateKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.RSAPrivateKey",
	nullptr,
	"java.security.PrivateKey,java.security.interfaces.RSAKey",
	_RSAPrivateKey_FieldInfo_,
	_RSAPrivateKey_MethodInfo_
};

$Object* allocate$RSAPrivateKey($Class* clazz) {
	return $of($alloc(RSAPrivateKey));
}

int32_t RSAPrivateKey::hashCode() {
	 return this->$PrivateKey::hashCode();
}

bool RSAPrivateKey::equals(Object$* obj) {
	 return this->$PrivateKey::equals(obj);
}

$Object* RSAPrivateKey::clone() {
	 return this->$PrivateKey::clone();
}

$String* RSAPrivateKey::toString() {
	 return this->$PrivateKey::toString();
}

void RSAPrivateKey::finalize() {
	this->$PrivateKey::finalize();
}

$Class* RSAPrivateKey::load$($String* name, bool initialize) {
	$loadClass(RSAPrivateKey, name, initialize, &_RSAPrivateKey_ClassInfo_, allocate$RSAPrivateKey);
	return class$;
}

$Class* RSAPrivateKey::class$ = nullptr;

		} // interfaces
	} // security
} // java