#ifndef _jdk_internal_event_X509CertificateEvent_h_
#define _jdk_internal_event_X509CertificateEvent_h_
//$ class jdk.internal.event.X509CertificateEvent
//$ extends jdk.internal.event.Event

#include <jdk/internal/event/Event.h>

namespace jdk {
	namespace internal {
		namespace event {

class $import X509CertificateEvent : public ::jdk::internal::event::Event {
	$class(X509CertificateEvent, $NO_CLASS_INIT, ::jdk::internal::event::Event)
public:
	X509CertificateEvent();
	void init$();
	$String* algorithm = nullptr;
	$String* serialNumber = nullptr;
	$String* subject = nullptr;
	$String* issuer = nullptr;
	$String* keyType = nullptr;
	int32_t keyLength = 0;
	int64_t certificateId = 0;
	int64_t validFrom = 0;
	int64_t validUntil = 0;
};

		} // event
	} // internal
} // jdk

#endif // _jdk_internal_event_X509CertificateEvent_h_