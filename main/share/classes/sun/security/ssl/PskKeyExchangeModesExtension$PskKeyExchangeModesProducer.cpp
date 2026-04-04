#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesProducer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesSpec.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef DEFAULT
#undef PSK_KEY_EXCHANGE_MODES

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesSpec = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void PskKeyExchangeModesExtension$PskKeyExchangeModesProducer::init$() {
}

$bytes* PskKeyExchangeModesExtension$PskKeyExchangeModesProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::PSK_KEY_EXCHANGE_MODES)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Ignore unavailable psk_key_exchange_modes extension"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($bytes, extData, $new($bytes, {
		1,
		1
	}));
	$init($PskKeyExchangeModesExtension$PskKeyExchangeModesSpec);
	$nc(chc->handshakeExtensions)->put($SSLExtension::PSK_KEY_EXCHANGE_MODES, $PskKeyExchangeModesExtension$PskKeyExchangeModesSpec::DEFAULT);
	return extData;
}

PskKeyExchangeModesExtension$PskKeyExchangeModesProducer::PskKeyExchangeModesExtension$PskKeyExchangeModesProducer() {
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PskKeyExchangeModesExtension$PskKeyExchangeModesProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(PskKeyExchangeModesExtension$PskKeyExchangeModesProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesProducer", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesProducer",
		"java.lang.Object",
		"sun.security.ssl.HandshakeProducer",
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
	$loadClass(PskKeyExchangeModesExtension$PskKeyExchangeModesProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PskKeyExchangeModesExtension$PskKeyExchangeModesProducer);
	});
	return class$;
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun