#include <sun/security/ssl/SignatureAlgorithmsExtension$CHSignatureSchemesConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <jcpp.h>

#undef CH_SIGNATURE_ALGORITHMS

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
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SignatureAlgorithmsExtension$CHSignatureSchemesConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureAlgorithmsExtension$CHSignatureSchemesConsumer::*)()>(&SignatureAlgorithmsExtension$CHSignatureSchemesConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SignatureAlgorithmsExtension$CHSignatureSchemesConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesConsumer", "sun.security.ssl.SignatureAlgorithmsExtension", "CHSignatureSchemesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SignatureAlgorithmsExtension$CHSignatureSchemesConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_SignatureAlgorithmsExtension$CHSignatureSchemesConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureAlgorithmsExtension$CHSignatureSchemesConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SignatureAlgorithmsExtension"
};

$Object* allocate$SignatureAlgorithmsExtension$CHSignatureSchemesConsumer($Class* clazz) {
	return $of($alloc(SignatureAlgorithmsExtension$CHSignatureSchemesConsumer));
}

void SignatureAlgorithmsExtension$CHSignatureSchemesConsumer::init$() {
}

void SignatureAlgorithmsExtension$CHSignatureSchemesConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_SIGNATURE_ALGORITHMS)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable signature_algorithms extension"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, spec, $new($SignatureAlgorithmsExtension$SignatureSchemesSpec, shc, buffer));
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::CH_SIGNATURE_ALGORITHMS, spec);
}

SignatureAlgorithmsExtension$CHSignatureSchemesConsumer::SignatureAlgorithmsExtension$CHSignatureSchemesConsumer() {
}

$Class* SignatureAlgorithmsExtension$CHSignatureSchemesConsumer::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithmsExtension$CHSignatureSchemesConsumer, name, initialize, &_SignatureAlgorithmsExtension$CHSignatureSchemesConsumer_ClassInfo_, allocate$SignatureAlgorithmsExtension$CHSignatureSchemesConsumer);
	return class$;
}

$Class* SignatureAlgorithmsExtension$CHSignatureSchemesConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun