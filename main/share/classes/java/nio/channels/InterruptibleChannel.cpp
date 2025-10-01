#include <java/nio/channels/InterruptibleChannel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::java::nio::channels::Channel;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _InterruptibleChannel_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InterruptibleChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.InterruptibleChannel",
	nullptr,
	"java.nio.channels.Channel",
	nullptr,
	_InterruptibleChannel_MethodInfo_
};

$Object* allocate$InterruptibleChannel($Class* clazz) {
	return $of($alloc(InterruptibleChannel));
}

$Class* InterruptibleChannel::load$($String* name, bool initialize) {
	$loadClass(InterruptibleChannel, name, initialize, &_InterruptibleChannel_ClassInfo_, allocate$InterruptibleChannel);
	return class$;
}

$Class* InterruptibleChannel::class$ = nullptr;

		} // channels
	} // nio
} // java