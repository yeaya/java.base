#include <Foo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Foo::init$() {
}

void Foo::privateMethod() {
}

Foo::Foo() {
}

$Class* Foo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Foo, init$, void)},
		{"privateMethod", "()V", nullptr, $PRIVATE, $method(Foo, privateMethod, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Foo",
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