#include <sun/security/ssl/CertSignAlgsExtension$CRCertSignatureSchemesUpdate.h>

#include <java/security/AlgorithmConstraints.h>
#include <java/util/Collection.h>
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
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertSignAlgsExtension$CRCertSignatureSchemesUpdate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertSignAlgsExtension$CRCertSignatureSchemesUpdate::*)()>(&CertSignAlgsExtension$CRCertSignatureSchemesUpdate::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertSignAlgsExtension$CRCertSignatureSchemesUpdate_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesUpdate", "sun.security.ssl.CertSignAlgsExtension", "CRCertSignatureSchemesUpdate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertSignAlgsExtension$CRCertSignatureSchemesUpdate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesUpdate",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_CertSignAlgsExtension$CRCertSignatureSchemesUpdate_MethodInfo_,
	nullptr,
	nullptr,
	_CertSignAlgsExtension$CRCertSignatureSchemesUpdate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertSignAlgsExtension"
};

$Object* allocate$CertSignAlgsExtension$CRCertSignatureSchemesUpdate($Class* clazz) {
	return $of($alloc(CertSignAlgsExtension$CRCertSignatureSchemesUpdate));
}

void CertSignAlgsExtension$CRCertSignatureSchemesUpdate::init$() {
}

void CertSignAlgsExtension$CRCertSignatureSchemesUpdate::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(CertSignAlgsExtension$CRCertSignatureSchemesUpdate, name, initialize, &_CertSignAlgsExtension$CRCertSignatureSchemesUpdate_ClassInfo_, allocate$CertSignAlgsExtension$CRCertSignatureSchemesUpdate);
	return class$;
}

$Class* CertSignAlgsExtension$CRCertSignatureSchemesUpdate::class$ = nullptr;

		} // ssl
	} // security
} // sun