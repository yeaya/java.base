#include <p/B.h>
#include <jcpp.h>

#undef B

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

void B::init$() {
}

void B::hello() {
	$nc($System::out)->println("B"_s);
}

B::B() {
}

$Class* B::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B, init$, void)},
		{"hello", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(B, hello, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.B",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B);
	});
	return class$;
}

$Class* B::class$ = nullptr;

} // p