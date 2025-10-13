#ifndef _jdk_internal_platform_cgroupv2_CgroupV2Subsystem_h_
#define _jdk_internal_platform_cgroupv2_CgroupV2Subsystem_h_
//$ class jdk.internal.platform.cgroupv2.CgroupV2Subsystem
//$ extends jdk.internal.platform.CgroupSubsystem

#include <java/lang/Array.h>
#include <jdk/internal/platform/CgroupSubsystem.h>

#pragma push_macro("EMPTY_STR")
#undef EMPTY_STR
#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("INT_ARRAY_UNAVAILABLE")
#undef INT_ARRAY_UNAVAILABLE
#pragma push_macro("LONG_ARRAY_NOT_SUPPORTED")
#undef LONG_ARRAY_NOT_SUPPORTED
#pragma push_macro("MAX_VAL")
#undef MAX_VAL
#pragma push_macro("NO_SWAP")
#undef NO_SWAP
#pragma push_macro("PER_CPU_SHARES")
#undef PER_CPU_SHARES
#pragma push_macro("PROVIDER_NAME")
#undef PROVIDER_NAME

namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace platform {
			class CgroupInfo;
			class CgroupSubsystemController;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace platform {
			namespace cgroupv2 {

class CgroupV2Subsystem : public ::jdk::internal::platform::CgroupSubsystem {
	$class(CgroupV2Subsystem, 0, ::jdk::internal::platform::CgroupSubsystem)
public:
	CgroupV2Subsystem();
	void init$(::jdk::internal::platform::CgroupSubsystemController* unified);
	virtual int64_t getBlkIOServiceCount() override;
	virtual int64_t getBlkIOServiced() override;
	virtual int64_t getCpuNumPeriods() override;
	virtual int64_t getCpuNumThrottled() override;
	virtual int64_t getCpuPeriod() override;
	virtual int64_t getCpuQuota() override;
	$ints* getCpuSet($String* cpuSetVal);
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
	int64_t getFromCpuMax(int32_t tokenIdx);
	static ::jdk::internal::platform::CgroupSubsystem* getInstance(::jdk::internal::platform::CgroupInfo* anyController);
	int64_t getLongVal($String* file, int64_t defaultValue);
	int64_t getLongVal($String* file);
	virtual int64_t getMemoryAndSwapLimit() override;
	virtual int64_t getMemoryAndSwapUsage() override;
	virtual int64_t getMemoryFailCount() override;
	virtual int64_t getMemoryLimit() override;
	virtual int64_t getMemorySoftLimit() override;
	virtual int64_t getMemoryUsage() override;
	virtual $longs* getPerCpuUsage() override;
	virtual $String* getProvider() override;
	static $StringArray* getRWBytesIOMatchTokenNames();
	static $StringArray* getRWIOMatchTokenNames();
	virtual int64_t getTcpMemoryUsage() override;
	static ::java::lang::Long* ioStatLineToLong($String* line, $StringArray* matchNames);
	static int64_t lambda$sumTokensIOStat$0(::java::lang::Long* e);
	int64_t limitFromString($String* strVal);
	static ::java::lang::Long* lineToRBytesAndWBytesIO($String* line);
	static ::java::lang::Long* lineToRandWIOs($String* line);
	static int64_t longOrZero($String* val);
	int64_t sumTokensIOStat(::java::util::function::Function* mapFunc);
	static bool $assertionsDisabled;
	static $volatile(::jdk::internal::platform::cgroupv2::CgroupV2Subsystem*) INSTANCE;
	static $longs* LONG_ARRAY_NOT_SUPPORTED;
	static $ints* INT_ARRAY_UNAVAILABLE;
	::jdk::internal::platform::CgroupSubsystemController* unified = nullptr;
	static $String* PROVIDER_NAME;
	static const int32_t PER_CPU_SHARES = 1024;
	static $String* MAX_VAL;
	static $Object* EMPTY_STR;
	static const int64_t NO_SWAP = 0;
};

			} // cgroupv2
		} // platform
	} // internal
} // jdk

#pragma pop_macro("EMPTY_STR")
#pragma pop_macro("INSTANCE")
#pragma pop_macro("INT_ARRAY_UNAVAILABLE")
#pragma pop_macro("LONG_ARRAY_NOT_SUPPORTED")
#pragma pop_macro("MAX_VAL")
#pragma pop_macro("NO_SWAP")
#pragma pop_macro("PER_CPU_SHARES")
#pragma pop_macro("PROVIDER_NAME")

#endif // _jdk_internal_platform_cgroupv2_CgroupV2Subsystem_h_