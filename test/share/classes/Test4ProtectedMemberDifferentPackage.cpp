#include <Test4ProtectedMemberDifferentPackage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test4ProtectedMemberDifferentPackage::init$() {
}

Test4ProtectedMemberDifferentPackage::Test4ProtectedMemberDifferentPackage() {
}

$Class* Test4ProtectedMemberDifferentPackage::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4ProtectedMemberDifferentPackage, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test4ProtectedMemberDifferentPackage",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test4ProtectedMemberDifferentPackage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4ProtectedMemberDifferentPackage);
	});
	return class$;
}

$Class* Test4ProtectedMemberDifferentPackage::class$ = nullptr;