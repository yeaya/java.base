#include <java/fake/Fake.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace fake {

void Fake::init$() {
}

void Fake::run() {
}

Fake::Fake() {
}

$Class* Fake::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Fake, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Fake, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.fake.Fake",
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

	} // fake
} // java