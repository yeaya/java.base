#include <sun/security/ssl/CertificateStatus$CertificateStatusConsumer.h>

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
#include <java/security/cert/X509Certificate.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <sun/security/ssl/CertificateMessage$T12CertificateConsumer.h>
#include <sun/security/ssl/CertificateStatus$CertificateStatusMessage.h>
#include <sun/security/ssl/CertificateStatus.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <jcpp.h>

#undef CERTIFICATE_STATUS

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $CertificateMessage$T12CertificateConsumer = ::sun::security::ssl::CertificateMessage$T12CertificateConsumer;
using $CertificateStatus = ::sun::security::ssl::CertificateStatus;
using $CertificateStatus$CertificateStatusMessage = ::sun::security::ssl::CertificateStatus$CertificateStatusMessage;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateStatus$CertificateStatusConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateStatus$CertificateStatusConsumer::*)()>(&CertificateStatus$CertificateStatusConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateStatus$CertificateStatusConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateStatus$CertificateStatusConsumer", "sun.security.ssl.CertificateStatus", "CertificateStatusConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateStatus$CertificateStatusConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateStatus$CertificateStatusConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_CertificateStatus$CertificateStatusConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateStatus$CertificateStatusConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateStatus"
};

$Object* allocate$CertificateStatus$CertificateStatusConsumer($Class* clazz) {
	return $of($alloc(CertificateStatus$CertificateStatusConsumer));
}

void CertificateStatus$CertificateStatusConsumer::init$() {
}

void CertificateStatus$CertificateStatusConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($CertificateStatus$CertificateStatusMessage, cst, $new($CertificateStatus$CertificateStatusMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming server CertificateStatus handshake message"_s, $$new($ObjectArray, {$of(cst)}));
	}
	$nc($nc(chc)->handshakeSession)->setStatusResponses(cst->encodedResponses);
	$CertificateMessage$T12CertificateConsumer::checkServerCerts(chc, chc->deferredCerts);
	$init($SSLHandshake);
	$nc(chc->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_STATUS->id)));
}

CertificateStatus$CertificateStatusConsumer::CertificateStatus$CertificateStatusConsumer() {
}

$Class* CertificateStatus$CertificateStatusConsumer::load$($String* name, bool initialize) {
	$loadClass(CertificateStatus$CertificateStatusConsumer, name, initialize, &_CertificateStatus$CertificateStatusConsumer_ClassInfo_, allocate$CertificateStatus$CertificateStatusConsumer);
	return class$;
}

$Class* CertificateStatus$CertificateStatusConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun