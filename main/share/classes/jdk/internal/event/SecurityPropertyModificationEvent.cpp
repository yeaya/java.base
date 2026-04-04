#include <jdk/internal/event/SecurityPropertyModificationEvent.h>
#include <jdk/internal/event/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::jdk::internal::event::Event;

namespace jdk {
	namespace internal {
		namespace event {

void SecurityPropertyModificationEvent::init$() {
	$Event::init$();
}

SecurityPropertyModificationEvent::SecurityPropertyModificationEvent() {
}

$Class* SecurityPropertyModificationEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SecurityPropertyModificationEvent, key)},
		{"value", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SecurityPropertyModificationEvent, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityPropertyModificationEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.event.SecurityPropertyModificationEvent",
		"jdk.internal.event.Event",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SecurityPropertyModificationEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityPropertyModificationEvent);
	});
	return class$;
}

$Class* SecurityPropertyModificationEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk