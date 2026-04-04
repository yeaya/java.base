#include <pkg2/PublicClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace pkg2 {

void PublicClass::init$() {
}

PublicClass::PublicClass() {
}

$Class* PublicClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PublicClass, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"pkg2.PublicClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PublicClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PublicClass);
	});
	return class$;
}

$Class* PublicClass::class$ = nullptr;

} // pkg2