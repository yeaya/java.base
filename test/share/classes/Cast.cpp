#include <Cast.h>
#include <Cast$Foo.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $Cast$Foo = ::Cast$Foo;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Cast::init$() {
}

void Cast::main($StringArray* argv) {
	$useLocalObjectStack();
	$load(Cast);
	$beforeCallerSensitive();
	$load($Cast$Foo);
	$var($Object, o, $Cast$Foo::class$->newInstance());
	$var($Cast$Foo, f, $cast($Cast$Foo, $Cast$Foo::class$->cast(o)));
	if (f == nullptr) {
		$throwNew($Error);
	}
	$var($Cast$Foo, f2, $cast($Cast$Foo, $Cast$Foo::class$->cast(nullptr)));
}

Cast::Cast() {
}

$Class* Cast::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Cast, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Cast, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Cast$Foo", "Cast", "Foo", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Cast",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Cast$Foo"
	};
	$loadClass(Cast, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Cast);
	});
	return class$;
}

$Class* Cast::class$ = nullptr;