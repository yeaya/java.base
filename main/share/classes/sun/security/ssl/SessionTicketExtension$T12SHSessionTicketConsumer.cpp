#include <sun/security/ssl/SessionTicketExtension$T12SHSessionTicketConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SessionTicketExtension$SessionTicketSpec.h>
#include <sun/security/ssl/SessionTicketExtension.h>
#include <jcpp.h>

#undef SH_SESSION_TICKET

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SessionTicketExtension$SessionTicketSpec = ::sun::security::ssl::SessionTicketExtension$SessionTicketSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SessionTicketExtension$T12SHSessionTicketConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SessionTicketExtension$T12SHSessionTicketConsumer::*)()>(&SessionTicketExtension$T12SHSessionTicketConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SessionTicketExtension$T12SHSessionTicketConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SessionTicketExtension$T12SHSessionTicketConsumer", "sun.security.ssl.SessionTicketExtension", "T12SHSessionTicketConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SessionTicketExtension$T12SHSessionTicketConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SessionTicketExtension$T12SHSessionTicketConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_SessionTicketExtension$T12SHSessionTicketConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_SessionTicketExtension$T12SHSessionTicketConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SessionTicketExtension"
};

$Object* allocate$SessionTicketExtension$T12SHSessionTicketConsumer($Class* clazz) {
	return $of($alloc(SessionTicketExtension$T12SHSessionTicketConsumer));
}

void SessionTicketExtension$T12SHSessionTicketConsumer::init$() {
}

void SessionTicketExtension$T12SHSessionTicketConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::SH_SESSION_TICKET)) {
		chc->statelessResumption = false;
		return;
	}
	if (!$nc(($cast($SSLSessionContextImpl, $($nc($nc(chc)->sslContext)->engineGetClientSessionContext()))))->statelessEnabled()) {
		chc->statelessResumption = false;
		return;
	}
	$var($SessionTicketExtension$SessionTicketSpec, spec, $new($SessionTicketExtension$SessionTicketSpec, static_cast<$HandshakeContext*>(chc), buffer));
	$nc(chc)->statelessResumption = true;
}

SessionTicketExtension$T12SHSessionTicketConsumer::SessionTicketExtension$T12SHSessionTicketConsumer() {
}

$Class* SessionTicketExtension$T12SHSessionTicketConsumer::load$($String* name, bool initialize) {
	$loadClass(SessionTicketExtension$T12SHSessionTicketConsumer, name, initialize, &_SessionTicketExtension$T12SHSessionTicketConsumer_ClassInfo_, allocate$SessionTicketExtension$T12SHSessionTicketConsumer);
	return class$;
}

$Class* SessionTicketExtension$T12SHSessionTicketConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun