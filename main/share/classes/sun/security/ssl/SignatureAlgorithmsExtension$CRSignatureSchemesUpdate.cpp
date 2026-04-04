#include <sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesUpdate.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CR_SIGNATURE_ALGORITHMS
#undef CR_SIGNATURE_ALGORITHMS_CERT
#undef HANDSHAKE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

void SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::init$() {
}

void SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, spec, $cast($SignatureAlgorithmsExtension$SignatureSchemesSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CR_SIGNATURE_ALGORITHMS)));
	if (spec == nullptr) {
		return;
	}
	$var($List, sss, $SignatureScheme::getSupportedAlgorithms(chc->sslConfig, chc->algorithmConstraints, chc->negotiatedProtocol, $nc(spec)->signatureSchemes));
	if (sss == nullptr || sss->isEmpty()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No supported signature algorithm"_s)));
	}
	$set(chc, peerRequestedSignatureSchemes, sss);
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, certSpec, $cast($SignatureAlgorithmsExtension$SignatureSchemesSpec, chc->handshakeExtensions->get($SSLExtension::CR_SIGNATURE_ALGORITHMS_CERT)));
	if (certSpec == nullptr) {
		$set(chc, peerRequestedCertSignSchemes, sss);
		$nc(chc->handshakeSession)->setPeerSupportedSignatureAlgorithms(sss);
	}
}

SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::SignatureAlgorithmsExtension$CRSignatureSchemesUpdate() {
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SignatureAlgorithmsExtension$CRSignatureSchemesUpdate, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(SignatureAlgorithmsExtension$CRSignatureSchemesUpdate, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesUpdate", "sun.security.ssl.SignatureAlgorithmsExtension", "CRSignatureSchemesUpdate", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesUpdate",
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
		"sun.security.ssl.SignatureAlgorithmsExtension"
	};
	$loadClass(SignatureAlgorithmsExtension$CRSignatureSchemesUpdate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureAlgorithmsExtension$CRSignatureSchemesUpdate);
	});
	return class$;
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun