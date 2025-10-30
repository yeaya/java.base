#include <sun/security/ssl/CertificateVerify$T10CertificateVerifyConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateVerify$T10CertificateVerifyMessage.h>
#include <sun/security/ssl/CertificateVerify.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CERTIFICATE_VERIFY
#undef CLIENT_KEY_EXCHANGE
#undef UNEXPECTED_MESSAGE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $CertificateVerify = ::sun::security::ssl::CertificateVerify;
using $CertificateVerify$T10CertificateVerifyMessage = ::sun::security::ssl::CertificateVerify$T10CertificateVerifyMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateVerify$T10CertificateVerifyConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateVerify$T10CertificateVerifyConsumer::*)()>(&CertificateVerify$T10CertificateVerifyConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateVerify$T10CertificateVerifyConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateVerify$T10CertificateVerifyConsumer", "sun.security.ssl.CertificateVerify", "T10CertificateVerifyConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateVerify$T10CertificateVerifyConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateVerify$T10CertificateVerifyConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_CertificateVerify$T10CertificateVerifyConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateVerify$T10CertificateVerifyConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateVerify"
};

$Object* allocate$CertificateVerify$T10CertificateVerifyConsumer($Class* clazz) {
	return $of($alloc(CertificateVerify$T10CertificateVerifyConsumer));
}

void CertificateVerify$T10CertificateVerifyConsumer::init$() {
}

void CertificateVerify$T10CertificateVerifyConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(shc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)));
	if ($nc(shc->handshakeConsumers)->containsKey($($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)))) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected CertificateVerify handshake message"_s)));
	}
	$var($CertificateVerify$T10CertificateVerifyMessage, cvm, $new($CertificateVerify$T10CertificateVerifyMessage, static_cast<$HandshakeContext*>(shc), message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming CertificateVerify handshake message"_s, $$new($ObjectArray, {$of(cvm)}));
	}
}

CertificateVerify$T10CertificateVerifyConsumer::CertificateVerify$T10CertificateVerifyConsumer() {
}

$Class* CertificateVerify$T10CertificateVerifyConsumer::load$($String* name, bool initialize) {
	$loadClass(CertificateVerify$T10CertificateVerifyConsumer, name, initialize, &_CertificateVerify$T10CertificateVerifyConsumer_ClassInfo_, allocate$CertificateVerify$T10CertificateVerifyConsumer);
	return class$;
}

$Class* CertificateVerify$T10CertificateVerifyConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun