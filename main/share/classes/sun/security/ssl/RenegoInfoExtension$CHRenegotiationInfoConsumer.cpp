#include <sun/security/ssl/RenegoInfoExtension$CHRenegotiationInfoConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Arrays.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/RenegoInfoExtension$RenegotiationInfoSpec.h>
#include <sun/security/ssl/RenegoInfoExtension.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_RENEGOTIATION_INFO
#undef HANDSHAKE_FAILURE
#undef NOMINAL
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Arrays = ::java::util::Arrays;
using $Map = ::java::util::Map;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $RenegoInfoExtension$RenegotiationInfoSpec = ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoSpec;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _RenegoInfoExtension$CHRenegotiationInfoConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(RenegoInfoExtension$CHRenegotiationInfoConsumer, init$, void)},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(RenegoInfoExtension$CHRenegotiationInfoConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
	{}
};

$InnerClassInfo _RenegoInfoExtension$CHRenegotiationInfoConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoConsumer", "sun.security.ssl.RenegoInfoExtension", "CHRenegotiationInfoConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RenegoInfoExtension$CHRenegotiationInfoConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RenegoInfoExtension$CHRenegotiationInfoConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_RenegoInfoExtension$CHRenegotiationInfoConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_RenegoInfoExtension$CHRenegotiationInfoConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RenegoInfoExtension"
};

$Object* allocate$RenegoInfoExtension$CHRenegotiationInfoConsumer($Class* clazz) {
	return $of($alloc(RenegoInfoExtension$CHRenegotiationInfoConsumer));
}

void RenegoInfoExtension$CHRenegotiationInfoConsumer::init$() {
}

void RenegoInfoExtension$CHRenegotiationInfoConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_RENEGOTIATION_INFO)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Ignore unavailable extension: "_s, $SSLExtension::CH_RENEGOTIATION_INFO->name$}), $$new($ObjectArray, 0));
		}
		return;
	}
	$var($RenegoInfoExtension$RenegotiationInfoSpec, spec, $new($RenegoInfoExtension$RenegotiationInfoSpec, shc, buffer));
	if (!$nc($nc(shc)->conContext)->isNegotiated) {
		if ($nc(spec->renegotiatedConnection)->length != 0) {
			$init($Alert);
			$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Invalid renegotiation_info extension data: not empty"_s)));
		}
		$nc(shc->conContext)->secureRenegotiation = true;
	} else if (!$nc(shc->conContext)->secureRenegotiation) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "The renegotiation_info is present in a insecure renegotiation"_s)));
	} else if (!$Arrays::equals($nc(shc->conContext)->clientVerifyData, spec->renegotiatedConnection)) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Invalid renegotiation_info extension data: incorrect verify data in ClientHello"_s)));
	}
	$init($RenegoInfoExtension$RenegotiationInfoSpec);
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CH_RENEGOTIATION_INFO, $RenegoInfoExtension$RenegotiationInfoSpec::NOMINAL);
}

RenegoInfoExtension$CHRenegotiationInfoConsumer::RenegoInfoExtension$CHRenegotiationInfoConsumer() {
}

$Class* RenegoInfoExtension$CHRenegotiationInfoConsumer::load$($String* name, bool initialize) {
	$loadClass(RenegoInfoExtension$CHRenegotiationInfoConsumer, name, initialize, &_RenegoInfoExtension$CHRenegotiationInfoConsumer_ClassInfo_, allocate$RenegoInfoExtension$CHRenegotiationInfoConsumer);
	return class$;
}

$Class* RenegoInfoExtension$CHRenegotiationInfoConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun