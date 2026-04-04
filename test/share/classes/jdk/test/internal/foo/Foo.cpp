#include <jdk/test/internal/foo/Foo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace test {
		namespace internal {
			namespace foo {

void Foo::init$() {
}

$String* Foo::toString() {
	return this->getClass()->getName();
}

Foo::Foo() {
}

$Class* Foo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Foo, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Foo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.test.internal.foo.Foo",
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

			} // foo
		} // internal
	} // test
} // jdk