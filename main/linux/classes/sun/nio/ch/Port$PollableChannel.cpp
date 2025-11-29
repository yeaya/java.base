#include <sun/nio/ch/Port$PollableChannel.h>

#include <sun/nio/ch/Port.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _Port$PollableChannel_MethodInfo_[] = {
	{"onEvent", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Port$PollableChannel_InnerClassesInfo_[] = {
	{"sun.nio.ch.Port$PollableChannel", "sun.nio.ch.Port", "PollableChannel", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Port$PollableChannel_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.nio.ch.Port$PollableChannel",
	nullptr,
	"java.io.Closeable",
	nullptr,
	_Port$PollableChannel_MethodInfo_,
	nullptr,
	nullptr,
	_Port$PollableChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Port"
};

$Object* allocate$Port$PollableChannel($Class* clazz) {
	return $of($alloc(Port$PollableChannel));
}

$Class* Port$PollableChannel::load$($String* name, bool initialize) {
	$loadClass(Port$PollableChannel, name, initialize, &_Port$PollableChannel_ClassInfo_, allocate$Port$PollableChannel);
	return class$;
}

$Class* Port$PollableChannel::class$ = nullptr;

		} // ch
	} // nio
} // sun