#include <p/Bar.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

void Bar::init$() {
}

Bar::Bar() {
}

$Class* Bar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bar, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.Bar",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bar);
	});
	return class$;
}

$Class* Bar::class$ = nullptr;

} // p