#ifndef _jdk_internal_platform_cgroupv1_CgroupV1Subsystem_h_
#define _jdk_internal_platform_cgroupv1_CgroupV1Subsystem_h_
//$ class jdk.internal.platform.cgroupv1.CgroupV1Subsystem
//$ extends jdk.internal.platform.CgroupSubsystem
//$ implements jdk.internal.platform.CgroupV1Metrics

#include <java/lang/Array.h>
#include <jdk/internal/platform/CgroupSubsystem.h>
#include <jdk/internal/platform/CgroupV1Metrics.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("PROVIDER_NAME")
#undef PROVIDER_NAME

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace platform {
			class CgroupSubsystemController;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv1 {
				class CgroupV1MemorySubSystemController;
				class CgroupV1SubsystemController;
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv1 {

class CgroupV1Subsystem : public ::jdk::internal::platform::CgroupSubsystem, public ::jdk::internal::platform::CgroupV1Metrics {
	$class(CgroupV1Subsystem, 0, ::jdk::internal::platform::CgroupSubsystem, ::jdk::internal::platform::CgroupV1Metrics)
public:
	CgroupV1Subsystem();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int64_t getBlkIOServiceCount() override;
	virtual int64_t getBlkIOServiced() override;
	virtual int64_t getCpuNumPeriods() override;
	virtual int64_t getCpuNumThrottled() override;
	virtual int64_t getCpuPeriod() override;
	virtual int64_t getCpuQuota() override;
	virtual $ints* getCpuSetCpus() override;
	virtual double getCpuSetMemoryPressure() override;
	virtual $ints* getCpuSetMems() override;
	virtual int64_t getCpuShares() override;
	virtual int64_t getCpuSystemUsage() override;
	virtual int64_t getCpuThrottledTime() override;
	virtual int64_t getCpuUsage() override;
	virtual int64_t getCpuUserUsage() override;
	virtual int64_t getEffectiveCpuCount() override;
	virtual $ints* getEffectiveCpuSetCpus() override;
	virtual $ints* getEffectiveCpuSetMems() override;
	static bool getHierarchical(::jdk::internal::platform::cgroupv1::CgroupV1MemorySubSystemController* controller);
	static ::jdk::internal::platform::cgroupv1::CgroupV1Subsystem* getInstance(::java::util::Map* infos);
	virtual int64_t getKernelMemoryFailCount() override;
	virtual int64_t getKernelMemoryLimit() override;
	virtual int64_t getKernelMemoryMaxUsage() override;
	virtual int64_t getKernelMemoryUsage() override;
	static int64_t getLongValue(::jdk::internal::platform::CgroupSubsystemController* controller, $String* parm);
	virtual int64_t getMemoryAndSwapFailCount() override;
	virtual int64_t getMemoryAndSwapLimit() override;
	virtual int64_t getMemoryAndSwapMaxUsage() override;
	virtual int64_t getMemoryAndSwapUsage() override;
	virtual int64_t getMemoryFailCount() override;
	virtual int64_t getMemoryLimit() override;
	virtual int64_t getMemoryMaxUsage() override;
	virtual int64_t getMemorySoftLimit() override;
	virtual int64_t getMemoryUsage() override;
	virtual $longs* getPerCpuUsage() override;
	virtual $String* getProvider() override;
	static bool getSwapEnabled(::jdk::internal::platform::cgroupv1::CgroupV1MemorySubSystemController* controller);
	virtual int64_t getTcpMemoryFailCount() override;
	virtual int64_t getTcpMemoryLimit() override;
	virtual int64_t getTcpMemoryMaxUsage() override;
	virtual int64_t getTcpMemoryUsage() override;
	static ::jdk::internal::platform::cgroupv1::CgroupV1Subsystem* initSubSystem(::java::util::Map* infos);
	virtual ::java::lang::Boolean* isCpuSetMemoryPressureEnabled() override;
	virtual ::java::lang::Boolean* isMemoryOOMKillEnabled() override;
	void setBlkIOController(::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController* blkio);
	void setCpuAcctController(::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController* cpuacct);
	void setCpuController(::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController* cpu);
	void setCpuSetController(::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController* cpuset);
	void setMemorySubSystem(::jdk::internal::platform::cgroupv1::CgroupV1MemorySubSystemController* memory);
	virtual $String* toString() override;
	::jdk::internal::platform::cgroupv1::CgroupV1MemorySubSystemController* memory = nullptr;
	::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController* cpu = nullptr;
	::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController* cpuacct = nullptr;
	::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController* cpuset = nullptr;
	::jdk::internal::platform::cgroupv1::CgroupV1SubsystemController* blkio = nullptr;
	static $volatile(::jdk::internal::platform::cgroupv1::CgroupV1Subsystem*) INSTANCE;
	static $String* PROVIDER_NAME;
};

			} // cgroupv1
		} // platform
	} // internal
} // jdk

#pragma pop_macro("INSTANCE")
#pragma pop_macro("PROVIDER_NAME")

#endif // _jdk_internal_platform_cgroupv1_CgroupV1Subsystem_h_