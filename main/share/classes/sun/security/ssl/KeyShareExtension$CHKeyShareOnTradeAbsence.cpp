#include <sun/security/ssl/KeyShareExtension$CHKeyShareOnTradeAbsence.h>

#include <java/util/Map.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CH_SUPPORTED_GROUPS
#undef MISSING_EXTENSION

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Map = ::java::util::Map;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KeyShareExtension = ::sun::security::ssl::KeyShareExtension;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _KeyShareExtension$CHKeyShareOnTradeAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyShareExtension$CHKeyShareOnTradeAbsence::*)()>(&KeyShareExtension$CHKeyShareOnTradeAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _KeyShareExtension$CHKeyShareOnTradeAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$CHKeyShareOnTradeAbsence", "sun.security.ssl.KeyShareExtension", "CHKeyShareOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyShareExtension$CHKeyShareOnTradeAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$CHKeyShareOnTradeAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_KeyShareExtension$CHKeyShareOnTradeAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$CHKeyShareOnTradeAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$CHKeyShareOnTradeAbsence($Class* clazz) {
	return $of($alloc(KeyShareExtension$CHKeyShareOnTradeAbsence));
}

void KeyShareExtension$CHKeyShareOnTradeAbsence::init$() {
}

void KeyShareExtension$CHKeyShareOnTradeAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	bool var$0 = $nc($nc(shc)->negotiatedProtocol)->useTLS13PlusSpec();
	$init($SSLExtension);
	if (var$0 && $nc(shc->handshakeExtensions)->containsKey($SSLExtension::CH_SUPPORTED_GROUPS)) {
		$init($Alert);
		$throw($($nc(shc->conContext)->fatal($Alert::MISSING_EXTENSION, "No key_share extension to work with the supported_groups extension"_s)));
	}
}

KeyShareExtension$CHKeyShareOnTradeAbsence::KeyShareExtension$CHKeyShareOnTradeAbsence() {
}

$Class* KeyShareExtension$CHKeyShareOnTradeAbsence::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$CHKeyShareOnTradeAbsence, name, initialize, &_KeyShareExtension$CHKeyShareOnTradeAbsence_ClassInfo_, allocate$KeyShareExtension$CHKeyShareOnTradeAbsence);
	return class$;
}

$Class* KeyShareExtension$CHKeyShareOnTradeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun