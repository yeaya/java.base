#include <UniTest/Dad.h>
#include <UniTest/Grandpa.h>
#include <jcpp.h>

using $Grandpa = ::UniTest::Grandpa;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

void Dad::init$() {
	$Grandpa::init$();
}

Dad::Dad() {
}

$Class* Dad::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Dad, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.Dad",
		"UniTest.Grandpa",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Dad, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Dad);
	});
	return class$;
}

$Class* Dad::class$ = nullptr;

} // UniTest