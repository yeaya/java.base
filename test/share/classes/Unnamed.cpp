#include <Unnamed.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

void Unnamed::init$() {
}

$MethodHandles$Lookup* Unnamed::lookup() {
	$load(Unnamed);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

Unnamed::Unnamed() {
}

$Class* Unnamed::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Unnamed, init$, void)},
		{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $staticMethod(Unnamed, lookup, $MethodHandles$Lookup*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Unnamed",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Unnamed, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Unnamed);
	});
	return class$;
}

$Class* Unnamed::class$ = nullptr;