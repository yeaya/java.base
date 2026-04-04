#include <e1/Statics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace e1 {

void Statics::init$() {
}

void Statics::privateMethod() {
}

void Statics::packageMethod() {
}

Statics::Statics() {
}

$Class* Statics::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Statics, init$, void)},
		{"packageMethod", "()V", nullptr, $STATIC, $staticMethod(Statics, packageMethod, void)},
		{"privateMethod", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Statics, privateMethod, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"e1.Statics",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Statics, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Statics);
	});
	return class$;
}

$Class* Statics::class$ = nullptr;

} // e1