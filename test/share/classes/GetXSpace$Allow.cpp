#include <GetXSpace$Allow.h>

#include <GetXSpace.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Permission = ::java::security::Permission;

$MethodInfo _GetXSpace$Allow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(GetXSpace$Allow, init$, void)},
	{"checkPermission", "(Ljava/security/Permission;)V", nullptr, $PUBLIC, $virtualMethod(GetXSpace$Allow, checkPermission, void, $Permission*)},
	{"checkPermission", "(Ljava/security/Permission;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GetXSpace$Allow, checkPermission, void, $Permission*, Object$*)},
	{"checkRead", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(GetXSpace$Allow, checkRead, void, $String*)},
	{}
};

$InnerClassInfo _GetXSpace$Allow_InnerClassesInfo_[] = {
	{"GetXSpace$Allow", "GetXSpace", "Allow", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GetXSpace$Allow_ClassInfo_ = {
	$ACC_SUPER,
	"GetXSpace$Allow",
	"java.lang.SecurityManager",
	nullptr,
	nullptr,
	_GetXSpace$Allow_MethodInfo_,
	nullptr,
	nullptr,
	_GetXSpace$Allow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetXSpace"
};

$Object* allocate$GetXSpace$Allow($Class* clazz) {
	return $of($alloc(GetXSpace$Allow));
}

void GetXSpace$Allow::init$() {
	$SecurityManager::init$();
}

void GetXSpace$Allow::checkRead($String* file) {
}

void GetXSpace$Allow::checkPermission($Permission* p) {
}

void GetXSpace$Allow::checkPermission($Permission* p, Object$* context) {
}

GetXSpace$Allow::GetXSpace$Allow() {
}

$Class* GetXSpace$Allow::load$($String* name, bool initialize) {
	$loadClass(GetXSpace$Allow, name, initialize, &_GetXSpace$Allow_ClassInfo_, allocate$GetXSpace$Allow);
	return class$;
}

$Class* GetXSpace$Allow::class$ = nullptr;