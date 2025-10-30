#include <sun/security/ssl/CertStatusExtension$SHCertStatusReqProducer.h>

#include <java/util/Map.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestSpec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/StatusResponseManager$StaplingParameters.h>
#include <jcpp.h>

#undef CH_STATUS_REQUEST
#undef DEFAULT
#undef SH_STATUS_REQUEST

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertStatusExtension$CertStatusRequestSpec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestSpec;
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

$MethodInfo _CertStatusExtension$SHCertStatusReqProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$SHCertStatusReqProducer::*)()>(&CertStatusExtension$SHCertStatusReqProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertStatusExtension$SHCertStatusReqProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$SHCertStatusReqProducer", "sun.security.ssl.CertStatusExtension", "SHCertStatusReqProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertStatusExtension$SHCertStatusReqProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$SHCertStatusReqProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CertStatusExtension$SHCertStatusReqProducer_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$SHCertStatusReqProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$SHCertStatusReqProducer($Class* clazz) {
	return $of($alloc(CertStatusExtension$SHCertStatusReqProducer));
}

void CertStatusExtension$SHCertStatusReqProducer::init$() {
}

$bytes* CertStatusExtension$SHCertStatusReqProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (($nc(shc)->stapleParams == nullptr) || ($nc($nc(shc)->stapleParams)->statusRespExt != $SSLExtension::CH_STATUS_REQUEST)) {
		return nullptr;
	}
	$var($CertStatusExtension$CertStatusRequestSpec, spec, $cast($CertStatusExtension$CertStatusRequestSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_STATUS_REQUEST)));
	if (spec == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest($$str({"Ignore unavailable extension: "_s, $SSLExtension::CH_STATUS_REQUEST->name$}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	if (shc->isResumption) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::finest("No status_request response for session resuming"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $new($bytes, 0));
	$init($CertStatusExtension$CertStatusRequestSpec);
	$nc(shc->handshakeExtensions)->put($SSLExtension::SH_STATUS_REQUEST, $CertStatusExtension$CertStatusRequestSpec::DEFAULT);
	return extData;
}

CertStatusExtension$SHCertStatusReqProducer::CertStatusExtension$SHCertStatusReqProducer() {
}

$Class* CertStatusExtension$SHCertStatusReqProducer::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$SHCertStatusReqProducer, name, initialize, &_CertStatusExtension$SHCertStatusReqProducer_ClassInfo_, allocate$CertStatusExtension$SHCertStatusReqProducer);
	return class$;
}

$Class* CertStatusExtension$SHCertStatusReqProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun