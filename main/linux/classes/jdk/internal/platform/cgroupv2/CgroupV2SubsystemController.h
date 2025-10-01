#ifndef _jdk_internal_platform_cgroupv2_CgroupV2SubsystemController_h_
#define _jdk_internal_platform_cgroupv2_CgroupV2SubsystemController_h_
//$ class jdk.internal.platform.cgroupv2.CgroupV2SubsystemController
//$ extends jdk.internal.platform.CgroupSubsystemController

#include <jdk/internal/platform/CgroupSubsystemController.h>

namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv2 {

class CgroupV2SubsystemController : public ::jdk::internal::platform::CgroupSubsystemController {
	$class(CgroupV2SubsystemController, $NO_CLASS_INIT, ::jdk::internal::platform::CgroupSubsystemController)
public:
	CgroupV2SubsystemController();
	void init$($String* mountPath, $String* cgroupPath);
	static int64_t convertStringToLong($String* strval);
	static int64_t getLongEntry(::jdk::internal::platform::CgroupSubsystemController* controller, $String* param, $String* entryname);
	virtual $String* path() override;
	$String* path$ = nullptr;
};

			} // cgroupv2
		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_cgroupv2_CgroupV2SubsystemController_h_