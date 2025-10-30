#include <sun/security/ssl/NewSessionTicket$T12NewSessionTicketConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/NewSessionTicket$NewSessionTicketMessage.h>
#include <sun/security/ssl/NewSessionTicket$T12NewSessionTicketMessage.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <jcpp.h>

#undef NEW_SESSION_TICKET

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
using $NewSessionTicket$NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage;
using $NewSessionTicket$T12NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$T12NewSessionTicketMessage;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _NewSessionTicket$T12NewSessionTicketConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NewSessionTicket$T12NewSessionTicketConsumer::*)()>(&NewSessionTicket$T12NewSessionTicketConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _NewSessionTicket$T12NewSessionTicketConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.NewSessionTicket$T12NewSessionTicketConsumer", "sun.security.ssl.NewSessionTicket", "T12NewSessionTicketConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NewSessionTicket$T12NewSessionTicketConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.NewSessionTicket$T12NewSessionTicketConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_NewSessionTicket$T12NewSessionTicketConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_NewSessionTicket$T12NewSessionTicketConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.NewSessionTicket"
};

$Object* allocate$NewSessionTicket$T12NewSessionTicketConsumer($Class* clazz) {
	return $of($alloc(NewSessionTicket$T12NewSessionTicketConsumer));
}

void NewSessionTicket$T12NewSessionTicketConsumer::init$() {
}

void NewSessionTicket$T12NewSessionTicketConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($HandshakeContext, hc, $cast($HandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(hc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::NEW_SESSION_TICKET->id)));
	$var($NewSessionTicket$NewSessionTicketMessage, nstm, $new($NewSessionTicket$T12NewSessionTicketMessage, hc, message));
	if ($nc(nstm->ticket)->length == 0) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("NewSessionTicket ticket was empty"_s, $$new($ObjectArray, 0));
		}
		return;
	}
	if (nstm->ticketLifetime <= 0 || nstm->ticketLifetime > 0x00093A80) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine($$str({"Discarding NewSessionTicket with lifetime "_s, $$str(nstm->ticketLifetime)}), $$new($ObjectArray, {$of(nstm)}));
		}
		return;
	}
	$var($SSLSessionContextImpl, sessionCache, $cast($SSLSessionContextImpl, $nc(hc->sslContext)->engineGetClientSessionContext()));
	if ($nc(sessionCache)->getSessionTimeout() > 0x00093A80) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Session cache lifetime is too long. Discarding ticket."_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$nc(hc->handshakeSession)->setPskIdentity(nstm->ticket);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine($$str({"Consuming NewSessionTicket\n"_s, $($of(nstm)->toString())}), $$new($ObjectArray, 0));
	}
}

NewSessionTicket$T12NewSessionTicketConsumer::NewSessionTicket$T12NewSessionTicketConsumer() {
}

$Class* NewSessionTicket$T12NewSessionTicketConsumer::load$($String* name, bool initialize) {
	$loadClass(NewSessionTicket$T12NewSessionTicketConsumer, name, initialize, &_NewSessionTicket$T12NewSessionTicketConsumer_ClassInfo_, allocate$NewSessionTicket$T12NewSessionTicketConsumer);
	return class$;
}

$Class* NewSessionTicket$T12NewSessionTicketConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun