#include <org/w3c/dom/css/Fake.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {
			namespace css {

void Fake::init$() {
}

Fake::Fake() {
}

$Class* Fake::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Fake, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.w3c.dom.css.Fake",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Fake, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Fake);
	});
	return class$;
}

$Class* Fake::class$ = nullptr;

			} // css
		} // dom
	} // w3c
} // org