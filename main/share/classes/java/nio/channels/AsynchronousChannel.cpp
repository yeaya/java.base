#include <java/nio/channels/AsynchronousChannel.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::java::nio::channels::Channel;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _AsynchronousChannel_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AsynchronousChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.AsynchronousChannel",
	nullptr,
	"java.nio.channels.Channel",
	nullptr,
	_AsynchronousChannel_MethodInfo_
};

$Object* allocate$AsynchronousChannel($Class* clazz) {
	return $of($alloc(AsynchronousChannel));
}

$Class* AsynchronousChannel::load$($String* name, bool initialize) {
	$loadClass(AsynchronousChannel, name, initialize, &_AsynchronousChannel_ClassInfo_, allocate$AsynchronousChannel);
	return class$;
}

$Class* AsynchronousChannel::class$ = nullptr;

		} // channels
	} // nio
} // java