#include <javax/net/ssl/SSLSessionBindingListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/net/ssl/SSLSessionBindingEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $SSLSessionBindingEvent = ::javax::net::ssl::SSLSessionBindingEvent;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _SSLSessionBindingListener_MethodInfo_[] = {
	{"valueBound", "(Ljavax/net/ssl/SSLSessionBindingEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"valueUnbound", "(Ljavax/net/ssl/SSLSessionBindingEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLSessionBindingListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.net.ssl.SSLSessionBindingListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_SSLSessionBindingListener_MethodInfo_
};

$Object* allocate$SSLSessionBindingListener($Class* clazz) {
	return $of($alloc(SSLSessionBindingListener));
}

$Class* SSLSessionBindingListener::load$($String* name, bool initialize) {
	$loadClass(SSLSessionBindingListener, name, initialize, &_SSLSessionBindingListener_ClassInfo_, allocate$SSLSessionBindingListener);
	return class$;
}

$Class* SSLSessionBindingListener::class$ = nullptr;

		} // ssl
	} // net
} // javax