#include <Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Main::init$() {
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Main, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Main",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Main, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main);
	});
	return class$;
}

$Class* Main::class$ = nullptr;