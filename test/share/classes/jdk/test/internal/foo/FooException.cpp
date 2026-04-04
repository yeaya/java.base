#include <jdk/test/internal/foo/FooException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace jdk {
	namespace test {
		namespace internal {
			namespace foo {

void FooException::init$() {
	$RuntimeException::init$();
}

FooException::FooException() {
}

FooException::FooException(const FooException& e) : $RuntimeException(e) {
}

void FooException::throw$() {
	throw *this;
}

$Class* FooException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FooException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.test.internal.foo.FooException",
		"java.lang.RuntimeException",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FooException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FooException);
	});
	return class$;
}

$Class* FooException::class$ = nullptr;

			} // foo
		} // internal
	} // test
} // jdk