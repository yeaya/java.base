#include <java/nio/channels/InterruptibleChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$Class* InterruptibleChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.InterruptibleChannel",
		nullptr,
		"java.nio.channels.Channel",
		nullptr,
		methodInfos$$
	};
	$loadClass(InterruptibleChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InterruptibleChannel);
	});
	return class$;
}

$Class* InterruptibleChannel::class$ = nullptr;

		} // channels
	} // nio
} // java