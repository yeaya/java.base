#include <sun/security/ssl/SupportedVersionsExtension$HRRSupportedVersionsReproducer.h>

#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

#undef HRR_SUPPORTED_VERSIONS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SupportedVersionsExtension = ::sun::security::ssl::SupportedVersionsExtension;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SupportedVersionsExtension$HRRSupportedVersionsReproducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SupportedVersionsExtension$HRRSupportedVersionsReproducer::*)()>(&SupportedVersionsExtension$HRRSupportedVersionsReproducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SupportedVersionsExtension$HRRSupportedVersionsReproducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsReproducer", "sun.security.ssl.SupportedVersionsExtension", "HRRSupportedVersionsReproducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SupportedVersionsExtension$HRRSupportedVersionsReproducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsReproducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_SupportedVersionsExtension$HRRSupportedVersionsReproducer_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedVersionsExtension$HRRSupportedVersionsReproducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedVersionsExtension"
};

$Object* allocate$SupportedVersionsExtension$HRRSupportedVersionsReproducer($Class* clazz) {
	return $of($alloc(SupportedVersionsExtension$HRRSupportedVersionsReproducer));
}

void SupportedVersionsExtension$HRRSupportedVersionsReproducer::init$() {
}

$bytes* SupportedVersionsExtension$HRRSupportedVersionsReproducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::HRR_SUPPORTED_VERSIONS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"[Reproduce] Ignore unavailable extension: "_s, $SSLExtension::HRR_SUPPORTED_VERSIONS->name$}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $new($bytes, 2));
	extData->set(0, $nc($nc(shc)->negotiatedProtocol)->major);
	extData->set(1, $nc(shc->negotiatedProtocol)->minor);
	return extData;
}

SupportedVersionsExtension$HRRSupportedVersionsReproducer::SupportedVersionsExtension$HRRSupportedVersionsReproducer() {
}

$Class* SupportedVersionsExtension$HRRSupportedVersionsReproducer::load$($String* name, bool initialize) {
	$loadClass(SupportedVersionsExtension$HRRSupportedVersionsReproducer, name, initialize, &_SupportedVersionsExtension$HRRSupportedVersionsReproducer_ClassInfo_, allocate$SupportedVersionsExtension$HRRSupportedVersionsReproducer);
	return class$;
}

$Class* SupportedVersionsExtension$HRRSupportedVersionsReproducer::class$ = nullptr;

		} // ssl
	} // security
} // sun