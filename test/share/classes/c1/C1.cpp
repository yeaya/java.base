#include <c1/C1.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace c1 {

void C1::init$() {
}

$MethodHandles$Lookup* C1::lookup() {
	$load(C1);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

C1::C1() {
}

$Class* C1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(C1, init$, void)},
		{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $staticMethod(C1, lookup, $MethodHandles$Lookup*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"c1.C1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(C1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C1);
	});
	return class$;
}

$Class* C1::class$ = nullptr;

} // c1