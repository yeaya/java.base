#include <sun/security/ssl/CertSignAlgsExtension$CRCertSignatureSchemesUpdate.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertSignAlgsExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <jcpp.h>

#undef CR_SIGNATURE_ALGORITHMS_CERT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

void CertSignAlgsExtension$CRCertSignatureSchemesUpdate::init$() {
}

void CertSignAlgsExtension$CRCertSignatureSchemesUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, spec, $cast($SignatureAlgorithmsExtension$SignatureSchemesSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CR_SIGNATURE_ALGORITHMS_CERT)));
	if (spec == nullptr) {
		return;
	}
	$var($List, schemes, $SignatureScheme::getSupportedAlgorithms(chc->sslConfig, chc->algorithmConstraints, chc->negotiatedProtocol, $nc(spec)->signatureSchemes));
	$set(chc, peerRequestedCertSignSchemes, schemes);
	$nc(chc->handshakeSession)->setPeerSupportedSignatureAlgorithms(schemes);
}

CertSignAlgsExtension$CRCertSignatureSchemesUpdate::CertSignAlgsExtension$CRCertSignatureSchemesUpdate() {
}

$Class* CertSignAlgsExtension$CRCertSignatureSchemesUpdate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertSignAlgsExtension$CRCertSignatureSchemesUpdate, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(CertSignAlgsExtension$CRCertSignatureSchemesUpdate, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesUpdate", "sun.security.ssl.CertSignAlgsExtension", "CRCertSignatureSchemesUpdate", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesUpdate",
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
	$loadClass(CertSignAlgsExtension$CRCertSignatureSchemesUpdate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertSignAlgsExtension$CRCertSignatureSchemesUpdate);
	});
	return class$;
}

$Class* CertSignAlgsExtension$CRCertSignatureSchemesUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun