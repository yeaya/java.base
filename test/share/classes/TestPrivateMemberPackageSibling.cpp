#include <TestPrivateMemberPackageSibling.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestPrivateMemberPackageSibling::init$() {
}

void TestPrivateMemberPackageSibling::checkInitted() {
}

TestPrivateMemberPackageSibling::TestPrivateMemberPackageSibling() {
}

$Class* TestPrivateMemberPackageSibling::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestPrivateMemberPackageSibling, init$, void)},
		{"checkInitted", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestPrivateMemberPackageSibling, checkInitted, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestPrivateMemberPackageSibling",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestPrivateMemberPackageSibling, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestPrivateMemberPackageSibling);
	});
	return class$;
}

$Class* TestPrivateMemberPackageSibling::class$ = nullptr;