#include <sun/security/ssl/HandshakeProducer.h>

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

$MethodInfo _HandshakeProducer_MethodInfo_[] = {
	{"produce", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HandshakeProducer, produce, $bytes*, $ConnectionContext*, $SSLHandshake$HandshakeMessage*), "java.io.IOException"},
	{}
};

$ClassInfo _HandshakeProducer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.HandshakeProducer",
	nullptr,
	nullptr,
	nullptr,
	_HandshakeProducer_MethodInfo_
};

$Object* allocate$HandshakeProducer($Class* clazz) {
	return $of($alloc(HandshakeProducer));
}

$Class* HandshakeProducer::load$($String* name, bool initialize) {
	$loadClass(HandshakeProducer, name, initialize, &_HandshakeProducer_ClassInfo_, allocate$HandshakeProducer);
	return class$;
}

$Class* HandshakeProducer::class$ = nullptr;

		} // ssl
	} // security
} // sun