#include <foo/bar/Baz.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace foo {
	namespace bar {

void Baz::init$() {
}

Baz::Baz() {
}

$Class* Baz::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Baz, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"foo.bar.Baz",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Baz, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Baz);
	});
	return class$;
}

$Class* Baz::class$ = nullptr;

	} // bar
} // foo