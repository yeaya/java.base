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
	$FieldInfo fieldInfos$$[] = {
		{"channel", "Lsun/nio/ch/Port$PollableChannel;", nullptr, $FINAL, $field(KQueuePort$Event, channel$)},
		{"events", "I", nullptr, $FINAL, $field(KQueuePort$Event, events$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/Port$PollableChannel;I)V", nullptr, 0, $method(KQueuePort$Event, init$, void, $Port$PollableChannel*, int32_t)},
		{"channel", "()Lsun/nio/ch/Port$PollableChannel;", nullptr, 0, $virtualMethod(KQueuePort$Event, channel, $Port$PollableChannel*)},
		{"events", "()I", nullptr, 0, $virtualMethod(KQueuePort$Event, events, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.KQueuePort$Event", "sun.nio.ch.KQueuePort", "Event", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.KQueuePort$Event",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.KQueuePort"
	};
	$loadClass(KQueuePort$Event, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KQueuePort$Event);
	});
	return class$;
}

$Class* KQueuePort$Event::class$ = nullptr;

		} // ch
	} // nio
} // sun