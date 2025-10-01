#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

#undef HANDSHAKE_FAILURE
#undef CH_PRE_SHARED_KEY

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
using $PskKeyExchangeModesExtension = ::sun::security::ssl::PskKeyExchangeModesExtension;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$SSLExtensionSpec = ::sun::security::ssl::SSLExtension$SSLExtensionSpec;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence::*)()>(&PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesOnTradeAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PskKeyExchangeModesExtension"
};

$Object* allocate$PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence($Class* clazz) {
	return $of($alloc(PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence));
}

void PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence::init$() {
}

void PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
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
	$loadClass(PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence, name, initialize, &_PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence_ClassInfo_, allocate$PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence);
	return class$;
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesOnTradeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun