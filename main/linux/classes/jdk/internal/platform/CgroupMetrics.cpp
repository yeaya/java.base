#include <jdk/internal/platform/CgroupMetrics.h>

#include <java/util/Objects.h>
#include <jdk/internal/platform/CgroupSubsystem.h>
#include <jdk/internal/platform/CgroupSubsystemFactory.h>
#include <jdk/internal/platform/Metrics.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $CgroupSubsystem = ::jdk::internal::platform::CgroupSubsystem;
using $CgroupSubsystemFactory = ::jdk::internal::platform::CgroupSubsystemFactory;
using $Metrics = ::jdk::internal::platform::Metrics;

namespace jdk {
	namespace internal {
		namespace platform {

$FieldInfo _CgroupMetrics_FieldInfo_[] = {
	{"subsystem", "Ljdk/internal/platform/CgroupSubsystem;", nullptr, $PRIVATE | $FINAL, $field(CgroupMetrics, subsystem)},
	{}
};

$MethodInfo _CgroupMetrics_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/platform/CgroupSubsystem;)V", nullptr, 0, $method(CgroupMetrics, init$, void, $CgroupSubsystem*)},
	{"getBlkIOServiceCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getBlkIOServiceCount, int64_t)},
	{"getBlkIOServiced", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getBlkIOServiced, int64_t)},
	{"getCpuNumPeriods", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuNumPeriods, int64_t)},
	{"getCpuNumThrottled", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuNumThrottled, int64_t)},
	{"getCpuPeriod", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuPeriod, int64_t)},
	{"getCpuQuota", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuQuota, int64_t)},
	{"getCpuSetCpus", "()[I", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuSetCpus, $ints*)},
	{"getCpuSetMems", "()[I", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuSetMems, $ints*)},
	{"getCpuShares", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuShares, int64_t)},
	{"getCpuSystemUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuSystemUsage, int64_t)},
	{"getCpuThrottledTime", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuThrottledTime, int64_t)},
	{"getCpuUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuUsage, int64_t)},
	{"getCpuUserUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getCpuUserUsage, int64_t)},
	{"getEffectiveCpuCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getEffectiveCpuCount, int64_t)},
	{"getEffectiveCpuSetCpus", "()[I", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getEffectiveCpuSetCpus, $ints*)},
	{"getEffectiveCpuSetMems", "()[I", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getEffectiveCpuSetMems, $ints*)},
	{"getInstance", "()Ljdk/internal/platform/Metrics;", nullptr, $PUBLIC | $STATIC, $staticMethod(CgroupMetrics, getInstance, $Metrics*)},
	{"getMemoryAndSwapLimit", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getMemoryAndSwapLimit, int64_t)},
	{"getMemoryAndSwapUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getMemoryAndSwapUsage, int64_t)},
	{"getMemoryFailCount", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getMemoryFailCount, int64_t)},
	{"getMemoryLimit", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getMemoryLimit, int64_t)},
	{"getMemorySoftLimit", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getMemorySoftLimit, int64_t)},
	{"getMemoryUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getMemoryUsage, int64_t)},
	{"getPerCpuUsage", "()[J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getPerCpuUsage, $longs*)},
	{"getProvider", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getProvider, $String*)},
	{"getTcpMemoryUsage", "()J", nullptr, $PUBLIC, $virtualMethod(CgroupMetrics, getTcpMemoryUsage, int64_t)},
	{"isUseContainerSupport", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CgroupMetrics, isUseContainerSupport, bool)},
	{}
};

#define _METHOD_INDEX_isUseContainerSupport 27

$ClassInfo _CgroupMetrics_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.platform.CgroupMetrics",
	"java.lang.Object",
	"jdk.internal.platform.Metrics",
	_CgroupMetrics_FieldInfo_,
	_CgroupMetrics_MethodInfo_
};

$Object* allocate$CgroupMetrics($Class* clazz) {
	return $of($alloc(CgroupMetrics));
}

void CgroupMetrics::init$($CgroupSubsystem* subsystem) {
	$set(this, subsystem, $cast($CgroupSubsystem, $Objects::requireNonNull(subsystem)));
}

$String* CgroupMetrics::getProvider() {
	return $nc(this->subsystem)->getProvider();
}

int64_t CgroupMetrics::getCpuUsage() {
	return $nc(this->subsystem)->getCpuUsage();
}

$longs* CgroupMetrics::getPerCpuUsage() {
	return $nc(this->subsystem)->getPerCpuUsage();
}

int64_t CgroupMetrics::getCpuUserUsage() {
	return $nc(this->subsystem)->getCpuUserUsage();
}

int64_t CgroupMetrics::getCpuSystemUsage() {
	return $nc(this->subsystem)->getCpuSystemUsage();
}

int64_t CgroupMetrics::getCpuPeriod() {
	return $nc(this->subsystem)->getCpuPeriod();
}

int64_t CgroupMetrics::getCpuQuota() {
	return $nc(this->subsystem)->getCpuQuota();
}

int64_t CgroupMetrics::getCpuShares() {
	return $nc(this->subsystem)->getCpuShares();
}

int64_t CgroupMetrics::getCpuNumPeriods() {
	return $nc(this->subsystem)->getCpuNumPeriods();
}

int64_t CgroupMetrics::getCpuNumThrottled() {
	return $nc(this->subsystem)->getCpuNumThrottled();
}

int64_t CgroupMetrics::getCpuThrottledTime() {
	return $nc(this->subsystem)->getCpuThrottledTime();
}

int64_t CgroupMetrics::getEffectiveCpuCount() {
	return $nc(this->subsystem)->getEffectiveCpuCount();
}

$ints* CgroupMetrics::getCpuSetCpus() {
	return $nc(this->subsystem)->getCpuSetCpus();
}

$ints* CgroupMetrics::getEffectiveCpuSetCpus() {
	return $nc(this->subsystem)->getEffectiveCpuSetCpus();
}

$ints* CgroupMetrics::getCpuSetMems() {
	return $nc(this->subsystem)->getCpuSetMems();
}

$ints* CgroupMetrics::getEffectiveCpuSetMems() {
	return $nc(this->subsystem)->getEffectiveCpuSetMems();
}

int64_t CgroupMetrics::getMemoryFailCount() {
	return $nc(this->subsystem)->getMemoryFailCount();
}

int64_t CgroupMetrics::getMemoryLimit() {
	return $nc(this->subsystem)->getMemoryLimit();
}

int64_t CgroupMetrics::getMemoryUsage() {
	return $nc(this->subsystem)->getMemoryUsage();
}

int64_t CgroupMetrics::getTcpMemoryUsage() {
	return $nc(this->subsystem)->getTcpMemoryUsage();
}

int64_t CgroupMetrics::getMemoryAndSwapLimit() {
	return $nc(this->subsystem)->getMemoryAndSwapLimit();
}

int64_t CgroupMetrics::getMemoryAndSwapUsage() {
	return $nc(this->subsystem)->getMemoryAndSwapUsage();
}

int64_t CgroupMetrics::getMemorySoftLimit() {
	return $nc(this->subsystem)->getMemorySoftLimit();
}

int64_t CgroupMetrics::getBlkIOServiceCount() {
	return $nc(this->subsystem)->getBlkIOServiceCount();
}

int64_t CgroupMetrics::getBlkIOServiced() {
	return $nc(this->subsystem)->getBlkIOServiced();
}

$Metrics* CgroupMetrics::getInstance() {
	$init(CgroupMetrics);
	if (!isUseContainerSupport()) {
		return nullptr;
	}
	return $CgroupSubsystemFactory::create();
}

bool CgroupMetrics::isUseContainerSupport() {
	$init(CgroupMetrics);
	bool $ret = false;
	$prepareNativeStatic(CgroupMetrics, isUseContainerSupport, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

CgroupMetrics::CgroupMetrics() {
}

$Class* CgroupMetrics::load$($String* name, bool initialize) {
	$loadClass(CgroupMetrics, name, initialize, &_CgroupMetrics_ClassInfo_, allocate$CgroupMetrics);
	return class$;
}

$Class* CgroupMetrics::class$ = nullptr;

		} // platform
	} // internal
} // jdk