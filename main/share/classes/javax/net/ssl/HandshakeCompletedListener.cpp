#include <javax/net/ssl/HandshakeCompletedListener.h>
#include <javax/net/ssl/HandshakeCompletedEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeCompletedEvent = ::javax::net::ssl::HandshakeCompletedEvent;

namespace javax {
	namespace net {
		namespace ssl {

$Class* HandshakeCompletedListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handshakeCompleted", "(Ljavax/net/ssl/HandshakeCompletedEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HandshakeCompletedListener, handshakeCompleted, void, $HandshakeCompletedEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.net.ssl.HandshakeCompletedListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(HandshakeCompletedListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandshakeCompletedListener);
	});
	return class$;
}

$Class* HandshakeCompletedListener::class$ = nullptr;

		} // ssl
	} // net
} // javax