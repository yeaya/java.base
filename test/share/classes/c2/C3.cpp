#include <c2/C3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace c2 {

void C3::init$() {
}

C3::C3() {
}

$Class* C3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(C3, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"c2.C3",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(C3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C3);
	});
	return class$;
}

$Class* C3::class$ = nullptr;

} // c2