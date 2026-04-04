#include <sun/security/ssl/HandshakeConsumer.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

$Class* HandshakeConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HandshakeConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.HandshakeConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HandshakeConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandshakeConsumer);
	});
	return class$;
}

$Class* HandshakeConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun