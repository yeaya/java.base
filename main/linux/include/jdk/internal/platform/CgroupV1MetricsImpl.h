#ifndef _jdk_internal_platform_CgroupV1MetricsImpl_h_
#define _jdk_internal_platform_CgroupV1MetricsImpl_h_
//$ class jdk.internal.platform.CgroupV1MetricsImpl
//$ extends jdk.internal.platform.CgroupMetrics
//$ implements jdk.internal.platform.CgroupV1Metrics

#include <jdk/internal/platform/CgroupMetrics.h>
#include <jdk/internal/platform/CgroupV1Metrics.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace jdk {
	namespace internal {
		namespace platform {

class $import CgroupV1MetricsImpl : public ::jdk::internal::platform::CgroupMetrics, public ::jdk::internal::platform::CgroupV1Metrics {
	$class(CgroupV1MetricsImpl, $NO_CLASS_INIT, ::jdk::internal::platform::CgroupMetrics, ::jdk::internal::platform::CgroupV1Metrics)
public:
	CgroupV1MetricsImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
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
	virtual int64_t getMemoryAndSwapLimit() override;
	virtual int64_t getMemoryAndSwapUsage() override;
	virtual int64_t getMemoryFailCount() override;
	virtual int64_t getMemoryLimit() override;
	virtual int64_t getMemorySoftLimit() override;
	virtual int64_t getMemoryUsage() override;
	virtual $longs* getPerCpuUsage() override;
	virtual $String* getProvider() override;
	virtual int64_t getTcpMemoryUsage() override;
	virtual int32_t hashCode() override;
	void init$(::jdk::internal::platform::CgroupV1Metrics* metrics);
	virtual double getCpuSetMemoryPressure() override;
	virtual int64_t getKernelMemoryFailCount() override;
	virtual int64_t getKernelMemoryLimit() override;
	virtual int64_t getKernelMemoryMaxUsage() override;
	virtual int64_t getKernelMemoryUsage() override;
	virtual int64_t getMemoryAndSwapFailCount() override;
	virtual int64_t getMemoryAndSwapMaxUsage() override;
	virtual int64_t getMemoryMaxUsage() override;
	virtual int64_t getTcpMemoryFailCount() override;
	virtual int64_t getTcpMemoryLimit() override;
	virtual int64_t getTcpMemoryMaxUsage() override;
	virtual ::java::lang::Boolean* isCpuSetMemoryPressureEnabled() override;
	virtual ::java::lang::Boolean* isMemoryOOMKillEnabled() override;
	virtual $String* toString() override;
	::jdk::internal::platform::CgroupV1Metrics* metrics = nullptr;
};

		} // platform
	} // internal
} // jdk

#endif // _jdk_internal_platform_CgroupV1MetricsImpl_h_