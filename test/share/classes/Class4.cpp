#include <Class4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Class4::init$() {
}

Class4::Class4() {
}

$Class* Class4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Class4, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Class4",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Class4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Class4);
	});
	return class$;
}

$Class* Class4::class$ = nullptr;