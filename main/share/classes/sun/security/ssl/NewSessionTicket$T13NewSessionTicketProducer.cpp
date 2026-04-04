#include <sun/security/ssl/NewSessionTicket$T13NewSessionTicketProducer.h>
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
using $SecretKey = ::javax::crypto::SecretKey;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
using $NewSessionTicket$NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage;
using $NewSessionTicket$T13NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$T13NewSessionTicketMessage;
using $PskKeyExchangeModesExtension$PskKeyExchangeMode = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeMode;
using $PskKeyExchangeModesExtension$PskKeyExchangeModesSpec = ::sun::security::ssl::PskKeyExchangeModesExtension$PskKeyExchangeModesSpec;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SessionId = ::sun::security::ssl::SessionId;
using $SessionTicketExtension$SessionTicketSpec = ::sun::security::ssl::SessionTicketExtension$SessionTicketSpec;

namespace sun {
	namespace security {
		namespace ssl {

void NewSessionTicket$T13NewSessionTicketProducer::init$() {
}

$bytes* NewSessionTicket$T13NewSessionTicketProducer::produce($ConnectionContext* context) {
	$useLocalObjectStack();
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	if ($nc($nc(hc)->conContext)->hasDelegatedFinished) {
		hc->conContext->hasDelegatedFinished = false;
		hc->conContext->needHandshakeFinishedStatus = true;
	}
	if ($instanceOf($ServerHandshakeContext, hc)) {
		if (!$nc(hc->handshakeSession)->isRejoinable()) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("No session ticket produced: session is not resumable"_s, $$new($ObjectArray, 0));
			}
			return nullptr;
		}
		$init($SSLExtension);
		$var($PskKeyExchangeModesExtension$PskKeyExchangeModesSpec, pkemSpec, $cast($PskKeyExchangeModesExtension$PskKeyExchangeModesSpec, $nc(hc->handshakeExtensions)->get($SSLExtension::PSK_KEY_EXCHANGE_MODES)));
		$init($PskKeyExchangeModesExtension$PskKeyExchangeMode);
		if (pkemSpec == nullptr || !pkemSpec->contains($PskKeyExchangeModesExtension$PskKeyExchangeMode::PSK_DHE_KE)) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("No session ticket produced: client does not support psk_dhe_ke"_s, $$new($ObjectArray, 0));
			}
			return nullptr;
		}
	} else if (!$nc(hc->handshakeSession)->isPSKable()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("No session ticket produced: No session ticket allowed in this session"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($SSLSessionContextImpl, sessionCache, $cast($SSLSessionContextImpl, $nc(hc->sslContext)->engineGetServerSessionContext()));
	$var($SessionId, newId, $new($SessionId, true, $(hc->sslContext->getSecureRandom())));
	$var($SecretKey, resumptionMasterSecret, $nc(hc->handshakeSession)->getResumptionMasterSecret());
	if (resumptionMasterSecret == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("No session ticket produced: no resumption secret"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($BigInteger, nonce, hc->handshakeSession->incrTicketNonceCounter());
	$var($bytes, nonceArr, $nc(nonce)->toByteArray());
	$var($SecretKey, psk, $NewSessionTicket::derivePreSharedKey($nc(hc->negotiatedCipherSuite)->hashAlg, resumptionMasterSecret, nonceArr));
	int32_t sessionTimeoutSeconds = $nc(sessionCache)->getSessionTimeout();
	if (sessionTimeoutSeconds > 0x00093a80) {
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
	if (hc->statelessResumption && hc->handshakeSession->isStatelessable()) {
		$var($SecureRandom, var$0, hc->sslContext->getSecureRandom());
		$assign(nstm, $new($NewSessionTicket$T13NewSessionTicketMessage, hc, sessionTimeoutSeconds, var$0, nonceArr, $($$new($SessionTicketExtension$SessionTicketSpec)->encrypt(hc, sessionCopy))));
		if (!nstm->isValid()) {
			hc->statelessResumption = false;
		} else {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::fine("Produced NewSessionTicket stateless post-handshake message"_s, $$new($ObjectArray, {nstm}));
			}
		}
	}
	if (!hc->statelessResumption || !hc->handshakeSession->isStatelessable()) {
		$var($SecureRandom, var$1, hc->sslContext->getSecureRandom());
		$assign(nstm, $new($NewSessionTicket$T13NewSessionTicketMessage, hc, sessionTimeoutSeconds, var$1, nonceArr, $(newId->getId())));
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Produced NewSessionTicket post-handshake message"_s, $$new($ObjectArray, {nstm}));
		}
		hc->handshakeSession->addChild(sessionCopy);
		sessionCopy->setTicketAgeAdd(nstm->getTicketAgeAdd());
		sessionCache->put(sessionCopy);
	}
	if (nstm != nullptr) {
		nstm->write(hc->handshakeOutput);
		$nc(hc->handshakeOutput)->flush();
		if (hc->conContext->needHandshakeFinishedStatus) {
			hc->conContext->needHandshakeFinishedStatus = false;
		}
	}
	hc->conContext->finishPostHandshake();
	return nullptr;
}

NewSessionTicket$T13NewSessionTicketProducer::NewSessionTicket$T13NewSessionTicketProducer() {
}

$Class* NewSessionTicket$T13NewSessionTicketProducer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NewSessionTicket$T13NewSessionTicketProducer, init$, void)},
		{"produce", "(Lsun/security/ssl/ConnectionContext;)[B", nullptr, $PUBLIC, $virtualMethod(NewSessionTicket$T13NewSessionTicketProducer, produce, $bytes*, $ConnectionContext*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.NewSessionTicket$T13NewSessionTicketProducer", "sun.security.ssl.NewSessionTicket", "T13NewSessionTicketProducer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.NewSessionTicket$T13NewSessionTicketProducer",
		"java.lang.Object",
		"sun.security.ssl.SSLProducer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.NewSessionTicket"
	};
	$loadClass(NewSessionTicket$T13NewSessionTicketProducer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NewSessionTicket$T13NewSessionTicketProducer);
	});
	return class$;
}

$Class* NewSessionTicket$T13NewSessionTicketProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun