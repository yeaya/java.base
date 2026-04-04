#include <InheritedInterfaceMethodsC.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* InheritedInterfaceMethodsC::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"c", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InheritedInterfaceMethodsC, c, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"InheritedInterfaceMethodsC",
		nullptr,
		"InheritedInterfaceMethodsB",
		nullptr,
		methodInfos$$
	};
	$loadClass(InheritedInterfaceMethodsC, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedInterfaceMethodsC);
	});
	return class$;
}

$Class* InheritedInterfaceMethodsC::class$ = nullptr;