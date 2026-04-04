#include <p/Baz.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

void Baz::init$() {
}

Baz::Baz() {
}

$Class* Baz::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Baz, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.Baz",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Baz, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Baz);
	});
	return class$;
}

$Class* Baz::class$ = nullptr;

} // p