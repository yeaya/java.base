#ifndef _jdk_internal_platform_Metrics_h_
#define _jdk_internal_platform_Metrics_h_
//$ interface jdk.internal.platform.Metrics
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace platform {

class $export Metrics : public ::java::lang::Object {
	$interface(Metrics, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getBlkIOServiceCount() {return 0;}
	virtual int64_t getBlkIOServiced() {return 0;}
	virtual int64_t getCpuNumPeriods() {return 0;}
	virtual int64_t getCpuNumThrottled() {return 0;}
	virtual int64_t getCpuPeriod() {return 0;}
	virtual int64_t getCpuQuota() {return 0;}
	virtual $ints* getCpuSetCpus() {return nullptr;}
	virtual $ints* getCpuSetMems() {return nullptr;}
	virtual int64_t getCpuShares() {return 0;}
	virtual int64_t getCpuSystemUsage() {return 0;}
	virtual int64_t getCpuThrottledTime() {return 0;}
	virtual int64_t getCpuUsage() {return 0;}
	virtual int64_t getCpuUserUsage() {return 0;}
	virtual int64_t getEffectiveCpuCount() {return 0;}
	virtual $ints* getEffectiveCpuSetCpus() {return nullptr;}
	virtual $ints* getEffectiveCpuSetMems() {return nullptr;}
	virtual int64_t getMemoryAndSwapLimit() {return 0;}
	virtual int64_t getMemoryAndSwapUsage() {return 0;}
	virtual int64_t getMemoryFailCount() {return 0;}
	virtual int64_t getMemoryLimit() {return 0;}
	virtual int64_t getMemorySoftLimit() {return 0;}
	virtual int64_t getMemoryUsage() {return 0;}
	virtual $longs* getPerCpuUsage() {return nullptr;}
	virtual $String* getProvider() {return nullptr;}
	virtual int64_t getTcpMemoryUsage() {return 0;}
	static ::jdk::internal::platform::Metrics* systemMetrics();
};

		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_Metrics_h_