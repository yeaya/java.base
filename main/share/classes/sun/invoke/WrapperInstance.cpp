#include <sun/invoke/WrapperInstance.h>
#include <java/lang/invoke/MethodHandle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

namespace sun {
	namespace invoke {

$Class* WrapperInstance::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getWrapperInstanceTarget", "()Ljava/lang/invoke/MethodHandle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WrapperInstance, getWrapperInstanceTarget, $MethodHandle*)},
		{"getWrapperInstanceType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(WrapperInstance, getWrapperInstanceType, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.invoke.WrapperInstance",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WrapperInstance, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WrapperInstance);
	});
	return class$;
}

$Class* WrapperInstance::class$ = nullptr;

	} // invoke
} // sun