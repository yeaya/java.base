#include <javax/net/ssl/SSLSessionBindingListener.h>
#include <javax/net/ssl/SSLSessionBindingEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLSessionBindingEvent = ::javax::net::ssl::SSLSessionBindingEvent;

namespace javax {
	namespace net {
		namespace ssl {

$Class* SSLSessionBindingListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"valueBound", "(Ljavax/net/ssl/SSLSessionBindingEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionBindingListener, valueBound, void, $SSLSessionBindingEvent*)},
		{"valueUnbound", "(Ljavax/net/ssl/SSLSessionBindingEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSessionBindingListener, valueUnbound, void, $SSLSessionBindingEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.net.ssl.SSLSessionBindingListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLSessionBindingListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLSessionBindingListener);
	});
	return class$;
}

$Class* SSLSessionBindingListener::class$ = nullptr;

		} // ssl
	} // net
} // javax