#include <jdk/internal/platform/CgroupV1MetricsImpl.h>

#include <jdk/internal/platform/CgroupMetrics.h>
#include <jdk/internal/platform/CgroupSubsystem.h>
#include <jdk/internal/platform/CgroupV1Metrics.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CgroupMetrics = ::jdk::internal::platform::CgroupMetrics;
using $CgroupSubsystem = ::jdk::internal::platform::CgroupSubsystem;
using $CgroupV1Metrics = ::jdk::internal::platform::CgroupV1Metrics;

namespace jdk {
	namespace internal {
		namespace platform {

$FieldInfo _CgroupV1MetricsImpl_FieldInfo_[] = {
	{"metrics", "Ljdk/internal/platform/CgroupV1Metrics;", nullptr, $PRIVATE | $FINAL, $field(CgroupV1MetricsImpl, metrics)},
	{}
};

$MethodInfo _CgroupV1MetricsImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getBlkIOServiceCount", "()J", nullptr, $PUBLIC},
	{"*getBlkIOServiced", "()J", nullptr, $PUBLIC},
	{"*getCpuNumPeriods", "()J", nullptr, $PUBLIC},
	{"*getCpuNumThrottled", "()J", nullptr, $PUBLIC},
	{"*getCpuPeriod", "()J", nullptr, $PUBLIC},
	{"*getCpuQuota", "()J", nullptr, $PUBLIC},
	{"*getCpuSetCpus", "()[I", nullptr, $PUBLIC},
	{"*getCpuSetMems", "()[I", nullptr, $PUBLIC},
	{"*getCpuShares", "()J", nullptr, $PUBLIC},
	{"*getCpuSystemUsage", "()J", nullptr, $PUBLIC},
	{"*getCpuThrottledTime", "()J", nullptr, $PUBLIC},
	{"*getCpuUsage", "()J", nullptr, $PUBLIC},
	{"*getCpuUserUsage", "()J", nullptr, $PUBLIC},
	{"*getEffectiveCpuCount", "()J", nullptr, $PUBLIC},
	{"*getEffectiveCpuSetCpus", "()[I", nullptr, $PUBLIC},
	{"*getEffectiveCpuSetMems", "()[I", nullptr, $PUBLIC},
	{"*getMemoryAndSwapLimit", "()J", nullptr, $PUBLIC},
	{"*getMemoryAndSwapUsage", "()J", nullptr, $PUBLIC},
	{"*getMemoryFailCount", "()J", nullptr, $PUBLIC},
	{"*getMemoryLimit", "()J", nullptr, $PUBLIC},
	{"*getMemorySoftLimit", "()J", nullptr, $PUBLIC},
	{"*getMemoryUsage", "()J", nullptr, $PUBLIC},
	{"*getPerCpuUsage", "()[J", nullptr, $PUBLIC},
	{"*getProvider", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getTcpMemoryUsage", "()J", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljdk/internal/platform/CgroupV1Metrics;)V", nullptr, 0, $method(CgroupV1MetricsImpl, init$, void, $CgroupV1Metrics*)},
	{"getCpuSetMemoryPressure", "()D", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getCpuSetMemoryPressure, double)},
	{"getKernelMemoryFailCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getKernelMemoryFailCount, int64_t)},
	{"getKernelMemoryLimit", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getKernelMemoryLimit, int64_t)},
	{"getKernelMemoryMaxUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getKernelMemoryMaxUsage, int64_t)},
	{"getKernelMemoryUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getKernelMemoryUsage, int64_t)},
	{"getMemoryAndSwapFailCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getMemoryAndSwapFailCount, int64_t)},
	{"getMemoryAndSwapMaxUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getMemoryAndSwapMaxUsage, int64_t)},
	{"getMemoryMaxUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getMemoryMaxUsage, int64_t)},
	{"getTcpMemoryFailCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getTcpMemoryFailCount, int64_t)},
	{"getTcpMemoryLimit", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getTcpMemoryLimit, int64_t)},
	{"getTcpMemoryMaxUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, getTcpMemoryMaxUsage, int64_t)},
	{"isCpuSetMemoryPressureEnabled", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, isCpuSetMemoryPressureEnabled, $Boolean*)},
	{"isMemoryOOMKillEnabled", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(CgroupV1MetricsImpl, isMemoryOOMKillEnabled, $Boolean*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CgroupV1MetricsImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.platform.CgroupV1MetricsImpl",
	"jdk.internal.platform.CgroupMetrics",
	"jdk.internal.platform.CgroupV1Metrics",
	_CgroupV1MetricsImpl_FieldInfo_,
	_CgroupV1MetricsImpl_MethodInfo_
};

$Object* allocate$CgroupV1MetricsImpl($Class* clazz) {
	return $of($alloc(CgroupV1MetricsImpl));
}

$String* CgroupV1MetricsImpl::getProvider() {
	 return this->$CgroupMetrics::getProvider();
}

int64_t CgroupV1MetricsImpl::getCpuUsage() {
	 return this->$CgroupMetrics::getCpuUsage();
}

$longs* CgroupV1MetricsImpl::getPerCpuUsage() {
	 return this->$CgroupMetrics::getPerCpuUsage();
}

int64_t CgroupV1MetricsImpl::getCpuUserUsage() {
	 return this->$CgroupMetrics::getCpuUserUsage();
}

int64_t CgroupV1MetricsImpl::getCpuSystemUsage() {
	 return this->$CgroupMetrics::getCpuSystemUsage();
}

int64_t CgroupV1MetricsImpl::getCpuPeriod() {
	 return this->$CgroupMetrics::getCpuPeriod();
}

int64_t CgroupV1MetricsImpl::getCpuQuota() {
	 return this->$CgroupMetrics::getCpuQuota();
}

int64_t CgroupV1MetricsImpl::getCpuShares() {
	 return this->$CgroupMetrics::getCpuShares();
}

int64_t CgroupV1MetricsImpl::getCpuNumPeriods() {
	 return this->$CgroupMetrics::getCpuNumPeriods();
}

int64_t CgroupV1MetricsImpl::getCpuNumThrottled() {
	 return this->$CgroupMetrics::getCpuNumThrottled();
}

int64_t CgroupV1MetricsImpl::getCpuThrottledTime() {
	 return this->$CgroupMetrics::getCpuThrottledTime();
}

int64_t CgroupV1MetricsImpl::getEffectiveCpuCount() {
	 return this->$CgroupMetrics::getEffectiveCpuCount();
}

$ints* CgroupV1MetricsImpl::getCpuSetCpus() {
	 return this->$CgroupMetrics::getCpuSetCpus();
}

$ints* CgroupV1MetricsImpl::getEffectiveCpuSetCpus() {
	 return this->$CgroupMetrics::getEffectiveCpuSetCpus();
}

$ints* CgroupV1MetricsImpl::getCpuSetMems() {
	 return this->$CgroupMetrics::getCpuSetMems();
}

$ints* CgroupV1MetricsImpl::getEffectiveCpuSetMems() {
	 return this->$CgroupMetrics::getEffectiveCpuSetMems();
}

int64_t CgroupV1MetricsImpl::getMemoryFailCount() {
	 return this->$CgroupMetrics::getMemoryFailCount();
}

int64_t CgroupV1MetricsImpl::getMemoryLimit() {
	 return this->$CgroupMetrics::getMemoryLimit();
}

int64_t CgroupV1MetricsImpl::getMemoryUsage() {
	 return this->$CgroupMetrics::getMemoryUsage();
}

int64_t CgroupV1MetricsImpl::getTcpMemoryUsage() {
	 return this->$CgroupMetrics::getTcpMemoryUsage();
}

int64_t CgroupV1MetricsImpl::getMemoryAndSwapLimit() {
	 return this->$CgroupMetrics::getMemoryAndSwapLimit();
}

int64_t CgroupV1MetricsImpl::getMemoryAndSwapUsage() {
	 return this->$CgroupMetrics::getMemoryAndSwapUsage();
}

int64_t CgroupV1MetricsImpl::getMemorySoftLimit() {
	 return this->$CgroupMetrics::getMemorySoftLimit();
}

int64_t CgroupV1MetricsImpl::getBlkIOServiceCount() {
	 return this->$CgroupMetrics::getBlkIOServiceCount();
}

int64_t CgroupV1MetricsImpl::getBlkIOServiced() {
	 return this->$CgroupMetrics::getBlkIOServiced();
}

int32_t CgroupV1MetricsImpl::hashCode() {
	 return this->$CgroupMetrics::hashCode();
}

bool CgroupV1MetricsImpl::equals(Object$* obj) {
	 return this->$CgroupMetrics::equals(obj);
}

$Object* CgroupV1MetricsImpl::clone() {
	 return this->$CgroupMetrics::clone();
}

$String* CgroupV1MetricsImpl::toString() {
	 return this->$CgroupMetrics::toString();
}

void CgroupV1MetricsImpl::finalize() {
	this->$CgroupMetrics::finalize();
}

void CgroupV1MetricsImpl::init$($CgroupV1Metrics* metrics) {
	$CgroupMetrics::init$($cast($CgroupSubsystem, metrics));
	$set(this, metrics, metrics);
}

int64_t CgroupV1MetricsImpl::getMemoryMaxUsage() {
	return $nc(this->metrics)->getMemoryMaxUsage();
}

int64_t CgroupV1MetricsImpl::getKernelMemoryFailCount() {
	return $nc(this->metrics)->getKernelMemoryFailCount();
}

int64_t CgroupV1MetricsImpl::getKernelMemoryLimit() {
	return $nc(this->metrics)->getKernelMemoryLimit();
}

int64_t CgroupV1MetricsImpl::getKernelMemoryMaxUsage() {
	return $nc(this->metrics)->getKernelMemoryMaxUsage();
}

int64_t CgroupV1MetricsImpl::getKernelMemoryUsage() {
	return $nc(this->metrics)->getKernelMemoryUsage();
}

int64_t CgroupV1MetricsImpl::getTcpMemoryFailCount() {
	return $nc(this->metrics)->getTcpMemoryFailCount();
}

int64_t CgroupV1MetricsImpl::getTcpMemoryLimit() {
	return $nc(this->metrics)->getTcpMemoryLimit();
}

int64_t CgroupV1MetricsImpl::getTcpMemoryMaxUsage() {
	return $nc(this->metrics)->getTcpMemoryMaxUsage();
}

int64_t CgroupV1MetricsImpl::getMemoryAndSwapFailCount() {
	return $nc(this->metrics)->getMemoryAndSwapFailCount();
}

int64_t CgroupV1MetricsImpl::getMemoryAndSwapMaxUsage() {
	return $nc(this->metrics)->getMemoryAndSwapMaxUsage();
}

$Boolean* CgroupV1MetricsImpl::isMemoryOOMKillEnabled() {
	return $nc(this->metrics)->isMemoryOOMKillEnabled();
}

double CgroupV1MetricsImpl::getCpuSetMemoryPressure() {
	return $nc(this->metrics)->getCpuSetMemoryPressure();
}

$Boolean* CgroupV1MetricsImpl::isCpuSetMemoryPressureEnabled() {
	return $nc(this->metrics)->isCpuSetMemoryPressureEnabled();
}

CgroupV1MetricsImpl::CgroupV1MetricsImpl() {
}

$Class* CgroupV1MetricsImpl::load$($String* name, bool initialize) {
	$loadClass(CgroupV1MetricsImpl, name, initialize, &_CgroupV1MetricsImpl_ClassInfo_, allocate$CgroupV1MetricsImpl);
	return class$;
}

$Class* CgroupV1MetricsImpl::class$ = nullptr;

		} // platform
	} // internal
} // jdk