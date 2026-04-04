#include <java/security/KeyStore$LoadStoreParameter.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;

namespace java {
	namespace security {

$Class* KeyStore$LoadStoreParameter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getProtectionParameter", "()Ljava/security/KeyStore$ProtectionParameter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyStore$LoadStoreParameter, getProtectionParameter, $KeyStore$ProtectionParameter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$LoadStoreParameter", "java.security.KeyStore", "LoadStoreParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.KeyStore$LoadStoreParameter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.KeyStore"
	};
	$loadClass(KeyStore$LoadStoreParameter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$LoadStoreParameter);
	});
	return class$;
}

$Class* KeyStore$LoadStoreParameter::class$ = nullptr;

	} // security
} // java