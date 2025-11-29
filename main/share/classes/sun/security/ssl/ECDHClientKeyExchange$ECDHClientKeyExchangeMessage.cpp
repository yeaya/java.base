#include <sun/security/ssl/ECDHClientKeyExchange$ECDHClientKeyExchangeMessage.h>

#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <sun/security/ssl/ECDHClientKeyExchange.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef CLIENT_KEY_EXCHANGE
#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $Record = ::sun::security::ssl::Record;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_FieldInfo_[] = {
	{"encodedPoint", "[B", nullptr, $PRIVATE | $FINAL, $field(ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, encodedPoint)},
	{}
};

$MethodInfo _ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;[B)V", nullptr, 0, $method(static_cast<void(ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::*)($HandshakeContext*,$bytes*)>(&ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::init$))},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::*)($HandshakeContext*,$ByteBuffer*)>(&ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::init$)), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"messageLength", "()I", nullptr, $PUBLIC},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeMessage", "sun.security.ssl.ECDHClientKeyExchange", "ECDHClientKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ECDHClientKeyExchange$ECDHClientKeyExchangeMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	_ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_FieldInfo_,
	_ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_MethodInfo_,
	nullptr,
	nullptr,
	_ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECDHClientKeyExchange"
};

$Object* allocate$ECDHClientKeyExchange$ECDHClientKeyExchangeMessage($Class* clazz) {
	return $of($alloc(ECDHClientKeyExchange$ECDHClientKeyExchangeMessage));
}

void ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::init$($HandshakeContext* handshakeContext, $bytes* encodedPublicKey) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	$set(this, encodedPoint, encodedPublicKey);
}

void ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::init$($HandshakeContext* handshakeContext, $ByteBuffer* m) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	if ($nc(m)->remaining() != 0) {
		$set(this, encodedPoint, $Record::getBytes8(m));
	} else {
		$set(this, encodedPoint, $new($bytes, 0));
	}
}

$SSLHandshake* ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::CLIENT_KEY_EXCHANGE;
}

int32_t ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::messageLength() {
	if (this->encodedPoint == nullptr || $nc(this->encodedPoint)->length == 0) {
		return 0;
	} else {
		return 1 + $nc(this->encodedPoint)->length;
	}
}

void ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::send($HandshakeOutStream* hos) {
	if (this->encodedPoint != nullptr && $nc(this->encodedPoint)->length != 0) {
		$nc(hos)->putBytes8(this->encodedPoint);
	}
}

$String* ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"ECDH ClientKeyExchange\": \'{\'\n  \"ecdh public\": \'{\'\n{0}\n  \'}\',\n\'}\'"_s, $Locale::ENGLISH));
	if (this->encodedPoint == nullptr || $nc(this->encodedPoint)->length == 0) {
		$var($ObjectArray, messageFields, $new($ObjectArray, {$of("    <implicit>"_s)}));
		return messageFormat->format(messageFields);
	} else {
		$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
		$var($ObjectArray, messageFields, $new($ObjectArray, {$($of($Utilities::indent($(hexEncoder->encodeBuffer(this->encodedPoint)), "    "_s)))}));
		return messageFormat->format(messageFields);
	}
}

ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::ECDHClientKeyExchange$ECDHClientKeyExchangeMessage() {
}

$Class* ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::load$($String* name, bool initialize) {
	$loadClass(ECDHClientKeyExchange$ECDHClientKeyExchangeMessage, name, initialize, &_ECDHClientKeyExchange$ECDHClientKeyExchangeMessage_ClassInfo_, allocate$ECDHClientKeyExchange$ECDHClientKeyExchangeMessage);
	return class$;
}

$Class* ECDHClientKeyExchange$ECDHClientKeyExchangeMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun