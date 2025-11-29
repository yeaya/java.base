#include <javax/crypto/SecretKey.h>

#include <java/security/Key.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;

namespace javax {
	namespace crypto {

$CompoundAttribute _SecretKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _SecretKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(SecretKey, serialVersionUID), _SecretKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _SecretKey_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _SecretKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.crypto.SecretKey",
	nullptr,
	"java.security.Key,javax.security.auth.Destroyable",
	_SecretKey_FieldInfo_,
	_SecretKey_MethodInfo_
};

$Object* allocate$SecretKey($Class* clazz) {
	return $of($alloc(SecretKey));
}

int32_t SecretKey::hashCode() {
	 return this->$Key::hashCode();
}

bool SecretKey::equals(Object$* obj) {
	 return this->$Key::equals(obj);
}

$Object* SecretKey::clone() {
	 return this->$Key::clone();
}

$String* SecretKey::toString() {
	 return this->$Key::toString();
}

void SecretKey::finalize() {
	this->$Key::finalize();
}

$Class* SecretKey::load$($String* name, bool initialize) {
	$loadClass(SecretKey, name, initialize, &_SecretKey_ClassInfo_, allocate$SecretKey);
	return class$;
}

$Class* SecretKey::class$ = nullptr;

	} // crypto
} // javax