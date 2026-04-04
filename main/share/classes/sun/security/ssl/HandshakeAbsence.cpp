#include <sun/security/ssl/HandshakeAbsence.h>
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

$Class* HandshakeAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HandshakeAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.HandshakeAbsence",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HandshakeAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandshakeAbsence);
	});
	return class$;
}

$Class* HandshakeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun