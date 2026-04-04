#include <p/A.h>
#include <jcpp.h>

#undef A

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

void A::init$() {
}

void A::hello() {
	$nc($System::out)->println("A"_s);
}

A::A() {
}

$Class* A::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(A, init$, void)},
		{"hello", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(A, hello, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.A",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(A, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(A);
	});
	return class$;
}

$Class* A::class$ = nullptr;

} // p