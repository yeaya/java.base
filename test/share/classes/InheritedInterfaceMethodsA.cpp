#include <InheritedInterfaceMethodsA.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* InheritedInterfaceMethodsA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"a", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InheritedInterfaceMethodsA, a, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"InheritedInterfaceMethodsA",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InheritedInterfaceMethodsA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedInterfaceMethodsA);
	});
	return class$;
}

$Class* InheritedInterfaceMethodsA::class$ = nullptr;