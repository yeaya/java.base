#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ClientHello$ClientHelloMessage.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <sun/security/ssl/HelloVerifyRequest$HelloVerifyRequestMessage.h>
#include <sun/security/ssl/HelloVerifyRequest.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CLIENT_HELLO
#undef HELLO_VERIFY_REQUEST
#undef SERVER_HELLO
#undef UNEXPECTED_MESSAGE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $SSLException = ::javax::net::ssl::SSLException;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ClientHello$ClientHelloMessage = ::sun::security::ssl::ClientHello$ClientHelloMessage;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $HelloVerifyRequest = ::sun::security::ssl::HelloVerifyRequest;
using $HelloVerifyRequest$HelloVerifyRequestMessage = ::sun::security::ssl::HelloVerifyRequest$HelloVerifyRequestMessage;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _HelloVerifyRequest$HelloVerifyRequestConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(HelloVerifyRequest$HelloVerifyRequestConsumer::*)()>(&HelloVerifyRequest$HelloVerifyRequestConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _HelloVerifyRequest$HelloVerifyRequestConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestConsumer", "sun.security.ssl.HelloVerifyRequest", "HelloVerifyRequestConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _HelloVerifyRequest$HelloVerifyRequestConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HelloVerifyRequest$HelloVerifyRequestConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_HelloVerifyRequest$HelloVerifyRequestConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_HelloVerifyRequest$HelloVerifyRequestConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloVerifyRequest"
};

$Object* allocate$HelloVerifyRequest$HelloVerifyRequestConsumer($Class* clazz) {
	return $of($alloc(HelloVerifyRequest$HelloVerifyRequestConsumer));
}

void HelloVerifyRequest$HelloVerifyRequestConsumer::init$() {
}

void HelloVerifyRequest$HelloVerifyRequestConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLHandshake);
	$nc($nc(chc)->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::HELLO_VERIFY_REQUEST->id)));
	if (!$nc(chc->handshakeConsumers)->isEmpty()) {
		$nc(chc->handshakeConsumers)->remove($($Byte::valueOf($SSLHandshake::SERVER_HELLO->id)));
	}
	if (!$nc(chc->handshakeConsumers)->isEmpty()) {
		$init($Alert);
		$throw($($nc(chc->conContext)->fatal($Alert::UNEXPECTED_MESSAGE, "No more message expected before HelloVerifyRequest is processed"_s)));
	}
	$nc(chc->handshakeHash)->finish();
	$var($HelloVerifyRequest$HelloVerifyRequestMessage, hvrm, $new($HelloVerifyRequest$HelloVerifyRequestMessage, static_cast<$HandshakeContext*>(chc), message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming HelloVerifyRequest handshake message"_s, $$new($ObjectArray, {$of(hvrm)}));
	}
	$nc(chc->initialClientHelloMsg)->setHelloCookie(hvrm->cookie);
	$SSLHandshake::CLIENT_HELLO->produce(context, hvrm);
}

HelloVerifyRequest$HelloVerifyRequestConsumer::HelloVerifyRequest$HelloVerifyRequestConsumer() {
}

$Class* HelloVerifyRequest$HelloVerifyRequestConsumer::load$($String* name, bool initialize) {
	$loadClass(HelloVerifyRequest$HelloVerifyRequestConsumer, name, initialize, &_HelloVerifyRequest$HelloVerifyRequestConsumer_ClassInfo_, allocate$HelloVerifyRequest$HelloVerifyRequestConsumer);
	return class$;
}

$Class* HelloVerifyRequest$HelloVerifyRequestConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun