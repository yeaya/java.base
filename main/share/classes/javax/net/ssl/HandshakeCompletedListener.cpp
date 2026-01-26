#include <javax/net/ssl/HandshakeCompletedListener.h>

#include <javax/net/ssl/HandshakeCompletedEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeCompletedEvent = ::javax::net::ssl::HandshakeCompletedEvent;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _HandshakeCompletedListener_MethodInfo_[] = {
	{"handshakeCompleted", "(Ljavax/net/ssl/HandshakeCompletedEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HandshakeCompletedListener, handshakeCompleted, void, $HandshakeCompletedEvent*)},
	{}
};

$ClassInfo _HandshakeCompletedListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.net.ssl.HandshakeCompletedListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_HandshakeCompletedListener_MethodInfo_
};

$Object* allocate$HandshakeCompletedListener($Class* clazz) {
	return $of($alloc(HandshakeCompletedListener));
}

$Class* HandshakeCompletedListener::load$($String* name, bool initialize) {
	$loadClass(HandshakeCompletedListener, name, initialize, &_HandshakeCompletedListener_ClassInfo_, allocate$HandshakeCompletedListener);
	return class$;
}

$Class* HandshakeCompletedListener::class$ = nullptr;

		} // ssl
	} // net
} // javax