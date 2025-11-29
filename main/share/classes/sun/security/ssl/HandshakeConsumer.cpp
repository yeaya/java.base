#include <sun/security/ssl/HandshakeConsumer.h>

#include <sun/security/ssl/ConnectionContext.h>
#include <sun/security/ssl/SSLHandshake$HandshakeMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _HandshakeConsumer_MethodInfo_[] = {
	{"consume", "(Lsun/security/ssl/ConnectionContext;Lsun/security/ssl/SSLHandshake$HandshakeMessage;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _HandshakeConsumer_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.HandshakeConsumer",
	nullptr,
	nullptr,
	nullptr,
	_HandshakeConsumer_MethodInfo_
};

$Object* allocate$HandshakeConsumer($Class* clazz) {
	return $of($alloc(HandshakeConsumer));
}

$Class* HandshakeConsumer::load$($String* name, bool initialize) {
	$loadClass(HandshakeConsumer, name, initialize, &_HandshakeConsumer_ClassInfo_, allocate$HandshakeConsumer);
	return class$;
}

$Class* HandshakeConsumer::class$ = nullptr;

		} // ssl
	} // security
} // sun