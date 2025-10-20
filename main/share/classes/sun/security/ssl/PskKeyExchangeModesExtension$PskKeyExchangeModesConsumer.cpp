#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Map.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesSpec.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

#undef PSK_DHE_KE
#undef PSK_KEY_EXCHANGE_MODES

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map = ::java::util::Map;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $PskKeyExchangeModesExtension = ::sun::security::ssl::PskKeyExchangeModesExtension;
using $PskKeyExchangeModesExtension$PskKeyExchangeMode = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesSpec = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesSpec;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer::*)()>(&PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PskKeyExchangeModesExtension"
};

$Object* allocate$PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer($Class* clazz) {
	return $of($alloc(PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer));
}

void PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer::init$() {
}

void PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::PSK_KEY_EXCHANGE_MODES)) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ignore unavailable psk_key_exchange_modes extension"_s, $$new($ObjectArray, 0));
		}
		if (shc->isResumption && shc->resumingSession != nullptr) {
			shc->isResumption = false;
			$set(shc, resumingSession, nullptr);
		}
		return;
	}
	$var($PskKeyExchangeModesExtension$PskKeyExchangeModesSpec, spec, $new($PskKeyExchangeModesExtension$PskKeyExchangeModesSpec, shc, buffer));
	$nc($nc(shc)->handshakeExtensions)->put($SSLExtension::PSK_KEY_EXCHANGE_MODES, spec);
	if (shc->isResumption) {
		$init($PskKeyExchangeModesExtension$PskKeyExchangeMode);
		if (!spec->contains($PskKeyExchangeModesExtension$PskKeyExchangeMode::PSK_DHE_KE)) {
			shc->isResumption = false;
			$set(shc, resumingSession, nullptr);
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("abort session resumption, no supported psk_dhe_ke PSK key exchange mode"_s, $$new($ObjectArray, 0));
			}
		}
	}
}

PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer::PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer() {
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer::load$($String* name, bool initialize) {
	$loadClass(PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer, name, initialize, &_PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer_ClassInfo_, allocate$PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer);
	return class$;
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun