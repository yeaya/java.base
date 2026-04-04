#include <InheritedInterfaceMethodsB.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* InheritedInterfaceMethodsB::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"b", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InheritedInterfaceMethodsB, b, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"InheritedInterfaceMethodsB",
		nullptr,
		"InheritedInterfaceMethodsA",
		nullptr,
		methodInfos$$
	};
	$loadClass(InheritedInterfaceMethodsB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedInterfaceMethodsB);
	});
	return class$;
}

$Class* InheritedInterfaceMethodsB::class$ = nullptr;