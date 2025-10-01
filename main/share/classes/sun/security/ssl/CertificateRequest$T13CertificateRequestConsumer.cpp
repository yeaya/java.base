#include <sun/security/ssl/CertificateRequest$T13CertificateRequestConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <sun/security/ssl/CertificateRequest$T13CertificateRequestMessage.h>
#include <sun/security/ssl/CertificateRequest.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CERTIFICATE_REQUEST
#undef CERTIFICATE_VERIFY
#undef CERTIFICATE

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $CertificateRequest = ::sun::security::ssl::CertificateRequest;
using $CertificateRequest$T13CertificateRequestMessage = ::sun::security::ssl::CertificateRequest$T13CertificateRequestMessage;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateRequest$T13CertificateRequestConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateRequest$T13CertificateRequestConsumer::*)()>(&CertificateRequest$T13CertificateRequestConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateRequest$T13CertificateRequestConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateRequest$T13CertificateRequestConsumer", "sun.security.ssl.CertificateRequest", "T13CertificateRequestConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateRequest$T13CertificateRequestConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateRequest$T13CertificateRequestConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_CertificateRequest$T13CertificateRequestConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateRequest$T13CertificateRequestConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateRequest"
};

$Object* allocate$CertificateRequest$T13CertificateRequestConsumer($Class* clazz) {
	return $of($alloc(CertificateRequest$T13CertificateRequestConsumer));
}

void CertificateRequest$T13CertificateRequestConsumer::init$() {
}

void CertificateRequest$T13CertificateRequestConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(chc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_REQUEST->id)));
	$var($CertificateRequest$T13CertificateRequestMessage, crm, $new($CertificateRequest$T13CertificateRequestMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming CertificateRequest handshake message"_s, $$new($ObjectArray, {$of(crm)}));
	}
	$var($SSLExtensionArray, extTypes, $nc(chc->sslConfig)->getEnabledExtensions($SSLHandshake::CERTIFICATE_REQUEST));
	$nc(crm->extensions)->consumeOnLoad(chc, extTypes);
	$nc(crm->extensions)->consumeOnTrade(chc, extTypes);
	$set(chc, certRequestContext, $cast($bytes, $nc(crm->requestContext)->clone()));
	$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE->id)), $SSLHandshake::CERTIFICATE);
	$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)), $SSLHandshake::CERTIFICATE_VERIFY);
}

CertificateRequest$T13CertificateRequestConsumer::CertificateRequest$T13CertificateRequestConsumer() {
}

$Class* CertificateRequest$T13CertificateRequestConsumer::load$($String* name, bool initialize) {
	$loadClass(CertificateRequest$T13CertificateRequestConsumer, name, initialize, &_CertificateRequest$T13CertificateRequestConsumer_ClassInfo_, allocate$CertificateRequest$T13CertificateRequestConsumer);
	return class$;
}

$Class* CertificateRequest$T13CertificateRequestConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun