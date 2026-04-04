#include <c1/C2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace c1 {

void C2::init$() {
}

C2::C2() {
}

$Class* C2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(C2, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"c1.C2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(C2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C2);
	});
	return class$;
}

$Class* C2::class$ = nullptr;

} // c1