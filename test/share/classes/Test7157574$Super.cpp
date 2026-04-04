#include <Test7157574$Super.h>
#include <Test7157574.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test7157574$Super::init$() {
}

Test7157574$Super::Test7157574$Super() {
}

$Class* Test7157574$Super::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f2", "I", nullptr, $PUBLIC, $field(Test7157574$Super, f2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test7157574$Super, init$, void)},
		{"m2", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Test7157574$Super, m2, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7157574$Super", "Test7157574", "Super", $STATIC | $ABSTRACT},
		{"Test7157574$Intf", "Test7157574", "Intf", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"Test7157574$Super",
		"java.lang.Object",
		"Test7157574$Intf",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test7157574"
	};
	$loadClass(Test7157574$Super, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7157574$Super);
	});
	return class$;
}

$Class* Test7157574$Super::class$ = nullptr;