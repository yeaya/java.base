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

void X509CertificateEvent::init$() {
	$Event::init$();
}

X509CertificateEvent::X509CertificateEvent() {
}

$Class* X509CertificateEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X509CertificateEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.event.X509CertificateEvent",
		"jdk.internal.event.Event",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(X509CertificateEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509CertificateEvent);
	});
	return class$;
}

$Class* X509CertificateEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk