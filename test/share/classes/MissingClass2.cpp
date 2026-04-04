#include <MissingClass2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MissingClass2::init$() {
}

MissingClass2::MissingClass2() {
}

$Class* MissingClass2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MissingClass2, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MissingClass2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MissingClass2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingClass2);
	});
	return class$;
}

$Class* MissingClass2::class$ = nullptr;