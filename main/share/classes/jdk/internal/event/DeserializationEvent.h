#ifndef _jdk_internal_event_DeserializationEvent_h_
#define _jdk_internal_event_DeserializationEvent_h_
//$ class jdk.internal.event.DeserializationEvent
//$ extends jdk.internal.event.Event

#include <jdk/internal/event/Event.h>

namespace jdk {
	namespace internal {
		namespace event {

class $export DeserializationEvent : public ::jdk::internal::event::Event {
	$class(DeserializationEvent, $NO_CLASS_INIT, ::jdk::internal::event::Event)
public:
	DeserializationEvent();
	void init$();
	bool filterConfigured = false;
	$String* filterStatus = nullptr;
	$Class* type = nullptr;
	int32_t arrayLength = 0;
	int64_t objectReferences = 0;
	int64_t depth = 0;
	int64_t bytesRead = 0;
	$Class* exceptionType = nullptr;
	$String* exceptionMessage = nullptr;
};

		} // event
	} // internal
} // jdk

#endif // _jdk_internal_event_DeserializationEvent_h_