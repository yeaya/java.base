#include <sun/security/ssl/CertSignAlgsExtension$CHCertSignatureSchemesUpdate.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/Collection.h>
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
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $CertSignAlgsExtension = ::sun::security::ssl::CertSignAlgsExtension;
using $ClientAuthType = ::sun::security::ssl::ClientAuthType;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeConsumer = ::sun::security::ssl::HandshakeConsumer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertSignAlgsExtension$CHCertSignatureSchemesUpdate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertSignAlgsExtension$CHCertSignatureSchemesUpdate::*)()>(&CertSignAlgsExtension$CHCertSignatureSchemesUpdate::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertSignAlgsExtension$CHCertSignatureSchemesUpdate_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesUpdate", "sun.security.ssl.CertSignAlgsExtension", "CHCertSignatureSchemesUpdate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertSignAlgsExtension$CHCertSignatureSchemesUpdate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesUpdate",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_CertSignAlgsExtension$CHCertSignatureSchemesUpdate_MethodInfo_,
	nullptr,
	nullptr,
	_CertSignAlgsExtension$CHCertSignatureSchemesUpdate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertSignAlgsExtension"
};

$Object* allocate$CertSignAlgsExtension$CHCertSignatureSchemesUpdate($Class* clazz) {
	return $of($alloc(CertSignAlgsExtension$CHCertSignatureSchemesUpdate));
}

void CertSignAlgsExtension$CHCertSignatureSchemesUpdate::init$() {
}

void CertSignAlgsExtension$CHCertSignatureSchemesUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
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
		$nc(shc->handshakeProducers)->putIfAbsent($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)), $SSLHandshake::CERTIFICATE_VERIFY);
	}
}

CertSignAlgsExtension$CHCertSignatureSchemesUpdate::CertSignAlgsExtension$CHCertSignatureSchemesUpdate() {
}

$Class* CertSignAlgsExtension$CHCertSignatureSchemesUpdate::load$($String* name, bool initialize) {
	$loadClass(CertSignAlgsExtension$CHCertSignatureSchemesUpdate, name, initialize, &_CertSignAlgsExtension$CHCertSignatureSchemesUpdate_ClassInfo_, allocate$CertSignAlgsExtension$CHCertSignatureSchemesUpdate);
	return class$;
}

$Class* CertSignAlgsExtension$CHCertSignatureSchemesUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun