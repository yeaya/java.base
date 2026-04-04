#include <Unnamed1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Unnamed1::init$() {
}

Unnamed1::Unnamed1() {
}

$Class* Unnamed1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Unnamed1, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Unnamed1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Unnamed1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Unnamed1);
	});
	return class$;
}

$Class* Unnamed1::class$ = nullptr;