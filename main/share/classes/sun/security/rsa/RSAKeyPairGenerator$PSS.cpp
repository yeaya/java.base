#include <sun/security/rsa/RSAKeyPairGenerator$PSS.h>
#include <sun/security/rsa/RSAKeyPairGenerator.h>
#include <sun/security/rsa/RSAUtil$KeyType.h>
#include <sun/security/util/SecurityProviderConstants.h>
#include <jcpp.h>

#undef DEF_RSASSA_PSS_KEY_SIZE
#undef PSS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSAKeyPairGenerator = ::sun::security::rsa::RSAKeyPairGenerator;
using $RSAUtil$KeyType = ::sun::security::rsa::RSAUtil$KeyType;
using $SecurityProviderConstants = ::sun::security::util::SecurityProviderConstants;

namespace sun {
	namespace security {
		namespace rsa {

void RSAKeyPairGenerator$PSS::init$() {
	$init($RSAUtil$KeyType);
	$init($SecurityProviderConstants);
	$RSAKeyPairGenerator::init$($RSAUtil$KeyType::PSS, $SecurityProviderConstants::DEF_RSASSA_PSS_KEY_SIZE);
}

RSAKeyPairGenerator$PSS::RSAKeyPairGenerator$PSS() {
}

$Class* RSAKeyPairGenerator$PSS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RSAKeyPairGenerator$PSS, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.RSAKeyPairGenerator$PSS", "sun.security.rsa.RSAKeyPairGenerator", "PSS", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.rsa.RSAKeyPairGenerator$PSS",
		"sun.security.rsa.RSAKeyPairGenerator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.rsa.RSAKeyPairGenerator"
	};
	$loadClass(RSAKeyPairGenerator$PSS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSAKeyPairGenerator$PSS);
	});
	return class$;
}

$Class* RSAKeyPairGenerator$PSS::class$ = nullptr;

		} // rsa
	} // security
} // sun