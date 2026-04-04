#include <sun/security/ssl/Finished$S30VerifyDataGenerator.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/Finished.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;

namespace sun {
	namespace security {
		namespace ssl {

void Finished$S30VerifyDataGenerator::init$() {
}

$bytes* Finished$S30VerifyDataGenerator::createVerifyData($HandshakeContext* context, bool isValidation) {
	$useLocalObjectStack();
	$var($HandshakeHash, handshakeHash, $nc(context)->handshakeHash);
	$var($SecretKey, masterSecretKey, $nc(context->handshakeSession)->getMasterSecret());
	bool useClientLabel = ($nc(context->sslConfig)->isClientMode && !isValidation) || (!context->sslConfig->isClientMode && isValidation);
	return $nc(handshakeHash)->digest(useClientLabel, masterSecretKey);
}

Finished$S30VerifyDataGenerator::Finished$S30VerifyDataGenerator() {
}

$Class* Finished$S30VerifyDataGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Finished$S30VerifyDataGenerator, init$, void)},
		{"createVerifyData", "(Lsun/security/ssl/HandshakeContext;Z)[B", nullptr, $PUBLIC, $virtualMethod(Finished$S30VerifyDataGenerator, createVerifyData, $bytes*, $HandshakeContext*, bool), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Finished$S30VerifyDataGenerator", "sun.security.ssl.Finished", "S30VerifyDataGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.Finished$VerifyDataGenerator", "sun.security.ssl.Finished", "VerifyDataGenerator", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.Finished$S30VerifyDataGenerator",
		"java.lang.Object",
		"sun.security.ssl.Finished$VerifyDataGenerator",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.Finished"
	};
	$loadClass(Finished$S30VerifyDataGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Finished$S30VerifyDataGenerator);
	});
	return class$;
}

$Class* Finished$S30VerifyDataGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun