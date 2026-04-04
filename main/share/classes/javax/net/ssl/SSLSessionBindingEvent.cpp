#include <javax/net/ssl/SSLSessionBindingEvent.h>
#include <java/util/EventObject.h>
#include <javax/net/ssl/SSLSession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $SSLSession = ::javax::net::ssl::SSLSession;

namespace javax {
	namespace net {
		namespace ssl {

void SSLSessionBindingEvent::init$($SSLSession* session, $String* name) {
	$EventObject::init$(session);
	$set(this, name, name);
}

$String* SSLSessionBindingEvent::getName() {
	return this->name;
}

$SSLSession* SSLSessionBindingEvent::getSession() {
	return $cast($SSLSession, getSource());
}

SSLSessionBindingEvent::SSLSessionBindingEvent() {
}

$Class* SSLSessionBindingEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SSLSessionBindingEvent, serialVersionUID)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SSLSessionBindingEvent, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/net/ssl/SSLSession;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SSLSessionBindingEvent, init$, void, $SSLSession*, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLSessionBindingEvent, getName, $String*)},
		{"getSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC, $virtualMethod(SSLSessionBindingEvent, getSession, $SSLSession*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.net.ssl.SSLSessionBindingEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SSLSessionBindingEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLSessionBindingEvent);
	});
	return class$;
}

$Class* SSLSessionBindingEvent::class$ = nullptr;

		} // ssl
	} // net
} // javax