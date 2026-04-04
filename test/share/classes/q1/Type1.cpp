#include <q1/Type1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace q1 {

void Type1::init$() {
}

Type1::Type1() {
}

$Class* Type1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Type1, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"q1.Type1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Type1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type1);
	});
	return class$;
}

$Class* Type1::class$ = nullptr;

} // q1