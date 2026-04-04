#include <sun/security/ssl/AlpnExtension$CHAlpnAbsence.h>
#include <sun/security/ssl/AlpnExtension.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void AlpnExtension$CHAlpnAbsence::init$() {
}

void AlpnExtension$CHAlpnAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$set($nc(shc), applicationProtocol, ""_s);
	$set($nc(shc->conContext), applicationProtocol, ""_s);
}

AlpnExtension$CHAlpnAbsence::AlpnExtension$CHAlpnAbsence() {
}

$Class* AlpnExtension$CHAlpnAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AlpnExtension$CHAlpnAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(AlpnExtension$CHAlpnAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.AlpnExtension$CHAlpnAbsence", "sun.security.ssl.AlpnExtension", "CHAlpnAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.AlpnExtension$CHAlpnAbsence",
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
		"sun.security.ssl.AlpnExtension"
	};
	$loadClass(AlpnExtension$CHAlpnAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlpnExtension$CHAlpnAbsence);
	});
	return class$;
}

$Class* AlpnExtension$CHAlpnAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun