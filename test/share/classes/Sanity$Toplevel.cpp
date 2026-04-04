#include <Sanity$Toplevel.h>
#include <Sanity.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$Toplevel::init$() {
}

Sanity$Toplevel::Sanity$Toplevel() {
}

$Class* Sanity$Toplevel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Sanity$Toplevel, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Toplevel", "Sanity", "Toplevel", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Sanity$Toplevel",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Sanity"
	};
	$loadClass(Sanity$Toplevel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$Toplevel);
	});
	return class$;
}

$Class* Sanity$Toplevel::class$ = nullptr;