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

$FieldInfo _X509ValidationEvent_FieldInfo_[] = {
	{"certificateId", "J", nullptr, $PUBLIC, $field(X509ValidationEvent, certificateId)},
	{"certificatePosition", "I", nullptr, $PUBLIC, $field(X509ValidationEvent, certificatePosition)},
	{"validationCounter", "J", nullptr, $PUBLIC, $field(X509ValidationEvent, validationCounter)},
	{}
};

$MethodInfo _X509ValidationEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(X509ValidationEvent, init$, void)},
	{}
};

$ClassInfo _X509ValidationEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.event.X509ValidationEvent",
	"jdk.internal.event.Event",
	nullptr,
	_X509ValidationEvent_FieldInfo_,
	_X509ValidationEvent_MethodInfo_
};

$Object* allocate$X509ValidationEvent($Class* clazz) {
	return $of($alloc(X509ValidationEvent));
}

void X509ValidationEvent::init$() {
	$Event::init$();
}

X509ValidationEvent::X509ValidationEvent() {
}

$Class* X509ValidationEvent::load$($String* name, bool initialize) {
	$loadClass(X509ValidationEvent, name, initialize, &_X509ValidationEvent_ClassInfo_, allocate$X509ValidationEvent);
	return class$;
}

$Class* X509ValidationEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk