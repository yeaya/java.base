#include <sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesUpdate.h>

#include <java/security/AlgorithmConstraints.h>
#include <java/util/Collection.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SignatureAlgorithmsExtension = ::sun::security::ssl::SignatureAlgorithmsExtension;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SignatureAlgorithmsExtension$CRSignatureSchemesUpdate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::*)()>(&SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SignatureAlgorithmsExtension$CRSignatureSchemesUpdate_InnerClassesInfo_[] = {
	{"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesUpdate", "sun.security.ssl.SignatureAlgorithmsExtension", "CRSignatureSchemesUpdate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SignatureAlgorithmsExtension$CRSignatureSchemesUpdate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesUpdate",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_SignatureAlgorithmsExtension$CRSignatureSchemesUpdate_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureAlgorithmsExtension$CRSignatureSchemesUpdate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SignatureAlgorithmsExtension"
};

$Object* allocate$SignatureAlgorithmsExtension$CRSignatureSchemesUpdate($Class* clazz) {
	return $of($alloc(SignatureAlgorithmsExtension$CRSignatureSchemesUpdate));
}

void SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::init$() {
}

void SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, spec, $cast($SignatureAlgorithmsExtension$SignatureSchemesSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CR_SIGNATURE_ALGORITHMS)));
	if (spec == nullptr) {
		return;
	}
	$var($List, sss, $SignatureScheme::getSupportedAlgorithms(chc->sslConfig, chc->algorithmConstraints, chc->negotiatedProtocol, $nc(spec)->signatureSchemes));
	if (sss == nullptr || $nc(sss)->isEmpty()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No supported signature algorithm"_s)));
	}
	$set(chc, peerRequestedSignatureSchemes, sss);
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, certSpec, $cast($SignatureAlgorithmsExtension$SignatureSchemesSpec, $nc(chc->handshakeExtensions)->get($SSLExtension::CR_SIGNATURE_ALGORITHMS_CERT)));
	if (certSpec == nullptr) {
		$set(chc, peerRequestedCertSignSchemes, sss);
		$nc(chc->handshakeSession)->setPeerSupportedSignatureAlgorithms(sss);
	}
}

SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::SignatureAlgorithmsExtension$CRSignatureSchemesUpdate() {
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithmsExtension$CRSignatureSchemesUpdate, name, initialize, &_SignatureAlgorithmsExtension$CRSignatureSchemesUpdate_ClassInfo_, allocate$SignatureAlgorithmsExtension$CRSignatureSchemesUpdate);
	return class$;
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun