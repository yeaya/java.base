#include <UniTest/Son.h>
#include <UniTest/Dad.h>
#include <jcpp.h>

using $Dad = ::UniTest::Dad;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

void Son::init$() {
	$Dad::init$();
}

Son::Son() {
}

$Class* Son::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Son, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/Bar;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.Son",
		"UniTest.Dad",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Son, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Son);
	});
	return class$;
}

$Class* Son::class$ = nullptr;

} // UniTest