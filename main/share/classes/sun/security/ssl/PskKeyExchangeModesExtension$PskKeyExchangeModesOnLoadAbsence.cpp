#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence.h>

#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence::*)()>(&PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence", "sun.security.ssl.PskKeyExchangeModesExtension", "PskKeyExchangeModesOnLoadAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PskKeyExchangeModesExtension"
};

$Object* allocate$PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence($Class* clazz) {
	return $of($alloc(PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence));
}

void PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence::init$() {
}

void PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if ($nc(shc)->isResumption) {
		shc->isResumption = false;
		$set(shc, resumingSession, nullptr);
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("abort session resumption, no supported psk_dhe_ke PSK key exchange mode"_s, $$new($ObjectArray, 0));
		}
	}
}

PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence::PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence() {
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence::load$($String* name, bool initialize) {
	$loadClass(PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence, name, initialize, &_PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence_ClassInfo_, allocate$PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence);
	return class$;
}

$Class* PskKeyExchangeModesExtension$PskKeyExchangeModesOnLoadAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun