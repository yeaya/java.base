#include <sun/security/rsa/RSAKeyPairGenerator$Legacy.h>
#include <sun/security/rsa/RSAKeyPairGenerator.h>
#include <sun/security/rsa/RSAUtil$KeyType.h>
#include <sun/security/util/SecurityProviderConstants.h>
#include <jcpp.h>

#undef DEF_RSA_KEY_SIZE
#undef RSA

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSAKeyPairGenerator = ::sun::security::rsa::RSAKeyPairGenerator;
using $RSAUtil$KeyType = ::sun::security::rsa::RSAUtil$KeyType;
using $SecurityProviderConstants = ::sun::security::util::SecurityProviderConstants;

namespace sun {
	namespace security {
		namespace rsa {

void RSAKeyPairGenerator$Legacy::init$() {
	$init($RSAUtil$KeyType);
	$init($SecurityProviderConstants);
	$RSAKeyPairGenerator::init$($RSAUtil$KeyType::RSA, $SecurityProviderConstants::DEF_RSA_KEY_SIZE);
}

RSAKeyPairGenerator$Legacy::RSAKeyPairGenerator$Legacy() {
}

$Class* RSAKeyPairGenerator$Legacy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RSAKeyPairGenerator$Legacy, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.RSAKeyPairGenerator$Legacy", "sun.security.rsa.RSAKeyPairGenerator", "Legacy", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.rsa.RSAKeyPairGenerator$Legacy",
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
	$loadClass(RSAKeyPairGenerator$Legacy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSAKeyPairGenerator$Legacy);
	});
	return class$;
}

$Class* RSAKeyPairGenerator$Legacy::class$ = nullptr;

		} // rsa
	} // security
} // sun