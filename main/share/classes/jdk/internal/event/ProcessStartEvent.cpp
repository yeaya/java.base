#include <jdk/internal/event/ProcessStartEvent.h>
#include <jdk/internal/event/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::jdk::internal::event::Event;

namespace jdk {
	namespace internal {
		namespace event {

void ProcessStartEvent::init$() {
	$Event::init$();
}

ProcessStartEvent::ProcessStartEvent() {
}

$Class* ProcessStartEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pid", "J", nullptr, $PUBLIC, $field(ProcessStartEvent, pid)},
		{"directory", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ProcessStartEvent, directory)},
		{"command", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ProcessStartEvent, command)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProcessStartEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.event.ProcessStartEvent",
		"jdk.internal.event.Event",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProcessStartEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessStartEvent);
	});
	return class$;
}

$Class* ProcessStartEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk