#include <jdk/internal/event/TLSHandshakeEvent.h>
#include <jdk/internal/event/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::jdk::internal::event::Event;

namespace jdk {
	namespace internal {
		namespace event {

void TLSHandshakeEvent::init$() {
	$Event::init$();
}

TLSHandshakeEvent::TLSHandshakeEvent() {
}

$Class* TLSHandshakeEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"peerHost", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TLSHandshakeEvent, peerHost)},
		{"peerPort", "I", nullptr, $PUBLIC, $field(TLSHandshakeEvent, peerPort)},
		{"protocolVersion", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TLSHandshakeEvent, protocolVersion)},
		{"cipherSuite", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TLSHandshakeEvent, cipherSuite)},
		{"certificateId", "J", nullptr, $PUBLIC, $field(TLSHandshakeEvent, certificateId)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TLSHandshakeEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.event.TLSHandshakeEvent",
		"jdk.internal.event.Event",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TLSHandshakeEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TLSHandshakeEvent);
	});
	return class$;
}

$Class* TLSHandshakeEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk