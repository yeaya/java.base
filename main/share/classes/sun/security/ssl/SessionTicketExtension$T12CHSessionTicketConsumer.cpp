#include <sun/security/ssl/SessionTicketExtension$T12CHSessionTicketConsumer.h>
#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SessionTicketExtension$SessionTicketSpec.h>
#include <sun/security/ssl/SessionTicketExtension.h>
#include <jcpp.h>

#undef CH_SESSION_TICKET

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SessionTicketExtension$SessionTicketSpec = ::sun::security::ssl::SessionTicketExtension$SessionTicketSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SessionTicketExtension$T12CHSessionTicketConsumer::init$() {
}

void SessionTicketExtension$T12CHSessionTicketConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalObjectStack();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_SESSION_TICKET)) {
		return;
	}
	if (shc->statelessResumption) {
		return;
	}
	$var($SSLSessionContextImpl, cache, $cast($SSLSessionContextImpl, $nc(shc->sslContext)->engineGetServerSessionContext()));
	if (!$nc(cache)->statelessEnabled()) {
		return;
	}
	shc->statelessResumption = true;
	if ($nc(buffer)->remaining() == 0) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Client accepts session tickets."_s, $$new($ObjectArray, 0));
		}
		return;
	}
	$var($SessionTicketExtension$SessionTicketSpec, spec, $new($SessionTicketExtension$SessionTicketSpec, shc, buffer));
	$var($ByteBuffer, b, spec->decrypt(shc));
	if (b != nullptr) {
		$set(shc, resumingSession, $new($SSLSessionImpl, shc, b));
		shc->isResumption = true;
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Valid stateless session ticket found"_s, $$new($ObjectArray, 0));
		}
	} else {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Invalid stateless session ticket found"_s, $$new($ObjectArray, 0));
		}
	}
}

SessionTicketExtension$T12CHSessionTicketConsumer::SessionTicketExtension$T12CHSessionTicketConsumer() {
}

$Class* SessionTicketExtension$T12CHSessionTicketConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SessionTicketExtension$T12CHSessionTicketConsumer, init$, void)},
		{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(SessionTicketExtension$T12CHSessionTicketConsumer, consume, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SessionTicketExtension$T12CHSessionTicketConsumer", "sun.security.ssl.SessionTicketExtension", "T12CHSessionTicketConsumer", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SessionTicketExtension$T12CHSessionTicketConsumer",
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
	$loadClass(SessionTicketExtension$T12CHSessionTicketConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SessionTicketExtension$T12CHSessionTicketConsumer);
	});
	return class$;
}

$Class* SessionTicketExtension$T12CHSessionTicketConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun