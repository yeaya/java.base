#include <GetXSpace$Deny.h>
#include <GetXSpace.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Permission = ::java::security::Permission;

void GetXSpace$Deny::init$() {
	$SecurityManager::init$();
}

void GetXSpace$Deny::checkPermission($Permission* p) {
	$useLocalObjectStack();
	bool var$0 = $nc(p)->implies($$new($RuntimePermission, "setSecurityManager"_s));
	if (var$0 || p->implies($$new($RuntimePermission, "getProtectionDomain"_s))) {
		return;
	}
	$SecurityManager::checkPermission(p);
}

void GetXSpace$Deny::checkPermission($Permission* p, Object$* context) {
	$useLocalObjectStack();
	bool var$0 = $nc(p)->implies($$new($RuntimePermission, "setSecurityManager"_s));
	if (var$0 || p->implies($$new($RuntimePermission, "getProtectionDomain"_s))) {
		return;
	}
	$SecurityManager::checkPermission(p, context);
}

GetXSpace$Deny::GetXSpace$Deny() {
}

$Class* GetXSpace$Deny::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GetXSpace$Deny, init$, void)},
		{"checkPermission", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(GetXSpace$Deny, checkPermission, void, $Permission*)},
		{"checkPermission", "(Ljava/security/Permission;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GetXSpace$Deny, checkPermission, void, $Permission*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetXSpace$Deny", "GetXSpace", "Deny", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetXSpace$Deny",
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
		"GetXSpace"
	};
	$loadClass(GetXSpace$Deny, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetXSpace$Deny);
	});
	return class$;
}

$Class* GetXSpace$Deny::class$ = nullptr;