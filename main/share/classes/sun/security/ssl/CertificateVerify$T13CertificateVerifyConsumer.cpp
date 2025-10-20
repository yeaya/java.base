#include <sun/security/ssl/CertificateVerify$T13CertificateVerifyConsumer.h>

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
#include <sun/security/ssl/CertificateVerify$T13CertificateVerifyMessage.h>
#include <sun/security/ssl/CertificateVerify.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CERTIFICATE_VERIFY

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $CertificateVerify = ::sun::security::ssl::CertificateVerify;
using $CertificateVerify$T13CertificateVerifyMessage = ::sun::security::ssl::CertificateVerify$T13CertificateVerifyMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CertificateVerify$T13CertificateVerifyConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateVerify$T13CertificateVerifyConsumer::*)()>(&CertificateVerify$T13CertificateVerifyConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CertificateVerify$T13CertificateVerifyConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertificateVerify$T13CertificateVerifyConsumer", "sun.security.ssl.CertificateVerify", "T13CertificateVerifyConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CertificateVerify$T13CertificateVerifyConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CertificateVerify$T13CertificateVerifyConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_CertificateVerify$T13CertificateVerifyConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_CertificateVerify$T13CertificateVerifyConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertificateVerify"
};

$Object* allocate$CertificateVerify$T13CertificateVerifyConsumer($Class* clazz) {
	return $of($alloc(CertificateVerify$T13CertificateVerifyConsumer));
}

void CertificateVerify$T13CertificateVerifyConsumer::init$() {
}

void CertificateVerify$T13CertificateVerifyConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(hc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::CERTIFICATE_VERIFY->id)));
	$var($CertificateVerify$T13CertificateVerifyMessage, cvm, $new($CertificateVerify$T13CertificateVerifyMessage, hc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming CertificateVerify handshake message"_s, $$new($ObjectArray, {$of(cvm)}));
	}
}

CertificateVerify$T13CertificateVerifyConsumer::CertificateVerify$T13CertificateVerifyConsumer() {
}

$Class* CertificateVerify$T13CertificateVerifyConsumer::load$($String* name, bool initialize) {
	$loadClass(CertificateVerify$T13CertificateVerifyConsumer, name, initialize, &_CertificateVerify$T13CertificateVerifyConsumer_ClassInfo_, allocate$CertificateVerify$T13CertificateVerifyConsumer);
	return class$;
}

$Class* CertificateVerify$T13CertificateVerifyConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun