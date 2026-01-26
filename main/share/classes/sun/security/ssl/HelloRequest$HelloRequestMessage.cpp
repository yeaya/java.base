#include <sun/security/ssl/HelloRequest$HelloRequestMessage.h>

#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/HelloRequest.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef HELLO_REQUEST
#undef ILLEGAL_PARAMETER

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _HelloRequest$HelloRequestMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(HelloRequest$HelloRequestMessage, init$, void, $HandshakeContext*)},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(HelloRequest$HelloRequestMessage, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC, $virtualMethod(HelloRequest$HelloRequestMessage, handshakeType, $SSLHandshake*)},
	{"messageLength", "()I", nullptr, $PUBLIC, $virtualMethod(HelloRequest$HelloRequestMessage, messageLength, int32_t)},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, $virtualMethod(HelloRequest$HelloRequestMessage, send, void, $HandshakeOutStream*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HelloRequest$HelloRequestMessage, toString, $String*)},
	{}
};

$InnerClassInfo _HelloRequest$HelloRequestMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloRequest$HelloRequestMessage", "sun.security.ssl.HelloRequest", "HelloRequestMessage", $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _HelloRequest$HelloRequestMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HelloRequest$HelloRequestMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	nullptr,
	_HelloRequest$HelloRequestMessage_MethodInfo_,
	nullptr,
	nullptr,
	_HelloRequest$HelloRequestMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloRequest"
};

$Object* allocate$HelloRequest$HelloRequestMessage($Class* clazz) {
	return $of($alloc(HelloRequest$HelloRequestMessage));
}

void HelloRequest$HelloRequestMessage::init$($HandshakeContext* handshakeContext) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
}

void HelloRequest$HelloRequestMessage::init$($HandshakeContext* handshakeContext, $ByteBuffer* m) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	if ($nc(m)->hasRemaining()) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Error parsing HelloRequest message: not empty"_s)));
	}
}

$SSLHandshake* HelloRequest$HelloRequestMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::HELLO_REQUEST;
}

int32_t HelloRequest$HelloRequestMessage::messageLength() {
	return 0;
}

void HelloRequest$HelloRequestMessage::send($HandshakeOutStream* s) {
}

$String* HelloRequest$HelloRequestMessage::toString() {
	return "<empty>"_s;
}

HelloRequest$HelloRequestMessage::HelloRequest$HelloRequestMessage() {
}

$Class* HelloRequest$HelloRequestMessage::load$($String* name, bool initialize) {
	$loadClass(HelloRequest$HelloRequestMessage, name, initialize, &_HelloRequest$HelloRequestMessage_ClassInfo_, allocate$HelloRequest$HelloRequestMessage);
	return class$;
}

$Class* HelloRequest$HelloRequestMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun