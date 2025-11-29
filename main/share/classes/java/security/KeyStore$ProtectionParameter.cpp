#include <java/security/KeyStore$ProtectionParameter.h>

#include <java/security/KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace java {
	namespace security {

$InnerClassInfo _KeyStore$ProtectionParameter_InnerClassesInfo_[] = {
	{"java.security.KeyStore$ProtectionParameter", "java.security.KeyStore", "ProtectionParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyStore$ProtectionParameter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.KeyStore$ProtectionParameter",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_KeyStore$ProtectionParameter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$ProtectionParameter($Class* clazz) {
	return $of($alloc(KeyStore$ProtectionParameter));
}

$Class* KeyStore$ProtectionParameter::load$($String* name, bool initialize) {
	$loadClass(KeyStore$ProtectionParameter, name, initialize, &_KeyStore$ProtectionParameter_ClassInfo_, allocate$KeyStore$ProtectionParameter);
	return class$;
}

$Class* KeyStore$ProtectionParameter::class$ = nullptr;

	} // security
} // java