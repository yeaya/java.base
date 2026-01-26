#include <java/util/EventListenerProxy.h>

#include <java/util/EventListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace util {

$FieldInfo _EventListenerProxy_FieldInfo_[] = {
	{"listener", "Ljava/util/EventListener;", "TT;", $PRIVATE | $FINAL, $field(EventListenerProxy, listener)},
	{}
};

$MethodInfo _EventListenerProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/util/EventListener;)V", "(TT;)V", $PUBLIC, $method(EventListenerProxy, init$, void, $EventListener*)},
	{"getListener", "()Ljava/util/EventListener;", "()TT;", $PUBLIC, $virtualMethod(EventListenerProxy, getListener, $EventListener*)},
	{}
};

$ClassInfo _EventListenerProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.EventListenerProxy",
	"java.lang.Object",
	"java.util.EventListener",
	_EventListenerProxy_FieldInfo_,
	_EventListenerProxy_MethodInfo_,
	"<T::Ljava/util/EventListener;>Ljava/lang/Object;Ljava/util/EventListener;"
};

$Object* allocate$EventListenerProxy($Class* clazz) {
	return $of($alloc(EventListenerProxy));
}

void EventListenerProxy::init$($EventListener* listener) {
	$set(this, listener, listener);
}

$EventListener* EventListenerProxy::getListener() {
	return this->listener;
}

EventListenerProxy::EventListenerProxy() {
}

$Class* EventListenerProxy::load$($String* name, bool initialize) {
	$loadClass(EventListenerProxy, name, initialize, &_EventListenerProxy_ClassInfo_, allocate$EventListenerProxy);
	return class$;
}

$Class* EventListenerProxy::class$ = nullptr;

	} // util
} // java