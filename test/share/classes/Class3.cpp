#include <Class3.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Class3::init$() {
}

Class3::Class3() {
}

$Class* Class3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Class3, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Class3",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Class3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Class3);
	});
	return class$;
}

$Class* Class3::class$ = nullptr;