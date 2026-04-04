#include <Dummy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Dummy::init$() {
}

Dummy::Dummy() {
}

$Class* Dummy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Dummy, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Dummy",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Dummy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Dummy);
	});
	return class$;
}

$Class* Dummy::class$ = nullptr;