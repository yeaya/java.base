#include <d1/D2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace d1 {

void D2::init$() {
}

D2::D2() {
}

$Class* D2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(D2, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"d1.D2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(D2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D2);
	});
	return class$;
}

$Class* D2::class$ = nullptr;

} // d1