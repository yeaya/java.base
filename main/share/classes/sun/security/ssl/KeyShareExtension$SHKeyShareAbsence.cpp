#include <sun/security/ssl/KeyShareExtension$SHKeyShareAbsence.h>
#include <java/util/List.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void KeyShareExtension$SHKeyShareAbsence::init$() {
}

void KeyShareExtension$SHKeyShareAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("handshake"_s)) {
		$SSLLogger::fine("No key_share extension in ServerHello, cleanup the key shares if necessary"_s, $$new($ObjectArray, 0));
	}
	$nc($nc(chc)->handshakePossessions)->clear();
}

KeyShareExtension$SHKeyShareAbsence::KeyShareExtension$SHKeyShareAbsence() {
}

$Class* KeyShareExtension$SHKeyShareAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(KeyShareExtension$SHKeyShareAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(KeyShareExtension$SHKeyShareAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.KeyShareExtension$SHKeyShareAbsence", "sun.security.ssl.KeyShareExtension", "SHKeyShareAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.KeyShareExtension$SHKeyShareAbsence",
		"java.lang.Object",
		"sun.security.ssl.HandshakeAbsence",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.KeyShareExtension"
	};
	$loadClass(KeyShareExtension$SHKeyShareAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyShareExtension$SHKeyShareAbsence);
	});
	return class$;
}

$Class* KeyShareExtension$SHKeyShareAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun