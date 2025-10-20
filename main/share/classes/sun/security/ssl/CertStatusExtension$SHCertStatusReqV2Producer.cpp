#include <sun/security/ssl/CertStatusExtension$SHCertStatusReqV2Producer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestV2Spec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/StatusResponseManager$StaplingParameters.h>
#include <jcpp.h>

#undef CH_STATUS_REQUEST_V2
#undef DEFAULT
#undef SH_STATUS_REQUEST_V2

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertStatusExtension$CertStatusRequestV2Spec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestV2Spec;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $StatusResponseManager$StaplingParameters = ::sun::security::ssl::StatusResponseManager$StaplingParameters;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertStatusExtension$SHCertStatusReqV2Producer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$SHCertStatusReqV2Producer::*)()>(&CertStatusExtension$SHCertStatusReqV2Producer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertStatusExtension$SHCertStatusReqV2Producer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$SHCertStatusReqV2Producer", "sun.security.ssl.CertStatusExtension", "SHCertStatusReqV2Producer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertStatusExtension$SHCertStatusReqV2Producer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$SHCertStatusReqV2Producer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CertStatusExtension$SHCertStatusReqV2Producer_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$SHCertStatusReqV2Producer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$SHCertStatusReqV2Producer($Class* clazz) {
	return $of($alloc(CertStatusExtension$SHCertStatusReqV2Producer));
}

void CertStatusExtension$SHCertStatusReqV2Producer::init$() {
}

$bytes* CertStatusExtension$SHCertStatusReqV2Producer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (($nc(shc)->stapleParams == nullptr) || ($nc($nc(shc)->stapleParams)->statusRespExt != $SSLExtension::CH_STATUS_REQUEST_V2)) {
		return nullptr;
	}
	$var($CertStatusExtension$CertStatusRequestV2Spec, spec, $cast($CertStatusExtension$CertStatusRequestV2Spec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_STATUS_REQUEST_V2)));
	if (spec == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest("Ignore unavailable status_request_v2 extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (shc->isResumption) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest("No status_request_v2 response for session resumption"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $new($bytes, 0));
	$init($CertStatusExtension$CertStatusRequestV2Spec);
	$nc(shc->handshakeExtensions)->put($SSLExtension::SH_STATUS_REQUEST_V2, $CertStatusExtension$CertStatusRequestV2Spec::DEFAULT);
	return extData;
}

CertStatusExtension$SHCertStatusReqV2Producer::CertStatusExtension$SHCertStatusReqV2Producer() {
}

$Class* CertStatusExtension$SHCertStatusReqV2Producer::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$SHCertStatusReqV2Producer, name, initialize, &_CertStatusExtension$SHCertStatusReqV2Producer_ClassInfo_, allocate$CertStatusExtension$SHCertStatusReqV2Producer);
	return class$;
}

$Class* CertStatusExtension$SHCertStatusReqV2Producer::class$ = nullptr;

		} // ssl
	} // security
} // sun