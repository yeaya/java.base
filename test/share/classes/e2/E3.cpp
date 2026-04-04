#include <e2/E3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace e2 {

void E3::init$() {
}

E3::E3() {
}

$Class* E3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(E3, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"e2.E3",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(E3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(E3);
	});
	return class$;
}

$Class* E3::class$ = nullptr;

} // e2