#include <sun/security/ssl/CertSignAlgsExtension$CHCertSignatureSchemesUpdate.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertSignAlgsExtension.h>
#include <sun/security/ssl/ClientAuthType.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <jcpp.h>

#undef CERTIFICATE
#undef CERTIFICATE_REQUEST
#undef CERTIFICATE_VERIFY
#undef CH_SIGNATURE_ALGORITHMS_CERT
#undef CLIENT_AUTH_NONE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ClientAuthType = ::sun::security::ssl::ClientAuthType;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

void CertSignAlgsExtension$CHCertSignatureSchemesUpdate::init$() {
}

void CertSignAlgsExtension$CHCertSignatureSchemesUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, spec, $cast($SignatureAlgorithmsExtension$SignatureSchemesSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_SIGNATURE_ALGORITHMS_CERT)));
	if (spec == nullptr) {
		return;
	}
	$var($List, schemes, $SignatureScheme::getSupportedAlgorithms(shc->sslConfig, shc->algorithmConstraints, shc->negotiatedProtocol, $nc(spec)->signatureSchemes));
	$set(shc, peerRequestedCertSignSchemes, schemes);
	$nc(shc->handshakeSession)->setPeerSupportedSignatureAlgorithms(schemes);
	if (!shc->isResumption && $nc(shc->negotiatedProtocol)->useTLS13PlusSpec()) {
		$init($ClientAuthType);
		if ($nc(shc->sslConfig)->clientAuthType != $ClientAuthType::CLIENT_AUTH_NONE) {
			$init($SSLHandshake);
			$nc(shc->handshakeProducers)->putIfAbsent($($Byte::valueOf($SSLHandshake::CERTIFICATE_REQUEST->id)), $SSLHandshake::CERTIFICATE_REQUEST);
		}
		$init($SSLHandshake);
		$nc(shc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)), $SSLHandshake::CERTIFICATE);
		shc->handshakeProducers->putIfAbsent($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)), $SSLHandshake::CERTIFICATE_VERIFY);
	}
}

CertSignAlgsExtension$CHCertSignatureSchemesUpdate::CertSignAlgsExtension$CHCertSignatureSchemesUpdate() {
}

$Class* CertSignAlgsExtension$CHCertSignatureSchemesUpdate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertSignAlgsExtension$CHCertSignatureSchemesUpdate, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(CertSignAlgsExtension$CHCertSignatureSchemesUpdate, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesUpdate", "sun.security.ssl.CertSignAlgsExtension", "CHCertSignatureSchemesUpdate", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesUpdate",
		"java.lang.Object",
		"sun.security.ssl.HandshakeConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.CertSignAlgsExtension"
	};
	$loadClass(CertSignAlgsExtension$CHCertSignatureSchemesUpdate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertSignAlgsExtension$CHCertSignatureSchemesUpdate);
	});
	return class$;
}

$Class* CertSignAlgsExtension$CHCertSignatureSchemesUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun