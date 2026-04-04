#include <sun/security/ssl/HandshakeProducer.h>
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

$Class* HandshakeProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HandshakeProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.HandshakeProducer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HandshakeProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandshakeProducer);
	});
	return class$;
}

$Class* HandshakeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun