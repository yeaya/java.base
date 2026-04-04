#include <java/nio/channels/AsynchronousChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$Class* AsynchronousChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.AsynchronousChannel",
		nullptr,
		"java.nio.channels.Channel",
		nullptr,
		methodInfos$$
	};
	$loadClass(AsynchronousChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsynchronousChannel);
	});
	return class$;
}

$Class* AsynchronousChannel::class$ = nullptr;

		} // channels
	} // nio
} // java