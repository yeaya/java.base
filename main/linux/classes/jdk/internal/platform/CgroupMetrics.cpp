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
	{"<init>", "(Ljdk/internal/platform/CgroupSubsystem;)V", nullptr, 0, $method(static_cast<void(CgroupMetrics::*)($CgroupSubsystem*)>(&CgroupMetrics::init$))},
	{"getBlkIOServiceCount", "()J", nullptr, $PUBLIC},
	{"getBlkIOServiced", "()J", nullptr, $PUBLIC},
	{"getCpuNumPeriods", "()J", nullptr, $PUBLIC},
	{"getCpuNumThrottled", "()J", nullptr, $PUBLIC},
	{"getCpuPeriod", "()J", nullptr, $PUBLIC},
	{"getCpuQuota", "()J", nullptr, $PUBLIC},
	{"getCpuSetCpus", "()[I", nullptr, $PUBLIC},
	{"getCpuSetMems", "()[I", nullptr, $PUBLIC},
	{"getCpuShares", "()J", nullptr, $PUBLIC},
	{"getCpuSystemUsage", "()J", nullptr, $PUBLIC},
	{"getCpuThrottledTime", "()J", nullptr, $PUBLIC},
	{"getCpuUsage", "()J", nullptr, $PUBLIC},
	{"getCpuUserUsage", "()J", nullptr, $PUBLIC},
	{"getEffectiveCpuCount", "()J", nullptr, $PUBLIC},
	{"getEffectiveCpuSetCpus", "()[I", nullptr, $PUBLIC},
	{"getEffectiveCpuSetMems", "()[I", nullptr, $PUBLIC},
	{"getInstance", "()Ljdk/internal/platform/Metrics;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Metrics*(*)()>(&CgroupMetrics::getInstance))},
	{"getMemoryAndSwapLimit", "()J", nullptr, $PUBLIC},
	{"getMemoryAndSwapUsage", "()J", nullptr, $PUBLIC},
	{"getMemoryFailCount", "()J", nullptr, $PUBLIC},
	{"getMemoryLimit", "()J", nullptr, $PUBLIC},
	{"getMemorySoftLimit", "()J", nullptr, $PUBLIC},
	{"getMemoryUsage", "()J", nullptr, $PUBLIC},
	{"getPerCpuUsage", "()[J", nullptr, $PUBLIC},
	{"getProvider", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTcpMemoryUsage", "()J", nullptr, $PUBLIC},
	{"isUseContainerSupport", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&CgroupMetrics::isUseContainerSupport))},
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