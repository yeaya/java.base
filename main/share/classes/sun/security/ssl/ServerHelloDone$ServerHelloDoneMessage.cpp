#include <sun/security/ssl/ServerHelloDone$ServerHelloDoneMessage.h>
#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeOutStream.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/ServerHelloDone.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef ILLEGAL_PARAMETER
#undef SERVER_HELLO_DONE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

void ServerHelloDone$ServerHelloDoneMessage::init$($HandshakeContext* handshakeContext) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
}

void ServerHelloDone$ServerHelloDoneMessage::init$($HandshakeContext* handshakeContext, $ByteBuffer* m) {
	$SSLHandshake$HandshakeMessage::init$(handshakeContext);
	if ($nc(m)->hasRemaining()) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::ILLEGAL_PARAMETER, "Error parsing ServerHelloDone message: not empty"_s)));
	}
}

$SSLHandshake* ServerHelloDone$ServerHelloDoneMessage::handshakeType() {
	$init($SSLHandshake);
	return $SSLHandshake::SERVER_HELLO_DONE;
}

int32_t ServerHelloDone$ServerHelloDoneMessage::messageLength() {
	return 0;
}

void ServerHelloDone$ServerHelloDoneMessage::send($HandshakeOutStream* s) {
}

$String* ServerHelloDone$ServerHelloDoneMessage::toString() {
	return "<empty>"_s;
}

ServerHelloDone$ServerHelloDoneMessage::ServerHelloDone$ServerHelloDoneMessage() {
}

$Class* ServerHelloDone$ServerHelloDoneMessage::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(ServerHelloDone$ServerHelloDoneMessage, init$, void, $HandshakeContext*)},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(ServerHelloDone$ServerHelloDoneMessage, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC, $virtualMethod(ServerHelloDone$ServerHelloDoneMessage, handshakeType, $SSLHandshake*)},
		{"messageLength", "()I", nullptr, $PUBLIC, $virtualMethod(ServerHelloDone$ServerHelloDoneMessage, messageLength, int32_t)},
		{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, $virtualMethod(ServerHelloDone$ServerHelloDoneMessage, send, void, $HandshakeOutStream*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ServerHelloDone$ServerHelloDoneMessage, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ServerHelloDone$ServerHelloDoneMessage", "sun.security.ssl.ServerHelloDone", "ServerHelloDoneMessage", $STATIC | $FINAL},
		{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ServerHelloDone$ServerHelloDoneMessage",
		"sun.security.ssl.SSLHandshake$HandshakeMessage",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.ServerHelloDone"
	};
	$loadClass(ServerHelloDone$ServerHelloDoneMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerHelloDone$ServerHelloDoneMessage);
	});
	return class$;
}

$Class* ServerHelloDone$ServerHelloDoneMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun