#include <sun/security/ssl/CertSignAlgsExtension$CHCertSignatureSchemesConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertSignAlgsExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <jcpp.h>

#undef CH_SIGNATURE_ALGORITHMS_CERT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertSignAlgsExtension$CHCertSignatureSchemesConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertSignAlgsExtension$CHCertSignatureSchemesConsumer::*)()>(&CertSignAlgsExtension$CHCertSignatureSchemesConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertSignAlgsExtension$CHCertSignatureSchemesConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesConsumer", "sun.security.ssl.CertSignAlgsExtension", "CHCertSignatureSchemesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertSignAlgsExtension$CHCertSignatureSchemesConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertSignAlgsExtension$CHCertSignatureSchemesConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_CertSignAlgsExtension$CHCertSignatureSchemesConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertSignAlgsExtension$CHCertSignatureSchemesConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertSignAlgsExtension"
};

$Object* allocate$CertSignAlgsExtension$CHCertSignatureSchemesConsumer($Class* clazz) {
	return $of($alloc(CertSignAlgsExtension$CHCertSignatureSchemesConsumer));
}

void CertSignAlgsExtension$CHCertSignatureSchemesConsumer::init$() {
}

void CertSignAlgsExtension$CHCertSignatureSchemesConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_SIGNATURE_ALGORITHMS_CERT)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable signature_algorithms_cert extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, spec, $new($SignatureAlgorithmsExtension$SignatureSchemesSpec, shc, buffer));
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CH_SIGNATURE_ALGORITHMS_CERT, spec);
}

CertSignAlgsExtension$CHCertSignatureSchemesConsumer::CertSignAlgsExtension$CHCertSignatureSchemesConsumer() {
}

$Class* CertSignAlgsExtension$CHCertSignatureSchemesConsumer::load$($String* name, bool initialize) {
	$loadClass(CertSignAlgsExtension$CHCertSignatureSchemesConsumer, name, initialize, &_CertSignAlgsExtension$CHCertSignatureSchemesConsumer_ClassInfo_, allocate$CertSignAlgsExtension$CHCertSignatureSchemesConsumer);
	return class$;
}

$Class* CertSignAlgsExtension$CHCertSignatureSchemesConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun