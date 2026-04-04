#include <sun/security/ssl/NewSessionTicket$NewSessionTicketMessage.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef ILLEGAL_PARAMETER
#undef NEW_SESSION_TICKET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

void NewSessionTicket$NewSessionTicketMessage::init$($HandshakeContext* context) {
	$SSLHandshake$HandshakeMessage::init$(context);
	$set(this, ticket, $new($bytes, 0));
}

$SSLHandshake* NewSessionTicket$NewSessionTicketMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::NEW_SESSION_TICKET;
}

int32_t NewSessionTicket$NewSessionTicketMessage::getTicketAgeAdd() {
	$init($Alert);
	$throw($($nc($nc(this->handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "TicketAgeAdd not part of RFC 5077."_s)));
	$shouldNotReachHere();
}

$bytes* NewSessionTicket$NewSessionTicketMessage::getTicketNonce() {
	$init($Alert);
	$throw($($nc($nc(this->handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "TicketNonce not part of RFC 5077."_s)));
	$shouldNotReachHere();
}

bool NewSessionTicket$NewSessionTicketMessage::isValid() {
	return ($nc(this->ticket)->length > 0);
}

NewSessionTicket$NewSessionTicketMessage::NewSessionTicket$NewSessionTicketMessage() {
}

$Class* NewSessionTicket$NewSessionTicketMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ticketLifetime", "I", nullptr, 0, $field(NewSessionTicket$NewSessionTicketMessage, ticketLifetime)},
		{"ticket", "[B", nullptr, 0, $field(NewSessionTicket$NewSessionTicketMessage, ticket)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(NewSessionTicket$NewSessionTicketMessage, init$, void, $HandshakeContext*)},
		{"getTicketAgeAdd", "()I", nullptr, 0, $virtualMethod(NewSessionTicket$NewSessionTicketMessage, getTicketAgeAdd, int32_t), "java.io.IOException"},
		{"getTicketNonce", "()[B", nullptr, 0, $virtualMethod(NewSessionTicket$NewSessionTicketMessage, getTicketNonce, $bytes*), "java.io.IOException"},
		{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC, $virtualMethod(NewSessionTicket$NewSessionTicketMessage, handshakeType, $SSLHandshake*)},
		{"isValid", "()Z", nullptr, 0, $virtualMethod(NewSessionTicket$NewSessionTicketMessage, isValid, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.NewSessionTicket$NewSessionTicketMessage", "sun.security.ssl.NewSessionTicket", "NewSessionTicketMessage", $STATIC | $ABSTRACT},
		{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.security.ssl.NewSessionTicket$NewSessionTicketMessage",
		"sun.security.ssl.SSLHandshake$HandshakeMessage",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.NewSessionTicket"
	};
	$loadClass(NewSessionTicket$NewSessionTicketMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NewSessionTicket$NewSessionTicketMessage);
	});
	return class$;
}

$Class* NewSessionTicket$NewSessionTicketMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun