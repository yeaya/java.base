#include <d2/D3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace d2 {

void D3::init$() {
}

D3::D3() {
}

$Class* D3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(D3, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"d2.D3",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(D3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D3);
	});
	return class$;
}

$Class* D3::class$ = nullptr;

} // d2