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

$FieldInfo _ProcessStartEvent_FieldInfo_[] = {
	{"pid", "J", nullptr, $PUBLIC, $field(ProcessStartEvent, pid)},
	{"directory", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ProcessStartEvent, directory)},
	{"command", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ProcessStartEvent, command)},
	{}
};

$MethodInfo _ProcessStartEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ProcessStartEvent, init$, void)},
	{}
};

$ClassInfo _ProcessStartEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.event.ProcessStartEvent",
	"jdk.internal.event.Event",
	nullptr,
	_ProcessStartEvent_FieldInfo_,
	_ProcessStartEvent_MethodInfo_
};

$Object* allocate$ProcessStartEvent($Class* clazz) {
	return $of($alloc(ProcessStartEvent));
}

void ProcessStartEvent::init$() {
	$Event::init$();
}

ProcessStartEvent::ProcessStartEvent() {
}

$Class* ProcessStartEvent::load$($String* name, bool initialize) {
	$loadClass(ProcessStartEvent, name, initialize, &_ProcessStartEvent_ClassInfo_, allocate$ProcessStartEvent);
	return class$;
}

$Class* ProcessStartEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk