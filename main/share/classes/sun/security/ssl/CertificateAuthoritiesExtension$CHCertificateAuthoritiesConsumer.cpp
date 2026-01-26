#include <sun/security/ssl/CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension$CertificateAuthoritiesSpec.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CH_CERTIFICATE_AUTHORITIES

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $CertificateAuthoritiesExtension$CertificateAuthoritiesSpec = ::sun::security::ssl::CertificateAuthoritiesExtension$CertificateAuthoritiesSpec;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer, init$, void)},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer", "sun.security.ssl.CertificateAuthoritiesExtension", "CHCertificateAuthoritiesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateAuthoritiesExtension"
};

$Object* allocate$CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer($Class* clazz) {
	return $of($alloc(CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer));
}

void CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer::init$() {
}

void CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_CERTIFICATE_AUTHORITIES)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable certificate_authorities extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, spec, $new($CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, shc, buffer));
	$set($nc(shc), peerSupportedAuthorities, spec->getAuthorities());
	$nc(shc->handshakeExtensions)->put($SSLExtension::CH_CERTIFICATE_AUTHORITIES, spec);
}

CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer::CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer() {
}

$Class* CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer::load$($String* name, bool initialize) {
	$loadClass(CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer, name, initialize, &_CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer_ClassInfo_, allocate$CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer);
	return class$;
}

$Class* CertificateAuthoritiesExtension$CHCertificateAuthoritiesConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun