#include <jdk/internal/event/X509ValidationEvent.h>
#include <jdk/internal/event/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::jdk::internal::event::Event;

namespace jdk {
	namespace internal {
		namespace event {

void X509ValidationEvent::init$() {
	$Event::init$();
}

X509ValidationEvent::X509ValidationEvent() {
}

$Class* X509ValidationEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"certificateId", "J", nullptr, $PUBLIC, $field(X509ValidationEvent, certificateId)},
		{"certificatePosition", "I", nullptr, $PUBLIC, $field(X509ValidationEvent, certificatePosition)},
		{"validationCounter", "J", nullptr, $PUBLIC, $field(X509ValidationEvent, validationCounter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X509ValidationEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.event.X509ValidationEvent",
		"jdk.internal.event.Event",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(X509ValidationEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509ValidationEvent);
	});
	return class$;
}

$Class* X509ValidationEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk