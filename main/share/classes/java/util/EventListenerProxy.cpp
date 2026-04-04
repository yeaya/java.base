#include <java/util/EventListenerProxy.h>
#include <java/util/EventListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace util {

void EventListenerProxy::init$($EventListener* listener) {
	$set(this, listener, listener);
}

$EventListener* EventListenerProxy::getListener() {
	return this->listener;
}

EventListenerProxy::EventListenerProxy() {
}

$Class* EventListenerProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"listener", "Ljava/util/EventListener;", "TT;", $PRIVATE | $FINAL, $field(EventListenerProxy, listener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/EventListener;)V", "(TT;)V", $PUBLIC, $method(EventListenerProxy, init$, void, $EventListener*)},
		{"getListener", "()Ljava/util/EventListener;", "()TT;", $PUBLIC, $virtualMethod(EventListenerProxy, getListener, $EventListener*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.EventListenerProxy",
		"java.lang.Object",
		"java.util.EventListener",
		fieldInfos$$,
		methodInfos$$,
		"<T::Ljava/util/EventListener;>Ljava/lang/Object;Ljava/util/EventListener;"
	};
	$loadClass(EventListenerProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventListenerProxy);
	});
	return class$;
}

$Class* EventListenerProxy::class$ = nullptr;

	} // util
} // java