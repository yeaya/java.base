#include <sun/security/ssl/KeyShareExtension$CHKeyShareOnTradeAbsence.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_SUPPORTED_GROUPS
#undef MISSING_EXTENSION

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void KeyShareExtension$CHKeyShareOnTradeAbsence::init$() {
}

void KeyShareExtension$CHKeyShareOnTradeAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	bool var$0 = $nc($nc(shc)->negotiatedProtocol)->useTLS13PlusSpec();
	$init($SSLExtension);
	if (var$0 && $nc(shc->handshakeExtensions)->containsKey($SSLExtension::CH_SUPPORTED_GROUPS)) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::MISSING_EXTENSION, "No key_share extension to work with the supported_groups extension"_s)));
	}
}

KeyShareExtension$CHKeyShareOnTradeAbsence::KeyShareExtension$CHKeyShareOnTradeAbsence() {
}

$Class* KeyShareExtension$CHKeyShareOnTradeAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(KeyShareExtension$CHKeyShareOnTradeAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(KeyShareExtension$CHKeyShareOnTradeAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.KeyShareExtension$CHKeyShareOnTradeAbsence", "sun.security.ssl.KeyShareExtension", "CHKeyShareOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.KeyShareExtension$CHKeyShareOnTradeAbsence",
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
	$loadClass(KeyShareExtension$CHKeyShareOnTradeAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyShareExtension$CHKeyShareOnTradeAbsence);
	});
	return class$;
}

$Class* KeyShareExtension$CHKeyShareOnTradeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun