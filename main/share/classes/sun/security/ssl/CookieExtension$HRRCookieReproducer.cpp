#include <sun/security/ssl/CookieExtension$HRRCookieReproducer.h>

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
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/CookieExtension$CookieSpec.h>
#include <sun/security/ssl/CookieExtension.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef CH_COOKIE
#undef HRR_COOKIE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
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
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _CookieExtension$HRRCookieReproducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CookieExtension$HRRCookieReproducer::*)()>(&CookieExtension$HRRCookieReproducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _CookieExtension$HRRCookieReproducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.CookieExtension$HRRCookieReproducer", "sun.security.ssl.CookieExtension", "HRRCookieReproducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CookieExtension$HRRCookieReproducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.CookieExtension$HRRCookieReproducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_CookieExtension$HRRCookieReproducer_MethodInfo_,
	nullptr,
	nullptr,
	_CookieExtension$HRRCookieReproducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CookieExtension"
};

$Object* allocate$CookieExtension$HRRCookieReproducer($Class* clazz) {
	return $of($alloc(CookieExtension$HRRCookieReproducer));
}

void CookieExtension$HRRCookieReproducer::init$() {
}

$bytes* CookieExtension$HRRCookieReproducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::HRR_COOKIE)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable cookie extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($CookieExtension$CookieSpec, spec, $cast($CookieExtension$CookieSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_COOKIE)));
	if (spec != nullptr && spec->cookie != nullptr && $nc(spec->cookie)->length != 0) {
		$var($bytes, extData, $new($bytes, $nc(spec->cookie)->length + 2));
		$var($ByteBuffer, m, $ByteBuffer::wrap(extData));
		$Record::putBytes16(m, spec->cookie);
		return extData;
	}
	return nullptr;
}

CookieExtension$HRRCookieReproducer::CookieExtension$HRRCookieReproducer() {
}

$Class* CookieExtension$HRRCookieReproducer::load$($String* name, bool initialize) {
	$loadClass(CookieExtension$HRRCookieReproducer, name, initialize, &_CookieExtension$HRRCookieReproducer_ClassInfo_, allocate$CookieExtension$HRRCookieReproducer);
	return class$;
}

$Class* CookieExtension$HRRCookieReproducer::class$ = nullptr;

		} // ssl
	} // security
} // sun