#include <CheckPermission$LoggingSecurityManager.h>

#include <CheckPermission$Checks.h>
#include <CheckPermission$FileOperation.h>
#include <CheckPermission.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Permission = ::java::security::Permission;
using $List = ::java::util::List;
using $Set = ::java::util::Set;

$MethodInfo _CheckPermission$LoggingSecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CheckPermission$LoggingSecurityManager::*)()>(&CheckPermission$LoggingSecurityManager::init$))},
	{"checkDelete", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkExec", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkFileOperation", "(LCheckPermission$FileOperation;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckPermission$LoggingSecurityManager::*)($CheckPermission$FileOperation*,$String*)>(&CheckPermission$LoggingSecurityManager::checkFileOperation))},
	{"checkPermission", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{"checkPropertyAccess", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkRead", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkWrite", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"install", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&CheckPermission$LoggingSecurityManager::install))},
	{}
};

$InnerClassInfo _CheckPermission$LoggingSecurityManager_InnerClassesInfo_[] = {
	{"CheckPermission$LoggingSecurityManager", "CheckPermission", "LoggingSecurityManager", $STATIC},
	{}
};

$ClassInfo _CheckPermission$LoggingSecurityManager_ClassInfo_ = {
	$ACC_SUPER,
	"CheckPermission$LoggingSecurityManager",
	"java.lang.SecurityManager",
	nullptr,
	nullptr,
	_CheckPermission$LoggingSecurityManager_MethodInfo_,
	nullptr,
	nullptr,
	_CheckPermission$LoggingSecurityManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CheckPermission"
};

$Object* allocate$CheckPermission$LoggingSecurityManager($Class* clazz) {
	return $of($alloc(CheckPermission$LoggingSecurityManager));
}

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
	$useLocalCurrentObjectStackCache();
	$init($CheckPermission);
	$var($CheckPermission$Checks, checks, $cast($CheckPermission$Checks, $nc($CheckPermission::myChecks)->get()));
	if (checks != nullptr) {
		$nc($(checks->permissionsChecked()))->add(perm);
	}
}

void CheckPermission$LoggingSecurityManager::checkPropertyAccess($String* key) {
	$useLocalCurrentObjectStackCache();
	$init($CheckPermission);
	$var($CheckPermission$Checks, checks, $cast($CheckPermission$Checks, $nc($CheckPermission::myChecks)->get()));
	if (checks != nullptr) {
		$nc($(checks->propertiesChecked()))->add(key);
	}
}

CheckPermission$LoggingSecurityManager::CheckPermission$LoggingSecurityManager() {
}

$Class* CheckPermission$LoggingSecurityManager::load$($String* name, bool initialize) {
	$loadClass(CheckPermission$LoggingSecurityManager, name, initialize, &_CheckPermission$LoggingSecurityManager_ClassInfo_, allocate$CheckPermission$LoggingSecurityManager);
	return class$;
}

$Class* CheckPermission$LoggingSecurityManager::class$ = nullptr;