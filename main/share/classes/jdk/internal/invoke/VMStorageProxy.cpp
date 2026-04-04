#include <jdk/internal/invoke/VMStorageProxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace invoke {

$Class* VMStorageProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"index", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMStorageProxy, index, int32_t)},
		{"type", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(VMStorageProxy, type, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.invoke.VMStorageProxy",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(VMStorageProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VMStorageProxy);
	});
	return class$;
}

$Class* VMStorageProxy::class$ = nullptr;

		} // invoke
	} // internal
} // jdk