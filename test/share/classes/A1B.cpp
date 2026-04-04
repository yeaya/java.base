#include <A1B.h>
#include <jcpp.h>

#undef A1B

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void A1B::init$() {
}

A1B::A1B() {
}

$Class* A1B::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"baz", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "()V", nullptr, 0, $method(A1B, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"A1B",
		"java.lang.Object",
		"SonSuperIwithDefault",
		nullptr,
		methodInfos$$
	};
	$loadClass(A1B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(A1B);
	});
	return class$;
}

$Class* A1B::class$ = nullptr;