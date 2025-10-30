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
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $HelloVerifyRequest = ::sun::security::ssl::HelloVerifyRequest;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $Record = ::sun::security::ssl::Record;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _HelloVerifyRequest$HelloVerifyRequestMessage_FieldInfo_[] = {
	{"serverVersion", "I", nullptr, $FINAL, $field(HelloVerifyRequest$HelloVerifyRequestMessage, serverVersion)},
	{"cookie", "[B", nullptr, $FINAL, $field(HelloVerifyRequest$HelloVerifyRequestMessage, cookie)},
	{}
};

$MethodInfo _HelloVerifyRequest$HelloVerifyRequestMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, 0, $method(static_cast<void(HelloVerifyRequest$HelloVerifyRequestMessage::*)($HandshakeContext*,$SSLHandshake$HandshakeMessage*)>(&HelloVerifyRequest$HelloVerifyRequestMessage::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(HelloVerifyRequest$HelloVerifyRequestMessage::*)($HandshakeContext*,$ByteBuffer*)>(&HelloVerifyRequest$HelloVerifyRequestMessage::init$)), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"messageLength", "()I", nullptr, $PUBLIC},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HelloVerifyRequest$HelloVerifyRequestMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestMessage", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestMessage", $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _HelloVerifyRequest$HelloVerifyRequestMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	_HelloVerifyRequest$HelloVerifyRequestMessage_FieldInfo_,
	_HelloVerifyRequest$HelloVerifyRequestMessage_MethodInfo_,
	nullptr,
	nullptr,
	_HelloVerifyRequest$HelloVerifyRequestMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloVerifyRequest"
};

$Object* allocate$HelloVerifyRequest$HelloVerifyRequestMessage($Class* clazz) {
	return $of($alloc(HelloVerifyRequest$HelloVerifyRequestMessage));
}

void HelloVerifyRequest$HelloVerifyRequestMessage::init$($HandshakeContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$SSLHandshake$HandshakeMessage::init$(context);
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$var($ClientHello$ClientHelloMessage, clientHello, $cast($ClientHello$ClientHelloMessage, message));
	$init($ProtocolVersion);
	$var($HelloCookieManager, hcMgr, $nc($nc(shc)->sslContext)->getHelloCookieManager($ProtocolVersion::DTLS10));
	this->serverVersion = shc->clientHelloVersion;
	$set(this, cookie, $nc(hcMgr)->createCookie(shc, clientHello));
}

void HelloVerifyRequest$HelloVerifyRequestMessage::init$($HandshakeContext* context, $ByteBuffer* m) {
	$useLocalCurrentObjectStackCache();
	$SSLHandshake$HandshakeMessage::init$(context);
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	if ($nc(m)->remaining() < 3) {
		$init($Alert);
		$throw($($nc($nc(chc)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Invalid HelloVerifyRequest: no sufficient data"_s)));
	}
	int8_t major = $nc(m)->get();
	int8_t minor = m->get();
	this->serverVersion = (((int32_t)(major & (uint32_t)255)) << 8) | ((int32_t)(minor & (uint32_t)255));
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
	$nc(hos)->putInt8((int8_t)((int32_t)(((int32_t)((uint32_t)this->serverVersion >> 8)) & (uint32_t)255)));
	hos->putInt8((int8_t)((int32_t)(this->serverVersion & (uint32_t)255)));
	hos->putBytes8(this->cookie);
}

$String* HelloVerifyRequest$HelloVerifyRequestMessage::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"HelloVerifyRequest\": \'{\'\n  \"server version\"      : \"{0}\",\n  \"cookie\"              : \"{1}\",\n\'}\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($ProtocolVersion::nameOf(this->serverVersion))),
		$($of($Utilities::toHexString(this->cookie)))
	}));
	return messageFormat->format(messageFields);
}

HelloVerifyRequest$HelloVerifyRequestMessage::HelloVerifyRequest$HelloVerifyRequestMessage() {
}

$Class* HelloVerifyRequest$HelloVerifyRequestMessage::load$($String* name, bool initialize) {
	$loadClass(HelloVerifyRequest$HelloVerifyRequestMessage, name, initialize, &_HelloVerifyRequest$HelloVerifyRequestMessage_ClassInfo_, allocate$HelloVerifyRequest$HelloVerifyRequestMessage);
	return class$;
}

$Class* HelloVerifyRequest$HelloVerifyRequestMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun