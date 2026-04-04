#include <sun/security/ssl/SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <jcpp.h>

#undef DSA_SHA1
#undef ECDSA_SHA1
#undef RSA_PKCS1_SHA1

using $SignatureSchemeArray = $Array<::sun::security::ssl::SignatureScheme>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

void SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence::init$() {
}

void SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if ($nc($nc(shc)->negotiatedProtocol)->useTLS12PlusSpec()) {
		$init($SignatureScheme);
		$var($List, schemes, $Arrays::asList($$new($SignatureSchemeArray, {
			$SignatureScheme::RSA_PKCS1_SHA1,
			$SignatureScheme::DSA_SHA1,
			$SignatureScheme::ECDSA_SHA1
		})));
		$set(shc, peerRequestedSignatureSchemes, schemes);
		if (shc->peerRequestedCertSignSchemes == nullptr || shc->peerRequestedCertSignSchemes->isEmpty()) {
			$set(shc, peerRequestedCertSignSchemes, schemes);
		}
		$nc(shc->handshakeSession)->setUseDefaultPeerSignAlgs();
	}
}

SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence::SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence() {
}

$Class* SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence", "sun.security.ssl.SignatureAlgorithmsExtension", "CHSignatureSchemesOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence",
		"java.lang.Object",
		"sun.security.ssl.HandshakeAbsence",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SignatureAlgorithmsExtension"
	};
	$loadClass(SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence);
	});
	return class$;
}

$Class* SignatureAlgorithmsExtension$CHSignatureSchemesOnTradeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun