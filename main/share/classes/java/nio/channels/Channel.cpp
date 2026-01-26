#include <java/nio/channels/Channel.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _Channel_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Channel, isOpen, bool)},
	{}
};

$ClassInfo _Channel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.channels.Channel",
	nullptr,
	"java.io.Closeable",
	nullptr,
	_Channel_MethodInfo_
};

$Object* allocate$Channel($Class* clazz) {
	return $of($alloc(Channel));
}

$Class* Channel::load$($String* name, bool initialize) {
	$loadClass(Channel, name, initialize, &_Channel_ClassInfo_, allocate$Channel);
	return class$;
}

$Class* Channel::class$ = nullptr;

		} // channels
	} // nio
} // java