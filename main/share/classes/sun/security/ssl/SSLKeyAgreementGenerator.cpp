#include <sun/security/ssl/SSLKeyAgreementGenerator.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

$Class* SSLKeyAgreementGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLKeyAgreementGenerator, createKeyDerivation, $SSLKeyDerivation*, $HandshakeContext*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLKeyAgreementGenerator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLKeyAgreementGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyAgreementGenerator);
	});
	return class$;
}

$Class* SSLKeyAgreementGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun