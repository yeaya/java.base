#include <Exceptions4String$20.h>
#include <Exceptions4String.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Exceptions4String$20::init$() {
}

void Exceptions4String$20::run() {
	$new($String, ($bytes*)nullptr, 0);
}

Exceptions4String$20::Exceptions4String$20() {
}

$Class* Exceptions4String$20::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Exceptions4String$20, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Exceptions4String$20, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Exceptions4String",
		"byteArrayHi",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Exceptions4String$20", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Exceptions4String$20",
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
	$loadClass(Exceptions4String$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Exceptions4String$20);
	});
	return class$;
}

$Class* Exceptions4String$20::class$ = nullptr;