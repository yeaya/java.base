#include <IgnoreNullSecurityManager.h>

#include <java/lang/SecurityManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;

$MethodInfo _IgnoreNullSecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IgnoreNullSecurityManager, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IgnoreNullSecurityManager, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _IgnoreNullSecurityManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IgnoreNullSecurityManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IgnoreNullSecurityManager_MethodInfo_
};

$Object* allocate$IgnoreNullSecurityManager($Class* clazz) {
	return $of($alloc(IgnoreNullSecurityManager));
}

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
	$loadClass(IgnoreNullSecurityManager, name, initialize, &_IgnoreNullSecurityManager_ClassInfo_, allocate$IgnoreNullSecurityManager);
	return class$;
}

$Class* IgnoreNullSecurityManager::class$ = nullptr;