#include <sun/security/ssl/RSAClientKeyExchange$RSAClientKeyExchangeMessage.h>

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RSAClientKeyExchange.h>
#include <sun/security/ssl/RSAKeyExchange$RSAPremasterSecret.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef CLIENT_KEY_EXCHANGE
#undef ENGLISH
#undef HANDSHAKE_FAILURE

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $PublicKey = ::java::security::PublicKey;
using $SecureRandom = ::java::security::SecureRandom;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $RSAClientKeyExchange = ::sun::security::ssl::RSAClientKeyExchange;
using $RSAKeyExchange$RSAPremasterSecret = ::sun::security::ssl::RSAKeyExchange$RSAPremasterSecret;
using $Record = ::sun::security::ssl::Record;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _RSAClientKeyExchange$RSAClientKeyExchangeMessage_FieldInfo_[] = {
	{"protocolVersion", "I", nullptr, $FINAL, $field(RSAClientKeyExchange$RSAClientKeyExchangeMessage, protocolVersion)},
	{"useTLS10PlusSpec", "Z", nullptr, $FINAL, $field(RSAClientKeyExchange$RSAClientKeyExchangeMessage, useTLS10PlusSpec)},
	{"encrypted", "[B", nullptr, $FINAL, $field(RSAClientKeyExchange$RSAClientKeyExchangeMessage, encrypted)},
	{}
};

$MethodInfo _RSAClientKeyExchange$RSAClientKeyExchangeMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Lsun/security/ssl/RSAKeyExchange$RSAPremasterSecret;Ljava/security/PublicKey;)V", nullptr, 0, $method(static_cast<void(RSAClientKeyExchange$RSAClientKeyExchangeMessage::*)($HandshakeContext*,$RSAKeyExchange$RSAPremasterSecret*,$PublicKey*)>(&RSAClientKeyExchange$RSAClientKeyExchangeMessage::init$)), "java.security.GeneralSecurityException"},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(RSAClientKeyExchange$RSAClientKeyExchangeMessage::*)($HandshakeContext*,$ByteBuffer*)>(&RSAClientKeyExchange$RSAClientKeyExchangeMessage::init$)), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"messageLength", "()I", nullptr, $PUBLIC},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RSAClientKeyExchange$RSAClientKeyExchangeMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeMessage", "sun.security.ssl.RSAClientKeyExchange", "RSAClientKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RSAClientKeyExchange$RSAClientKeyExchangeMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RSAClientKeyExchange$RSAClientKeyExchangeMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	_RSAClientKeyExchange$RSAClientKeyExchangeMessage_FieldInfo_,
	_RSAClientKeyExchange$RSAClientKeyExchangeMessage_MethodInfo_,
	nullptr,
	nullptr,
	_RSAClientKeyExchange$RSAClientKeyExchangeMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RSAClientKeyExchange"
};

$Object* allocate$RSAClientKeyExchange$RSAClientKeyExchangeMessage($Class* clazz) {
	return $of($alloc(RSAClientKeyExchange$RSAClientKeyExchangeMessage));
}

void RSAClientKeyExchange$RSAClientKeyExchangeMessage::init$($HandshakeContext* context, $RSAKeyExchange$RSAPremasterSecret* premaster, $PublicKey* publicKey) {
	$SSLHandshake$HandshakeMessage::init$(context);
	this->protocolVersion = $nc(context)->clientHelloVersion;
	$set(this, encrypted, $nc(premaster)->getEncoded(publicKey, $($nc(context->sslContext)->getSecureRandom())));
	this->useTLS10PlusSpec = $ProtocolVersion::useTLS10PlusSpec(this->protocolVersion, $nc(context->sslContext)->isDTLS());
}

void RSAClientKeyExchange$RSAClientKeyExchangeMessage::init$($HandshakeContext* context, $ByteBuffer* m) {
	$SSLHandshake$HandshakeMessage::init$(context);
	if ($nc(m)->remaining() < 2) {
		$init($Alert);
		$throw($($nc($nc(context)->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Invalid RSA ClientKeyExchange message: insufficient data"_s)));
	}
	this->protocolVersion = $nc(context)->clientHelloVersion;
	this->useTLS10PlusSpec = $ProtocolVersion::useTLS10PlusSpec(this->protocolVersion, $nc(context->sslContext)->isDTLS());
	if (this->useTLS10PlusSpec) {
		$set(this, encrypted, $Record::getBytes16(m));
	} else {
		$set(this, encrypted, $new($bytes, $nc(m)->remaining()));
		m->get(this->encrypted);
	}
}

$SSLHandshake* RSAClientKeyExchange$RSAClientKeyExchangeMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::CLIENT_KEY_EXCHANGE;
}

int32_t RSAClientKeyExchange$RSAClientKeyExchangeMessage::messageLength() {
	if (this->useTLS10PlusSpec) {
		return $nc(this->encrypted)->length + 2;
	} else {
		return $nc(this->encrypted)->length;
	}
}

void RSAClientKeyExchange$RSAClientKeyExchangeMessage::send($HandshakeOutStream* hos) {
	if (this->useTLS10PlusSpec) {
		$nc(hos)->putBytes16(this->encrypted);
	} else {
		$nc(hos)->write(this->encrypted);
	}
}

$String* RSAClientKeyExchange$RSAClientKeyExchangeMessage::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"RSA ClientKeyExchange\": \'{\'\n  \"client_version\":  {0}\n  \"encncrypted\": \'{\'\n{1}\n  \'}\'\n\'}\'"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($ProtocolVersion::nameOf(this->protocolVersion))),
		$($of($Utilities::indent($(hexEncoder->encodeBuffer(this->encrypted)), "    "_s)))
	}));
	return messageFormat->format(messageFields);
}

RSAClientKeyExchange$RSAClientKeyExchangeMessage::RSAClientKeyExchange$RSAClientKeyExchangeMessage() {
}

$Class* RSAClientKeyExchange$RSAClientKeyExchangeMessage::load$($String* name, bool initialize) {
	$loadClass(RSAClientKeyExchange$RSAClientKeyExchangeMessage, name, initialize, &_RSAClientKeyExchange$RSAClientKeyExchangeMessage_ClassInfo_, allocate$RSAClientKeyExchange$RSAClientKeyExchangeMessage);
	return class$;
}

$Class* RSAClientKeyExchange$RSAClientKeyExchangeMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun