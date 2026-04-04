#include <sun/nio/ch/Port$PollableChannel.h>
#include <sun/nio/ch/Port.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$Class* Port$PollableChannel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"onEvent", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Port$PollableChannel, onEvent, void, int32_t, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.Port$PollableChannel", "sun.nio.ch.Port", "PollableChannel", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.nio.ch.Port$PollableChannel",
		nullptr,
		"java.io.Closeable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.Port"
	};
	$loadClass(Port$PollableChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Port$PollableChannel);
	});
	return class$;
}

$Class* Port$PollableChannel::class$ = nullptr;

		} // ch
	} // nio
} // sun