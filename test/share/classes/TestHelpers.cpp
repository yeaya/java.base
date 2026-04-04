#include <TestHelpers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestHelpers::init$() {
}

TestHelpers::TestHelpers() {
}

$Class* TestHelpers::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestHelpers, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestHelpers$TestClass", "TestHelpers", "TestClass", $STATIC},
		{"TestHelpers$TestSuperclass", "TestHelpers", "TestSuperclass", $STATIC},
		{"TestHelpers$TestInterface", "TestHelpers", "TestInterface", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestHelpers",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestHelpers$TestClass,TestHelpers$TestSuperclass,TestHelpers$TestInterface"
	};
	$loadClass(TestHelpers, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestHelpers);
	});
	return class$;
}

$Class* TestHelpers::class$ = nullptr;