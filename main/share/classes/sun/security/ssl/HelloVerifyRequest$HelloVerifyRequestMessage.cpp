#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestMessage.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/HelloCookieManager.h>
#include <sun/security/ssl/HelloVerifyRequest.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef DTLS10
#undef ENGLISH
#undef HELLO_VERIFY_REQUEST
#undef ILLEGAL_PARAMETER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

void HelloVerifyRequest$HelloVerifyRequestMessage::init$($HandshakeContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$SSLHandshake$HandshakeMessage::init$(context);
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ClientHello$ClientHelloMessage, clientHello, $cast($ClientHello$ClientHelloMessage, message));
	$init($ProtocolVersion);
	$var($HelloCookieManager, hcMgr, $nc($nc(shc)->sslContext)->getHelloCookieManager($ProtocolVersion::DTLS10));
	this->serverVersion = shc->clientHelloVersion;
	$set(this, cookie, $nc(hcMgr)->createCookie(shc, clientHello));
}

void HelloVerifyRequest$HelloVerifyRequestMessage::init$($HandshakeContext* context, $ByteBuffer* m) {
	$useLocalObjectStack();
	$SSLHandshake$HandshakeMessage::init$(context);
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	if ($nc(m)->remaining() < 3) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid HelloVerifyRequest: no sufficient data"_s)));
	}
	int8_t major = m->get();
	int8_t minor = m->get();
	this->serverVersion = ((major & 0xff) << 8) | (minor & 0xff);
	$set(this, cookie, $Record::getBytes8(m));
}

$SSLHandshake* HelloVerifyRequest$HelloVerifyRequestMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::HELLO_VERIFY_REQUEST;
}

int32_t HelloVerifyRequest$HelloVerifyRequestMessage::messageLength() {
	return 3 + $nc(this->cookie)->length;
}

void HelloVerifyRequest$HelloVerifyRequestMessage::send($HandshakeOutStream* hos) {
	$nc(hos)->putInt8((int8_t)(((int32_t)((uint32_t)this->serverVersion >> 8)) & 0xff));
	hos->putInt8((int8_t)(this->serverVersion & 0xff));
	hos->putBytes8(this->cookie);
}

$String* HelloVerifyRequest$HelloVerifyRequestMessage::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"HelloVerifyRequest\": \'{\'\n  \"server version\"      : \"{0}\",\n  \"cookie\"              : \"{1}\",\n\'}\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($ProtocolVersion::nameOf(this->serverVersion)),
		$($Utilities::toHexString(this->cookie))
	}));
	return messageFormat->format(messageFields);
}

HelloVerifyRequest$HelloVerifyRequestMessage::HelloVerifyRequest$HelloVerifyRequestMessage() {
}

$Class* HelloVerifyRequest$HelloVerifyRequestMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serverVersion", "I", nullptr, $FINAL, $field(HelloVerifyRequest$HelloVerifyRequestMessage, serverVersion)},
		{"cookie", "[B", nullptr, $FINAL, $field(HelloVerifyRequest$HelloVerifyRequestMessage, cookie)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, 0, $method(HelloVerifyRequest$HelloVerifyRequestMessage, init$, void, $HandshakeContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(HelloVerifyRequest$HelloVerifyRequestMessage, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC, $virtualMethod(HelloVerifyRequest$HelloVerifyRequestMessage, handshakeType, $SSLHandshake*)},
		{"messageLength", "()I", nullptr, $PUBLIC, $virtualMethod(HelloVerifyRequest$HelloVerifyRequestMessage, messageLength, int32_t)},
		{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, $virtualMethod(HelloVerifyRequest$HelloVerifyRequestMessage, send, void, $HandshakeOutStream*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HelloVerifyRequest$HelloVerifyRequestMessage, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestMessage", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestMessage", $STATIC | $FINAL},
		{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestMessage",
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
		"sun.security.ssl.HelloVerifyRequest"
	};
	$loadClass(HelloVerifyRequest$HelloVerifyRequestMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelloVerifyRequest$HelloVerifyRequestMessage);
	});
	return class$;
}

$Class* HelloVerifyRequest$HelloVerifyRequestMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun