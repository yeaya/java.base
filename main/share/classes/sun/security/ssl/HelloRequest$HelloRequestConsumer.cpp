#include <sun/security/ssl/HelloRequest$HelloRequestConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/HashMap.h>
#include <javax/net/ssl/SSLException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/HelloRequest$HelloRequestMessage.h>
#include <sun/security/ssl/HelloRequest.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef CLIENT_HELLO
#undef HANDSHAKE_FAILURE

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HashMap = ::java::util::HashMap;
using $Alert = ::sun::security::ssl::Alert;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HelloRequest$HelloRequestMessage = ::sun::security::ssl::HelloRequest$HelloRequestMessage;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _HelloRequest$HelloRequestConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(HelloRequest$HelloRequestConsumer::*)()>(&HelloRequest$HelloRequestConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _HelloRequest$HelloRequestConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.HelloRequest$HelloRequestConsumer", "sun.security.ssl.HelloRequest", "HelloRequestConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _HelloRequest$HelloRequestConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HelloRequest$HelloRequestConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLConsumer",
	nullptr,
	_HelloRequest$HelloRequestConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_HelloRequest$HelloRequestConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HelloRequest"
};

$Object* allocate$HelloRequest$HelloRequestConsumer($Class* clazz) {
	return $of($alloc(HelloRequest$HelloRequestConsumer));
}

void HelloRequest$HelloRequestConsumer::init$() {
}

void HelloRequest$HelloRequestConsumer::consume($ConnectionContext* context, $ByteBuffer* message) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$var($HelloRequest$HelloRequestMessage, hrm, $new($HelloRequest$HelloRequestMessage, chc, message));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Consuming HelloRequest handshake message"_s, $$new($ObjectArray, {$of(hrm)}));
	}
	if (!$nc(chc)->kickstartMessageDelivered) {
		$init($HandshakeContext);
		if (!$nc(chc->conContext)->secureRenegotiation && !$HandshakeContext::allowUnsafeRenegotiation) {
			$init($Alert);
			$throw($($nc(chc->conContext)->fatal($Alert::HANDSHAKE_FAILURE, "Unsafe renegotiation is not allowed"_s)));
		}
		if (!$nc(chc->conContext)->secureRenegotiation) {
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
				$SSLLogger::warning("Continue with insecure renegotiation"_s, $$new($ObjectArray, 0));
			}
		}
		$init($SSLHandshake);
		$nc(chc->handshakeProducers)->put($($Byte::valueOf($SSLHandshake::CLIENT_HELLO->id)), $SSLHandshake::CLIENT_HELLO);
		$SSLHandshake::CLIENT_HELLO->produce(context, hrm);
	} else {
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Ingore HelloRequest, handshaking is in progress"_s, $$new($ObjectArray, 0));
		}
	}
}

HelloRequest$HelloRequestConsumer::HelloRequest$HelloRequestConsumer() {
}

$Class* HelloRequest$HelloRequestConsumer::load$($String* name, bool initialize) {
	$loadClass(HelloRequest$HelloRequestConsumer, name, initialize, &_HelloRequest$HelloRequestConsumer_ClassInfo_, allocate$HelloRequest$HelloRequestConsumer);
	return class$;
}

$Class* HelloRequest$HelloRequestConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun