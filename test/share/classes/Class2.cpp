#include <Class2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Class2::init$() {
}

Class2::Class2() {
}

$Class* Class2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Class2, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Class2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Class2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Class2);
	});
	return class$;
}

$Class* Class2::class$ = nullptr;