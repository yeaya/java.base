#ifndef _jdk_internal_platform_SystemMetrics_h_
#define _jdk_internal_platform_SystemMetrics_h_
//$ class jdk.internal.platform.SystemMetrics
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace platform {
			class Metrics;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace platform {

class $import SystemMetrics : public ::java::lang::Object {
	$class(SystemMetrics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SystemMetrics();
	void init$();
	static ::jdk::internal::platform::Metrics* instance();
};

		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_SystemMetrics_h_