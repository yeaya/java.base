#include <jdk/internal/event/DeserializationEvent.h>
#include <jdk/internal/event/Event.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::jdk::internal::event::Event;

namespace jdk {
	namespace internal {
		namespace event {

void DeserializationEvent::init$() {
	$Event::init$();
}

DeserializationEvent::DeserializationEvent() {
}

$Class* DeserializationEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filterConfigured", "Z", nullptr, $PUBLIC, $field(DeserializationEvent, filterConfigured)},
		{"filterStatus", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DeserializationEvent, filterStatus)},
		{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PUBLIC, $field(DeserializationEvent, type)},
		{"arrayLength", "I", nullptr, $PUBLIC, $field(DeserializationEvent, arrayLength)},
		{"objectReferences", "J", nullptr, $PUBLIC, $field(DeserializationEvent, objectReferences)},
		{"depth", "J", nullptr, $PUBLIC, $field(DeserializationEvent, depth)},
		{"bytesRead", "J", nullptr, $PUBLIC, $field(DeserializationEvent, bytesRead)},
		{"exceptionType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PUBLIC, $field(DeserializationEvent, exceptionType)},
		{"exceptionMessage", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DeserializationEvent, exceptionMessage)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DeserializationEvent, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.event.DeserializationEvent",
		"jdk.internal.event.Event",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DeserializationEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeserializationEvent);
	});
	return class$;
}

$Class* DeserializationEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk