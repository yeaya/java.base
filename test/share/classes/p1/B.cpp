#include <p1/B.h>
#include <jcpp.h>

#undef B
#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {

B* B::INSTANCE = nullptr;

void B::init$() {
}

void B::clinit$($Class* clazz) {
	$assignStatic(B::INSTANCE, $new(B));
}

B::B() {
}

$Class* B::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Lp1/B;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(B, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(B, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"p1.B",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(B, name, initialize, &classInfo$$, B::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(B);
	});
	return class$;
}

$Class* B::class$ = nullptr;

} // p1