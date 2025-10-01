#include <sun/nio/ch/EPollPort$Event.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/ch/EPollPort.h>
#include <sun/nio/ch/Port$PollableChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EPollPort = ::sun::nio::ch::EPollPort;
using $Port$PollableChannel = ::sun::nio::ch::Port$PollableChannel;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _EPollPort$Event_FieldInfo_[] = {
	{"channel", "Lsun/nio/ch/Port$PollableChannel;", nullptr, $FINAL, $field(EPollPort$Event, channel$)},
	{"events", "I", nullptr, $FINAL, $field(EPollPort$Event, events$)},
	{}
};

$MethodInfo _EPollPort$Event_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/Port$PollableChannel;I)V", nullptr, 0, $method(static_cast<void(EPollPort$Event::*)($Port$PollableChannel*,int32_t)>(&EPollPort$Event::init$))},
	{"channel", "()Lsun/nio/ch/Port$PollableChannel;", nullptr, 0},
	{"events", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _EPollPort$Event_InnerClassesInfo_[] = {
	{"sun.nio.ch.EPollPort$Event", "sun.nio.ch.EPollPort", "Event", $STATIC},
	{}
};

$ClassInfo _EPollPort$Event_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.EPollPort$Event",
	"java.lang.Object",
	nullptr,
	_EPollPort$Event_FieldInfo_,
	_EPollPort$Event_MethodInfo_,
	nullptr,
	nullptr,
	_EPollPort$Event_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.EPollPort"
};

$Object* allocate$EPollPort$Event($Class* clazz) {
	return $of($alloc(EPollPort$Event));
}

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
	$loadClass(EPollPort$Event, name, initialize, &_EPollPort$Event_ClassInfo_, allocate$EPollPort$Event);
	return class$;
}

$Class* EPollPort$Event::class$ = nullptr;

		} // ch
	} // nio
} // sun