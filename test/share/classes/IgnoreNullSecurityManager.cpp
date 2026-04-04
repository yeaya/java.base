#include <IgnoreNullSecurityManager.h>
#include <java/lang/SecurityManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;

void IgnoreNullSecurityManager::init$() {
}

void IgnoreNullSecurityManager::main($StringArray* argv) {
	$load(IgnoreNullSecurityManager);
	$beforeCallerSensitive();
	$System::setSecurityManager(nullptr);
}

IgnoreNullSecurityManager::IgnoreNullSecurityManager() {
}

$Class* IgnoreNullSecurityManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IgnoreNullSecurityManager, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IgnoreNullSecurityManager, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IgnoreNullSecurityManager",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IgnoreNullSecurityManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IgnoreNullSecurityManager);
	});
	return class$;
}

$Class* IgnoreNullSecurityManager::class$ = nullptr;