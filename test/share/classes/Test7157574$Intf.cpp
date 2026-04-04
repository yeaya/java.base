#include <Test7157574$Intf.h>
#include <Test7157574.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* Test7157574$Intf::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"ig1", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Intf, ig1, void)},
		{"ig2", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Intf, ig2, void)},
		{"ig3", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Intf, ig3, void)},
		{"ig4", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Intf, ig4, void)},
		{"m1", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Intf, m1, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7157574$Intf", "Test7157574", "Intf", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"Test7157574$Intf",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test7157574"
	};
	$loadClass(Test7157574$Intf, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7157574$Intf);
	});
	return class$;
}

$Class* Test7157574$Intf::class$ = nullptr;