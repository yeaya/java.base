#include <q2/Type2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace q2 {

void Type2::init$() {
}

Type2::Type2() {
}

$Class* Type2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Type2, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"q2.Type2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Type2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type2);
	});
	return class$;
}

$Class* Type2::class$ = nullptr;

} // q2