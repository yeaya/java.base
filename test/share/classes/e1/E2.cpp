#include <e1/E2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace e1 {

void E2::init$() {
}

E2::E2() {
}

$Class* E2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(E2, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"e1.E2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(E2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(E2);
	});
	return class$;
}

$Class* E2::class$ = nullptr;

} // e1