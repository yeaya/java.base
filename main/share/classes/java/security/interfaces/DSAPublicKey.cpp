#include <java/security/interfaces/DSAPublicKey.h>

#include <java/math/BigInteger.h>
#include <java/security/interfaces/DSAKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $PublicKey = ::java::security::PublicKey;
using $DSAKey = ::java::security::interfaces::DSAKey;

namespace java {
	namespace security {
		namespace interfaces {

$CompoundAttribute _DSAPublicKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _DSAPublicKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(DSAPublicKey, serialVersionUID), _DSAPublicKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _DSAPublicKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getY", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DSAPublicKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.DSAPublicKey",
	nullptr,
	"java.security.interfaces.DSAKey,java.security.PublicKey",
	_DSAPublicKey_FieldInfo_,
	_DSAPublicKey_MethodInfo_
};

$Object* allocate$DSAPublicKey($Class* clazz) {
	return $of($alloc(DSAPublicKey));
}

int32_t DSAPublicKey::hashCode() {
	 return this->$DSAKey::hashCode();
}

bool DSAPublicKey::equals(Object$* obj) {
	 return this->$DSAKey::equals(obj);
}

$Object* DSAPublicKey::clone() {
	 return this->$DSAKey::clone();
}

$String* DSAPublicKey::toString() {
	 return this->$DSAKey::toString();
}

void DSAPublicKey::finalize() {
	this->$DSAKey::finalize();
}

$Class* DSAPublicKey::load$($String* name, bool initialize) {
	$loadClass(DSAPublicKey, name, initialize, &_DSAPublicKey_ClassInfo_, allocate$DSAPublicKey);
	return class$;
}

$Class* DSAPublicKey::class$ = nullptr;

		} // interfaces
	} // security
} // java