#include <sun/nio/ch/KQueuePort$Event.h>

#include <sun/nio/ch/KQueuePort.h>
#include <sun/nio/ch/Port$PollableChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Port$PollableChannel = ::sun::nio::ch::Port$PollableChannel;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _KQueuePort$Event_FieldInfo_[] = {
	{"channel", "Lsun/nio/ch/Port$PollableChannel;", nullptr, $FINAL, $field(KQueuePort$Event, channel$)},
	{"events", "I", nullptr, $FINAL, $field(KQueuePort$Event, events$)},
	{}
};

$MethodInfo _KQueuePort$Event_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/Port$PollableChannel;I)V", nullptr, 0, $method(static_cast<void(KQueuePort$Event::*)($Port$PollableChannel*,int32_t)>(&KQueuePort$Event::init$))},
	{"channel", "()Lsun/nio/ch/Port$PollableChannel;", nullptr, 0},
	{"events", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _KQueuePort$Event_InnerClassesInfo_[] = {
	{"sun.nio.ch.KQueuePort$Event", "sun.nio.ch.KQueuePort", "Event", $STATIC},
	{}
};

$ClassInfo _KQueuePort$Event_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.KQueuePort$Event",
	"java.lang.Object",
	nullptr,
	_KQueuePort$Event_FieldInfo_,
	_KQueuePort$Event_MethodInfo_,
	nullptr,
	nullptr,
	_KQueuePort$Event_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.KQueuePort"
};

$Object* allocate$KQueuePort$Event($Class* clazz) {
	return $of($alloc(KQueuePort$Event));
}

void KQueuePort$Event::init$($Port$PollableChannel* channel, int32_t events) {
	$set(this, channel$, channel);
	this->events$ = events;
}

$Port$PollableChannel* KQueuePort$Event::channel() {
	return this->channel$;
}

int32_t KQueuePort$Event::events() {
	return this->events$;
}

KQueuePort$Event::KQueuePort$Event() {
}

$Class* KQueuePort$Event::load$($String* name, bool initialize) {
	$loadClass(KQueuePort$Event, name, initialize, &_KQueuePort$Event_ClassInfo_, allocate$KQueuePort$Event);
	return class$;
}

$Class* KQueuePort$Event::class$ = nullptr;

		} // ch
	} // nio
} // sun