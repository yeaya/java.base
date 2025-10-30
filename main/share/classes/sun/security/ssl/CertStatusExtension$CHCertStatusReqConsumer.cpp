#include <sun/security/ssl/CertStatusExtension$CHCertStatusReqConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestSpec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CERTIFICATE_STATUS
#undef CH_STATUS_REQUEST

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertStatusExtension$CertStatusRequestSpec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestSpec;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertStatusExtension$CHCertStatusReqConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$CHCertStatusReqConsumer::*)()>(&CertStatusExtension$CHCertStatusReqConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertStatusExtension$CHCertStatusReqConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$CHCertStatusReqConsumer", "sun.security.ssl.CertStatusExtension", "CHCertStatusReqConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertStatusExtension$CHCertStatusReqConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$CHCertStatusReqConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_CertStatusExtension$CHCertStatusReqConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$CHCertStatusReqConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$CHCertStatusReqConsumer($Class* clazz) {
	return $of($alloc(CertStatusExtension$CHCertStatusReqConsumer));
}

void CertStatusExtension$CHCertStatusReqConsumer::init$() {
}

void CertStatusExtension$CHCertStatusReqConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_STATUS_REQUEST)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::CH_STATUS_REQUEST->name$}), $$new($ObjectArray, 0));
		}
		return;
	}
	$var($CertStatusExtension$CertStatusRequestSpec, spec, $new($CertStatusExtension$CertStatusRequestSpec, shc, buffer));
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CH_STATUS_REQUEST, spec);
	if (!shc->isResumption && !$nc(shc->negotiatedProtocol)->useTLS13PlusSpec()) {
		$init($SSLHandshake);
		$nc(shc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE_STATUS->id)), $SSLHandshake::CERTIFICATE_STATUS);
	}
}

CertStatusExtension$CHCertStatusReqConsumer::CertStatusExtension$CHCertStatusReqConsumer() {
}

$Class* CertStatusExtension$CHCertStatusReqConsumer::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$CHCertStatusReqConsumer, name, initialize, &_CertStatusExtension$CHCertStatusReqConsumer_ClassInfo_, allocate$CertStatusExtension$CHCertStatusReqConsumer);
	return class$;
}

$Class* CertStatusExtension$CHCertStatusReqConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun