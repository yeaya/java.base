#include <sun/security/ssl/CertStatusExtension$CHCertStatusReqV2Consumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestV2Spec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CERTIFICATE_STATUS
#undef CH_STATUS_REQUEST_V2

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertStatusExtension$CertStatusRequestV2Spec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestV2Spec;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
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

$MethodInfo _CertStatusExtension$CHCertStatusReqV2Consumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$CHCertStatusReqV2Consumer::*)()>(&CertStatusExtension$CHCertStatusReqV2Consumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertStatusExtension$CHCertStatusReqV2Consumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Consumer", "sun.security.ssl.CertStatusExtension", "CHCertStatusReqV2Consumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertStatusExtension$CHCertStatusReqV2Consumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Consumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_CertStatusExtension$CHCertStatusReqV2Consumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$CHCertStatusReqV2Consumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$CHCertStatusReqV2Consumer($Class* clazz) {
	return $of($alloc(CertStatusExtension$CHCertStatusReqV2Consumer));
}

void CertStatusExtension$CHCertStatusReqV2Consumer::init$() {
}

void CertStatusExtension$CHCertStatusReqV2Consumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_STATUS_REQUEST_V2)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest("Ignore unavailable status_request_v2 extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($CertStatusExtension$CertStatusRequestV2Spec, spec, $new($CertStatusExtension$CertStatusRequestV2Spec, shc, buffer));
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CH_STATUS_REQUEST_V2, spec);
	if (!shc->isResumption) {
		$init($SSLHandshake);
		$nc(shc->handshakeProducers)->putIfAbsent($($Byte::valueOf($SSLHandshake::CERTIFICATE_STATUS->id)), $SSLHandshake::CERTIFICATE_STATUS);
	}
}

CertStatusExtension$CHCertStatusReqV2Consumer::CertStatusExtension$CHCertStatusReqV2Consumer() {
}

$Class* CertStatusExtension$CHCertStatusReqV2Consumer::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$CHCertStatusReqV2Consumer, name, initialize, &_CertStatusExtension$CHCertStatusReqV2Consumer_ClassInfo_, allocate$CertStatusExtension$CHCertStatusReqV2Consumer);
	return class$;
}

$Class* CertStatusExtension$CHCertStatusReqV2Consumer::class$ = nullptr;

		} // ssl
	} // security
} // sun