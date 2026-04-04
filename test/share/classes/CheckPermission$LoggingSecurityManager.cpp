#include <CheckPermission$LoggingSecurityManager.h>
#include <CheckPermission$Checks.h>
#include <CheckPermission$FileOperation.h>
#include <CheckPermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadLocal.h>
#include <java/security/Permission.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef DELETE
#undef EXEC
#undef READ
#undef WRITE

using $CheckPermission = ::CheckPermission;
using $CheckPermission$Checks = ::CheckPermission$Checks;
using $CheckPermission$FileOperation = ::CheckPermission$FileOperation;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Permission = ::java::security::Permission;

void CheckPermission$LoggingSecurityManager::init$() {
	$SecurityManager::init$();
}

void CheckPermission$LoggingSecurityManager::install() {
	$init(CheckPermission$LoggingSecurityManager);
	$beforeCallerSensitive();
	$System::setSecurityManager($$new(CheckPermission$LoggingSecurityManager));
}

void CheckPermission$LoggingSecurityManager::checkFileOperation($CheckPermission$FileOperation* op, $String* file) {
	$init($CheckPermission);
	$var($CheckPermission$Checks, checks, $cast($CheckPermission$Checks, $nc($CheckPermission::myChecks)->get()));
	if (checks != nullptr) {
		checks->addFileOperation(op, file);
	}
}

void CheckPermission$LoggingSecurityManager::checkRead($String* file) {
	$init($CheckPermission$FileOperation);
	checkFileOperation($CheckPermission$FileOperation::READ, file);
}

void CheckPermission$LoggingSecurityManager::checkWrite($String* file) {
	$init($CheckPermission$FileOperation);
	checkFileOperation($CheckPermission$FileOperation::WRITE, file);
}

void CheckPermission$LoggingSecurityManager::checkDelete($String* file) {
	$init($CheckPermission$FileOperation);
	checkFileOperation($CheckPermission$FileOperation::DELETE, file);
}

void CheckPermission$LoggingSecurityManager::checkExec($String* file) {
	$init($CheckPermission$FileOperation);
	checkFileOperation($CheckPermission$FileOperation::EXEC, file);
}

void CheckPermission$LoggingSecurityManager::checkPermission($Permission* perm) {
	$useLocalObjectStack();
	$init($CheckPermission);
	$var($CheckPermission$Checks, checks, $cast($CheckPermission$Checks, $nc($CheckPermission::myChecks)->get()));
	if (checks != nullptr) {
		$$nc(checks->permissionsChecked())->add(perm);
	}
}

void CheckPermission$LoggingSecurityManager::checkPropertyAccess($String* key) {
	$useLocalObjectStack();
	$init($CheckPermission);
	$var($CheckPermission$Checks, checks, $cast($CheckPermission$Checks, $nc($CheckPermission::myChecks)->get()));
	if (checks != nullptr) {
		$$nc(checks->propertiesChecked())->add(key);
	}
}

CheckPermission$LoggingSecurityManager::CheckPermission$LoggingSecurityManager() {
}

$Class* CheckPermission$LoggingSecurityManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CheckPermission$LoggingSecurityManager, init$, void)},
		{"checkDelete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CheckPermission$LoggingSecurityManager, checkDelete, void, $String*)},
		{"checkExec", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CheckPermission$LoggingSecurityManager, checkExec, void, $String*)},
		{"checkFileOperation", "(LCheckPermission$FileOperation;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(CheckPermission$LoggingSecurityManager, checkFileOperation, void, $CheckPermission$FileOperation*, $String*)},
		{"checkPermission", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(CheckPermission$LoggingSecurityManager, checkPermission, void, $Permission*)},
		{"checkPropertyAccess", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CheckPermission$LoggingSecurityManager, checkPropertyAccess, void, $String*)},
		{"checkRead", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CheckPermission$LoggingSecurityManager, checkRead, void, $String*)},
		{"checkWrite", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CheckPermission$LoggingSecurityManager, checkWrite, void, $String*)},
		{"install", "()V", nullptr, $STATIC, $staticMethod(CheckPermission$LoggingSecurityManager, install, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CheckPermission$LoggingSecurityManager", "CheckPermission", "LoggingSecurityManager", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CheckPermission$LoggingSecurityManager",
		"java.lang.SecurityManager",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CheckPermission"
	};
	$loadClass(CheckPermission$LoggingSecurityManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckPermission$LoggingSecurityManager);
	});
	return class$;
}

$Class* CheckPermission$LoggingSecurityManager::class$ = nullptr;