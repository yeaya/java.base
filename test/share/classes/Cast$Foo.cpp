#include <Cast$Foo.h>
#include <Cast.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Cast$Foo::init$() {
}

Cast$Foo::Cast$Foo() {
}

$Class* Cast$Foo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Cast$Foo, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Cast$Foo", "Cast", "Foo", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Cast$Foo",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Cast"
	};
	$loadClass(Cast$Foo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cast$Foo);
	});
	return class$;
}

$Class* Cast$Foo::class$ = nullptr;