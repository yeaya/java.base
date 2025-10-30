#include <sun/security/ssl/CertStatusExtension$CHCertStatusReqV2Producer.h>

#include <java/util/Map.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestV2Spec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CH_STATUS_REQUEST_V2
#undef DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertStatusExtension$CertStatusRequestV2Spec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestV2Spec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertStatusExtension$CHCertStatusReqV2Producer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$CHCertStatusReqV2Producer::*)()>(&CertStatusExtension$CHCertStatusReqV2Producer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertStatusExtension$CHCertStatusReqV2Producer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Producer", "sun.security.ssl.CertStatusExtension", "CHCertStatusReqV2Producer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertStatusExtension$CHCertStatusReqV2Producer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$CHCertStatusReqV2Producer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CertStatusExtension$CHCertStatusReqV2Producer_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$CHCertStatusReqV2Producer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$CHCertStatusReqV2Producer($Class* clazz) {
	return $of($alloc(CertStatusExtension$CHCertStatusReqV2Producer));
}

void CertStatusExtension$CHCertStatusReqV2Producer::init$() {
}

$bytes* CertStatusExtension$CHCertStatusReqV2Producer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	if (!$nc($nc(chc)->sslContext)->isStaplingEnabled(true)) {
		return nullptr;
	}
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_STATUS_REQUEST_V2)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest("Ignore unavailable status_request_v2 extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $new($bytes, {
		(int8_t)0,
		(int8_t)7,
		(int8_t)2,
		(int8_t)0,
		(int8_t)4,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0
	}));
	$init($CertStatusExtension$CertStatusRequestV2Spec);
	$nc($nc(chc)->handshakeExtensions)->put($SSLExtension::CH_STATUS_REQUEST_V2, $CertStatusExtension$CertStatusRequestV2Spec::DEFAULT);
	return extData;
}

CertStatusExtension$CHCertStatusReqV2Producer::CertStatusExtension$CHCertStatusReqV2Producer() {
}

$Class* CertStatusExtension$CHCertStatusReqV2Producer::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$CHCertStatusReqV2Producer, name, initialize, &_CertStatusExtension$CHCertStatusReqV2Producer_ClassInfo_, allocate$CertStatusExtension$CHCertStatusReqV2Producer);
	return class$;
}

$Class* CertStatusExtension$CHCertStatusReqV2Producer::class$ = nullptr;

		} // ssl
	} // security
} // sun