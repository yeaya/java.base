#include <jdk/internal/platform/Metrics.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/platform/SystemMetrics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SystemMetrics = ::jdk::internal::platform::SystemMetrics;

namespace jdk {
	namespace internal {
		namespace platform {

$MethodInfo _Metrics_MethodInfo_[] = {
	{"getBlkIOServiceCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getBlkIOServiced", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuNumPeriods", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuNumThrottled", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuPeriod", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuQuota", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuSetCpus", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuSetMems", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuShares", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuSystemUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuThrottledTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getCpuUserUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getEffectiveCpuCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getEffectiveCpuSetCpus", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getEffectiveCpuSetMems", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryAndSwapLimit", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryAndSwapUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryFailCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryLimit", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemorySoftLimit", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getPerCpuUsage", "()[J", nullptr, $PUBLIC | $ABSTRACT},
	{"getProvider", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTcpMemoryUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"systemMetrics", "()Ljdk/internal/platform/Metrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Metrics*(*)()>(&Metrics::systemMetrics))},
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