#include <java/security/interfaces/DSAPrivateKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/interfaces/DSAKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $PrivateKey = ::java::security::PrivateKey;
using $DSAKey = ::java::security::interfaces::DSAKey;

namespace java {
	namespace security {
		namespace interfaces {

$CompoundAttribute _DSAPrivateKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _DSAPrivateKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(DSAPrivateKey, serialVersionUID), _DSAPrivateKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _DSAPrivateKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getX", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DSAPrivateKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.DSAPrivateKey",
	nullptr,
	"java.security.interfaces.DSAKey,java.security.PrivateKey",
	_DSAPrivateKey_FieldInfo_,
	_DSAPrivateKey_MethodInfo_
};

$Object* allocate$DSAPrivateKey($Class* clazz) {
	return $of($alloc(DSAPrivateKey));
}

int32_t DSAPrivateKey::hashCode() {
	 return this->$DSAKey::hashCode();
}

bool DSAPrivateKey::equals(Object$* obj) {
	 return this->$DSAKey::equals(obj);
}

$Object* DSAPrivateKey::clone() {
	 return this->$DSAKey::clone();
}

$String* DSAPrivateKey::toString() {
	 return this->$DSAKey::toString();
}

void DSAPrivateKey::finalize() {
	this->$DSAKey::finalize();
}

$Class* DSAPrivateKey::load$($String* name, bool initialize) {
	$loadClass(DSAPrivateKey, name, initialize, &_DSAPrivateKey_ClassInfo_, allocate$DSAPrivateKey);
	return class$;
}

$Class* DSAPrivateKey::class$ = nullptr;

		} // interfaces
	} // security
} // java