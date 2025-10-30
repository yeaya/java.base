#include <sun/security/ssl/SessionTicketExtension$T12CHSessionTicketConsumer.h>

#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/HandshakeContext.h>
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
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLExtension = ::sun::security::ssl::SSLExtension;
using $SSLExtension$ExtensionConsumer = ::sun::security::ssl::SSLExtension$ExtensionConsumer;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SessionTicketExtension = ::sun::security::ssl::SessionTicketExtension;
using $SessionTicketExtension$SessionTicketSpec = ::sun::security::ssl::SessionTicketExtension$SessionTicketSpec;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SessionTicketExtension$T12CHSessionTicketConsumer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SessionTicketExtension$T12CHSessionTicketConsumer::*)()>(&SessionTicketExtension$T12CHSessionTicketConsumer::init$))},
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SessionTicketExtension$T12CHSessionTicketConsumer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SessionTicketExtension$T12CHSessionTicketConsumer", "sun.security.ssl.SessionTicketExtension", "T12CHSessionTicketConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$ExtensionConsumer", "sun.security.ssl.SSLExtension", "ExtensionConsumer", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SessionTicketExtension$T12CHSessionTicketConsumer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SessionTicketExtension$T12CHSessionTicketConsumer",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$ExtensionConsumer",
	nullptr,
	_SessionTicketExtension$T12CHSessionTicketConsumer_MethodInfo_,
	nullptr,
	nullptr,
	_SessionTicketExtension$T12CHSessionTicketConsumer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SessionTicketExtension"
};

$Object* allocate$SessionTicketExtension$T12CHSessionTicketConsumer($Class* clazz) {
	return $of($alloc(SessionTicketExtension$T12CHSessionTicketConsumer));
}

void SessionTicketExtension$T12CHSessionTicketConsumer::init$() {
}

void SessionTicketExtension$T12CHSessionTicketConsumer::consume($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message, $ByteBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$init($SSLExtension);
	if (!$nc($nc(shc)->sslConfig)->isAvailable($SSLExtension::CH_SESSION_TICKET)) {
		return;
	}
	if ($nc(shc)->statelessResumption) {
		return;
	}
	$var($SSLSessionContextImpl, cache, $cast($SSLSessionContextImpl, $nc($nc(shc)->sslContext)->engineGetServerSessionContext()));
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
	$var($SessionTicketExtension$SessionTicketSpec, spec, $new($SessionTicketExtension$SessionTicketSpec, static_cast<$HandshakeContext*>(shc), buffer));
	$var($ByteBuffer, b, spec->decrypt(shc));
	if (b != nullptr) {
		$set(shc, resumingSession, $new($SSLSessionImpl, static_cast<$HandshakeContext*>(shc), b));
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
	$loadClass(SessionTicketExtension$T12CHSessionTicketConsumer, name, initialize, &_SessionTicketExtension$T12CHSessionTicketConsumer_ClassInfo_, allocate$SessionTicketExtension$T12CHSessionTicketConsumer);
	return class$;
}

$Class* SessionTicketExtension$T12CHSessionTicketConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun