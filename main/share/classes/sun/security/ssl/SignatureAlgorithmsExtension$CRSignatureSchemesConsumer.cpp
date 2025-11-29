#include <sun/security/ssl/SignatureAlgorithmsExtension$CRSignatureSchemesConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
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
using $Map = ::java::util::Map;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SignatureAlgorithmsExtension$SignatureSchemesSpec = ::sun::security::ssl::SignatureAlgorithmsExtension$SignatureSchemesSpec;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SignatureAlgorithmsExtension$CRSignatureSchemesConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::*)()>(&SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SignatureAlgorithmsExtension$CRSignatureSchemesConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesConsumer", "sun.security.ssl.SignatureAlgorithmsExtension", "CRSignatureSchemesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SignatureAlgorithmsExtension$CRSignatureSchemesConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SignatureAlgorithmsExtension$CRSignatureSchemesConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_SignatureAlgorithmsExtension$CRSignatureSchemesConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureAlgorithmsExtension$CRSignatureSchemesConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SignatureAlgorithmsExtension"
};

$Object* allocate$SignatureAlgorithmsExtension$CRSignatureSchemesConsumer($Class* clazz) {
	return $of($alloc(SignatureAlgorithmsExtension$CRSignatureSchemesConsumer));
}

void SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::init$() {
}

void SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CR_SIGNATURE_ALGORITHMS)) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No available signature_algorithms extension for client certificate authentication"_s)));
	}
	$var($SignatureAlgorithmsExtension$SignatureSchemesSpec, spec, $new($SignatureAlgorithmsExtension$SignatureSchemesSpec, chc, buffer));
	$nc($nc(chc)->handshakeExtensions)->put($SSLExtension::CR_SIGNATURE_ALGORITHMS, spec);
}

SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::SignatureAlgorithmsExtension$CRSignatureSchemesConsumer() {
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithmsExtension$CRSignatureSchemesConsumer, name, initialize, &_SignatureAlgorithmsExtension$CRSignatureSchemesConsumer_ClassInfo_, allocate$SignatureAlgorithmsExtension$CRSignatureSchemesConsumer);
	return class$;
}

$Class* SignatureAlgorithmsExtension$CRSignatureSchemesConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun