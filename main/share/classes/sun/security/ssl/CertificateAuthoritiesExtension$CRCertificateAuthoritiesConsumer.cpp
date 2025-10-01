#include <sun/security/ssl/CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension$CertificateAuthoritiesSpec.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CR_CERTIFICATE_AUTHORITIES

using $X500PrincipalArray = $Array<::javax::security::auth::x500::X500Principal>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $CertificateAuthoritiesExtension = ::sun::security::ssl::CertificateAuthoritiesExtension;
using $CertificateAuthoritiesExtension$CertificateAuthoritiesSpec = ::sun::security::ssl::CertificateAuthoritiesExtension$CertificateAuthoritiesSpec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer::*)()>(&CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer", "sun.security.ssl.CertificateAuthoritiesExtension", "CRCertificateAuthoritiesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateAuthoritiesExtension"
};

$Object* allocate$CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer($Class* clazz) {
	return $of($alloc(CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer));
}

void CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer::init$() {
}

void CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CR_CERTIFICATE_AUTHORITIES)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable certificate_authorities extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, spec, $new($CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, chc, buffer));
	$set($nc(chc), peerSupportedAuthorities, spec->getAuthorities());
	$nc(chc->handshakeExtensions)->put($SSLExtension::CR_CERTIFICATE_AUTHORITIES, spec);
}

CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer::CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer() {
}

$Class* CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer::load$($String* name, bool initialize) {
	$loadClass(CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer, name, initialize, &_CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer_ClassInfo_, allocate$CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer);
	return class$;
}

$Class* CertificateAuthoritiesExtension$CRCertificateAuthoritiesConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun