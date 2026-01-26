#include <java/security/interfaces/ECPublicKey.h>

#include <java/security/PublicKey.h>
#include <java/security/spec/ECPoint.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $ECPoint = ::java::security::spec::ECPoint;

namespace java {
	namespace security {
		namespace interfaces {

$CompoundAttribute _ECPublicKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ECPublicKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(ECPublicKey, serialVersionUID), _ECPublicKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _ECPublicKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getW", "()Ljava/security/spec/ECPoint;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ECPublicKey, getW, $ECPoint*)},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ECPublicKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.ECPublicKey",
	nullptr,
	"java.security.PublicKey,java.security.interfaces.ECKey",
	_ECPublicKey_FieldInfo_,
	_ECPublicKey_MethodInfo_
};

$Object* allocate$ECPublicKey($Class* clazz) {
	return $of($alloc(ECPublicKey));
}

int32_t ECPublicKey::hashCode() {
	 return this->$PublicKey::hashCode();
}

bool ECPublicKey::equals(Object$* obj) {
	 return this->$PublicKey::equals(obj);
}

$Object* ECPublicKey::clone() {
	 return this->$PublicKey::clone();
}

$String* ECPublicKey::toString() {
	 return this->$PublicKey::toString();
}

void ECPublicKey::finalize() {
	this->$PublicKey::finalize();
}

$Class* ECPublicKey::load$($String* name, bool initialize) {
	$loadClass(ECPublicKey, name, initialize, &_ECPublicKey_ClassInfo_, allocate$ECPublicKey);
	return class$;
}

$Class* ECPublicKey::class$ = nullptr;

		} // interfaces
	} // security
} // java