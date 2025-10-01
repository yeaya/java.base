#ifndef _jdk_internal_platform_CgroupSubsystem_h_
#define _jdk_internal_platform_CgroupSubsystem_h_
//$ interface jdk.internal.platform.CgroupSubsystem
//$ extends jdk.internal.platform.Metrics

#include <jdk/internal/platform/Metrics.h>

#pragma push_macro("LONG_RETVAL_UNLIMITED")
#undef LONG_RETVAL_UNLIMITED

namespace jdk {
	namespace internal {
		namespace platform {

class $import CgroupSubsystem : public ::jdk::internal::platform::Metrics {
	$interface(CgroupSubsystem, $NO_CLASS_INIT, ::jdk::internal::platform::Metrics)
public:
	static const int64_t LONG_RETVAL_UNLIMITED = (-1);
};

		} // platform
	} // internal
} // jdk

#pragma pop_macro("LONG_RETVAL_UNLIMITED")

#endif // _jdk_internal_platform_CgroupSubsystem_h_