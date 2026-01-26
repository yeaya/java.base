#include <sun/security/ssl/ClientHello$D13ClientHelloConsumer.h>

#include <java/lang/UnsupportedOperationException.h>
#include <sun/security/ssl/ClientHello.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _ClientHello$D13ClientHelloConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ClientHello$D13ClientHelloConsumer, init$, void)},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(ClientHello$D13ClientHelloConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ClientHello$D13ClientHelloConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.ClientHello$D13ClientHelloConsumer", "sun.security.ssl.ClientHello", "D13ClientHelloConsumer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ClientHello$D13ClientHelloConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ClientHello$D13ClientHelloConsumer",
	"java.lang.Object",
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	_ClientHello$D13ClientHelloConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_ClientHello$D13ClientHelloConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ClientHello"
};

$Object* allocate$ClientHello$D13ClientHelloConsumer($Class* clazz) {
	return $of($alloc(ClientHello$D13ClientHelloConsumer));
}

void ClientHello$D13ClientHelloConsumer::init$() {
}

void ClientHello$D13ClientHelloConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

ClientHello$D13ClientHelloConsumer::ClientHello$D13ClientHelloConsumer() {
}

$Class* ClientHello$D13ClientHelloConsumer::load$($String* name, bool initialize) {
	$loadClass(ClientHello$D13ClientHelloConsumer, name, initialize, &_ClientHello$D13ClientHelloConsumer_ClassInfo_, allocate$ClientHello$D13ClientHelloConsumer);
	return class$;
}

$Class* ClientHello$D13ClientHelloConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun