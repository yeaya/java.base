#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence.h>

#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/ServerHandshakeContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $PreSharedKeyExtension = ::sun::security::ssl::PreSharedKeyExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $ServerHandshakeContext = ::sun::security::ssl::ServerHandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence::*)()>(&PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence", "sun.security.ssl.PreSharedKeyExtension", "CHPreSharedKeyOnLoadAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PreSharedKeyExtension"
};

$Object* allocate$PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence($Class* clazz) {
	return $of($alloc(PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence));
}

void PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence::init$() {
}

void PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalCurrentObjectStackCache();
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Handling pre_shared_key absence."_s, $$new($ObjectArray, 0));
	}
	$var($ServerHandshakeContext, shc, $cast($ServerHandshakeContext, context));
	$set($nc(shc), resumingSession, nullptr);
	shc->isResumption = false;
}

PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence::PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence() {
}

$Class* PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence::load$($String* name, bool initialize) {
	$loadClass(PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence, name, initialize, &_PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence_ClassInfo_, allocate$PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence);
	return class$;
}

$Class* PreSharedKeyExtension$CHPreSharedKeyOnLoadAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun