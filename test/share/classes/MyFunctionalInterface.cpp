#include <MyFunctionalInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* MyFunctionalInterface::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"invokeMethodReference", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MyFunctionalInterface, invokeMethodReference, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"MyFunctionalInterface",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MyFunctionalInterface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MyFunctionalInterface);
	});
	return class$;
}

$Class* MyFunctionalInterface::class$ = nullptr;