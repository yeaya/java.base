#include <java/io/DeleteOnExitHook$1.h>
#include <java/io/DeleteOnExitHook.h>
#include <jcpp.h>

using $DeleteOnExitHook = ::java::io::DeleteOnExitHook;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void DeleteOnExitHook$1::init$() {
}

void DeleteOnExitHook$1::run() {
	$DeleteOnExitHook::runHooks();
}

DeleteOnExitHook$1::DeleteOnExitHook$1() {
}

$Class* DeleteOnExitHook$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DeleteOnExitHook$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DeleteOnExitHook$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.DeleteOnExitHook",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.DeleteOnExitHook$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.DeleteOnExitHook$1",
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
		"java.io.DeleteOnExitHook"
	};
	$loadClass(DeleteOnExitHook$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeleteOnExitHook$1);
	});
	return class$;
}

$Class* DeleteOnExitHook$1::class$ = nullptr;

	} // io
} // java