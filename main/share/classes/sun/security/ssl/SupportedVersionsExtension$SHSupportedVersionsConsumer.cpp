#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsSpec.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

#undef SH_SUPPORTED_VERSIONS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SupportedVersionsExtension = ::sun::security::ssl::SupportedVersionsExtension;
using $SupportedVersionsExtension$SHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$SHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SupportedVersionsExtension$SHSupportedVersionsConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SupportedVersionsExtension$SHSupportedVersionsConsumer::*)()>(&SupportedVersionsExtension$SHSupportedVersionsConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SupportedVersionsExtension$SHSupportedVersionsConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsConsumer", "sun.security.ssl.SupportedVersionsExtension", "SHSupportedVersionsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SupportedVersionsExtension$SHSupportedVersionsConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_SupportedVersionsExtension$SHSupportedVersionsConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedVersionsExtension$SHSupportedVersionsConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedVersionsExtension"
};

$Object* allocate$SupportedVersionsExtension$SHSupportedVersionsConsumer($Class* clazz) {
	return $of($alloc(SupportedVersionsExtension$SHSupportedVersionsConsumer));
}

void SupportedVersionsExtension$SHSupportedVersionsConsumer::init$() {
}

void SupportedVersionsExtension$SHSupportedVersionsConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::SH_SUPPORTED_VERSIONS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::SH_SUPPORTED_VERSIONS->name$}), $$new($ObjectArray, 0));
		}
		return;
	}
	$var($SupportedVersionsExtension$SHSupportedVersionsSpec, spec, $new($SupportedVersionsExtension$SHSupportedVersionsSpec, chc, buffer));
	$nc($nc(chc)->handshakeExtensions)->put($SSLExtension::SH_SUPPORTED_VERSIONS, spec);
}

SupportedVersionsExtension$SHSupportedVersionsConsumer::SupportedVersionsExtension$SHSupportedVersionsConsumer() {
}

$Class* SupportedVersionsExtension$SHSupportedVersionsConsumer::load$($String* name, bool initialize) {
	$loadClass(SupportedVersionsExtension$SHSupportedVersionsConsumer, name, initialize, &_SupportedVersionsExtension$SHSupportedVersionsConsumer_ClassInfo_, allocate$SupportedVersionsExtension$SHSupportedVersionsConsumer);
	return class$;
}

$Class* SupportedVersionsExtension$SHSupportedVersionsConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun