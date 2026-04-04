#include <Obj.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Obj::init$() {
}

Obj::Obj() {
}

$Class* Obj::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Obj, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Obj",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Obj, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Obj);
	});
	return class$;
}

$Class* Obj::class$ = nullptr;