#include <testPkg/Singleton.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace testPkg {

void Singleton::init$() {
}

Singleton::Singleton() {
}

$Class* Singleton::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Singleton, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"testPkg.Singleton",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Singleton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Singleton);
	});
	return class$;
}

$Class* Singleton::class$ = nullptr;

} // testPkg