#ifndef _jdk_internal_event_X509ValidationEvent_h_
#define _jdk_internal_event_X509ValidationEvent_h_
//$ class jdk.internal.event.X509ValidationEvent
//$ extends jdk.internal.event.Event

#include <jdk/internal/event/Event.h>

namespace jdk {
	namespace internal {
		namespace event {

class $import X509ValidationEvent : public ::jdk::internal::event::Event {
	$class(X509ValidationEvent, $NO_CLASS_INIT, ::jdk::internal::event::Event)
public:
	X509ValidationEvent();
	void init$();
	int64_t certificateId = 0;
	int32_t certificatePosition = 0;
	int64_t validationCounter = 0;
};

		} // event
	} // internal
} // jdk

#endif // _jdk_internal_event_X509ValidationEvent_h_