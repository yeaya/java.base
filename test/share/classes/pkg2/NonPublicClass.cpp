#include <pkg2/NonPublicClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace pkg2 {

void NonPublicClass::init$() {
}

NonPublicClass::NonPublicClass() {
}

$Class* NonPublicClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NonPublicClass, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"pkg2.NonPublicClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NonPublicClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonPublicClass);
	});
	return class$;
}

$Class* NonPublicClass::class$ = nullptr;

} // pkg2