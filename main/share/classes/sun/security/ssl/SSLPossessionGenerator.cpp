#include <sun/security/ssl/SSLPossessionGenerator.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLPossession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLPossession = ::sun::security::ssl::SSLPossession;

namespace sun {
	namespace security {
		namespace ssl {

$Class* SSLPossessionGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createPossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLPossessionGenerator, createPossession, $SSLPossession*, $HandshakeContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLPossessionGenerator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLPossessionGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLPossessionGenerator);
	});
	return class$;
}

$Class* SSLPossessionGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun