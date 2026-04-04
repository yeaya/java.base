#include <e1/NonPublic.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace e1 {

void NonPublic::init$() {
}

void NonPublic::publicStatic() {
}

NonPublic::NonPublic() {
}

$Class* NonPublic::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NonPublic, init$, void)},
		{"publicStatic", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(NonPublic, publicStatic, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"e1.NonPublic",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NonPublic, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonPublic);
	});
	return class$;
}

$Class* NonPublic::class$ = nullptr;

} // e1