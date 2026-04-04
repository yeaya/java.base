#include <MissingClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void MissingClass::init$() {
}

MissingClass::MissingClass() {
}

$Class* MissingClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MissingClass, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MissingClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MissingClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingClass);
	});
	return class$;
}

$Class* MissingClass::class$ = nullptr;