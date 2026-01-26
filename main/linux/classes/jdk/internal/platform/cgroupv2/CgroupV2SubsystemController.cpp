#include <jdk/internal/platform/cgroupv2/CgroupV2SubsystemController.h>

#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jdk/internal/platform/CgroupSubsystem.h>
#include <jdk/internal/platform/CgroupSubsystemController.h>
#include <jcpp.h>

#undef LONG_RETVAL_UNLIMITED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $CgroupSubsystem = ::jdk::internal::platform::CgroupSubsystem;
using $CgroupSubsystemController = ::jdk::internal::platform::CgroupSubsystemController;

namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv2 {

$FieldInfo _CgroupV2SubsystemController_FieldInfo_[] = {
	{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CgroupV2SubsystemController, path$)},
	{}
};

$MethodInfo _CgroupV2SubsystemController_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CgroupV2SubsystemController, init$, void, $String*, $String*)},
	{"convertStringToLong", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(CgroupV2SubsystemController, convertStringToLong, int64_t, $String*)},
	{"getLongEntry", "(Ljdk/internal/platform/CgroupSubsystemController;Ljava/lang/String;Ljava/lang/String;)J", nullptr, $PUBLIC | $STATIC, $staticMethod(CgroupV2SubsystemController, getLongEntry, int64_t, $CgroupSubsystemController*, $String*, $String*)},
	{"path", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CgroupV2SubsystemController, path, $String*)},
	{}
};

$ClassInfo _CgroupV2SubsystemController_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.platform.cgroupv2.CgroupV2SubsystemController",
	"java.lang.Object",
	"jdk.internal.platform.CgroupSubsystemController",
	_CgroupV2SubsystemController_FieldInfo_,
	_CgroupV2SubsystemController_MethodInfo_
};

$Object* allocate$CgroupV2SubsystemController($Class* clazz) {
	return $of($alloc(CgroupV2SubsystemController));
}

void CgroupV2SubsystemController::init$($String* mountPath, $String* cgroupPath) {
	$useLocalCurrentObjectStackCache();
	$set(this, path$, $nc($($Paths::get(mountPath, $$new($StringArray, {cgroupPath}))))->toString());
}

$String* CgroupV2SubsystemController::path() {
	return this->path$;
}

int64_t CgroupV2SubsystemController::convertStringToLong($String* strval) {
	$init(CgroupV2SubsystemController);
	return $CgroupSubsystemController::convertStringToLong(strval, $CgroupSubsystem::LONG_RETVAL_UNLIMITED, $CgroupSubsystem::LONG_RETVAL_UNLIMITED);
}

int64_t CgroupV2SubsystemController::getLongEntry($CgroupSubsystemController* controller, $String* param, $String* entryname) {
	$init(CgroupV2SubsystemController);
	return $CgroupSubsystemController::getLongEntry(controller, param, entryname, $CgroupSubsystem::LONG_RETVAL_UNLIMITED);
}

CgroupV2SubsystemController::CgroupV2SubsystemController() {
}

$Class* CgroupV2SubsystemController::load$($String* name, bool initialize) {
	$loadClass(CgroupV2SubsystemController, name, initialize, &_CgroupV2SubsystemController_ClassInfo_, allocate$CgroupV2SubsystemController);
	return class$;
}

$Class* CgroupV2SubsystemController::class$ = nullptr;

			} // cgroupv2
		} // platform
	} // internal
} // jdk