#include <java/security/PrivateKey.h>

#include <java/security/Key.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $Destroyable = ::javax::security::auth::Destroyable;

namespace java {
	namespace security {

$CompoundAttribute _PrivateKey_FieldAnnotations_serialVersionUID[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _PrivateKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(PrivateKey, serialVersionUID), _PrivateKey_FieldAnnotations_serialVersionUID},
	{}
};

$MethodInfo _PrivateKey_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _PrivateKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.PrivateKey",
	nullptr,
	"java.security.Key,javax.security.auth.Destroyable",
	_PrivateKey_FieldInfo_,
	_PrivateKey_MethodInfo_
};

$Object* allocate$PrivateKey($Class* clazz) {
	return $of($alloc(PrivateKey));
}

int32_t PrivateKey::hashCode() {
	 return this->$Key::hashCode();
}

bool PrivateKey::equals(Object$* obj) {
	 return this->$Key::equals(obj);
}

$Object* PrivateKey::clone() {
	 return this->$Key::clone();
}

$String* PrivateKey::toString() {
	 return this->$Key::toString();
}

void PrivateKey::finalize() {
	this->$Key::finalize();
}

$Class* PrivateKey::load$($String* name, bool initialize) {
	$loadClass(PrivateKey, name, initialize, &_PrivateKey_ClassInfo_, allocate$PrivateKey);
	return class$;
}

$Class* PrivateKey::class$ = nullptr;

	} // security
} // java