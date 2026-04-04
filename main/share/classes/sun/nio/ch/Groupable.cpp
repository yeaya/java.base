#include <sun/nio/ch/Groupable.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;

namespace sun {
	namespace nio {
		namespace ch {

$Class* Groupable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"group", "()Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Groupable, group, $AsynchronousChannelGroupImpl*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.nio.ch.Groupable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Groupable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Groupable);
	});
	return class$;
}

$Class* Groupable::class$ = nullptr;

		} // ch
	} // nio
} // sun