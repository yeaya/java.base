#include <TestHelpers$TestSuperclass.h>
#include <TestHelpers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestHelpers$TestSuperclass::init$() {
}

int32_t TestHelpers$TestSuperclass::m(int32_t x) {
	return -1;
}

TestHelpers$TestSuperclass::TestHelpers$TestSuperclass() {
}

$Class* TestHelpers$TestSuperclass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestHelpers$TestSuperclass, init$, void)},
		{"m", "(I)I", nullptr, $PUBLIC, $virtualMethod(TestHelpers$TestSuperclass, m, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestHelpers$TestSuperclass", "TestHelpers", "TestSuperclass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestHelpers$TestSuperclass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestHelpers"
	};
	$loadClass(TestHelpers$TestSuperclass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestHelpers$TestSuperclass);
	});
	return class$;
}

$Class* TestHelpers$TestSuperclass::class$ = nullptr;