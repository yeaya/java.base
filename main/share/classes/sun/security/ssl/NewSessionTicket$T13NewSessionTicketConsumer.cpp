#include <sun/security/ssl/NewSessionTicket$T13NewSessionTicketConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/security/SecureRandom.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/NewSessionTicket$NewSessionTicketMessage.h>
#include <sun/security/ssl/NewSessionTicket$T13NewSessionTicketMessage.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SessionId.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SecretKey = ::javax::crypto::SecretKey;
using $CipherSuite$HashAlg = ::sun::security::ssl::CipherSuite$HashAlg;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
using $NewSessionTicket$NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage;
using $NewSessionTicket$T13NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$T13NewSessionTicketMessage;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SessionId = ::sun::security::ssl::SessionId;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _NewSessionTicket$T13NewSessionTicketConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NewSessionTicket$T13NewSessionTicketConsumer::*)()>(&NewSessionTicket$T13NewSessionTicketConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _NewSessionTicket$T13NewSessionTicketConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.NewSessionTicket$T13NewSessionTicketConsumer", "sun.security.ssl.NewSessionTicket", "T13NewSessionTicketConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NewSessionTicket$T13NewSessionTicketConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.NewSessionTicket$T13NewSessionTicketConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_NewSessionTicket$T13NewSessionTicketConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_NewSessionTicket$T13NewSessionTicketConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.NewSessionTicket"
};

$Object* allocate$NewSessionTicket$T13NewSessionTicketConsumer($Class* clazz) {
	return $of($alloc(NewSessionTicket$T13NewSessionTicketConsumer));
}

void NewSessionTicket$T13NewSessionTicketConsumer::init$() {
}

void NewSessionTicket$T13NewSessionTicketConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	$var($NewSessionTicket$NewSessionTicketMessage, nstm, $new($NewSessionTicket$T13NewSessionTicketMessage, hc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming NewSessionTicket message"_s, $$new($ObjectArray, {$of(nstm)}));
	}
	$var($SSLSessionContextImpl, sessionCache, $cast($SSLSessionContextImpl, $nc($nc(hc)->sslContext)->engineGetClientSessionContext()));
	if (nstm->ticketLifetime <= 0 || nstm->ticketLifetime > 0x00093A80) {
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Discarding NewSessionTicket with lifetime "_s, $$str(nstm->ticketLifetime)}), $$new($ObjectArray, {$of(nstm)}));
		}
		$nc(sessionCache)->remove($($nc(hc->handshakeSession)->getSessionId()));
		return;
	}
	if ($nc(sessionCache)->getSessionTimeout() > 0x00093A80) {
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Session cache lifetime is too long. Discarding ticket."_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($SSLSessionImpl, sessionToSave, $nc(hc->conContext)->conSession);
	$var($SecretKey, resumptionMasterSecret, $nc(sessionToSave)->getResumptionMasterSecret());
	if (resumptionMasterSecret == nullptr) {
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Session has no resumption master secret. Ignoring ticket."_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($CipherSuite$HashAlg, var$0, $nc($(sessionToSave->getSuite()))->hashAlg);
	$var($SecretKey, var$1, resumptionMasterSecret);
	$var($SecretKey, psk, $NewSessionTicket::derivePreSharedKey(var$0, var$1, $(nstm->getTicketNonce())));
	$var($SessionId, newId, $new($SessionId, true, $($nc(hc->sslContext)->getSecureRandom())));
	$var($SSLSessionImpl, sessionCopy, $new($SSLSessionImpl, sessionToSave, newId));
	sessionToSave->addChild(sessionCopy);
	sessionCopy->setPreSharedKey(psk);
	sessionCopy->setTicketAgeAdd(nstm->getTicketAgeAdd());
	sessionCopy->setPskIdentity(nstm->ticket);
	$nc(sessionCache)->put(sessionCopy);
	$nc(hc->conContext)->finishPostHandshake();
}

NewSessionTicket$T13NewSessionTicketConsumer::NewSessionTicket$T13NewSessionTicketConsumer() {
}

$Class* NewSessionTicket$T13NewSessionTicketConsumer::load$($String* name, bool initialize) {
	$loadClass(NewSessionTicket$T13NewSessionTicketConsumer, name, initialize, &_NewSessionTicket$T13NewSessionTicketConsumer_ClassInfo_, allocate$NewSessionTicket$T13NewSessionTicketConsumer);
	return class$;
}

$Class* NewSessionTicket$T13NewSessionTicketConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun