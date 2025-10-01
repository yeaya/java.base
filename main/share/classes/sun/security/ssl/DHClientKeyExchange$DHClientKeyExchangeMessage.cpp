#include <sun/security/ssl/DHClientKeyExchange$DHClientKeyExchangeMessage.h>

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
#include <java/math/BigInteger.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/crypto/interfaces/DHPublicKey.h>
#include <javax/crypto/spec/DHParameterSpec.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/DHClientKeyExchange.h>
#include <sun/security/ssl/DHKeyExchange$DHEPossession.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLPossession.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef CLIENT_KEY_EXCHANGE
#undef ENGLISH
#undef HANDSHAKE_FAILURE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $DHKey = ::javax::crypto::interfaces::DHKey;
using $DHPublicKey = ::javax::crypto::interfaces::DHPublicKey;
using $DHParameterSpec = ::javax::crypto::spec::DHParameterSpec;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $DHClientKeyExchange = ::sun::security::ssl::DHClientKeyExchange;
using $DHKeyExchange$DHEPossession = ::sun::security::ssl::DHKeyExchange$DHEPossession;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $Record = ::sun::security::ssl::Record;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DHClientKeyExchange$DHClientKeyExchangeMessage_FieldInfo_[] = {
	{"y", "[B", nullptr, $PRIVATE | $FINAL, $field(DHClientKeyExchange$DHClientKeyExchangeMessage, y)},
	{}
};

$MethodInfo _DHClientKeyExchange$DHClientKeyExchangeMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(static_cast<void(DHClientKeyExchange$DHClientKeyExchangeMessage::*)($HandshakeContext*)>(&DHClientKeyExchange$DHClientKeyExchangeMessage::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(DHClientKeyExchange$DHClientKeyExchangeMessage::*)($HandshakeContext*,$ByteBuffer*)>(&DHClientKeyExchange$DHClientKeyExchangeMessage::init$)), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"messageLength", "()I", nullptr, $PUBLIC},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DHClientKeyExchange$DHClientKeyExchangeMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeMessage", "sun.security.ssl.DHClientKeyExchange", "DHClientKeyExchangeMessage", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DHClientKeyExchange$DHClientKeyExchangeMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DHClientKeyExchange$DHClientKeyExchangeMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	_DHClientKeyExchange$DHClientKeyExchangeMessage_FieldInfo_,
	_DHClientKeyExchange$DHClientKeyExchangeMessage_MethodInfo_,
	nullptr,
	nullptr,
	_DHClientKeyExchange$DHClientKeyExchangeMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DHClientKeyExchange"
};

$Object* allocate$DHClientKeyExchange$DHClientKeyExchangeMessage($Class* clazz) {
	return $of($alloc(DHClientKeyExchange$DHClientKeyExchangeMessage));
}

void DHClientKeyExchange$DHClientKeyExchangeMessage::init$($HandshakeContext* handshakeContext) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, handshakeContext));
	$var($DHKeyExchange$DHEPossession, dhePossession, nullptr);
	{
		$var($Iterator, i$, $nc($nc(chc)->handshakePossessions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SSLPossession, possession, $cast($SSLPossession, i$->next()));
			{
				if ($instanceOf($DHKeyExchange$DHEPossession, possession)) {
					$assign(dhePossession, $cast($DHKeyExchange$DHEPossession, possession));
					break;
				}
			}
		}
	}
	if (dhePossession == nullptr) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "No DHE credentials negotiated for client key exchange"_s)));
	}
	$var($DHPublicKey, publicKey, $nc(dhePossession)->publicKey);
	$var($DHParameterSpec, params, $nc(publicKey)->getParams());
	$set(this, y, $Utilities::toByteArray($(publicKey->getY())));
}

void DHClientKeyExchange$DHClientKeyExchangeMessage::init$($HandshakeContext* handshakeContext, $ByteBuffer* m) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, handshakeContext));
	if ($nc(m)->remaining() < 3) {
		$init($Alert);
		$throw($($nc($nc(shc)->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Invalid DH ClientKeyExchange message: insufficient data"_s)));
	}
	$set(this, y, $Record::getBytes16(m));
	if ($nc(m)->hasRemaining()) {
		$init($Alert);
		$throw($($nc($nc(shc)->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Invalid DH ClientKeyExchange message: unknown extra data"_s)));
	}
}

$SSLHandshake* DHClientKeyExchange$DHClientKeyExchangeMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::CLIENT_KEY_EXCHANGE;
}

int32_t DHClientKeyExchange$DHClientKeyExchangeMessage::messageLength() {
	return $nc(this->y)->length + 2;
}

void DHClientKeyExchange$DHClientKeyExchangeMessage::send($HandshakeOutStream* hos) {
	$nc(hos)->putBytes16(this->y);
}

$String* DHClientKeyExchange$DHClientKeyExchangeMessage::toString() {
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"DH ClientKeyExchange\": \'{\'\n  \"parameters\": \'{\'\n    \"dh_Yc\": \'{\'\n{0}\n    \'}\',\n  \'}\'\n\'}\'"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($ObjectArray, messageFields, $new($ObjectArray, {$($of($Utilities::indent($(hexEncoder->encodeBuffer(this->y)), "      "_s)))}));
	return messageFormat->format(messageFields);
}

DHClientKeyExchange$DHClientKeyExchangeMessage::DHClientKeyExchange$DHClientKeyExchangeMessage() {
}

$Class* DHClientKeyExchange$DHClientKeyExchangeMessage::load$($String* name, bool initialize) {
	$loadClass(DHClientKeyExchange$DHClientKeyExchangeMessage, name, initialize, &_DHClientKeyExchange$DHClientKeyExchangeMessage_ClassInfo_, allocate$DHClientKeyExchange$DHClientKeyExchangeMessage);
	return class$;
}

$Class* DHClientKeyExchange$DHClientKeyExchangeMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun