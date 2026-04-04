#include <jdk/internal/invoke/ABIDescriptorProxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace invoke {

$Class* ABIDescriptorProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"shadowSpaceBytes", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ABIDescriptorProxy, shadowSpaceBytes, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.invoke.ABIDescriptorProxy",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ABIDescriptorProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ABIDescriptorProxy);
	});
	return class$;
}

$Class* ABIDescriptorProxy::class$ = nullptr;

		} // invoke
	} // internal
} // jdk