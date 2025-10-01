#ifndef _jdk_internal_event_SecurityPropertyModificationEvent_h_
#define _jdk_internal_event_SecurityPropertyModificationEvent_h_
//$ class jdk.internal.event.SecurityPropertyModificationEvent
//$ extends jdk.internal.event.Event

#include <jdk/internal/event/Event.h>

namespace jdk {
	namespace internal {
		namespace event {

class $export SecurityPropertyModificationEvent : public ::jdk::internal::event::Event {
	$class(SecurityPropertyModificationEvent, $NO_CLASS_INIT, ::jdk::internal::event::Event)
public:
	SecurityPropertyModificationEvent();
	void init$();
	$String* key = nullptr;
	$String* value = nullptr;
};

		} // event
	} // internal
} // jdk

#endif // _jdk_internal_event_SecurityPropertyModificationEvent_h_