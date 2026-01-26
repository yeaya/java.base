#include <jdk/internal/platform/Metrics.h>

#include <jdk/internal/platform/SystemMetrics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SystemMetrics = ::jdk::internal::platform::SystemMetrics;

namespace jdk {
	namespace internal {
		namespace platform {

$MethodInfo _Metrics_MethodInfo_[] = {
	{"getBlkIOServiceCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getBlkIOServiceCount, int64_t)},
	{"getBlkIOServiced", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getBlkIOServiced, int64_t)},
	{"getCpuNumPeriods", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuNumPeriods, int64_t)},
	{"getCpuNumThrottled", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuNumThrottled, int64_t)},
	{"getCpuPeriod", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuPeriod, int64_t)},
	{"getCpuQuota", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuQuota, int64_t)},
	{"getCpuSetCpus", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuSetCpus, $ints*)},
	{"getCpuSetMems", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuSetMems, $ints*)},
	{"getCpuShares", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuShares, int64_t)},
	{"getCpuSystemUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuSystemUsage, int64_t)},
	{"getCpuThrottledTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuThrottledTime, int64_t)},
	{"getCpuUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuUsage, int64_t)},
	{"getCpuUserUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getCpuUserUsage, int64_t)},
	{"getEffectiveCpuCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getEffectiveCpuCount, int64_t)},
	{"getEffectiveCpuSetCpus", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getEffectiveCpuSetCpus, $ints*)},
	{"getEffectiveCpuSetMems", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getEffectiveCpuSetMems, $ints*)},
	{"getMemoryAndSwapLimit", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getMemoryAndSwapLimit, int64_t)},
	{"getMemoryAndSwapUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getMemoryAndSwapUsage, int64_t)},
	{"getMemoryFailCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getMemoryFailCount, int64_t)},
	{"getMemoryLimit", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getMemoryLimit, int64_t)},
	{"getMemorySoftLimit", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getMemorySoftLimit, int64_t)},
	{"getMemoryUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getMemoryUsage, int64_t)},
	{"getPerCpuUsage", "()[J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getPerCpuUsage, $longs*)},
	{"getProvider", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getProvider, $String*)},
	{"getTcpMemoryUsage", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Metrics, getTcpMemoryUsage, int64_t)},
	{"systemMetrics", "()Ljdk/internal/platform/Metrics;", nullptr, $PUBLIC | $STATIC, $staticMethod(Metrics, systemMetrics, Metrics*)},
	{}
};

$ClassInfo _Metrics_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.platform.Metrics",
	nullptr,
	nullptr,
	nullptr,
	_Metrics_MethodInfo_
};

$Object* allocate$Metrics($Class* clazz) {
	return $of($alloc(Metrics));
}

Metrics* Metrics::systemMetrics() {
	return $SystemMetrics::instance();
}

$Class* Metrics::load$($String* name, bool initialize) {
	$loadClass(Metrics, name, initialize, &_Metrics_ClassInfo_, allocate$Metrics);
	return class$;
}

$Class* Metrics::class$ = nullptr;

		} // platform
	} // internal
} // jdk