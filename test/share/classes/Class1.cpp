#include <Class1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Class1::init$() {
}

Class1::Class1() {
}

$Class* Class1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Class1, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Class1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Class1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Class1);
	});
	return class$;
}

$Class* Class1::class$ = nullptr;