#include <sun/nio/ch/EPollPort$Event.h>
#include <sun/nio/ch/EPollPort.h>
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

void EPollPort$Event::init$($Port$PollableChannel* channel, int32_t events) {
	$set(this, channel$, channel);
	this->events$ = events;
}

$Port$PollableChannel* EPollPort$Event::channel() {
	return this->channel$;
}

int32_t EPollPort$Event::events() {
	return this->events$;
}

EPollPort$Event::EPollPort$Event() {
}

$Class* EPollPort$Event::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"channel", "Lsun/nio/ch/Port$PollableChannel;", nullptr, $FINAL, $field(EPollPort$Event, channel$)},
		{"events", "I", nullptr, $FINAL, $field(EPollPort$Event, events$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/Port$PollableChannel;I)V", nullptr, 0, $method(EPollPort$Event, init$, void, $Port$PollableChannel*, int32_t)},
		{"channel", "()Lsun/nio/ch/Port$PollableChannel;", nullptr, 0, $virtualMethod(EPollPort$Event, channel, $Port$PollableChannel*)},
		{"events", "()I", nullptr, 0, $virtualMethod(EPollPort$Event, events, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.EPollPort$Event", "sun.nio.ch.EPollPort", "Event", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.EPollPort$Event",
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
		"sun.nio.ch.EPollPort"
	};
	$loadClass(EPollPort$Event, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EPollPort$Event);
	});
	return class$;
}

$Class* EPollPort$Event::class$ = nullptr;

		} // ch
	} // nio
} // sun