#include <sun/security/ssl/KeyShareExtension$HRRKeyShareReproducer.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/KeyShareExtension$CHKeyShareSpec.h>
#include <sun/security/ssl/KeyShareExtension$KeyShareEntry.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_KEY_SHARE
#undef HRR_KEY_SHARE
#undef UNEXPECTED_MESSAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $KeyShareExtension$CHKeyShareSpec = ::sun::security::ssl::KeyShareExtension$CHKeyShareSpec;
using $KeyShareExtension$KeyShareEntry = ::sun::security::ssl::KeyShareExtension$KeyShareEntry;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void KeyShareExtension$HRRKeyShareReproducer::init$() {
}

$bytes* KeyShareExtension$HRRKeyShareReproducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::HRR_KEY_SHARE)) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unsupported key_share extension in HelloRetryRequest"_s)));
	}
	$var($KeyShareExtension$CHKeyShareSpec, spec, $cast($KeyShareExtension$CHKeyShareSpec, $nc(shc->handshakeExtensions)->get($SSLExtension::CH_KEY_SHARE)));
	if (spec != nullptr && spec->clientShares != nullptr && spec->clientShares->size() == 1) {
		int32_t namedGroupId = $nc(($$cast($KeyShareExtension$KeyShareEntry, spec->clientShares->get(0))))->namedGroupId;
		return $new($bytes, {
			(int8_t)((namedGroupId >> 8) & 0xff),
			(int8_t)(namedGroupId & 0xff)
		});
	}
	return nullptr;
}

KeyShareExtension$HRRKeyShareReproducer::KeyShareExtension$HRRKeyShareReproducer() {
}

$Class* KeyShareExtension$HRRKeyShareReproducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(KeyShareExtension$HRRKeyShareReproducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, $virtualMethod(KeyShareExtension$HRRKeyShareReproducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.KeyShareExtension$HRRKeyShareReproducer", "sun.security.ssl.KeyShareExtension", "HRRKeyShareReproducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.KeyShareExtension$HRRKeyShareReproducer",
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
		"sun.security.ssl.KeyShareExtension"
	};
	$loadClass(KeyShareExtension$HRRKeyShareReproducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyShareExtension$HRRKeyShareReproducer);
	});
	return class$;
}

$Class* KeyShareExtension$HRRKeyShareReproducer::class$ = nullptr;

		} // ssl
	} // security
} // sun