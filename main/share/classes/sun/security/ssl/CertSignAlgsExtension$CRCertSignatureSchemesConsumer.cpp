#include <sun/security/ssl/CertSignAlgsExtension$CRCertSignatureSchemesConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertSignAlgsExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <jcpp.h>

#undef CH_SIGNATURE_ALGORITHMS_CERT
#undef CR_SIGNATURE_ALGORITHMS_CERT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $CertSignAlgsExtension = ::sun::security::ssl::CertSignAlgsExtension;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertSignAlgsExtension$CRCertSignatureSchemesConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertSignAlgsExtension$CRCertSignatureSchemesConsumer::*)()>(&CertSignAlgsExtension$CRCertSignatureSchemesConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertSignAlgsExtension$CRCertSignatureSchemesConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesConsumer", "sun.security.ssl.CertSignAlgsExtension", "CRCertSignatureSchemesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertSignAlgsExtension$CRCertSignatureSchemesConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_CertSignAlgsExtension$CRCertSignatureSchemesConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertSignAlgsExtension$CRCertSignatureSchemesConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertSignAlgsExtension"
};

$Object* allocate$CertSignAlgsExtension$CRCertSignatureSchemesConsumer($Class* clazz) {
	return $of($alloc(CertSignAlgsExtension$CRCertSignatureSchemesConsumer));
}

void CertSignAlgsExtension$CRCertSignatureSchemesConsumer::init$() {
}

void CertSignAlgsExtension$CRCertSignatureSchemesConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_SIGNATURE_ALGORITHMS_CERT)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable signature_algorithms_cert extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, spec, $new($SignatureAlgorithmsExtension$SignatureSchemesSpec, chc, buffer));
	$nc($nc(chc)->handshakeExtensions)->put($SSLExtension::CR_SIGNATURE_ALGORITHMS_CERT, spec);
}

CertSignAlgsExtension$CRCertSignatureSchemesConsumer::CertSignAlgsExtension$CRCertSignatureSchemesConsumer() {
}

$Class* CertSignAlgsExtension$CRCertSignatureSchemesConsumer::load$($String* name, bool initialize) {
	$loadClass(CertSignAlgsExtension$CRCertSignatureSchemesConsumer, name, initialize, &_CertSignAlgsExtension$CRCertSignatureSchemesConsumer_ClassInfo_, allocate$CertSignAlgsExtension$CRCertSignatureSchemesConsumer);
	return class$;
}

$Class* CertSignAlgsExtension$CRCertSignatureSchemesConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun