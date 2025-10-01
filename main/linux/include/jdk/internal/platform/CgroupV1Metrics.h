#ifndef _jdk_internal_platform_CgroupV1Metrics_h_
#define _jdk_internal_platform_CgroupV1Metrics_h_
//$ interface jdk.internal.platform.CgroupV1Metrics
//$ extends jdk.internal.platform.Metrics

#include <jdk/internal/platform/Metrics.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace jdk {
	namespace internal {
		namespace platform {

class $import CgroupV1Metrics : public ::jdk::internal::platform::Metrics {
	$interface(CgroupV1Metrics, $NO_CLASS_INIT, ::jdk::internal::platform::Metrics)
public:
	virtual double getCpuSetMemoryPressure() {return 0.0;}
	virtual int64_t getKernelMemoryFailCount() {return 0;}
	virtual int64_t getKernelMemoryLimit() {return 0;}
	virtual int64_t getKernelMemoryMaxUsage() {return 0;}
	virtual int64_t getKernelMemoryUsage() {return 0;}
	virtual int64_t getMemoryAndSwapFailCount() {return 0;}
	virtual int64_t getMemoryAndSwapMaxUsage() {return 0;}
	virtual int64_t getMemoryMaxUsage() {return 0;}
	virtual int64_t getTcpMemoryFailCount() {return 0;}
	virtual int64_t getTcpMemoryLimit() {return 0;}
	virtual int64_t getTcpMemoryMaxUsage() {return 0;}
	virtual ::java::lang::Boolean* isCpuSetMemoryPressureEnabled() {return nullptr;}
	virtual ::java::lang::Boolean* isMemoryOOMKillEnabled() {return nullptr;}
};

		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_CgroupV1Metrics_h_