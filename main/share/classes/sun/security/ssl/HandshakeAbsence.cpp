#include <sun/security/ssl/HandshakeAbsence.h>

#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionContext = ::sun::security::ssl::ConnectionContext;
using $SSLHandshake$HandshakeMessage = ::sun::security::ssl::SSLHandshake$HandshakeMessage;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _HandshakeAbsence_MethodInfo_[] = {
	{"absent", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _HandshakeAbsence_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.HandshakeAbsence",
	nullptr,
	nullptr,
	nullptr,
	_HandshakeAbsence_MethodInfo_
};

$Object* allocate$HandshakeAbsence($Class* clazz) {
	return $of($alloc(HandshakeAbsence));
}

$Class* HandshakeAbsence::load$($String* name, bool initialize) {
	$loadClass(HandshakeAbsence, name, initialize, &_HandshakeAbsence_ClassInfo_, allocate$HandshakeAbsence);
	return class$;
}

$Class* HandshakeAbsence::class$ = nullptr;

		} // ssl
	} // security
} // sun