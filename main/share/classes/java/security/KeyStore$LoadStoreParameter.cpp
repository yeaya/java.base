#include <java/security/KeyStore$LoadStoreParameter.h>

#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;

namespace java {
	namespace security {

$MethodInfo _KeyStore$LoadStoreParameter_MethodInfo_[] = {
	{"getProtectionParameter", "()Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _KeyStore$LoadStoreParameter_InnerClassesInfo_[] = {
	{"java.security.KeyStore$LoadStoreParameter", "java.security.KeyStore", "LoadStoreParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyStore$LoadStoreParameter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.KeyStore$LoadStoreParameter",
	nullptr,
	nullptr,
	nullptr,
	_KeyStore$LoadStoreParameter_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStore$LoadStoreParameter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$LoadStoreParameter($Class* clazz) {
	return $of($alloc(KeyStore$LoadStoreParameter));
}

$Class* KeyStore$LoadStoreParameter::load$($String* name, bool initialize) {
	$loadClass(KeyStore$LoadStoreParameter, name, initialize, &_KeyStore$LoadStoreParameter_ClassInfo_, allocate$KeyStore$LoadStoreParameter);
	return class$;
}

$Class* KeyStore$LoadStoreParameter::class$ = nullptr;

	} // security
} // java