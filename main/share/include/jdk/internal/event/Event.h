#ifndef _jdk_internal_event_Event_h_
#define _jdk_internal_event_Event_h_
//$ class jdk.internal.event.Event
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace event {

class $import Event : public ::java::lang::Object {
	$class(Event, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Event();
	void init$();
	virtual void begin();
	virtual void commit();
	virtual void end();
	virtual bool isEnabled();
	virtual void set(int32_t index, Object$* value);
	virtual bool shouldCommit();
};

		} // event
	} // internal
} // jdk

#endif // _jdk_internal_event_Event_h_