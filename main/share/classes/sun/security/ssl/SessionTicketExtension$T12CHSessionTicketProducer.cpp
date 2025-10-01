#include <sun/security/ssl/SessionTicketExtension$T12CHSessionTicketProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SessionTicketExtension$SessionTicketSpec.h>
#include <sun/security/ssl/SessionTicketExtension.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroups.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $List = ::java::util::List;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SessionTicketExtension = ::sun::security::ssl::SessionTicketExtension;
using $SessionTicketExtension$SessionTicketSpec = ::sun::security::ssl::SessionTicketExtension$SessionTicketSpec;
using $SignatureScheme = ::sun::security::ssl::SignatureScheme;
using $SupportedGroupsExtension$SupportedGroups = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SessionTicketExtension$T12CHSessionTicketProducer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SessionTicketExtension$T12CHSessionTicketProducer::*)()>(&SessionTicketExtension$T12CHSessionTicketProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SessionTicketExtension$T12CHSessionTicketProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SessionTicketExtension$T12CHSessionTicketProducer", "sun.security.ssl.SessionTicketExtension", "T12CHSessionTicketProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedGroupsExtension$SupportedGroups", "sun.security.ssl.SupportedGroupsExtension", "SupportedGroups", $STATIC},
	{}
};

$ClassInfo _SessionTicketExtension$T12CHSessionTicketProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SessionTicketExtension$T12CHSessionTicketProducer",
	"sun.security.ssl.SupportedGroupsExtension$SupportedGroups",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_SessionTicketExtension$T12CHSessionTicketProducer_MethodInfo_,
	nullptr,
	nullptr,
	_SessionTicketExtension$T12CHSessionTicketProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SessionTicketExtension"
};

$Object* allocate$SessionTicketExtension$T12CHSessionTicketProducer($Class* clazz) {
	return $of($alloc(SessionTicketExtension$T12CHSessionTicketProducer));
}

int32_t SessionTicketExtension$T12CHSessionTicketProducer::hashCode() {
	 return this->$SupportedGroupsExtension$SupportedGroups::hashCode();
}

bool SessionTicketExtension$T12CHSessionTicketProducer::equals(Object$* obj) {
	 return this->$SupportedGroupsExtension$SupportedGroups::equals(obj);
}

$Object* SessionTicketExtension$T12CHSessionTicketProducer::clone() {
	 return this->$SupportedGroupsExtension$SupportedGroups::clone();
}

$String* SessionTicketExtension$T12CHSessionTicketProducer::toString() {
	 return this->$SupportedGroupsExtension$SupportedGroups::toString();
}

void SessionTicketExtension$T12CHSessionTicketProducer::finalize() {
	this->$SupportedGroupsExtension$SupportedGroups::finalize();
}

void SessionTicketExtension$T12CHSessionTicketProducer::init$() {
	$SupportedGroupsExtension$SupportedGroups::init$();
}

$bytes* SessionTicketExtension$T12CHSessionTicketProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	if (!$nc(($cast($SSLSessionContextImpl, $($nc($nc(chc)->sslContext)->engineGetClientSessionContext()))))->statelessEnabled()) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Stateless resumption not supported"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$nc(chc)->statelessResumption = true;
	if (!chc->isResumption || chc->resumingSession == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::fine("Stateless resumption supported"_s, $$new($ObjectArray, 0));
		}
		return $$new($SessionTicketExtension$SessionTicketSpec)->getEncoded();
	}
	if (chc->localSupportedSignAlgs == nullptr) {
		$set(chc, localSupportedSignAlgs, $SignatureScheme::getSupportedAlgorithms(chc->sslConfig, chc->algorithmConstraints, chc->activeProtocols));
	}
	return $nc(chc->resumingSession)->getPskIdentity();
}

SessionTicketExtension$T12CHSessionTicketProducer::SessionTicketExtension$T12CHSessionTicketProducer() {
}

$Class* SessionTicketExtension$T12CHSessionTicketProducer::load$($String* name, bool initialize) {
	$loadClass(SessionTicketExtension$T12CHSessionTicketProducer, name, initialize, &_SessionTicketExtension$T12CHSessionTicketProducer_ClassInfo_, allocate$SessionTicketExtension$T12CHSessionTicketProducer);
	return class$;
}

$Class* SessionTicketExtension$T12CHSessionTicketProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun