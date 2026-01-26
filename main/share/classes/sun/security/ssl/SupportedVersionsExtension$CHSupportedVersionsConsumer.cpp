#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsSpec.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

#undef CH_SUPPORTED_VERSIONS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SupportedVersionsExtension$CHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$CHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SupportedVersionsExtension$CHSupportedVersionsConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$CHSupportedVersionsConsumer, init$, void)},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(SupportedVersionsExtension$CHSupportedVersionsConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
	{}
};

$InnerClassInfo _SupportedVersionsExtension$CHSupportedVersionsConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsConsumer", "sun.security.ssl.SupportedVersionsExtension", "CHSupportedVersionsConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SupportedVersionsExtension$CHSupportedVersionsConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_SupportedVersionsExtension$CHSupportedVersionsConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_SupportedVersionsExtension$CHSupportedVersionsConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SupportedVersionsExtension"
};

$Object* allocate$SupportedVersionsExtension$CHSupportedVersionsConsumer($Class* clazz) {
	return $of($alloc(SupportedVersionsExtension$CHSupportedVersionsConsumer));
}

void SupportedVersionsExtension$CHSupportedVersionsConsumer::init$() {
}

void SupportedVersionsExtension$CHSupportedVersionsConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_SUPPORTED_VERSIONS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::CH_SUPPORTED_VERSIONS->name$}), $$new($ObjectArray, 0));
		}
		return;
	}
	$var($SupportedVersionsExtension$CHSupportedVersionsSpec, spec, $new($SupportedVersionsExtension$CHSupportedVersionsSpec, shc, buffer));
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CH_SUPPORTED_VERSIONS, spec);
}

SupportedVersionsExtension$CHSupportedVersionsConsumer::SupportedVersionsExtension$CHSupportedVersionsConsumer() {
}

$Class* SupportedVersionsExtension$CHSupportedVersionsConsumer::load$($String* name, bool initialize) {
	$loadClass(SupportedVersionsExtension$CHSupportedVersionsConsumer, name, initialize, &_SupportedVersionsExtension$CHSupportedVersionsConsumer_ClassInfo_, allocate$SupportedVersionsExtension$CHSupportedVersionsConsumer);
	return class$;
}

$Class* SupportedVersionsExtension$CHSupportedVersionsConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun