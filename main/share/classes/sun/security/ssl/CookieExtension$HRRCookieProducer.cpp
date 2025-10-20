#include <sun/security/ssl/CookieExtension$HRRCookieProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/CookieExtension.h>
#include <sun/security/ssl/HelloCookieManager.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/ServerHello$ServerHelloMessage.h>
#include <jcpp.h>

#undef HRR_COOKIE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $CookieExtension = ::sun::security::ssl::CookieExtension;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $ServerHello$ServerHelloMessage = ::sun::security::ssl::ServerHello$ServerHelloMessage;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CookieExtension$HRRCookieProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CookieExtension$HRRCookieProducer::*)()>(&CookieExtension$HRRCookieProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CookieExtension$HRRCookieProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CookieExtension$HRRCookieProducer", "sun.security.ssl.CookieExtension", "HRRCookieProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CookieExtension$HRRCookieProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CookieExtension$HRRCookieProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CookieExtension$HRRCookieProducer_MethodInfo_,
	nullptr,
	nullptr,
	_CookieExtension$HRRCookieProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CookieExtension"
};

$Object* allocate$CookieExtension$HRRCookieProducer($Class* clazz) {
	return $of($alloc(CookieExtension$HRRCookieProducer));
}

void CookieExtension$HRRCookieProducer::init$() {
}

$bytes* CookieExtension$HRRCookieProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ServerHello$ServerHelloMessage, hrrm, $cast($ServerHello$ServerHelloMessage, message));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::HRR_COOKIE)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable cookie extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($HelloCookieManager, hcm, $nc($nc(shc)->sslContext)->getHelloCookieManager(shc->negotiatedProtocol));
	$var($bytes, cookie, $nc(hcm)->createCookie(shc, $nc(hrrm)->clientHello));
	$var($bytes, extData, $new($bytes, $nc(cookie)->length + 2));
	$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
	$Record::putBytes16(m, cookie);
	return extData;
}

CookieExtension$HRRCookieProducer::CookieExtension$HRRCookieProducer() {
}

$Class* CookieExtension$HRRCookieProducer::load$($String* name, bool initialize) {
	$loadClass(CookieExtension$HRRCookieProducer, name, initialize, &_CookieExtension$HRRCookieProducer_ClassInfo_, allocate$CookieExtension$HRRCookieProducer);
	return class$;
}

$Class* CookieExtension$HRRCookieProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun