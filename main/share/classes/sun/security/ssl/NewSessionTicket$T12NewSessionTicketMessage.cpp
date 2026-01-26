#include <sun/security/ssl/NewSessionTicket$T12NewSessionTicketMessage.h>

#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/NewSessionTicket$NewSessionTicketMessage.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef ENGLISH
#undef ILLEGAL_PARAMETER
#undef NEW_SESSION_TICKET

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $NewSessionTicket$NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage;
using $Record = ::sun::security::ssl::Record;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _NewSessionTicket$T12NewSessionTicketMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;I[B)V", nullptr, 0, $method(NewSessionTicket$T12NewSessionTicketMessage, init$, void, $HandshakeContext*, int32_t, $bytes*)},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(NewSessionTicket$T12NewSessionTicketMessage, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC, $virtualMethod(NewSessionTicket$T12NewSessionTicketMessage, handshakeType, $SSLHandshake*)},
	{"messageLength", "()I", nullptr, $PUBLIC, $virtualMethod(NewSessionTicket$T12NewSessionTicketMessage, messageLength, int32_t)},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, $virtualMethod(NewSessionTicket$T12NewSessionTicketMessage, send, void, $HandshakeOutStream*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NewSessionTicket$T12NewSessionTicketMessage, toString, $String*)},
	{}
};

$InnerClassInfo _NewSessionTicket$T12NewSessionTicketMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.NewSessionTicket$T12NewSessionTicketMessage", "sun.security.ssl.NewSessionTicket", "T12NewSessionTicketMessage", $STATIC | $FINAL},
	{"sun.security.ssl.NewSessionTicket$NewSessionTicketMessage", "sun.security.ssl.NewSessionTicket", "NewSessionTicketMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NewSessionTicket$T12NewSessionTicketMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.NewSessionTicket$T12NewSessionTicketMessage",
	"sun.security.ssl.NewSessionTicket$NewSessionTicketMessage",
	nullptr,
	nullptr,
	_NewSessionTicket$T12NewSessionTicketMessage_MethodInfo_,
	nullptr,
	nullptr,
	_NewSessionTicket$T12NewSessionTicketMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.NewSessionTicket"
};

$Object* allocate$NewSessionTicket$T12NewSessionTicketMessage($Class* clazz) {
	return $of($alloc(NewSessionTicket$T12NewSessionTicketMessage));
}

void NewSessionTicket$T12NewSessionTicketMessage::init$($HandshakeContext* context, int32_t ticketLifetime, $bytes* ticket) {
	$NewSessionTicket$NewSessionTicketMessage::init$(context);
	this->ticketLifetime = ticketLifetime;
	$set(this, ticket, ticket);
}

void NewSessionTicket$T12NewSessionTicketMessage::init$($HandshakeContext* context, $ByteBuffer* m) {
	$NewSessionTicket$NewSessionTicketMessage::init$(context);
	if ($nc(m)->remaining() < 6) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid NewSessionTicket message: insufficient data"_s)));
	}
	this->ticketLifetime = $Record::getInt32(m);
	$set(this, ticket, $Record::getBytes16(m));
}

$SSLHandshake* NewSessionTicket$T12NewSessionTicketMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::NEW_SESSION_TICKET;
}

int32_t NewSessionTicket$T12NewSessionTicketMessage::messageLength() {
	return 4 + 2 + $nc(this->ticket)->length;
}

void NewSessionTicket$T12NewSessionTicketMessage::send($HandshakeOutStream* hos) {
	$nc(hos)->putInt32(this->ticketLifetime);
	hos->putBytes16(this->ticket);
}

$String* NewSessionTicket$T12NewSessionTicketMessage::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"NewSessionTicket\": \'{\'\n  \"ticket_lifetime\"      : \"{0}\",\n  \"ticket\"               : \'{\'\n{1}\n  \'}\'\'}\'"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($Integer::valueOf(this->ticketLifetime))),
		$($of($Utilities::indent($(hexEncoder->encode(this->ticket)), "    "_s)))
	}));
	return messageFormat->format(messageFields);
}

NewSessionTicket$T12NewSessionTicketMessage::NewSessionTicket$T12NewSessionTicketMessage() {
}

$Class* NewSessionTicket$T12NewSessionTicketMessage::load$($String* name, bool initialize) {
	$loadClass(NewSessionTicket$T12NewSessionTicketMessage, name, initialize, &_NewSessionTicket$T12NewSessionTicketMessage_ClassInfo_, allocate$NewSessionTicket$T12NewSessionTicketMessage);
	return class$;
}

$Class* NewSessionTicket$T12NewSessionTicketMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun