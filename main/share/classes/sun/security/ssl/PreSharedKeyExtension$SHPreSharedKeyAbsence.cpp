#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeyAbsence.h>
#include <sun/security/ssl/ClientHandshakeContext.h>
#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientHandshakeContext = ::sun::security::ssl::ClientHandshakeContext;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void PreSharedKeyExtension$SHPreSharedKeyAbsence::init$() {
}

void PreSharedKeyExtension$SHPreSharedKeyAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
	$useLocalObjectStack();
	$var($ClientHandshakeContext, chc, $cast($ClientHandshakeContext, context));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
		$SSLLogger::fine("Handling pre_shared_key absence."_s, $$new($ObjectArray, 0));
	}
	$set($nc(chc), resumingSession, nullptr);
	chc->isResumption = false;
}

PreSharedKeyExtension$SHPreSharedKeyAbsence::PreSharedKeyExtension$SHPreSharedKeyAbsence() {
}

$Class* PreSharedKeyExtension$SHPreSharedKeyAbsence::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PreSharedKeyExtension$SHPreSharedKeyAbsence, init$, void)},
		{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, $virtualMethod(PreSharedKeyExtension$SHPreSharedKeyAbsence, absent, void, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyAbsence", "sun.security.ssl.PreSharedKeyExtension", "SHPreSharedKeyAbsence", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyAbsence",
		"java.lang.Object",
		"sun.security.ssl.HandshakeAbsence",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.PreSharedKeyExtension"
	};
	$loadClass(PreSharedKeyExtension$SHPreSharedKeyAbsence, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreSharedKeyExtension$SHPreSharedKeyAbsence);
	});
	return class$;
}

$Class* PreSharedKeyExtension$SHPreSharedKeyAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun