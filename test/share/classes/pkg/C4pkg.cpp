#include <pkg/C4pkg.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $Set = ::java::util::Set;

namespace pkg {

void C4pkg::init$() {
}

$MethodHandles$Lookup* C4pkg::lookup() {
	$load(C4pkg);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

$Set* C4pkg::inaccessibleFields() {
	return $Set::of("f_private"_s, "f_private_final"_s, "f_private_static"_s, "f_private_static_final"_s);
}

C4pkg::C4pkg() {
}

$Class* C4pkg::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(C4pkg, init$, void)},
		{"inaccessibleFields", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(C4pkg, inaccessibleFields, $Set*)},
		{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $staticMethod(C4pkg, lookup, $MethodHandles$Lookup*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"pkg.C4pkg",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(C4pkg, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C4pkg);
	});
	return class$;
}

$Class* C4pkg::class$ = nullptr;

} // pkg