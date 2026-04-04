#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension.h>
#include <sun/security/ssl/SSLExtension$SSLExtensionSpec.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_PRE_SHARED_KEY
#undef HANDSHAKE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$SSLExtensionSpec = ::sun::security::ssl::SSLExtension$SSLExtensionSpec;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence::init$() {
}

void PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	$var($SSLExtension$SSLExtensionSpec, spec, $cast($SSLExtension$SSLExtensionSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_PRE_SHARED_KEY)));
	if (spec != nullptr) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "pre_shared_key key extension is offered without a psk_key_exchange_modes extension"_s)));
	}
}

PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence::PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence() {
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence",
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
		"sun.security.ssl.PskKeyExchangeModesExtension"
	};
	$loadClass(PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence);
	});
	return class$;
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun