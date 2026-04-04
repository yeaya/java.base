#include <sun/security/ssl/CertificateStatus$CertificateStatusConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <sun/security/ssl/CertificateMessage$T12CertificateConsumer.h>
#include <sun/security/ssl/CertificateStatus$CertificateStatusMessage.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <jcpp.h>

#undef CERTIFICATE_STATUS

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CertificateMessage$T12CertificateConsumer = ::sun::security::ssl::CertificateMessage$T12CertificateConsumer;
using $CertificateStatus$CertificateStatusMessage = ::sun::security::ssl::CertificateStatus$CertificateStatusMessage;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateStatus$CertificateStatusConsumer::init$() {
}

void CertificateStatus$CertificateStatusConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($CertificateStatus$CertificateStatusMessage, cst, $new($CertificateStatus$CertificateStatusMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming server CertificateStatus handshake message"_s, $$new($ObjectArray, {cst}));
	}
	$nc($nc(chc)->handshakeSession)->setStatusResponses(cst->encodedResponses);
	$CertificateMessage$T12CertificateConsumer::checkServerCerts(chc, chc->deferredCerts);
	$init($SSLHandshake);
	$nc(chc->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_STATUS->id)));
}

CertificateStatus$CertificateStatusConsumer::CertificateStatus$CertificateStatusConsumer() {
}

$Class* CertificateStatus$CertificateStatusConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CertificateStatus$CertificateStatusConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(CertificateStatus$CertificateStatusConsumer, consume, void, $ConnectionContext*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateStatus$CertificateStatusConsumer", "sun.security.ssl.CertificateStatus", "CertificateStatusConsumer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateStatus$CertificateStatusConsumer",
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
		"sun.security.ssl.CertificateStatus"
	};
	$loadClass(CertificateStatus$CertificateStatusConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateStatus$CertificateStatusConsumer);
	});
	return class$;
}

$Class* CertificateStatus$CertificateStatusConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun