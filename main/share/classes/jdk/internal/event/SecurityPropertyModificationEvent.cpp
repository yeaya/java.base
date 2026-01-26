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

$FieldInfo _SecurityPropertyModificationEvent_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SecurityPropertyModificationEvent, key)},
	{"value", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SecurityPropertyModificationEvent, value)},
	{}
};

$MethodInfo _SecurityPropertyModificationEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityPropertyModificationEvent, init$, void)},
	{}
};

$ClassInfo _SecurityPropertyModificationEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.event.SecurityPropertyModificationEvent",
	"jdk.internal.event.Event",
	nullptr,
	_SecurityPropertyModificationEvent_FieldInfo_,
	_SecurityPropertyModificationEvent_MethodInfo_
};

$Object* allocate$SecurityPropertyModificationEvent($Class* clazz) {
	return $of($alloc(SecurityPropertyModificationEvent));
}

void SecurityPropertyModificationEvent::init$() {
	$Event::init$();
}

SecurityPropertyModificationEvent::SecurityPropertyModificationEvent() {
}

$Class* SecurityPropertyModificationEvent::load$($String* name, bool initialize) {
	$loadClass(SecurityPropertyModificationEvent, name, initialize, &_SecurityPropertyModificationEvent_ClassInfo_, allocate$SecurityPropertyModificationEvent);
	return class$;
}

$Class* SecurityPropertyModificationEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk