#include <java/nio/channels/Channel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

$Class* Channel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Channel, isOpen, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.nio.channels.Channel",
		nullptr,
		"java.io.Closeable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Channel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Channel);
	});
	return class$;
}

$Class* Channel::class$ = nullptr;

		} // channels
	} // nio
} // java