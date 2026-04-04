#include <InvalidNestHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void InvalidNestHost::init$() {
}

InvalidNestHost::InvalidNestHost() {
}

$Class* InvalidNestHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidNestHost, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InvalidNestHost",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InvalidNestHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidNestHost);
	});
	return class$;
}

$Class* InvalidNestHost::class$ = nullptr;