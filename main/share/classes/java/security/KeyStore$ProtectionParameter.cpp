#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace java {
	namespace security {

$Class* KeyStore$ProtectionParameter::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$ProtectionParameter", "java.security.KeyStore", "ProtectionParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.KeyStore$ProtectionParameter",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.KeyStore"
	};
	$loadClass(KeyStore$ProtectionParameter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$ProtectionParameter);
	});
	return class$;
}

$Class* KeyStore$ProtectionParameter::class$ = nullptr;

	} // security
} // java