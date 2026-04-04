#include <sun/security/ssl/CertificateVerify$T12CertificateVerifyConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateVerify$T12CertificateVerifyMessage.h>
#include <sun/security/ssl/CertificateVerify.h>
#include <sun/security/ssl/ConnectionContext.h>
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
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $CertificateVerify$T12CertificateVerifyMessage = ::sun::security::ssl::CertificateVerify$T12CertificateVerifyMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateVerify$T12CertificateVerifyConsumer::init$() {
}

void CertificateVerify$T12CertificateVerifyConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(shc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)));
	if (shc->handshakeConsumers->containsKey($($Byte::valueOf($SSLHandshake::CLIENT_KEY_EXCHANGE->id)))) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unexpected CertificateVerify handshake message"_s)));
	}
	$var($CertificateVerify$T12CertificateVerifyMessage, cvm, $new($CertificateVerify$T12CertificateVerifyMessage, shc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming CertificateVerify handshake message"_s, $$new($ObjectArray, {cvm}));
	}
}

CertificateVerify$T12CertificateVerifyConsumer::CertificateVerify$T12CertificateVerifyConsumer() {
}

$Class* CertificateVerify$T12CertificateVerifyConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateVerify$T12CertificateVerifyConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(CertificateVerify$T12CertificateVerifyConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateVerify$T12CertificateVerifyConsumer", "sun.security.ssl.CertificateVerify", "T12CertificateVerifyConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateVerify$T12CertificateVerifyConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.CertificateVerify"
	};
	$loadClass(CertificateVerify$T12CertificateVerifyConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateVerify$T12CertificateVerifyConsumer);
	});
	return class$;
}

$Class* CertificateVerify$T12CertificateVerifyConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun