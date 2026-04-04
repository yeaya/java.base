#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_SIGNATURE_ALGORITHMS
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

void PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::init$() {
}

void PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	bool var$0 = $nc($nc(shc)->negotiatedProtocol)->useTLS13PlusSpec();
	if (var$0) {
		$init($SSLExtension);
		bool var$1 = !$nc(shc->handshakeExtensions)->containsKey($SSLExtension::CH_SIGNATURE_ALGORITHMS);
		var$0 = var$1 || !shc->handshakeExtensions->containsKey($SSLExtension::CH_SUPPORTED_GROUPS);
	}
	if (var$0) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::MISSING_EXTENSION, "No supported_groups or signature_algorithms extension when pre_shared_key extension is not present"_s)));
	}
}

PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence() {
}

$Class* PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence", "sun.security.ssl.PreSharedKeyExtension", "CHPreSharedKeyOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence",
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
		"sun.security.ssl.PreSharedKeyExtension"
	};
	$loadClass(PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence);
	});
	return class$;
}

$Class* PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun