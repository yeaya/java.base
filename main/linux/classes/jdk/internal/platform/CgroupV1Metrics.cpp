#include <jdk/internal/platform/CgroupV1Metrics.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Metrics = ::jdk::internal::platform::Metrics;

namespace jdk {
	namespace internal {
		namespace platform {

$MethodInfo _CgroupV1Metrics_MethodInfo_[] = {
	{"getCpuSetMemoryPressure", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getKernelMemoryFailCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getKernelMemoryLimit", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getKernelMemoryMaxUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getKernelMemoryUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryAndSwapFailCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryAndSwapMaxUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMemoryMaxUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTcpMemoryFailCount", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTcpMemoryLimit", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTcpMemoryMaxUsage", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"isCpuSetMemoryPressureEnabled", "()Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT},
	{"isMemoryOOMKillEnabled", "()Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT},
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