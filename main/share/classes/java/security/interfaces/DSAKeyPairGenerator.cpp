#include <java/security/interfaces/DSAKeyPairGenerator.h>
#include <java/security/SecureRandom.h>
#include <java/security/interfaces/DSAParams.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;
using $DSAParams = ::java::security::interfaces::DSAParams;

namespace java {
	namespace security {
		namespace interfaces {

$Class* DSAKeyPairGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"initialize", "(Ljava/security/interfaces/DSAParams;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DSAKeyPairGenerator, initialize, void, $DSAParams*, $SecureRandom*), "java.security.InvalidParameterException"},
		{"initialize", "(IZLjava/security/SecureRandom;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DSAKeyPairGenerator, initialize, void, int32_t, bool, $SecureRandom*), "java.security.InvalidParameterException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.DSAKeyPairGenerator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DSAKeyPairGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSAKeyPairGenerator);
	});
	return class$;
}

$Class* DSAKeyPairGenerator::class$ = nullptr;

		} // interfaces
	} // security
} // java