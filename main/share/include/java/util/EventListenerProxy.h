#ifndef _java_util_EventListenerProxy_h_
#define _java_util_EventListenerProxy_h_
//$ class java.util.EventListenerProxy
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace util {

class $import EventListenerProxy : public ::java::util::EventListener {
	$class(EventListenerProxy, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	EventListenerProxy();
	void init$(::java::util::EventListener* listener);
	virtual ::java::util::EventListener* getListener();
	::java::util::EventListener* listener = nullptr;
};

	} // util
} // java

#endif // _java_util_EventListenerProxy_h_