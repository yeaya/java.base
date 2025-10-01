#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeyAbsence.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $HandshakeAbsence = ::sun::security::ssl::HandshakeAbsence;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $PreSharedKeyExtension = ::sun::security::ssl::PreSharedKeyExtension;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _PreSharedKeyExtension$SHPreSharedKeyAbsence_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PreSharedKeyExtension$SHPreSharedKeyAbsence::*)()>(&PreSharedKeyExtension$SHPreSharedKeyAbsence::init$))},
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _PreSharedKeyExtension$SHPreSharedKeyAbsence_InnerClassesInfo_[] = {
	{"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyAbsence", "sun.security.ssl.PreSharedKeyExtension", "SHPreSharedKeyAbsence", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PreSharedKeyExtension$SHPreSharedKeyAbsence_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyAbsence",
	"java.lang.Object",
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	_PreSharedKeyExtension$SHPreSharedKeyAbsence_MethodInfo_,
	nullptr,
	nullptr,
	_PreSharedKeyExtension$SHPreSharedKeyAbsence_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PreSharedKeyExtension"
};

$Object* allocate$PreSharedKeyExtension$SHPreSharedKeyAbsence($Class* clazz) {
	return $of($alloc(PreSharedKeyExtension$SHPreSharedKeyAbsence));
}

void PreSharedKeyExtension$SHPreSharedKeyAbsence::init$() {
}

void PreSharedKeyExtension$SHPreSharedKeyAbsence::absent($ConnectionContext* context, $SSLHandshake$HandshakeMessage* message) {
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
	$loadClass(PreSharedKeyExtension$SHPreSharedKeyAbsence, name, initialize, &_PreSharedKeyExtension$SHPreSharedKeyAbsence_ClassInfo_, allocate$PreSharedKeyExtension$SHPreSharedKeyAbsence);
	return class$;
}

$Class* PreSharedKeyExtension$SHPreSharedKeyAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun