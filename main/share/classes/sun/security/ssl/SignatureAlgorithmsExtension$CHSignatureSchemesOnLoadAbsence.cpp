#include <sun/security/ssl/SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SignatureAlgorithmsExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef MISSING_EXTENSION

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::init$() {
}

void SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if ($nc($nc(shc)->negotiatedProtocol)->useTLS13PlusSpec()) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::MISSING_EXTENSION, "No mandatory signature_algorithms extension in the received ClientHello handshake message"_s)));
	}
}

SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence() {
}

$Class* SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence", "sun.security.ssl.SignatureAlgorithmsExtension", "CHSignatureSchemesOnLoadAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence",
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
		"sun.security.ssl.SignatureAlgorithmsExtension"
	};
	$loadClass(SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence);
	});
	return class$;
}

$Class* SignatureAlgorithmsExtension$CHSignatureSchemesOnLoadAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun