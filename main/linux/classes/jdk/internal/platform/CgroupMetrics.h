#ifndef _jdk_internal_platform_CgroupMetrics_h_
#define _jdk_internal_platform_CgroupMetrics_h_
//$ class jdk.internal.platform.CgroupMetrics
//$ extends jdk.internal.platform.Metrics

#include <java/lang/Array.h>
#include <jdk/internal/platform/Metrics.h>

namespace jdk {
	namespace internal {
		namespace platform {
			class CgroupSubsystem;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace platform {

class $export CgroupMetrics : public ::jdk::internal::platform::Metrics {
	$class(CgroupMetrics, $NO_CLASS_INIT, ::jdk::internal::platform::Metrics)
public:
	CgroupMetrics();
	void init$(::jdk::internal::platform::CgroupSubsystem* subsystem);
	virtual int64_t getBlkIOServiceCount() override;
	virtual int64_t getBlkIOServiced() override;
	virtual int64_t getCpuNumPeriods() override;
	virtual int64_t getCpuNumThrottled() override;
	virtual int64_t getCpuPeriod() override;
	virtual int64_t getCpuQuota() override;
	virtual $ints* getCpuSetCpus() override;
	virtual $ints* getCpuSetMems() override;
	virtual int64_t getCpuShares() override;
	virtual int64_t getCpuSystemUsage() override;
	virtual int64_t getCpuThrottledTime() override;
	virtual int64_t getCpuUsage() override;
	virtual int64_t getCpuUserUsage() override;
	virtual int64_t getEffectiveCpuCount() override;
	virtual $ints* getEffectiveCpuSetCpus() override;
	virtual $ints* getEffectiveCpuSetMems() override;
	static ::jdk::internal::platform::Metrics* getInstance();
	virtual int64_t getMemoryAndSwapLimit() override;
	virtual int64_t getMemoryAndSwapUsage() override;
	virtual int64_t getMemoryFailCount() override;
	virtual int64_t getMemoryLimit() override;
	virtual int64_t getMemorySoftLimit() override;
	virtual int64_t getMemoryUsage() override;
	virtual $longs* getPerCpuUsage() override;
	virtual $String* getProvider() override;
	virtual int64_t getTcpMemoryUsage() override;
	static bool isUseContainerSupport();
	::jdk::internal::platform::CgroupSubsystem* subsystem = nullptr;
};

		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_CgroupMetrics_h_