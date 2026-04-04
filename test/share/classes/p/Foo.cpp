#include <p/Foo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {

void Foo::init$() {
}

Foo::Foo() {
}

$Class* Foo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Foo, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.Foo",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Foo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Foo);
	});
	return class$;
}

$Class* Foo::class$ = nullptr;

} // p