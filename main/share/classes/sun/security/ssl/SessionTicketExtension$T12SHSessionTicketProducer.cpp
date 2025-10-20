#include <sun/security/ssl/SessionTicketExtension$T12SHSessionTicketProducer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <sun/security/ssl/SessionTicketExtension.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroups.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;
using $SessionTicketExtension = ::sun::security::ssl::SessionTicketExtension;
using $SupportedGroupsExtension$SupportedGroups = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SessionTicketExtension$T12SHSessionTicketProducer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SessionTicketExtension$T12SHSessionTicketProducer::*)()>(&SessionTicketExtension$T12SHSessionTicketProducer::init$))},
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SessionTicketExtension$T12SHSessionTicketProducer_InnerClassesInfo_[] = {
	{"sun.security.ssl.SessionTicketExtension$T12SHSessionTicketProducer", "sun.security.ssl.SessionTicketExtension", "T12SHSessionTicketProducer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SupportedGroupsExtension$SupportedGroups", "sun.security.ssl.SupportedGroupsExtension", "SupportedGroups", $STATIC},
	{}
};

$ClassInfo _SessionTicketExtension$T12SHSessionTicketProducer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SessionTicketExtension$T12SHSessionTicketProducer",
	"sun.security.ssl.SupportedGroupsExtension$SupportedGroups",
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	_SessionTicketExtension$T12SHSessionTicketProducer_MethodInfo_,
	nullptr,
	nullptr,
	_SessionTicketExtension$T12SHSessionTicketProducer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SessionTicketExtension"
};

$Object* allocate$SessionTicketExtension$T12SHSessionTicketProducer($Class* clazz) {
	return $of($alloc(SessionTicketExtension$T12SHSessionTicketProducer));
}

int32_t SessionTicketExtension$T12SHSessionTicketProducer::hashCode() {
	 return this->$SupportedGroupsExtension$SupportedGroups::hashCode();
}

bool SessionTicketExtension$T12SHSessionTicketProducer::equals(Object$* obj) {
	 return this->$SupportedGroupsExtension$SupportedGroups::equals(obj);
}

$Object* SessionTicketExtension$T12SHSessionTicketProducer::clone() {
	 return this->$SupportedGroupsExtension$SupportedGroups::clone();
}

$String* SessionTicketExtension$T12SHSessionTicketProducer::toString() {
	 return this->$SupportedGroupsExtension$SupportedGroups::toString();
}

void SessionTicketExtension$T12SHSessionTicketProducer::finalize() {
	this->$SupportedGroupsExtension$SupportedGroups::finalize();
}

void SessionTicketExtension$T12SHSessionTicketProducer::init$() {
	$SupportedGroupsExtension$SupportedGroups::init$();
}

$bytes* SessionTicketExtension$T12SHSessionTicketProducer::produce($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	if (!$nc(shc)->statelessResumption) {
		return nullptr;
	}
	$var($SSLSessionContextImpl, cache, $cast($SSLSessionContextImpl, $nc($nc(shc)->sslContext)->engineGetServerSessionContext()));
	if ($nc(cache)->statelessEnabled()) {
		return $new($bytes, 0);
	}
	shc->statelessResumption = false;
	return nullptr;
}

SessionTicketExtension$T12SHSessionTicketProducer::SessionTicketExtension$T12SHSessionTicketProducer() {
}

$Class* SessionTicketExtension$T12SHSessionTicketProducer::load$($String* name, bool initialize) {
	$loadClass(SessionTicketExtension$T12SHSessionTicketProducer, name, initialize, &_SessionTicketExtension$T12SHSessionTicketProducer_ClassInfo_, allocate$SessionTicketExtension$T12SHSessionTicketProducer);
	return class$;
}

$Class* SessionTicketExtension$T12SHSessionTicketProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun