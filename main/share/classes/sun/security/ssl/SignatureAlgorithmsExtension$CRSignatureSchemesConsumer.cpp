#include <sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension$SignatureSchemesSpec.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CR_SIGNATURE_ALGORITHMS
#undef HANDSHAKE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::init$() {
}

void SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CR_SIGNATURE_ALGORITHMS)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No available signature_algorithms extension for client certificate authentication"_s)));
	}
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, spec, $new($SignatureAlgorithmsExtension$SignatureSchemesSpec, chc, buffer));
	$nc(chc->handshakeExtensions)->put($SSLExtension::CR_SIGNATURE_ALGORITHMS, spec);
}

SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::SignatureAlgorithmsExtension$CRSignatureSchemesConsumer() {
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SignatureAlgorithmsExtension$CRSignatureSchemesConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(SignatureAlgorithmsExtension$CRSignatureSchemesConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesConsumer", "sun.security.ssl.SignatureAlgorithmsExtension", "CRSignatureSchemesConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLExtension$ExtensionConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SignatureAlgorithmsExtension"
	};
	$loadClass(SignatureAlgorithmsExtension$CRSignatureSchemesConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureAlgorithmsExtension$CRSignatureSchemesConsumer);
	});
	return class$;
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun