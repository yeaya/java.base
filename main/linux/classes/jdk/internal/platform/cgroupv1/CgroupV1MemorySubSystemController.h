#ifndef _jdk_internal_platform_cgroupv1_CgroupV1MemorySubSystemController_h_
#define _jdk_internal_platform_cgroupv1_CgroupV1MemorySubSystemController_h_
//$ class jdk.internal.platform.cgroupv1.CgroupV1MemorySubSystemController
//$ extends jdk.internal.platform.cgroupv1.CgroupV1SubsystemController

#include <jdk/internal/platform/cgroupv1/CgroupV1SubsystemController.h>

namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv1 {

class CgroupV1MemorySubSystemController : public ::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController {
	$class(CgroupV1MemorySubSystemController, $NO_CLASS_INIT, ::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController)
public:
	CgroupV1MemorySubSystemController();
	void init$($String* root, $String* mountPoint);
	virtual bool isHierarchical();
	virtual bool isSwapEnabled();
	virtual void setHierarchical(bool hierarchical);
	virtual void setSwapEnabled(bool swapenabled);
	bool hierarchical = false;
	bool swapenabled = false;
};

			} // cgroupv1
		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_cgroupv1_CgroupV1MemorySubSystemController_h_