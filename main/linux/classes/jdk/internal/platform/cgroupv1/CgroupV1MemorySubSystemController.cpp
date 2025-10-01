#include <jdk/internal/platform/cgroupv1/CgroupV1MemorySubSystemController.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/platform/cgroupv1/CgroupV1SubsystemController.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CgroupV1SubsystemController = ::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController;

namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv1 {

$FieldInfo _CgroupV1MemorySubSystemController_FieldInfo_[] = {
	{"hierarchical", "Z", nullptr, $PRIVATE, $field(CgroupV1MemorySubSystemController, hierarchical)},
	{"swapenabled", "Z", nullptr, $PRIVATE, $field(CgroupV1MemorySubSystemController, swapenabled)},
	{}
};

$MethodInfo _CgroupV1MemorySubSystemController_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CgroupV1MemorySubSystemController::*)($String*,$String*)>(&CgroupV1MemorySubSystemController::init$))},
	{"isHierarchical", "()Z", nullptr, 0},
	{"isSwapEnabled", "()Z", nullptr, 0},
	{"setHierarchical", "(Z)V", nullptr, 0},
	{"setSwapEnabled", "(Z)V", nullptr, 0},
	{}
};

$ClassInfo _CgroupV1MemorySubSystemController_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.platform.cgroupv1.CgroupV1MemorySubSystemController",
	"jdk.internal.platform.cgroupv1.CgroupV1SubsystemController",
	nullptr,
	_CgroupV1MemorySubSystemController_FieldInfo_,
	_CgroupV1MemorySubSystemController_MethodInfo_
};

$Object* allocate$CgroupV1MemorySubSystemController($Class* clazz) {
	return $of($alloc(CgroupV1MemorySubSystemController));
}

void CgroupV1MemorySubSystemController::init$($String* root, $String* mountPoint) {
	$CgroupV1SubsystemController::init$(root, mountPoint);
}

bool CgroupV1MemorySubSystemController::isHierarchical() {
	return this->hierarchical;
}

void CgroupV1MemorySubSystemController::setHierarchical(bool hierarchical) {
	this->hierarchical = hierarchical;
}

bool CgroupV1MemorySubSystemController::isSwapEnabled() {
	return this->swapenabled;
}

void CgroupV1MemorySubSystemController::setSwapEnabled(bool swapenabled) {
	this->swapenabled = swapenabled;
}

CgroupV1MemorySubSystemController::CgroupV1MemorySubSystemController() {
}

$Class* CgroupV1MemorySubSystemController::load$($String* name, bool initialize) {
	$loadClass(CgroupV1MemorySubSystemController, name, initialize, &_CgroupV1MemorySubSystemController_ClassInfo_, allocate$CgroupV1MemorySubSystemController);
	return class$;
}

$Class* CgroupV1MemorySubSystemController::class$ = nullptr;

			} // cgroupv1
		} // platform
	} // internal
} // jdk