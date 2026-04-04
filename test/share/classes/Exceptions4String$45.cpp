#include <Exceptions4String$45.h>
#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Exceptions4String$45::init$() {
}

void Exceptions4String$45::run() {
	"foo"_s->lastIndexOf(nullptr);
}

Exceptions4String$45::Exceptions4String$45() {
}

$Class* Exceptions4String$45::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Exceptions4String$45, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$45, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Exceptions4String",
		"lastIndexOf",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Exceptions4String$45", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Exceptions4String$45",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Exceptions4String"
	};
	$loadClass(Exceptions4String$45, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Exceptions4String$45);
	});
	return class$;
}

$Class* Exceptions4String$45::class$ = nullptr;