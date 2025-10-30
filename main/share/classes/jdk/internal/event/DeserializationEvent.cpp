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

$FieldInfo _DeserializationEvent_FieldInfo_[] = {
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

$MethodInfo _DeserializationEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DeserializationEvent::*)()>(&DeserializationEvent::init$))},
	{}
};

$ClassInfo _DeserializationEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.event.DeserializationEvent",
	"jdk.internal.event.Event",
	nullptr,
	_DeserializationEvent_FieldInfo_,
	_DeserializationEvent_MethodInfo_
};

$Object* allocate$DeserializationEvent($Class* clazz) {
	return $of($alloc(DeserializationEvent));
}

void DeserializationEvent::init$() {
	$Event::init$();
}

DeserializationEvent::DeserializationEvent() {
}

$Class* DeserializationEvent::load$($String* name, bool initialize) {
	$loadClass(DeserializationEvent, name, initialize, &_DeserializationEvent_ClassInfo_, allocate$DeserializationEvent);
	return class$;
}

$Class* DeserializationEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk