#include <sun/security/ssl/SupportedVersionsExtension$HRRSupportedVersionsProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsSpec.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

#undef HRR_SUPPORTED_VERSIONS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
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
using $SupportedVersionsExtension$SHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$SHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SupportedVersionsExtension$HRRSupportedVersionsProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SupportedVersionsExtension$HRRSupportedVersionsProducer::*)()>(&SupportedVersionsExtension$HRRSupportedVersionsProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SupportedVersionsExtension$HRRSupportedVersionsProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsProducer", "sun.security.ssl.SupportedVersionsExtension", "HRRSupportedVersionsProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SupportedVersionsExtension$HRRSupportedVersionsProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedVersionsExtension$HRRSupportedVersionsProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_SupportedVersionsExtension$HRRSupportedVersionsProducer_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedVersionsExtension$HRRSupportedVersionsProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedVersionsExtension"
};

$Object* allocate$SupportedVersionsExtension$HRRSupportedVersionsProducer($Class* clazz) {
	return $of($alloc(SupportedVersionsExtension$HRRSupportedVersionsProducer));
}

void SupportedVersionsExtension$HRRSupportedVersionsProducer::init$() {
}

$bytes* SupportedVersionsExtension$HRRSupportedVersionsProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::HRR_SUPPORTED_VERSIONS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::HRR_SUPPORTED_VERSIONS->name$}), $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $new($bytes, 2));
	extData->set(0, $nc($nc(shc)->negotiatedProtocol)->major);
	extData->set(1, $nc(shc->negotiatedProtocol)->minor);
	$nc(shc->handshakeExtensions)->put($SSLExtension::HRR_SUPPORTED_VERSIONS, $$new($SupportedVersionsExtension$SHSupportedVersionsSpec, shc->negotiatedProtocol));
	return extData;
}

SupportedVersionsExtension$HRRSupportedVersionsProducer::SupportedVersionsExtension$HRRSupportedVersionsProducer() {
}

$Class* SupportedVersionsExtension$HRRSupportedVersionsProducer::load$($String* name, bool initialize) {
	$loadClass(SupportedVersionsExtension$HRRSupportedVersionsProducer, name, initialize, &_SupportedVersionsExtension$HRRSupportedVersionsProducer_ClassInfo_, allocate$SupportedVersionsExtension$HRRSupportedVersionsProducer);
	return class$;
}

$Class* SupportedVersionsExtension$HRRSupportedVersionsProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun