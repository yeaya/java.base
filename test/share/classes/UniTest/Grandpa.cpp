#include <UniTest/Grandpa.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

void Grandpa::init$() {
}

Grandpa::Grandpa() {
}

$Class* Grandpa::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Grandpa, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/Foo;", nullptr},
		{"LUniTest/Bar;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.Grandpa",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Grandpa, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Grandpa);
	});
	return class$;
}

$Class* Grandpa::class$ = nullptr;

} // UniTest