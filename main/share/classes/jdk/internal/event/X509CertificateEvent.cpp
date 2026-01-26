#include <jdk/internal/event/X509CertificateEvent.h>

#include <jdk/internal/event/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::jdk::internal::event::Event;

namespace jdk {
	namespace internal {
		namespace event {

$FieldInfo _X509CertificateEvent_FieldInfo_[] = {
	{"algorithm", "Ljava/lang/String;", nullptr, $PUBLIC, $field(X509CertificateEvent, algorithm)},
	{"serialNumber", "Ljava/lang/String;", nullptr, $PUBLIC, $field(X509CertificateEvent, serialNumber)},
	{"subject", "Ljava/lang/String;", nullptr, $PUBLIC, $field(X509CertificateEvent, subject)},
	{"issuer", "Ljava/lang/String;", nullptr, $PUBLIC, $field(X509CertificateEvent, issuer)},
	{"keyType", "Ljava/lang/String;", nullptr, $PUBLIC, $field(X509CertificateEvent, keyType)},
	{"keyLength", "I", nullptr, $PUBLIC, $field(X509CertificateEvent, keyLength)},
	{"certificateId", "J", nullptr, $PUBLIC, $field(X509CertificateEvent, certificateId)},
	{"validFrom", "J", nullptr, $PUBLIC, $field(X509CertificateEvent, validFrom)},
	{"validUntil", "J", nullptr, $PUBLIC, $field(X509CertificateEvent, validUntil)},
	{}
};

$MethodInfo _X509CertificateEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(X509CertificateEvent, init$, void)},
	{}
};

$ClassInfo _X509CertificateEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.event.X509CertificateEvent",
	"jdk.internal.event.Event",
	nullptr,
	_X509CertificateEvent_FieldInfo_,
	_X509CertificateEvent_MethodInfo_
};

$Object* allocate$X509CertificateEvent($Class* clazz) {
	return $of($alloc(X509CertificateEvent));
}

void X509CertificateEvent::init$() {
	$Event::init$();
}

X509CertificateEvent::X509CertificateEvent() {
}

$Class* X509CertificateEvent::load$($String* name, bool initialize) {
	$loadClass(X509CertificateEvent, name, initialize, &_X509CertificateEvent_ClassInfo_, allocate$X509CertificateEvent);
	return class$;
}

$Class* X509CertificateEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk