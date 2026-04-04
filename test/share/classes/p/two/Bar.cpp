#include <p/two/Bar.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {
	namespace two {

void Bar::init$() {
}

$String* Bar::toString() {
	return this->getClass()->getName();
}

Bar::Bar() {
}

$Class* Bar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bar, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Bar, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.two.Bar",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Bar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bar);
	});
	return class$;
}

$Class* Bar::class$ = nullptr;

	} // two
} // p