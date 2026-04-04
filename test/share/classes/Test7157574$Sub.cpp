#include <Test7157574$Sub.h>
#include <Test7157574$Super.h>
#include <Test7157574.h>
#include <jcpp.h>

using $Test7157574$Super = ::Test7157574$Super;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test7157574$Sub::init$() {
	$Test7157574$Super::init$();
}

Test7157574$Sub::Test7157574$Sub() {
}

$Class* Test7157574$Sub::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test7157574$Sub, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7157574$Sub", "Test7157574", "Sub", $STATIC | $ABSTRACT},
		{"Test7157574$Super", "Test7157574", "Super", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"Test7157574$Sub",
		"Test7157574$Super",
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
	$loadClass(Test7157574$Sub, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7157574$Sub);
	});
	return class$;
}

$Class* Test7157574$Sub::class$ = nullptr;