#include <sun/security/ssl/NewSessionTicket$T13NewSessionTicketProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/SecureRandom.h>
#include <java/util/Map.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/NewSessionTicket$NewSessionTicketMessage.h>
#include <sun/security/ssl/NewSessionTicket$T13NewSessionTicketMessage.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeMode.h>
#include <sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesSpec.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SessionId.h>
#include <sun/security/ssl/SessionTicketExtension$SessionTicketSpec.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef PSK_DHE_KE
#undef PSK_KEY_EXCHANGE_MODES

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $SecureRandom = ::java::security::SecureRandom;
using $Map = ::java::util::Map;
using $SecretKey = ::javax::crypto::SecretKey;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$HashAlg = ::sun::security::ssl::CipherSuite$HashAlg;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
using $NewSessionTicket$NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage;
using $NewSessionTicket$T13NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$T13NewSessionTicketMessage;
using $PskKeyExchangeModesExtension$PskKeyExchangeMode = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesSpec = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesSpec;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLProducer = ::sun::security::ssl::SSLProducer;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SessionId = ::sun::security::ssl::SessionId;
using $SessionTicketExtension$SessionTicketSpec = ::sun::security::ssl::SessionTicketExtension$SessionTicketSpec;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _NewSessionTicket$T13NewSessionTicketProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NewSessionTicket$T13NewSessionTicketProducer::*)()>(&NewSessionTicket$T13NewSessionTicketProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _NewSessionTicket$T13NewSessionTicketProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.NewSessionTicket$T13NewSessionTicketProducer", "sun.security.ssl.NewSessionTicket", "T13NewSessionTicketProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NewSessionTicket$T13NewSessionTicketProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.NewSessionTicket$T13NewSessionTicketProducer",
	"java.lang.Object",
	"sun.security.ssl.SSLProducer",
	nullptr,
	_NewSessionTicket$T13NewSessionTicketProducer_MethodInfo_,
	nullptr,
	nullptr,
	_NewSessionTicket$T13NewSessionTicketProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.NewSessionTicket"
};

$Object* allocate$NewSessionTicket$T13NewSessionTicketProducer($Class* clazz) {
	return $of($alloc(NewSessionTicket$T13NewSessionTicketProducer));
}

void NewSessionTicket$T13NewSessionTicketProducer::init$() {
}

$bytes* NewSessionTicket$T13NewSessionTicketProducer::produce($ConnectionContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	if ($nc($nc(hc)->conContext)->hasDelegatedFinished) {
		$nc(hc->conContext)->hasDelegatedFinished = false;
		$nc(hc->conContext)->needHandshakeFinishedStatus = true;
	}
	if ($instanceOf($ServerHandshakeContext, hc)) {
		if (!$nc($nc(hc)->handshakeSession)->isRejoinable()) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("No session ticket produced: session is not resumable"_s, $$new($ObjectArray, 0));
			}
			return nullptr;
		}
		$init($SSLExtension);
		$var($PskKeyExchangeModesExtension$PskKeyExchangeModesSpec, pkemSpec, $cast($PskKeyExchangeModesExtension$PskKeyExchangeModesSpec, $nc($nc(hc)->handshakeExtensions)->get($SSLExtension::PSK_KEY_EXCHANGE_MODES)));
		$init($PskKeyExchangeModesExtension$PskKeyExchangeMode);
		if (pkemSpec == nullptr || !$nc(pkemSpec)->contains($PskKeyExchangeModesExtension$PskKeyExchangeMode::PSK_DHE_KE)) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("No session ticket produced: client does not support psk_dhe_ke"_s, $$new($ObjectArray, 0));
			}
			return nullptr;
		}
	} else if (!$nc($nc(hc)->handshakeSession)->isPSKable()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("No session ticket produced: No session ticket allowed in this session"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($SSLSessionContextImpl, sessionCache, $cast($SSLSessionContextImpl, $nc($nc(hc)->sslContext)->engineGetServerSessionContext()));
	$var($SessionId, newId, $new($SessionId, true, $($nc(hc->sslContext)->getSecureRandom())));
	$var($SecretKey, resumptionMasterSecret, $nc(hc->handshakeSession)->getResumptionMasterSecret());
	if (resumptionMasterSecret == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("No session ticket produced: no resumption secret"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($BigInteger, nonce, $nc(hc->handshakeSession)->incrTicketNonceCounter());
	$var($bytes, nonceArr, $nc(nonce)->toByteArray());
	$var($SecretKey, psk, $NewSessionTicket::derivePreSharedKey($nc(hc->negotiatedCipherSuite)->hashAlg, resumptionMasterSecret, nonceArr));
	int32_t sessionTimeoutSeconds = $nc(sessionCache)->getSessionTimeout();
	if (sessionTimeoutSeconds > 0x00093A80) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("No session ticket produced: session timeout"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($NewSessionTicket$NewSessionTicketMessage, nstm, nullptr);
	$var($SSLSessionImpl, sessionCopy, $new($SSLSessionImpl, hc->handshakeSession, newId));
	sessionCopy->setPreSharedKey(psk);
	sessionCopy->setPskIdentity($(newId->getId()));
	if (hc->statelessResumption && $nc(hc->handshakeSession)->isStatelessable()) {
		$var($HandshakeContext, var$0, hc);
		int32_t var$1 = sessionTimeoutSeconds;
		$var($SecureRandom, var$2, $nc(hc->sslContext)->getSecureRandom());
		$var($bytes, var$3, nonceArr);
		$assign(nstm, $new($NewSessionTicket$T13NewSessionTicketMessage, var$0, var$1, var$2, var$3, $($$new($SessionTicketExtension$SessionTicketSpec)->encrypt(hc, sessionCopy))));
		if (!nstm->isValid()) {
			hc->statelessResumption = false;
		} else {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("Produced NewSessionTicket stateless post-handshake message"_s, $$new($ObjectArray, {$of(nstm)}));
			}
		}
	}
	if (!hc->statelessResumption || !$nc(hc->handshakeSession)->isStatelessable()) {
		$var($HandshakeContext, var$4, hc);
		int32_t var$5 = sessionTimeoutSeconds;
		$var($SecureRandom, var$6, $nc(hc->sslContext)->getSecureRandom());
		$var($bytes, var$7, nonceArr);
		$assign(nstm, $new($NewSessionTicket$T13NewSessionTicketMessage, var$4, var$5, var$6, var$7, $(newId->getId())));
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Produced NewSessionTicket post-handshake message"_s, $$new($ObjectArray, {$of(nstm)}));
		}
		$nc(hc->handshakeSession)->addChild(sessionCopy);
		sessionCopy->setTicketAgeAdd(nstm->getTicketAgeAdd());
		sessionCache->put(sessionCopy);
	}
	if (nstm != nullptr) {
		nstm->write(hc->handshakeOutput);
		$nc(hc->handshakeOutput)->flush();
		if ($nc(hc->conContext)->needHandshakeFinishedStatus) {
			$nc(hc->conContext)->needHandshakeFinishedStatus = false;
		}
	}
	$nc(hc->conContext)->finishPostHandshake();
	return nullptr;
}

NewSessionTicket$T13NewSessionTicketProducer::NewSessionTicket$T13NewSessionTicketProducer() {
}

$Class* NewSessionTicket$T13NewSessionTicketProducer::load$($String* name, bool initialize) {
	$loadClass(NewSessionTicket$T13NewSessionTicketProducer, name, initialize, &_NewSessionTicket$T13NewSessionTicketProducer_ClassInfo_, allocate$NewSessionTicket$T13NewSessionTicketProducer);
	return class$;
}

$Class* NewSessionTicket$T13NewSessionTicketProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun