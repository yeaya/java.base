#include <sun/security/ssl/CertStatusExtension$SHCertStatusReqConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestSpec.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE_STATUS
#undef CH_STATUS_REQUEST
#undef DEFAULT
#undef SH_STATUS_REQUEST
#undef UNEXPECTED_MESSAGE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Alert = ::sun::security::ssl::Alert;
using $CertStatusExtension$CertStatusRequestSpec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestSpec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertStatusExtension$SHCertStatusReqConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$SHCertStatusReqConsumer::*)()>(&CertStatusExtension$SHCertStatusReqConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertStatusExtension$SHCertStatusReqConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$SHCertStatusReqConsumer", "sun.security.ssl.CertStatusExtension", "SHCertStatusReqConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertStatusExtension$SHCertStatusReqConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$SHCertStatusReqConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_CertStatusExtension$SHCertStatusReqConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$SHCertStatusReqConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$SHCertStatusReqConsumer($Class* clazz) {
	return $of($alloc(CertStatusExtension$SHCertStatusReqConsumer));
}

void CertStatusExtension$SHCertStatusReqConsumer::init$() {
}

void CertStatusExtension$SHCertStatusReqConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($CertStatusExtension$CertStatusRequestSpec, requestedCsr, $cast($CertStatusExtension$CertStatusRequestSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_STATUS_REQUEST)));
	if (requestedCsr == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected status_request extension in ServerHello"_s)));
	}
	if ($nc(buffer)->hasRemaining()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Invalid status_request extension in ServerHello message: the extension data must be empty"_s)));
	}
	$init($CertStatusExtension$CertStatusRequestSpec);
	$nc(chc->handshakeExtensions)->put($SSLExtension::SH_STATUS_REQUEST, $CertStatusExtension$CertStatusRequestSpec::DEFAULT);
	chc->staplingActive = $nc(chc->sslContext)->isStaplingEnabled(true);
	if (chc->staplingActive) {
		$init($SSLHandshake);
		$nc(chc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE_STATUS->id)), $SSLHandshake::CERTIFICATE_STATUS);
	}
}

CertStatusExtension$SHCertStatusReqConsumer::CertStatusExtension$SHCertStatusReqConsumer() {
}

$Class* CertStatusExtension$SHCertStatusReqConsumer::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$SHCertStatusReqConsumer, name, initialize, &_CertStatusExtension$SHCertStatusReqConsumer_ClassInfo_, allocate$CertStatusExtension$SHCertStatusReqConsumer);
	return class$;
}

$Class* CertStatusExtension$SHCertStatusReqConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun