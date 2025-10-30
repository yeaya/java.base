#include <AllowSecurityManager.h>

#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

$MethodInfo _AllowSecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AllowSecurityManager::*)()>(&AllowSecurityManager::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AllowSecurityManager::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _AllowSecurityManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AllowSecurityManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AllowSecurityManager_MethodInfo_
};

$Object* allocate$AllowSecurityManager($Class* clazz) {
	return $of($alloc(AllowSecurityManager));
}

void AllowSecurityManager::init$() {
}

void AllowSecurityManager::main($StringArray* args) {
	$load(AllowSecurityManager);
	$useLocalCurrentObjectStackCache();
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
	$loadClass(AllowSecurityManager, name, initialize, &_AllowSecurityManager_ClassInfo_, allocate$AllowSecurityManager);
	return class$;
}

$Class* AllowSecurityManager::class$ = nullptr;