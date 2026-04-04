#include <sun/net/ProgressMeteringPolicy.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

namespace sun {
	namespace net {

$Class* ProgressMeteringPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getProgressUpdateThreshold", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProgressMeteringPolicy, getProgressUpdateThreshold, int32_t)},
		{"shouldMeterInput", "(Ljava/net/URL;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProgressMeteringPolicy, shouldMeterInput, bool, $URL*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.net.ProgressMeteringPolicy",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ProgressMeteringPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressMeteringPolicy);
	});
	return class$;
}

$Class* ProgressMeteringPolicy::class$ = nullptr;

	} // net
} // sun