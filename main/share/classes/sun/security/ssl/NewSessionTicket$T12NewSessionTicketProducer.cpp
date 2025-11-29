#include <sun/security/ssl/NewSessionTicket$T12NewSessionTicketProducer.h>

#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/NewSessionTicket$NewSessionTicketMessage.h>
#include <sun/security/ssl/NewSessionTicket$T12NewSessionTicketMessage.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SessionId.h>
#include <sun/security/ssl/SessionTicketExtension$SessionTicketSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $NewSessionTicket$NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage;
using $NewSessionTicket$T12NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$T12NewSessionTicketMessage;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SessionId = ::sun::security::ssl::SessionId;
using $SessionTicketExtension$SessionTicketSpec = ::sun::security::ssl::SessionTicketExtension$SessionTicketSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _NewSessionTicket$T12NewSessionTicketProducer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NewSessionTicket$T12NewSessionTicketProducer::*)()>(&NewSessionTicket$T12NewSessionTicketProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _NewSessionTicket$T12NewSessionTicketProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.NewSessionTicket$T12NewSessionTicketProducer", "sun.security.ssl.NewSessionTicket", "T12NewSessionTicketProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NewSessionTicket$T12NewSessionTicketProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.NewSessionTicket$T12NewSessionTicketProducer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_NewSessionTicket$T12NewSessionTicketProducer_MethodInfo_,
	nullptr,
	nullptr,
	_NewSessionTicket$T12NewSessionTicketProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.NewSessionTicket"
};

$Object* allocate$NewSessionTicket$T12NewSessionTicketProducer($Class* clazz) {
	return $of($alloc(NewSessionTicket$T12NewSessionTicketProducer));
}

void NewSessionTicket$T12NewSessionTicketProducer::init$() {
}

$bytes* NewSessionTicket$T12NewSessionTicketProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if (!$nc($nc(shc)->handshakeSession)->isRejoinable()) {
		return nullptr;
	}
	$var($SessionId, newId, $nc($nc(shc)->handshakeSession)->getSessionId());
	$var($SSLSessionContextImpl, sessionCache, $cast($SSLSessionContextImpl, $nc(shc->sslContext)->engineGetServerSessionContext()));
	int32_t sessionTimeoutSeconds = $nc(sessionCache)->getSessionTimeout();
	if (sessionTimeoutSeconds > 0x00093A80) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Session timeout is too long. No ticket sent."_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($SSLSessionImpl, sessionCopy, $new($SSLSessionImpl, shc->handshakeSession, newId));
	sessionCopy->setPskIdentity($($nc(newId)->getId()));
	$var($NewSessionTicket$NewSessionTicketMessage, nstm, $new($NewSessionTicket$T12NewSessionTicketMessage, shc, sessionTimeoutSeconds, $($$new($SessionTicketExtension$SessionTicketSpec)->encrypt(shc, sessionCopy))));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Produced NewSessionTicket stateless handshake message"_s, $$new($ObjectArray, {$of(nstm)}));
	}
	nstm->write(shc->handshakeOutput);
	$nc(shc->handshakeOutput)->flush();
	return nullptr;
}

NewSessionTicket$T12NewSessionTicketProducer::NewSessionTicket$T12NewSessionTicketProducer() {
}

$Class* NewSessionTicket$T12NewSessionTicketProducer::load$($String* name, bool initialize) {
	$loadClass(NewSessionTicket$T12NewSessionTicketProducer, name, initialize, &_NewSessionTicket$T12NewSessionTicketProducer_ClassInfo_, allocate$NewSessionTicket$T12NewSessionTicketProducer);
	return class$;
}

$Class* NewSessionTicket$T12NewSessionTicketProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun