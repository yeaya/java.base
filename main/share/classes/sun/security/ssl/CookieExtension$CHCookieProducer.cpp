#include <sun/security/ssl/CookieExtension$CHCookieProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/CookieExtension$CookieSpec.h>
#include <sun/security/ssl/CookieExtension.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef HRR_COOKIE
#undef CH_COOKIE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $CookieExtension = ::sun::security::ssl::CookieExtension;
using $CookieExtension$CookieSpec = ::sun::security::ssl::CookieExtension$CookieSpec;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CookieExtension$CHCookieProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CookieExtension$CHCookieProducer::*)()>(&CookieExtension$CHCookieProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CookieExtension$CHCookieProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CookieExtension$CHCookieProducer", "sun.security.ssl.CookieExtension", "CHCookieProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CookieExtension$CHCookieProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CookieExtension$CHCookieProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CookieExtension$CHCookieProducer_MethodInfo_,
	nullptr,
	nullptr,
	_CookieExtension$CHCookieProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CookieExtension"
};

$Object* allocate$CookieExtension$CHCookieProducer($Class* clazz) {
	return $of($alloc(CookieExtension$CHCookieProducer));
}

void CookieExtension$CHCookieProducer::init$() {
}

$bytes* CookieExtension$CHCookieProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::CH_COOKIE)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable cookie extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($CookieExtension$CookieSpec, spec, $cast($CookieExtension$CookieSpec, $nc($nc(chc)->handshakeExtensions)->get($SSLExtension::HRR_COOKIE)));
	if (spec != nullptr && spec->cookie != nullptr && $nc(spec->cookie)->length != 0) {
		$var($bytes, extData, $new($bytes, $nc(spec->cookie)->length + 2));
		$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
		$Record::putBytes16(m, spec->cookie);
		return extData;
	}
	return nullptr;
}

CookieExtension$CHCookieProducer::CookieExtension$CHCookieProducer() {
}

$Class* CookieExtension$CHCookieProducer::load$($String* name, bool initialize) {
	$loadClass(CookieExtension$CHCookieProducer, name, initialize, &_CookieExtension$CHCookieProducer_ClassInfo_, allocate$CookieExtension$CHCookieProducer);
	return class$;
}

$Class* CookieExtension$CHCookieProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun