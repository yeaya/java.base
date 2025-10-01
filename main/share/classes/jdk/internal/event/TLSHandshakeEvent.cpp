#include <jdk/internal/event/TLSHandshakeEvent.h>

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

$FieldInfo _TLSHandshakeEvent_FieldInfo_[] = {
	{"peerHost", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TLSHandshakeEvent, peerHost)},
	{"peerPort", "I", nullptr, $PUBLIC, $field(TLSHandshakeEvent, peerPort)},
	{"protocolVersion", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TLSHandshakeEvent, protocolVersion)},
	{"cipherSuite", "Ljava/lang/String;", nullptr, $PUBLIC, $field(TLSHandshakeEvent, cipherSuite)},
	{"certificateId", "J", nullptr, $PUBLIC, $field(TLSHandshakeEvent, certificateId)},
	{}
};

$MethodInfo _TLSHandshakeEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TLSHandshakeEvent::*)()>(&TLSHandshakeEvent::init$))},
	{}
};

$ClassInfo _TLSHandshakeEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.event.TLSHandshakeEvent",
	"jdk.internal.event.Event",
	nullptr,
	_TLSHandshakeEvent_FieldInfo_,
	_TLSHandshakeEvent_MethodInfo_
};

$Object* allocate$TLSHandshakeEvent($Class* clazz) {
	return $of($alloc(TLSHandshakeEvent));
}

void TLSHandshakeEvent::init$() {
	$Event::init$();
}

TLSHandshakeEvent::TLSHandshakeEvent() {
}

$Class* TLSHandshakeEvent::load$($String* name, bool initialize) {
	$loadClass(TLSHandshakeEvent, name, initialize, &_TLSHandshakeEvent_ClassInfo_, allocate$TLSHandshakeEvent);
	return class$;
}

$Class* TLSHandshakeEvent::class$ = nullptr;

		} // event
	} // internal
} // jdk