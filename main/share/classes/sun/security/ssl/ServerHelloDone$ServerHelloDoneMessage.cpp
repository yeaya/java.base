#include <sun/security/ssl/ServerHelloDone$ServerHelloDoneMessage.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeOutStream = ::sun::security::ssl::HandshakeOutStream;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $ServerHelloDone = ::sun::security::ssl::ServerHelloDone;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ServerHelloDone$ServerHelloDoneMessage_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(static_cast<void(ServerHelloDone$ServerHelloDoneMessage::*)($HandshakeContext*)>(&ServerHelloDone$ServerHelloDoneMessage::init$))},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(ServerHelloDone$ServerHelloDoneMessage::*)($HandshakeContext*,$ByteBuffer*)>(&ServerHelloDone$ServerHelloDoneMessage::init$)), "java.io.IOException"},
	{"handshakeType", "()Lsun/security/ssl/SSLHandshake;", nullptr, $PUBLIC},
	{"messageLength", "()I", nullptr, $PUBLIC},
	{"send", "(Lsun/security/ssl/HandshakeOutStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServerHelloDone$ServerHelloDoneMessage_InnerClassesInfo_[] = {
	{"sun.security.ssl.ServerHelloDone$ServerHelloDoneMessage", "sun.security.ssl.ServerHelloDone", "ServerHelloDoneMessage", $STATIC | $FINAL},
	{"sun.security.ssl.SSLHandshake$HandshakeMessage", "sun.security.ssl.SSLHandshake", "HandshakeMessage", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ServerHelloDone$ServerHelloDoneMessage_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ServerHelloDone$ServerHelloDoneMessage",
	"sun.security.ssl.SSLHandshake$HandshakeMessage",
	nullptr,
	nullptr,
	_ServerHelloDone$ServerHelloDoneMessage_MethodInfo_,
	nullptr,
	nullptr,
	_ServerHelloDone$ServerHelloDoneMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ServerHelloDone"
};

$Object* allocate$ServerHelloDone$ServerHelloDoneMessage($Class* clazz) {
	return $of($alloc(ServerHelloDone$ServerHelloDoneMessage));
}

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
	$loadClass(ServerHelloDone$ServerHelloDoneMessage, name, initialize, &_ServerHelloDone$ServerHelloDoneMessage_ClassInfo_, allocate$ServerHelloDone$ServerHelloDoneMessage);
	return class$;
}

$Class* ServerHelloDone$ServerHelloDoneMessage::class$ = nullptr;

		} // ssl
	} // security
} // sun