#include <java/security/KeyStore$SimpleLoadStoreParameter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $KeyStore$LoadStoreParameter = ::java::security::KeyStore$LoadStoreParameter;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;

namespace java {
	namespace security {

$FieldInfo _KeyStore$SimpleLoadStoreParameter_FieldInfo_[] = {
	{"protection", "Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$SimpleLoadStoreParameter, protection)},
	{}
};

$MethodInfo _KeyStore$SimpleLoadStoreParameter_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStore$ProtectionParameter;)V", nullptr, 0, $method(static_cast<void(KeyStore$SimpleLoadStoreParameter::*)($KeyStore$ProtectionParameter*)>(&KeyStore$SimpleLoadStoreParameter::init$))},
	{"getProtectionParameter", "()Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyStore$SimpleLoadStoreParameter_InnerClassesInfo_[] = {
	{"java.security.KeyStore$SimpleLoadStoreParameter", "java.security.KeyStore", "SimpleLoadStoreParameter", $STATIC},
	{"java.security.KeyStore$LoadStoreParameter", "java.security.KeyStore", "LoadStoreParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyStore$SimpleLoadStoreParameter_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.KeyStore$SimpleLoadStoreParameter",
	"java.lang.Object",
	"java.security.KeyStore$LoadStoreParameter",
	_KeyStore$SimpleLoadStoreParameter_FieldInfo_,
	_KeyStore$SimpleLoadStoreParameter_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStore$SimpleLoadStoreParameter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$SimpleLoadStoreParameter($Class* clazz) {
	return $of($alloc(KeyStore$SimpleLoadStoreParameter));
}

void KeyStore$SimpleLoadStoreParameter::init$($KeyStore$ProtectionParameter* protection) {
	$set(this, protection, protection);
}

$KeyStore$ProtectionParameter* KeyStore$SimpleLoadStoreParameter::getProtectionParameter() {
	return this->protection;
}

KeyStore$SimpleLoadStoreParameter::KeyStore$SimpleLoadStoreParameter() {
}

$Class* KeyStore$SimpleLoadStoreParameter::load$($String* name, bool initialize) {
	$loadClass(KeyStore$SimpleLoadStoreParameter, name, initialize, &_KeyStore$SimpleLoadStoreParameter_ClassInfo_, allocate$KeyStore$SimpleLoadStoreParameter);
	return class$;
}

$Class* KeyStore$SimpleLoadStoreParameter::class$ = nullptr;

	} // security
} // java