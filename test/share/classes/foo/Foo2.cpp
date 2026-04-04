#include <foo/Foo2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace foo {

void Foo2::init$() {
}

Foo2::Foo2() {
}

$Class* Foo2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Foo2, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"foo.Foo2",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Foo2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Foo2);
	});
	return class$;
}

$Class* Foo2::class$ = nullptr;

} // foo