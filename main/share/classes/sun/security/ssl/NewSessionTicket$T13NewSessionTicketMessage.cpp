#include <sun/security/ssl/NewSessionTicket$T13NewSessionTicketMessage.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/SecureRandom.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/NewSessionTicket$NewSessionTicketMessage.h>
#include <sun/security/ssl/NewSessionTicket.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLExtensions.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef ENGLISH
#undef ILLEGAL_PARAMETER
#undef NEW_SESSION_TICKET

using $SSLExtensionArray = $Array<::sun::security::ssl::SSLExtension>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SecureRandom = ::java::security::SecureRandom;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $Random = ::java::util::Random;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $NewSessionTicket = ::sun::security::ssl::NewSessionTicket;
using $NewSessionTicket$NewSessionTicketMessage = ::sun::security::ssl::NewSessionTicket$NewSessionTicketMessage;
using $Record = ::sun::security::ssl::Record;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtensions = ::sun::security::ssl::SSLExtensions;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _NewSessionTicket$T13NewSessionTicketMessage_FieldInfo_[] = {
	{"ticketAgeAdd", "I", nullptr, 0, $field(NewSessionTicket$T13NewSessionTicketMessage, ticketAgeAdd)},
	{"ticketNonce", "[B", nullptr, 0, $field(NewSessionTicket$T13NewSessionTicketMessage, ticketNonce)},
	{"extensions", "Lsun/security/ssl/SSLExtensions;", nullptr, 0, $field(NewSessionTicket$T13NewSessionTicketMessage, extensions)},
	{}
};

$MethodInfo _NewSessionTicket$T13NewSessionTicketMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;ILjava/security/SecureRandom;[B[B)V", nullptr, 0, $method(static_cast<void(NewSessionTicket$T13NewSessionTicketMessage::*)($HandshakeContext*,int32_t,$SecureRandom*,$bytes*,$bytes*)>(&NewSessionTicket$T13NewSessionTicketMessage::init$))},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(NewSessionTicket$T13NewSessionTicketMessage::*)($HandshakeContext*,$ByteBuffer*)>(&NewSessionTicket$T13NewSessionTicketMessage::init$)), "java.io.IOException"},
	{"getTicketAgeAdd", "()I", nullptr, 0},
	{"getTicketNonce", "()[B", nullptr, 0},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"messageLength", "()I", nullptr, $PUBLIC},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NewSessionTicket$T13NewSessionTicketMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.NewSessionTicket$T13NewSessionTicketMessage", "sun.security.ssl.NewSessionTicket", "T13NewSessionTicketMessage", $STATIC | $FINAL},
	{"sun.security.ssl.NewSessionTicket$NewSessionTicketMessage", "sun.security.ssl.NewSessionTicket", "NewSessionTicketMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NewSessionTicket$T13NewSessionTicketMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.NewSessionTicket$T13NewSessionTicketMessage",
	"sun.security.ssl.NewSessionTicket$NewSessionTicketMessage",
	nullptr,
	_NewSessionTicket$T13NewSessionTicketMessage_FieldInfo_,
	_NewSessionTicket$T13NewSessionTicketMessage_MethodInfo_,
	nullptr,
	nullptr,
	_NewSessionTicket$T13NewSessionTicketMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.NewSessionTicket"
};

$Object* allocate$NewSessionTicket$T13NewSessionTicketMessage($Class* clazz) {
	return $of($alloc(NewSessionTicket$T13NewSessionTicketMessage));
}

void NewSessionTicket$T13NewSessionTicketMessage::init$($HandshakeContext* context, int32_t ticketLifetime, $SecureRandom* generator, $bytes* ticketNonce, $bytes* ticket) {
	$NewSessionTicket$NewSessionTicketMessage::init$(context);
	this->ticketLifetime = ticketLifetime;
	this->ticketAgeAdd = $nc(generator)->nextInt();
	$set(this, ticketNonce, ticketNonce);
	$set(this, ticket, ticket);
	$set(this, extensions, $new($SSLExtensions, this));
}

void NewSessionTicket$T13NewSessionTicketMessage::init$($HandshakeContext* context, $ByteBuffer* m) {
	$useLocalCurrentObjectStackCache();
	$NewSessionTicket$NewSessionTicketMessage::init$(context);
	if ($nc(m)->remaining() < 14) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid NewSessionTicket message: insufficient data"_s)));
	}
	this->ticketLifetime = $Record::getInt32(m);
	this->ticketAgeAdd = $Record::getInt32(m);
	$set(this, ticketNonce, $Record::getBytes8(m));
	if ($nc(m)->remaining() < 5) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid NewSessionTicket message: insufficient ticket data"_s)));
	}
	$set(this, ticket, $Record::getBytes16(m));
	if ($nc(this->ticket)->length == 0) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("No ticket in the NewSessionTicket handshake message"_s, $$new($ObjectArray, 0));
		}
	}
	if ($nc(m)->remaining() < 2) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid NewSessionTicket message: extra data"_s)));
	}
	$init($SSLHandshake);
	$var($SSLExtensionArray, supportedExtensions, $nc($nc(context)->sslConfig)->getEnabledExtensions($SSLHandshake::NEW_SESSION_TICKET));
	$set(this, extensions, $new($SSLExtensions, this, m, supportedExtensions));
}

$SSLHandshake* NewSessionTicket$T13NewSessionTicketMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::NEW_SESSION_TICKET;
}

int32_t NewSessionTicket$T13NewSessionTicketMessage::getTicketAgeAdd() {
	return this->ticketAgeAdd;
}

$bytes* NewSessionTicket$T13NewSessionTicketMessage::getTicketNonce() {
	return this->ticketNonce;
}

int32_t NewSessionTicket$T13NewSessionTicketMessage::messageLength() {
	int32_t extLen = $nc(this->extensions)->length();
	if (extLen == 0) {
		extLen = 2;
	}
	return 4 + 4 + 1 + $nc(this->ticketNonce)->length + 2 + $nc(this->ticket)->length + extLen;
}

void NewSessionTicket$T13NewSessionTicketMessage::send($HandshakeOutStream* hos) {
	$nc(hos)->putInt32(this->ticketLifetime);
	hos->putInt32(this->ticketAgeAdd);
	hos->putBytes8(this->ticketNonce);
	hos->putBytes16(this->ticket);
	if ($nc(this->extensions)->length() == 0) {
		hos->putInt16(0);
	} else {
		$nc(this->extensions)->send(hos);
	}
}

$String* NewSessionTicket$T13NewSessionTicketMessage::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"NewSessionTicket\": \'{\'\n  \"ticket_lifetime\"      : \"{0}\",\n  \"ticket_age_add\"       : \"{1}\",\n  \"ticket_nonce\"         : \"{2}\",\n  \"ticket\"               : \'{\'\n{3}\n  \'}\'  \"extensions\"           : [\n{4}\n  ]\n\'}\'"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($Integer::valueOf(this->ticketLifetime))),
		$of("<omitted>"_s),
		$($of($Utilities::toHexString(this->ticketNonce))),
		$($of($Utilities::indent($(hexEncoder->encode(this->ticket)), "    "_s))),
		$($of($Utilities::indent($($nc(this->extensions)->toString()), "    "_s)))
	}));
	return messageFormat->format(messageFields);
}

NewSessionTicket$T13NewSessionTicketMessage::NewSessionTicket$T13NewSessionTicketMessage() {
}

$Class* NewSessionTicket$T13NewSessionTicketMessage::load$($String* name, bool initialize) {
	$loadClass(NewSessionTicket$T13NewSessionTicketMessage, name, initialize, &_NewSessionTicket$T13NewSessionTicketMessage_ClassInfo_, allocate$NewSessionTicket$T13NewSessionTicketMessage);
	return class$;
}

$Class* NewSessionTicket$T13NewSessionTicketMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun