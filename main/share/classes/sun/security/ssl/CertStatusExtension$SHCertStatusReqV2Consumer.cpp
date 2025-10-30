#include <sun/security/ssl/CertStatusExtension$SHCertStatusReqV2Consumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestV2Spec.h>
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
#undef CH_STATUS_REQUEST_V2
#undef DEFAULT
#undef SH_STATUS_REQUEST_V2
#undef UNEXPECTED_MESSAGE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertStatusExtension$CertStatusRequestV2Spec = ::sun::security::ssl::CertStatusExtension$CertStatusRequestV2Spec;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertStatusExtension$SHCertStatusReqV2Consumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertStatusExtension$SHCertStatusReqV2Consumer::*)()>(&CertStatusExtension$SHCertStatusReqV2Consumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertStatusExtension$SHCertStatusReqV2Consumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$SHCertStatusReqV2Consumer", "sun.security.ssl.CertStatusExtension", "SHCertStatusReqV2Consumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CertStatusExtension$SHCertStatusReqV2Consumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$SHCertStatusReqV2Consumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_CertStatusExtension$SHCertStatusReqV2Consumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$SHCertStatusReqV2Consumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$SHCertStatusReqV2Consumer($Class* clazz) {
	return $of($alloc(CertStatusExtension$SHCertStatusReqV2Consumer));
}

void CertStatusExtension$SHCertStatusReqV2Consumer::init$() {
}

void CertStatusExtension$SHCertStatusReqV2Consumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	$var($CertStatusExtension$CertStatusRequestV2Spec, requestedCsr, $cast($CertStatusExtension$CertStatusRequestV2Spec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::CH_STATUS_REQUEST_V2)));
	if (requestedCsr == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected status_request_v2 extension in ServerHello"_s)));
	}
	if ($nc(buffer)->hasRemaining()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Invalid status_request_v2 extension in ServerHello: the extension data must be empty"_s)));
	}
	$init($CertStatusExtension$CertStatusRequestV2Spec);
	$nc(chc->handshakeExtensions)->put($SSLExtension::SH_STATUS_REQUEST_V2, $CertStatusExtension$CertStatusRequestV2Spec::DEFAULT);
	chc->staplingActive = $nc(chc->sslContext)->isStaplingEnabled(true);
	if (chc->staplingActive) {
		$init($SSLHandshake);
		$nc(chc->handshakeConsumers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE_STATUS->id)), $SSLHandshake::CERTIFICATE_STATUS);
	}
}

CertStatusExtension$SHCertStatusReqV2Consumer::CertStatusExtension$SHCertStatusReqV2Consumer() {
}

$Class* CertStatusExtension$SHCertStatusReqV2Consumer::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$SHCertStatusReqV2Consumer, name, initialize, &_CertStatusExtension$SHCertStatusReqV2Consumer_ClassInfo_, allocate$CertStatusExtension$SHCertStatusReqV2Consumer);
	return class$;
}

$Class* CertStatusExtension$SHCertStatusReqV2Consumer::class$ = nullptr;

		} // ssl
	} // security
} // sun