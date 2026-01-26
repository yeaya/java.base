#include <jdk/internal/platform/CgroupV1Metrics.h>

#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace platform {

$MethodInfo _CgroupV1Metrics_MethodInfo_[] = {
	{"getCpuSetMemoryPressure", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getCpuSetMemoryPressure, double)},
	{"getKernelMemoryFailCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getKernelMemoryFailCount, int64_t)},
	{"getKernelMemoryLimit", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getKernelMemoryLimit, int64_t)},
	{"getKernelMemoryMaxUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getKernelMemoryMaxUsage, int64_t)},
	{"getKernelMemoryUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getKernelMemoryUsage, int64_t)},
	{"getMemoryAndSwapFailCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getMemoryAndSwapFailCount, int64_t)},
	{"getMemoryAndSwapMaxUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getMemoryAndSwapMaxUsage, int64_t)},
	{"getMemoryMaxUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getMemoryMaxUsage, int64_t)},
	{"getTcpMemoryFailCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getTcpMemoryFailCount, int64_t)},
	{"getTcpMemoryLimit", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getTcpMemoryLimit, int64_t)},
	{"getTcpMemoryMaxUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, getTcpMemoryMaxUsage, int64_t)},
	{"isCpuSetMemoryPressureEnabled", "()Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, isCpuSetMemoryPressureEnabled, $Boolean*)},
	{"isMemoryOOMKillEnabled", "()Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CgroupV1Metrics, isMemoryOOMKillEnabled, $Boolean*)},
	{}
};

$ClassInfo _CgroupV1Metrics_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.platform.CgroupV1Metrics",
	nullptr,
	"jdk.internal.platform.Metrics",
	nullptr,
	_CgroupV1Metrics_MethodInfo_
};

$Object* allocate$CgroupV1Metrics($Class* clazz) {
	return $of($alloc(CgroupV1Metrics));
}

$Class* CgroupV1Metrics::load$($String* name, bool initialize) {
	$loadClass(CgroupV1Metrics, name, initialize, &_CgroupV1Metrics_ClassInfo_, allocate$CgroupV1Metrics);
	return class$;
}

$Class* CgroupV1Metrics::class$ = nullptr;

		} // platform
	} // internal
} // jdk