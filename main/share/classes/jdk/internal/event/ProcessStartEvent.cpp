#include <jdk/internal/event/ProcessStartEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProcessStartEvent::*)()>(&ProcessStartEvent::init$))},
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