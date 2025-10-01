#ifndef _jdk_internal_event_TLSHandshakeEvent_h_
#define _jdk_internal_event_TLSHandshakeEvent_h_
//$ class jdk.internal.event.TLSHandshakeEvent
//$ extends jdk.internal.event.Event

#include <jdk/internal/event/Event.h>

namespace jdk {
	namespace internal {
		namespace event {

class $import TLSHandshakeEvent : public ::jdk::internal::event::Event {
	$class(TLSHandshakeEvent, $NO_CLASS_INIT, ::jdk::internal::event::Event)
public:
	TLSHandshakeEvent();
	void init$();
	$String* peerHost = nullptr;
	int32_t peerPort = 0;
	$String* protocolVersion = nullptr;
	$String* cipherSuite = nullptr;
	int64_t certificateId = 0;
};

		} // event
	} // internal
} // jdk

#endif // _jdk_internal_event_TLSHandshakeEvent_h_