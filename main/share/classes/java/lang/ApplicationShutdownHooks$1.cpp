#include <java/lang/ApplicationShutdownHooks$1.h>
#include <java/lang/ApplicationShutdownHooks.h>
#include <jcpp.h>

using $ApplicationShutdownHooks = ::java::lang::ApplicationShutdownHooks;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void ApplicationShutdownHooks$1::init$() {
}

void ApplicationShutdownHooks$1::run() {
	$ApplicationShutdownHooks::runHooks();
}

ApplicationShutdownHooks$1::ApplicationShutdownHooks$1() {
}

$Class* ApplicationShutdownHooks$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ApplicationShutdownHooks$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ApplicationShutdownHooks$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ApplicationShutdownHooks",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ApplicationShutdownHooks$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ApplicationShutdownHooks$1",
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
		"java.lang.ApplicationShutdownHooks"
	};
	$loadClass(ApplicationShutdownHooks$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ApplicationShutdownHooks$1);
	});
	return class$;
}

$Class* ApplicationShutdownHooks$1::class$ = nullptr;

	} // lang
} // java