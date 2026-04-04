#include <sun/security/ssl/CertSignAlgsExtension$CRCertSignatureSchemesConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertSignAlgsExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
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
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;

namespace sun {
	namespace security {
		namespace ssl {

void CertSignAlgsExtension$CRCertSignatureSchemesConsumer::init$() {
}

void CertSignAlgsExtension$CRCertSignatureSchemesConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
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
	$nc(chc->handshakeExtensions)->put($SSLExtension::CR_SIGNATURE_ALGORITHMS_CERT, spec);
}

CertSignAlgsExtension$CRCertSignatureSchemesConsumer::CertSignAlgsExtension$CRCertSignatureSchemesConsumer() {
}

$Class* CertSignAlgsExtension$CRCertSignatureSchemesConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertSignAlgsExtension$CRCertSignatureSchemesConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(CertSignAlgsExtension$CRCertSignatureSchemesConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesConsumer", "sun.security.ssl.CertSignAlgsExtension", "CRCertSignatureSchemesConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertSignAlgsExtension$CRCertSignatureSchemesConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLExtension$ExtensionConsumer",
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
	$loadClass(CertSignAlgsExtension$CRCertSignatureSchemesConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertSignAlgsExtension$CRCertSignatureSchemesConsumer);
	});
	return class$;
}

$Class* CertSignAlgsExtension$CRCertSignatureSchemesConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun