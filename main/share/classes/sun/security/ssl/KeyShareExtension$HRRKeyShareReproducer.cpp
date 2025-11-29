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
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $KeyShareExtension$CHKeyShareSpec = ::sun::security::ssl::KeyShareExtension$CHKeyShareSpec;
using $KeyShareExtension$KeyShareEntry = ::sun::security::ssl::KeyShareExtension$KeyShareEntry;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyShareExtension$HRRKeyShareReproducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyShareExtension$HRRKeyShareReproducer::*)()>(&KeyShareExtension$HRRKeyShareReproducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _KeyShareExtension$HRRKeyShareReproducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$HRRKeyShareReproducer", "sun.security.ssl.KeyShareExtension", "HRRKeyShareReproducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyShareExtension$HRRKeyShareReproducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$HRRKeyShareReproducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_KeyShareExtension$HRRKeyShareReproducer_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$HRRKeyShareReproducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$HRRKeyShareReproducer($Class* clazz) {
	return $of($alloc(KeyShareExtension$HRRKeyShareReproducer));
}

void KeyShareExtension$HRRKeyShareReproducer::init$() {
}

$bytes* KeyShareExtension$HRRKeyShareReproducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::HRR_KEY_SHARE)) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "Unsupported key_share extension in HelloRetryRequest"_s)));
	}
	$var($KeyShareExtension$CHKeyShareSpec, spec, $cast($KeyShareExtension$CHKeyShareSpec, $nc($nc(shc)->handshakeExtensions)->get($SSLExtension::CH_KEY_SHARE)));
	if (spec != nullptr && spec->clientShares != nullptr && $nc(spec->clientShares)->size() == 1) {
		int32_t namedGroupId = $nc(($cast($KeyShareExtension$KeyShareEntry, $($nc(spec->clientShares)->get(0)))))->namedGroupId;
		return $new($bytes, {
			(int8_t)((int32_t)((namedGroupId >> 8) & (uint32_t)255)),
			(int8_t)((int32_t)(namedGroupId & (uint32_t)255))
		});
	}
	return nullptr;
}

KeyShareExtension$HRRKeyShareReproducer::KeyShareExtension$HRRKeyShareReproducer() {
}

$Class* KeyShareExtension$HRRKeyShareReproducer::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$HRRKeyShareReproducer, name, initialize, &_KeyShareExtension$HRRKeyShareReproducer_ClassInfo_, allocate$KeyShareExtension$HRRKeyShareReproducer);
	return class$;
}

$Class* KeyShareExtension$HRRKeyShareReproducer::class$ = nullptr;

		} // ssl
	} // security
} // sun