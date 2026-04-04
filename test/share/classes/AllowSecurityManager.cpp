#include <AllowSecurityManager.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

void AllowSecurityManager::init$() {
}

void AllowSecurityManager::main($StringArray* args) {
	$useLocalObjectStack();
	$load(AllowSecurityManager);
	$beforeCallerSensitive();
	$var($String, prop, $System::getProperty("java.security.manager"_s));
	bool disallow = "disallow"_s->equals(prop);
	try {
		$System::setSecurityManager($$new($SecurityManager));
		if (disallow) {
			$throwNew($Exception, "System.setSecurityManager did not throw UnsupportedOperationException"_s);
		}
	} catch ($UnsupportedOperationException& uoe) {
		if (!disallow) {
			$throwNew($Exception, "UnsupportedOperationException unexpectedly thrown by System.setSecurityManager"_s);
		}
	}
}

AllowSecurityManager::AllowSecurityManager() {
}

$Class* AllowSecurityManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AllowSecurityManager, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AllowSecurityManager, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AllowSecurityManager",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AllowSecurityManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AllowSecurityManager);
	});
	return class$;
}

$Class* AllowSecurityManager::class$ = nullptr;