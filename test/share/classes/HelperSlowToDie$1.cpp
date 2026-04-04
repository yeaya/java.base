#include <HelperSlowToDie$1.h>
#include <HelperSlowToDie.h>
#include <jcpp.h>

using $HelperSlowToDie = ::HelperSlowToDie;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HelperSlowToDie$1::init$() {
}

void HelperSlowToDie$1::run() {
	$init($HelperSlowToDie);
	while (!$HelperSlowToDie::done) {
		;
	}
}

HelperSlowToDie$1::HelperSlowToDie$1() {
}

$Class* HelperSlowToDie$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HelperSlowToDie$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HelperSlowToDie$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HelperSlowToDie",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HelperSlowToDie$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HelperSlowToDie$1",
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
		"HelperSlowToDie"
	};
	$loadClass(HelperSlowToDie$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HelperSlowToDie$1);
	});
	return class$;
}

$Class* HelperSlowToDie$1::class$ = nullptr;