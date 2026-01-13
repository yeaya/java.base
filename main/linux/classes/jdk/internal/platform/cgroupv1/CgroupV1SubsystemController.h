#ifndef _jdk_internal_platform_cgroupv1_CgroupV1SubsystemController_h_
#define _jdk_internal_platform_cgroupv1_CgroupV1SubsystemController_h_
//$ class jdk.internal.platform.cgroupv1.CgroupV1SubsystemController
//$ extends jdk.internal.platform.CgroupSubsystemController

#include <jdk/internal/platform/CgroupSubsystemController.h>

#pragma push_macro("DOUBLE_RETVAL_UNLIMITED")
#undef DOUBLE_RETVAL_UNLIMITED
#pragma push_macro("UNLIMITED_MIN")
#undef UNLIMITED_MIN

namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv1 {

class CgroupV1SubsystemController : public ::jdk::internal::platform::CgroupSubsystemController {
	$class(CgroupV1SubsystemController, 0, ::jdk::internal::platform::CgroupSubsystemController)
public:
	CgroupV1SubsystemController();
	void init$($String* root, $String* mountPoint);
	static int64_t convertHierachicalLimitLine($String* line);
	static int64_t convertStringToLong($String* strval);
	static double getDoubleValue(::jdk::internal::platform::CgroupSubsystemController* controller, $String* parm);
	static int64_t getLongEntry(::jdk::internal::platform::CgroupSubsystemController* controller, $String* param, $String* entryname);
	static int64_t getLongValueMatchingLine(::jdk::internal::platform::CgroupSubsystemController* controller, $String* param, $String* match);
	static int64_t longValOrUnlimited(int64_t value);
	virtual $String* path() override;
	virtual void setPath($String* cgroupPath);
	static double DOUBLE_RETVAL_UNLIMITED;
	static int64_t UNLIMITED_MIN;
	$String* root = nullptr;
	$String* mountPoint = nullptr;
	$String* path$ = nullptr;
};

			} // cgroupv1
		} // platform
	} // internal
} // jdk

#pragma pop_macro("DOUBLE_RETVAL_UNLIMITED")
#pragma pop_macro("UNLIMITED_MIN")

#endif // _jdk_internal_platform_cgroupv1_CgroupV1SubsystemController_h_