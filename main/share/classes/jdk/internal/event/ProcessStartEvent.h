#ifndef _jdk_internal_event_ProcessStartEvent_h_
#define _jdk_internal_event_ProcessStartEvent_h_
//$ class jdk.internal.event.ProcessStartEvent
//$ extends jdk.internal.event.Event

#include <jdk/internal/event/Event.h>

namespace jdk {
	namespace internal {
		namespace event {

class $export ProcessStartEvent : public ::jdk::internal::event::Event {
	$class(ProcessStartEvent, $NO_CLASS_INIT, ::jdk::internal::event::Event)
public:
	ProcessStartEvent();
	void init$();
	int64_t pid = 0;
	$String* directory = nullptr;
	$String* command = nullptr;
};

		} // event
	} // internal
} // jdk

#endif // _jdk_internal_event_ProcessStartEvent_h_