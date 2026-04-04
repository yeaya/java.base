#include <sun/security/ssl/SessionTicketExtension$T12SHSessionTicketConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
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
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SessionTicketExtension$SessionTicketSpec = ::sun::security::ssl::SessionTicketExtension$SessionTicketSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SessionTicketExtension$T12SHSessionTicketConsumer::init$() {
}

void SessionTicketExtension$T12SHSessionTicketConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(chc)->sslConfig)->isAvailable($SSLExtension::SH_SESSION_TICKET)) {
		chc->statelessResumption = false;
		return;
	}
	if (!$$sure($SSLSessionContextImpl, $nc(chc->sslContext)->engineGetClientSessionContext())->statelessEnabled()) {
		chc->statelessResumption = false;
		return;
	}
	$var($SessionTicketExtension$SessionTicketSpec, spec, $new($SessionTicketExtension$SessionTicketSpec, chc, buffer));
	chc->statelessResumption = true;
}

SessionTicketExtension$T12SHSessionTicketConsumer::SessionTicketExtension$T12SHSessionTicketConsumer() {
}

$Class* SessionTicketExtension$T12SHSessionTicketConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SessionTicketExtension$T12SHSessionTicketConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(SessionTicketExtension$T12SHSessionTicketConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SessionTicketExtension$T12SHSessionTicketConsumer", "sun.security.ssl.SessionTicketExtension", "T12SHSessionTicketConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SessionTicketExtension$T12SHSessionTicketConsumer",
		"java.lang.Object",
		"sun.security.ssl.SSLExtension$ExtensionConsumer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SessionTicketExtension"
	};
	$loadClass(SessionTicketExtension$T12SHSessionTicketConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SessionTicketExtension$T12SHSessionTicketConsumer);
	});
	return class$;
}

$Class* SessionTicketExtension$T12SHSessionTicketConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun