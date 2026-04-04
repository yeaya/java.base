#include <p3/internal/Foo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p3 {
	namespace internal {

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
		"p3.internal.Foo",
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

	} // internal
} // p3